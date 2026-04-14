# Patch Report de ejecutable

## Radare2
Se inició el análisis del archivo ejecutable team_sample.exe utilizando la herramienta Radare2, con el objetivo de inspeccionar su estructura interna y comportamiento a nivel de bajo nivel.

El parámetro -AA permitió ejecutar un análisis automático completo del programa, incluyendo la identificación de funciones, referencias, imports y flujo de ejecución.
El cual realiza un análisis más profundo del binario, identificando funciones, variables locales, llamadas a funciones y posibles estructuras internas.


## Cutter

Filtramos para encontrar la condición de sys_main y buscamos las condiciones a parchar que son “jne 0x4014d1” por “je 0x4014d1”. Se realizo la prueba para ocomprobar el parcheo que es "team_sample_patched.exe”