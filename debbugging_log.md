Debugging dinámico con x64dbg

1. Carga del binario
Se cargó el archivo ejecutable team_sample.exe en la herramienta x64dbg con el objetivo de analizar su comportamiento en tiempo de ejecución. Al iniciar el proceso, el depurador se detuvo en el system breakpoint, correspondiente a código interno del sistema operativo.
Posteriormente, se navegó al módulo principal del programa (team_sample.exe) para analizar exclusivamente el flujo del binario desarrollado.

2. Identificación del flujo principal
Dentro del módulo del programa, se localizó el flujo principal mediante el análisis de instrucciones en ensamblador. Se identificaron múltiples instrucciones de control de flujo (jmp, cmp, je) y llamadas a funciones.
Durante este proceso, se detectaron cadenas relevantes como:
•	"MAGIC: edu-malware-sim"
•	"calc.exe"
•	"C:\temp\dummy.txt"
Estas cadenas indican comportamientos específicos del programa, como impresión en consola, ejecución de procesos y manipulación de archivos.

3. Identificación de llamadas a API de Windows
Se localizaron llamadas a funciones relevantes del sistema operativo, incluyendo:
•	WinExec → ejecución de procesos
•	Sleep → pausa en la ejecución
•	CreateFileA → creación o manipulación de archivos
En particular, la llamada a WinExec fue identificada como un punto clave del análisis.

4. Uso de breakpoints
Se estableció un breakpoint en la instrucción:
call WinExec
Esto permitió detener la ejecución justo antes de la invocación de la función, facilitando el análisis del estado del programa.
Posteriormente, se utilizó la ejecución controlada mediante la instrucción Step Over (F8) para evitar ingresar en código interno del sistema y mantener el análisis en el flujo principal del programa.

5. Análisis del stack y parámetros
Antes de ejecutar la llamada a WinExec, se analizó el contenido del stack, observándose lo siguiente:
0061FEF0  → 00405082 → "calc.exe"
0061FEF4  → 00000005
Esto indica que:
•	En la dirección 0x0061FEF0 se encuentra un puntero hacia la cadena "calc.exe"
•	En la dirección 0x0061FEF4 se encuentra el valor 5, correspondiente al modo de visualización
Por lo tanto, la llamada puede interpretarse como:
WinExec("calc.exe", 5);
Este análisis confirma que los parámetros de la función se pasan mediante la pila (stack), utilizando direcciones de memoria (punteros).

6. Ejecución de la función
Al ejecutar la instrucción mediante Step Over (F8), se observó la ejecución de la función WinExec, lo que provocó la apertura de la calculadora del sistema.
Asimismo, se detectó un cambio en el registro EAX, indicando el valor de retorno de la función.

7. Análisis de otras funciones
Sleep
Se observó la instrucción:
call Sleep
con un valor de 1388 (hexadecimal), equivalente a 5000 milisegundos, lo que representa una pausa de 5 segundos en la ejecución.
CreateFileA
Se identificó la preparación de parámetros para la función:
CreateFileA("C:\\temp\\dummy.txt", ...)
lo cual indica la intención de crear o manipular un archivo en el sistema.

8. Observaciones de comportamiento
El análisis dinámico permitió identificar comportamientos típicos de programas potencialmente maliciosos o simulaciones de malware, tales como:
•	Ejecución de procesos externos (calc.exe)
•	Introducción de retardos en la ejecución (Sleep)
•	Manipulación del sistema de archivos (CreateFileA)
