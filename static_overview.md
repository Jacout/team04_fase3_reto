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

8429 0x00044800 0x14004ee00 5   6                  ascii .file
8430 0x00044812 0x14004ee12 8   9                  ascii crtexe.c
8431 0x000449e6 0x14004efe6 4   5                  ascii envp
8432 0x000449f8 0x14004eff8 4   5                  ascii argv
8433 0x00044a0a 0x14004f00a 4   5                  ascii argc
8434 0x00044b2a 0x14004f12a 7   8                  ascii mainret
8435 0x00044bf0 0x14004f1f0 7   8                  ascii .l_endw
8436 0x00044c14 0x14004f214 8   9                  ascii .l_start
8437 0x00044c26 0x14004f226 6   7                  ascii .l_end
8438 0x00044c38 0x14004f238 6   7                  ascii atexit
8439 0x00044c92 0x14004f292 5   6                  ascii .text
8440 0x00044cb6 0x14004f2b6 5   6                  ascii .data
8441 0x00044cda 0x14004f2da 4   5                  ascii .bss
8442 0x00044cfe 0x14004f2fe 6   7                  ascii .xdata
8443 0x00044d22 0x14004f322 6   7                  ascii .pdata
8444 0x00044ed2 0x14004f4d2 5   6                  ascii .file
8445 0x00044ee4 0x14004f4e4 14  15                 ascii cygming-crtbeg
8446 0x00044f2c 0x14004f52c 5   6                  ascii .text
8447 0x00044f50 0x14004f550 5   6                  ascii .data
8448 0x00044f74 0x14004f574 4   5                  ascii .bss
8449 0x00044f98 0x14004f598 6   7                  ascii .xdata
8450 0x00044fbc 0x14004f5bc 6   7                  ascii .pdata
8451 0x00045004 0x14004f604 5   6                  ascii .file
8452 0x00045016 0x14004f616 14  15                 ascii main_source.cp
8453 0x0004504c 0x14004f64c 4   5                  ascii main
8454 0x00045094 0x14004f694 7   8                  ascii __tcf_0
8455 0x000450ca 0x14004f6ca 5   6                  ascii .text
8456 0x000450ee 0x14004f6ee 5   6                  ascii .data
8457 0x00045112 0x14004f712 4   5                  ascii .bss
8458 0x00045136 0x14004f736 6   7                  ascii .rdata
8459 0x0004515a 0x14004f75a 6   7                  ascii .xdata
8460 0x0004517e 0x14004f77e 6   7                  ascii .pdata
8461 0x000451a2 0x14004f7a2 6   7                  ascii .ctors
8462 0x000452c2 0x14004f8c2 9   10                 ascii .idata$5
8463 0x000452d4 0x14004f8d4 8   9                  ascii .idata$6
8464 0x000452e8 0x14004f8e8 6   7                  ascii data$6
8465 0x000452f8 0x14004f8f8 8   9                  ascii .idata$5
8466 0x0004530c 0x14004f90c 7   8                  ascii data$6|
8467 0x0004531c 0x14004f91c 9   10                 ascii .idata$5\b
8468 0x00045330 0x14004f930 7   8                  ascii data$6`
8469 0x00045340 0x14004f940 5   6                  ascii .file
8470 0x00045352 0x14004f952 9   10                 ascii gccmain.c
8471 0x00045388 0x14004f988 7   8                  ascii p.92992
8472 0x000453d0 0x14004f9d0 6   7                  ascii __main
8473 0x000453f4 0x14004f9f4 5   6                  ascii .text
8474 0x00045418 0x14004fa18 5   6                  ascii .data
8475 0x0004543c 0x14004fa3c 4   5                  ascii .bss
8476 0x00045460 0x14004fa60 6   7                  ascii .xdata
8477 0x00045484 0x14004fa84 6   7                  ascii .pdata
8478 0x000455c8 0x14004fbc8 5   6                  ascii .file
8479 0x000455da 0x14004fbda 10  11                 ascii natstart.c
8480 0x000455ec 0x14004fbec 5   6                  ascii .text
8481 0x00045610 0x14004fc10 5   6                  ascii .data
8482 0x00045634 0x14004fc34 4   5                  ascii .bss
8483 0x00045730 0x14004fd30 5   6                  ascii .file
8484 0x00045742 0x14004fd42 10  11                 ascii wildcard.c
8485 0x00045754 0x14004fd54 5   6                  ascii .text
8486 0x00045778 0x14004fd78 5   6                  ascii .data
8487 0x0004579c 0x14004fd9c 4   5                  ascii .bss
8488 0x00045874 0x14004fe74 5   6                  ascii .file
8489 0x00045886 0x14004fe86 9   10                 ascii charmax.c
8490 0x000458bc 0x14004febc 5   6                  ascii .text
8491 0x000458e0 0x14004fee0 5   6                  ascii .data
8492 0x00045904 0x14004ff04 4   5                  ascii .bss
8493 0x00045928 0x14004ff28 6   7                  ascii .xdata
8494 0x0004594c 0x14004ff4c 6   7                  ascii .pdata
8495 0x00045970 0x14004ff70 9   10                 ascii .CRT$XIC(
8496 0x00045a90 0x140050090 5   6                  ascii .file
8497 0x00045aa2 0x1400500a2 9   10                 ascii dllargv.c
8498 0x00045ab4 0x1400500b4 10  11                 ascii _setargvp\a
8499 0x00045ad8 0x1400500d8 5   6                  ascii .text
8500 0x00045afc 0x1400500fc 5   6                  ascii .data
8501 0x00045b20 0x140050120 4   5                  ascii .bss
8502 0x00045b44 0x140050144 6   7                  ascii .xdata
8503 0x00045b68 0x140050168 6   7                  ascii .pdata
8504 0x00045c88 0x140050288 5   6                  ascii .file
8505 0x00045c9a 0x14005029a 10  11                 ascii _newmode.c
8506 0x00045cac 0x1400502ac 5   6                  ascii .text
8507 0x00045cd0 0x1400502d0 5   6                  ascii .data
8508 0x00045cf4 0x1400502f4 4   5                  ascii .bss
8509 0x00045dcc 0x1400503cc 5   6                  ascii .file
8510 0x00045dde 0x1400503de 8   9                  ascii tlssup.c
8511 0x00045e4a 0x14005044a 6   7                  ascii __xd_a
8512 0x00045e5c 0x14005045c 6   7                  ascii __xd_z
8513 0x00045e80 0x140050480 5   6                  ascii .text
8514 0x00045ea4 0x1400504a4 5   6                  ascii .data



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


44c92 .text
  44cb6 .data
  44cda .bss
  44cfe .xdata
  44d22 .pdata
  44ed2 .file
  44ee4 cygming-crtbeg
  44f2c .text
  44f50 .data
  44f74 .bss
  44f98 .xdata
  44fbc .pdata
  45004 .file
  45016 main_source.cp
  4504c main
  45094 __tcf_0
  450ca .text
  450ee .data
  45112 .bss
  45136 .rdata
  4515a .xdata
  4517e .pdata
  451a2 .ctors
  452c2 .idata$5 
  452d4 .idata$6
  452e6 .idata$6
  452f8 .idata$5
  4530a .idata$6|
  4531c .idata$5
  4532e .idata$6`
  45340 .file
  45352 gccmain.c
  45388 p.92992
  453d0 __main
  453f4 .text
  45418 .data
  4543c .bss
  45460 .xdata
  45484 .pdata
  455c8 .file
  455da natstart.c
  455ec .text
  45610 .data
  45634 .bss
  45730 .file
  45742 wildcard.c
  45754 .text
  45778 .data
  4579c .bss
  45874 .file
  45886 charmax.c
  458bc .text
  458e0 .data
  45904 .bss
  45928 .xdata
  4594c .pdata
  45970 .CRT$XIC(
  45a90 .file
  45aa2 dllargv.c
  45ab4 _setargvp
  45ad8 .text
  45afc .data
  45b20 .bss
  45b44 .xdata
  45b68 .pdata
  45c88 .file
  45c9a _newmode.c
  45cac .text
  45cd0 .data
  45cf4 .bss
  45dcc .file
  45dde tlssup.c
  45e4a __xd_a
  45e5c __xd_z
  45e80 .text
  45ea4 .data




## Python + pefile

MAGIC: edu-torres-malware-simcalc.exeC:\temp\dummyedu.txtSe ah ejecutado saludos le desea Edu TorresUnknown errorArgument domain error (DOMAIN)Overflow range error (OVERFLOW)Partial loss of significance (PLOSS)Total loss of significance (TLOSS)The result is too small to be represented (UNDERFLOW)Argument singularity (SIGN)Address %p has no image-section  VirtualQuery failed for %d bytes at address %p  VirtualProtect failed with code 0x%xGCC: (GNU) 9.3-win32 20200320GCC: (GNU) 10-win32 20220113GCC: (GNU) 10-win32 20220113GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 10-win32 20220113GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 9.3-win32 20200320GCC: (GNU) 10-win32 20220113


## Primeros analisis
Se revisa que el programa llama a aplicaciones, y las primeras cadenas que se utilizan durante la ejecucion.