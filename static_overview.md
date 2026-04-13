# Extracción y analisis estatico

## Strings

nth  paddr      vaddr       len size section       type  string
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
0    0x0000004d 0x0000004d  44  45                 ascii !This program cannot be run in DOS mode.\r\r\n$
1    0x00000188 0x00000188  5   6                  ascii .text
2    0x000001af 0x000001af  6   7                  ascii `.data
3    0x000001d8 0x000001d8  6   7                  ascii .rdata
4    0x000001ff 0x000001ff  7   8                  ascii @.pdata
5    0x00000227 0x00000227  7   8                  ascii @.xdata
6    0x0000024f 0x0000024f  5   6                  ascii @.bss
7    0x00000278 0x00000278  6   7                  ascii .idata
8    0x000002a0 0x000002a0  4   5                  ascii .CRT
9    0x000002c8 0x000002c8  4   5                  ascii .tls


******************
Output
Omitted

******************

89   0x00002201 0x140004001 29  30   .rdata        ascii MAGIC: edu-torres-malware-sim
90   0x00002221 0x140004021 8   9    .rdata        ascii calc.exe
91   0x0000222a 0x14000402a 20  21   .rdata        ascii C:\temp\dummyedu.txt
92   0x00002240 0x140004040 43  44   .rdata        ascii Se ah ejecutado saludos le desea Edu Torres
93   0x000022e0 0x1400040e0 13  14   .rdata        ascii Unknown error
94   0x000022f0 0x1400040f0 30  31   .rdata        ascii Argument domain error (DOMAIN)
95   0x00002310 0x140004110 31  32   .rdata        ascii Overflow range error (OVERFLOW)
96   0x00002330 0x140004130 36  37   .rdata        ascii Partial loss of significance (PLOSS)
97   0x00002358 0x140004158 34  35   .rdata        ascii Total loss of significance (TLOSS)
98   0x00002380 0x140004180 53  54   .rdata        ascii The result is too small to be represented (UNDERFLOW)
99   0x000023b6 0x1400041b6 27  28   .rdata        ascii Argument singularity (SIGN)


## Rabin2

  4d !This program cannot be run in DOS mode.
    188 .text
    1af `.data
    1d8 .rdata
    1ff @.pdata
    227 @.xdata
    24f @.bss
    278 .idata
    2a0 .CRT
    2c8 .tls
    2f0 .reloc
    33f B/19
    367 B/31
    38f B/45
    3b7 B/57
    3df B/70
    407 B/81
    42f B/92

*************
Output
Omitted
**************


 2201 MAGIC: edu-torres-malware-sim
   2221 calc.exe
   222a C:\temp\dummyedu.txt
   2240 Se ah ejecutado saludos le desea Edu Torres
   22e0 Unknown error
   22f0 Argument domain error (DOMAIN)
   2310 Overflow range error (OVERFLOW)
   2330 Partial loss of significance (PLOSS)
   2358 Total loss of significance (TLOSS)
   2380 The result is too small to be represented (UNDERFLOW)
   23b6 Argument singularity (SIGN)
   23d8 _matherr(): %s in %s(%g, %g)  (retval=%g)
   2420 Mingw-w64 runtime failure:
   2440 Address %p has no image-section
   2460   VirtualQuery failed for %d bytes at address %p
   2498   VirtualProtect failed with code 0x%x
   24c0   Unknown pseudo relocation protocol version %d.
   24f8   Unknown pseudo relocation bit size %d.


## Python + pefile

MAGIC: edu-torres-malware-simcalc.exeC:\temp\dummyedu.txtSe ah ejecutado saludos le desea Edu TorresUnknown errorArgument domain error (DOMAIN)Overflow range error (OVERFLOW)Partial loss of significance (PLOSS)Total loss of significance (TLOSS)The result is too small to be represented (UNDERFLOW)Argument singularity (SIGN)Address %p has no image-section  VirtualQuery failed for %d bytes at address %p  VirtualProtect failed with code 0x%xGCC: (GNU) 9.3-win32 20200320GCC: (GNU) 10-win32 20220113GCC: (GNU) 10-win32 20220113GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 10-win32 20220113GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 10-win32 20220113


## Primeros analisis
Se revisa que el programa llama a aplicaciones, y las primeras cadenas que se utilizan durante la ejecucion.
Se identifican los siguientes cadenas que nos dan un indicio principal.
- edu-torres-malware-sim
- calc.exe
- C:\temp\dummyedu.txt

Donde se puede identificar el titulo del binario, la posible ejecución de un programa y una ruta donde se puede crear contenido, o acceder.