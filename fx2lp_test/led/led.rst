                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler
                                      3 ; Version 4.5.0 #15242 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module led
                                      6 	
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _delay
                                     13 	.globl _EIPX6
                                     14 	.globl _EIPX5
                                     15 	.globl _EIPX4
                                     16 	.globl _PI2C
                                     17 	.globl _PUSB
                                     18 	.globl _EIEX6
                                     19 	.globl _EIEX5
                                     20 	.globl _EIEX4
                                     21 	.globl _EI2C
                                     22 	.globl _EUSB
                                     23 	.globl _SMOD1
                                     24 	.globl _ERESI
                                     25 	.globl _RESI
                                     26 	.globl _INT6
                                     27 	.globl _CY
                                     28 	.globl _AC
                                     29 	.globl _F0
                                     30 	.globl _RS1
                                     31 	.globl _RS0
                                     32 	.globl _OV
                                     33 	.globl _FL
                                     34 	.globl _P
                                     35 	.globl _TF2
                                     36 	.globl _EXF2
                                     37 	.globl _RCLK
                                     38 	.globl _TCLK
                                     39 	.globl _EXEN2
                                     40 	.globl _TR2
                                     41 	.globl _C_T2
                                     42 	.globl _CP_RL2
                                     43 	.globl _SM01
                                     44 	.globl _SM11
                                     45 	.globl _SM21
                                     46 	.globl _REN1
                                     47 	.globl _TB81
                                     48 	.globl _RB81
                                     49 	.globl _TI1
                                     50 	.globl _RI1
                                     51 	.globl _PS1
                                     52 	.globl _PT2
                                     53 	.globl _PS0
                                     54 	.globl _PT1
                                     55 	.globl _PX1
                                     56 	.globl _PT0
                                     57 	.globl _PX0
                                     58 	.globl _PD7
                                     59 	.globl _PD6
                                     60 	.globl _PD5
                                     61 	.globl _PD4
                                     62 	.globl _PD3
                                     63 	.globl _PD2
                                     64 	.globl _PD1
                                     65 	.globl _PD0
                                     66 	.globl _EA
                                     67 	.globl _ES1
                                     68 	.globl _ET2
                                     69 	.globl _ES0
                                     70 	.globl _ET1
                                     71 	.globl _EX1
                                     72 	.globl _ET0
                                     73 	.globl _EX0
                                     74 	.globl _PC7
                                     75 	.globl _PC6
                                     76 	.globl _PC5
                                     77 	.globl _PC4
                                     78 	.globl _PC3
                                     79 	.globl _PC2
                                     80 	.globl _PC1
                                     81 	.globl _PC0
                                     82 	.globl _SM0
                                     83 	.globl _SM1
                                     84 	.globl _SM2
                                     85 	.globl _REN
                                     86 	.globl _TB8
                                     87 	.globl _RB8
                                     88 	.globl _TI
                                     89 	.globl _RI
                                     90 	.globl _PB7
                                     91 	.globl _PB6
                                     92 	.globl _PB5
                                     93 	.globl _PB4
                                     94 	.globl _PB3
                                     95 	.globl _PB2
                                     96 	.globl _PB1
                                     97 	.globl _PB0
                                     98 	.globl _TF1
                                     99 	.globl _TR1
                                    100 	.globl _TF0
                                    101 	.globl _TR0
                                    102 	.globl _IE1
                                    103 	.globl _IT1
                                    104 	.globl _IE0
                                    105 	.globl _IT0
                                    106 	.globl _PA7
                                    107 	.globl _PA6
                                    108 	.globl _PA5
                                    109 	.globl _PA4
                                    110 	.globl _PA3
                                    111 	.globl _PA2
                                    112 	.globl _PA1
                                    113 	.globl _PA0
                                    114 	.globl _EIP
                                    115 	.globl _B
                                    116 	.globl _EIE
                                    117 	.globl _ACC
                                    118 	.globl _EICON
                                    119 	.globl _PSW
                                    120 	.globl _TH2
                                    121 	.globl _TL2
                                    122 	.globl _RCAP2H
                                    123 	.globl _RCAP2L
                                    124 	.globl _T2CON
                                    125 	.globl _SBUF1
                                    126 	.globl _SCON1
                                    127 	.globl _GPIFSGLDATLNOX
                                    128 	.globl _GPIFSGLDATLX
                                    129 	.globl _GPIFSGLDATH
                                    130 	.globl _GPIFTRIG
                                    131 	.globl _EP01STAT
                                    132 	.globl _IP
                                    133 	.globl _OEE
                                    134 	.globl _OED
                                    135 	.globl _OEC
                                    136 	.globl _OEB
                                    137 	.globl _OEA
                                    138 	.globl _IOE
                                    139 	.globl _IOD
                                    140 	.globl _AUTOPTRSETUP
                                    141 	.globl _EP68FIFOFLGS
                                    142 	.globl _EP24FIFOFLGS
                                    143 	.globl _EP2468STAT
                                    144 	.globl _IE
                                    145 	.globl _INT4CLR
                                    146 	.globl _INT2CLR
                                    147 	.globl _IOC
                                    148 	.globl _AUTOPTRL2
                                    149 	.globl _AUTOPTRH2
                                    150 	.globl _AUTOPTRL1
                                    151 	.globl _AUTOPTRH1
                                    152 	.globl _SBUF0
                                    153 	.globl _SCON0
                                    154 	.globl __XPAGE
                                    155 	.globl _EXIF
                                    156 	.globl _IOB
                                    157 	.globl _CKCON
                                    158 	.globl _TH1
                                    159 	.globl _TH0
                                    160 	.globl _TL1
                                    161 	.globl _TL0
                                    162 	.globl _TMOD
                                    163 	.globl _TCON
                                    164 	.globl _PCON
                                    165 	.globl _DPS
                                    166 	.globl _DPH1
                                    167 	.globl _DPL1
                                    168 	.globl _DPH
                                    169 	.globl _DPL
                                    170 	.globl _SP
                                    171 	.globl _IOA
                                    172 	.globl _GPCR2
                                    173 	.globl _ECC2B2
                                    174 	.globl _ECC2B1
                                    175 	.globl _ECC2B0
                                    176 	.globl _ECC1B2
                                    177 	.globl _ECC1B1
                                    178 	.globl _ECC1B0
                                    179 	.globl _ECCRESET
                                    180 	.globl _ECCCFG
                                    181 	.globl _EP8FIFOBUF
                                    182 	.globl _EP6FIFOBUF
                                    183 	.globl _EP4FIFOBUF
                                    184 	.globl _EP2FIFOBUF
                                    185 	.globl _EP1INBUF
                                    186 	.globl _EP1OUTBUF
                                    187 	.globl _EP0BUF
                                    188 	.globl _UDMACRCQUAL
                                    189 	.globl _UDMACRCL
                                    190 	.globl _UDMACRCH
                                    191 	.globl _GPIFHOLDAMOUNT
                                    192 	.globl _FLOWSTBHPERIOD
                                    193 	.globl _FLOWSTBEDGE
                                    194 	.globl _FLOWSTB
                                    195 	.globl _FLOWHOLDOFF
                                    196 	.globl _FLOWEQ1CTL
                                    197 	.globl _FLOWEQ0CTL
                                    198 	.globl _FLOWLOGIC
                                    199 	.globl _FLOWSTATE
                                    200 	.globl _GPIFABORT
                                    201 	.globl _GPIFREADYSTAT
                                    202 	.globl _GPIFREADYCFG
                                    203 	.globl _XGPIFSGLDATLNOX
                                    204 	.globl _XGPIFSGLDATLX
                                    205 	.globl _XGPIFSGLDATH
                                    206 	.globl _EP8GPIFTRIG
                                    207 	.globl _EP8GPIFPFSTOP
                                    208 	.globl _EP8GPIFFLGSEL
                                    209 	.globl _EP6GPIFTRIG
                                    210 	.globl _EP6GPIFPFSTOP
                                    211 	.globl _EP6GPIFFLGSEL
                                    212 	.globl _EP4GPIFTRIG
                                    213 	.globl _EP4GPIFPFSTOP
                                    214 	.globl _EP4GPIFFLGSEL
                                    215 	.globl _EP2GPIFTRIG
                                    216 	.globl _EP2GPIFPFSTOP
                                    217 	.globl _EP2GPIFFLGSEL
                                    218 	.globl _GPIFTCB0
                                    219 	.globl _GPIFTCB1
                                    220 	.globl _GPIFTCB2
                                    221 	.globl _GPIFTCB3
                                    222 	.globl _GPIFADRL
                                    223 	.globl _GPIFADRH
                                    224 	.globl _GPIFCTLCFG
                                    225 	.globl _GPIFIDLECTL
                                    226 	.globl _GPIFIDLECS
                                    227 	.globl _GPIFWFSELECT
                                    228 	.globl _SETUPDAT
                                    229 	.globl _SUDPTRCTL
                                    230 	.globl _SUDPTRL
                                    231 	.globl _SUDPTRH
                                    232 	.globl _EP8FIFOBCL
                                    233 	.globl _EP8FIFOBCH
                                    234 	.globl _EP6FIFOBCL
                                    235 	.globl _EP6FIFOBCH
                                    236 	.globl _EP4FIFOBCL
                                    237 	.globl _EP4FIFOBCH
                                    238 	.globl _EP2FIFOBCL
                                    239 	.globl _EP2FIFOBCH
                                    240 	.globl _EP8FIFOFLGS
                                    241 	.globl _EP6FIFOFLGS
                                    242 	.globl _EP4FIFOFLGS
                                    243 	.globl _EP2FIFOFLGS
                                    244 	.globl _EP8CS
                                    245 	.globl _EP6CS
                                    246 	.globl _EP4CS
                                    247 	.globl _EP2CS
                                    248 	.globl _EP1INCS
                                    249 	.globl _EP1OUTCS
                                    250 	.globl _EP0CS
                                    251 	.globl _EP8BCL
                                    252 	.globl _EP8BCH
                                    253 	.globl _EP6BCL
                                    254 	.globl _EP6BCH
                                    255 	.globl _EP4BCL
                                    256 	.globl _EP4BCH
                                    257 	.globl _EP2BCL
                                    258 	.globl _EP2BCH
                                    259 	.globl _EP1INBC
                                    260 	.globl _EP1OUTBC
                                    261 	.globl _EP0BCL
                                    262 	.globl _EP0BCH
                                    263 	.globl _FNADDR
                                    264 	.globl _MICROFRAME
                                    265 	.globl _USBFRAMEL
                                    266 	.globl _USBFRAMEH
                                    267 	.globl _TOGCTL
                                    268 	.globl _WAKEUPCS
                                    269 	.globl _SUSPEND
                                    270 	.globl _USBCS
                                    271 	.globl _XAUTODAT2
                                    272 	.globl _XAUTODAT1
                                    273 	.globl _I2CTL
                                    274 	.globl _I2DAT
                                    275 	.globl _I2CS
                                    276 	.globl _PORTECFG
                                    277 	.globl _PORTCCFG
                                    278 	.globl _PORTACFG
                                    279 	.globl _INTSETUP
                                    280 	.globl _INT4IVEC
                                    281 	.globl _INT2IVEC
                                    282 	.globl _CLRERRCNT
                                    283 	.globl _ERRCNTLIM
                                    284 	.globl _USBERRIRQ
                                    285 	.globl _USBERRIE
                                    286 	.globl _GPIFIRQ
                                    287 	.globl _GPIFIE
                                    288 	.globl _EPIRQ
                                    289 	.globl _EPIE
                                    290 	.globl _USBIRQ
                                    291 	.globl _USBIE
                                    292 	.globl _NAKIRQ
                                    293 	.globl _NAKIE
                                    294 	.globl _IBNIRQ
                                    295 	.globl _IBNIE
                                    296 	.globl _EP8FIFOIRQ
                                    297 	.globl _EP8FIFOIE
                                    298 	.globl _EP6FIFOIRQ
                                    299 	.globl _EP6FIFOIE
                                    300 	.globl _EP4FIFOIRQ
                                    301 	.globl _EP4FIFOIE
                                    302 	.globl _EP2FIFOIRQ
                                    303 	.globl _EP2FIFOIE
                                    304 	.globl _OUTPKTEND
                                    305 	.globl _INPKTEND
                                    306 	.globl _EP8ISOINPKTS
                                    307 	.globl _EP6ISOINPKTS
                                    308 	.globl _EP4ISOINPKTS
                                    309 	.globl _EP2ISOINPKTS
                                    310 	.globl _EP8FIFOPFL
                                    311 	.globl _EP8FIFOPFH
                                    312 	.globl _EP6FIFOPFL
                                    313 	.globl _EP6FIFOPFH
                                    314 	.globl _EP4FIFOPFL
                                    315 	.globl _EP4FIFOPFH
                                    316 	.globl _EP2FIFOPFL
                                    317 	.globl _EP2FIFOPFH
                                    318 	.globl _EP8AUTOINLENL
                                    319 	.globl _EP8AUTOINLENH
                                    320 	.globl _EP6AUTOINLENL
                                    321 	.globl _EP6AUTOINLENH
                                    322 	.globl _EP4AUTOINLENL
                                    323 	.globl _EP4AUTOINLENH
                                    324 	.globl _EP2AUTOINLENL
                                    325 	.globl _EP2AUTOINLENH
                                    326 	.globl _EP8FIFOCFG
                                    327 	.globl _EP6FIFOCFG
                                    328 	.globl _EP4FIFOCFG
                                    329 	.globl _EP2FIFOCFG
                                    330 	.globl _EP8CFG
                                    331 	.globl _EP6CFG
                                    332 	.globl _EP4CFG
                                    333 	.globl _EP2CFG
                                    334 	.globl _EP1INCFG
                                    335 	.globl _EP1OUTCFG
                                    336 	.globl _REVCTL
                                    337 	.globl _REVID
                                    338 	.globl _FIFOPINPOLAR
                                    339 	.globl _UART230
                                    340 	.globl _BPADDRL
                                    341 	.globl _BPADDRH
                                    342 	.globl _BREAKPT
                                    343 	.globl _FIFORESET
                                    344 	.globl _PINFLAGSCD
                                    345 	.globl _PINFLAGSAB
                                    346 	.globl _IFCONFIG
                                    347 	.globl _CPUCS
                                    348 	.globl _RES_WAVEDATA_END
                                    349 	.globl _GPIF_WAVE_DATA
                                    350 ;--------------------------------------------------------
                                    351 ; special function registers
                                    352 ;--------------------------------------------------------
                                    353 	.area RSEG    (ABS,DATA)
      000000                        354 	.org 0x0000
                           000080   355 _IOA	=	0x0080
                           000081   356 _SP	=	0x0081
                           000082   357 _DPL	=	0x0082
                           000083   358 _DPH	=	0x0083
                           000084   359 _DPL1	=	0x0084
                           000085   360 _DPH1	=	0x0085
                           000086   361 _DPS	=	0x0086
                           000087   362 _PCON	=	0x0087
                           000088   363 _TCON	=	0x0088
                           000089   364 _TMOD	=	0x0089
                           00008A   365 _TL0	=	0x008a
                           00008B   366 _TL1	=	0x008b
                           00008C   367 _TH0	=	0x008c
                           00008D   368 _TH1	=	0x008d
                           00008E   369 _CKCON	=	0x008e
                           000090   370 _IOB	=	0x0090
                           000091   371 _EXIF	=	0x0091
                           000092   372 __XPAGE	=	0x0092
                           000098   373 _SCON0	=	0x0098
                           000099   374 _SBUF0	=	0x0099
                           00009A   375 _AUTOPTRH1	=	0x009a
                           00009B   376 _AUTOPTRL1	=	0x009b
                           00009D   377 _AUTOPTRH2	=	0x009d
                           00009E   378 _AUTOPTRL2	=	0x009e
                           0000A0   379 _IOC	=	0x00a0
                           0000A1   380 _INT2CLR	=	0x00a1
                           0000A2   381 _INT4CLR	=	0x00a2
                           0000A8   382 _IE	=	0x00a8
                           0000AA   383 _EP2468STAT	=	0x00aa
                           0000AB   384 _EP24FIFOFLGS	=	0x00ab
                           0000AC   385 _EP68FIFOFLGS	=	0x00ac
                           0000AF   386 _AUTOPTRSETUP	=	0x00af
                           0000B0   387 _IOD	=	0x00b0
                           0000B1   388 _IOE	=	0x00b1
                           0000B2   389 _OEA	=	0x00b2
                           0000B3   390 _OEB	=	0x00b3
                           0000B4   391 _OEC	=	0x00b4
                           0000B5   392 _OED	=	0x00b5
                           0000B6   393 _OEE	=	0x00b6
                           0000B8   394 _IP	=	0x00b8
                           0000BA   395 _EP01STAT	=	0x00ba
                           0000BB   396 _GPIFTRIG	=	0x00bb
                           0000BD   397 _GPIFSGLDATH	=	0x00bd
                           0000BE   398 _GPIFSGLDATLX	=	0x00be
                           0000BF   399 _GPIFSGLDATLNOX	=	0x00bf
                           0000C0   400 _SCON1	=	0x00c0
                           0000C1   401 _SBUF1	=	0x00c1
                           0000C8   402 _T2CON	=	0x00c8
                           0000CA   403 _RCAP2L	=	0x00ca
                           0000CB   404 _RCAP2H	=	0x00cb
                           0000CC   405 _TL2	=	0x00cc
                           0000CD   406 _TH2	=	0x00cd
                           0000D0   407 _PSW	=	0x00d0
                           0000D8   408 _EICON	=	0x00d8
                           0000E0   409 _ACC	=	0x00e0
                           0000E8   410 _EIE	=	0x00e8
                           0000F0   411 _B	=	0x00f0
                           0000F8   412 _EIP	=	0x00f8
                                    413 ;--------------------------------------------------------
                                    414 ; special function bits
                                    415 ;--------------------------------------------------------
                                    416 	.area RSEG    (ABS,DATA)
      000000                        417 	.org 0x0000
                           000080   418 _PA0	=	0x0080
                           000081   419 _PA1	=	0x0081
                           000082   420 _PA2	=	0x0082
                           000083   421 _PA3	=	0x0083
                           000084   422 _PA4	=	0x0084
                           000085   423 _PA5	=	0x0085
                           000086   424 _PA6	=	0x0086
                           000087   425 _PA7	=	0x0087
                           000088   426 _IT0	=	0x0088
                           000089   427 _IE0	=	0x0089
                           00008A   428 _IT1	=	0x008a
                           00008B   429 _IE1	=	0x008b
                           00008C   430 _TR0	=	0x008c
                           00008D   431 _TF0	=	0x008d
                           00008E   432 _TR1	=	0x008e
                           00008F   433 _TF1	=	0x008f
                           000090   434 _PB0	=	0x0090
                           000091   435 _PB1	=	0x0091
                           000092   436 _PB2	=	0x0092
                           000093   437 _PB3	=	0x0093
                           000094   438 _PB4	=	0x0094
                           000095   439 _PB5	=	0x0095
                           000096   440 _PB6	=	0x0096
                           000097   441 _PB7	=	0x0097
                           000098   442 _RI	=	0x0098
                           000099   443 _TI	=	0x0099
                           00009A   444 _RB8	=	0x009a
                           00009B   445 _TB8	=	0x009b
                           00009C   446 _REN	=	0x009c
                           00009D   447 _SM2	=	0x009d
                           00009E   448 _SM1	=	0x009e
                           00009F   449 _SM0	=	0x009f
                           0000A0   450 _PC0	=	0x00a0
                           0000A1   451 _PC1	=	0x00a1
                           0000A2   452 _PC2	=	0x00a2
                           0000A3   453 _PC3	=	0x00a3
                           0000A4   454 _PC4	=	0x00a4
                           0000A5   455 _PC5	=	0x00a5
                           0000A6   456 _PC6	=	0x00a6
                           0000A7   457 _PC7	=	0x00a7
                           0000A8   458 _EX0	=	0x00a8
                           0000A9   459 _ET0	=	0x00a9
                           0000AA   460 _EX1	=	0x00aa
                           0000AB   461 _ET1	=	0x00ab
                           0000AC   462 _ES0	=	0x00ac
                           0000AD   463 _ET2	=	0x00ad
                           0000AE   464 _ES1	=	0x00ae
                           0000AF   465 _EA	=	0x00af
                           0000B0   466 _PD0	=	0x00b0
                           0000B1   467 _PD1	=	0x00b1
                           0000B2   468 _PD2	=	0x00b2
                           0000B3   469 _PD3	=	0x00b3
                           0000B4   470 _PD4	=	0x00b4
                           0000B5   471 _PD5	=	0x00b5
                           0000B6   472 _PD6	=	0x00b6
                           0000B7   473 _PD7	=	0x00b7
                           0000B8   474 _PX0	=	0x00b8
                           0000B9   475 _PT0	=	0x00b9
                           0000BA   476 _PX1	=	0x00ba
                           0000BB   477 _PT1	=	0x00bb
                           0000BC   478 _PS0	=	0x00bc
                           0000BD   479 _PT2	=	0x00bd
                           0000BE   480 _PS1	=	0x00be
                           0000C0   481 _RI1	=	0x00c0
                           0000C1   482 _TI1	=	0x00c1
                           0000C2   483 _RB81	=	0x00c2
                           0000C3   484 _TB81	=	0x00c3
                           0000C4   485 _REN1	=	0x00c4
                           0000C5   486 _SM21	=	0x00c5
                           0000C6   487 _SM11	=	0x00c6
                           0000C7   488 _SM01	=	0x00c7
                           0000C8   489 _CP_RL2	=	0x00c8
                           0000C9   490 _C_T2	=	0x00c9
                           0000CA   491 _TR2	=	0x00ca
                           0000CB   492 _EXEN2	=	0x00cb
                           0000CC   493 _TCLK	=	0x00cc
                           0000CD   494 _RCLK	=	0x00cd
                           0000CE   495 _EXF2	=	0x00ce
                           0000CF   496 _TF2	=	0x00cf
                           0000D0   497 _P	=	0x00d0
                           0000D1   498 _FL	=	0x00d1
                           0000D2   499 _OV	=	0x00d2
                           0000D3   500 _RS0	=	0x00d3
                           0000D4   501 _RS1	=	0x00d4
                           0000D5   502 _F0	=	0x00d5
                           0000D6   503 _AC	=	0x00d6
                           0000D7   504 _CY	=	0x00d7
                           0000DB   505 _INT6	=	0x00db
                           0000DC   506 _RESI	=	0x00dc
                           0000DD   507 _ERESI	=	0x00dd
                           0000DF   508 _SMOD1	=	0x00df
                           0000E8   509 _EUSB	=	0x00e8
                           0000E9   510 _EI2C	=	0x00e9
                           0000EA   511 _EIEX4	=	0x00ea
                           0000EB   512 _EIEX5	=	0x00eb
                           0000EC   513 _EIEX6	=	0x00ec
                           0000F8   514 _PUSB	=	0x00f8
                           0000F9   515 _PI2C	=	0x00f9
                           0000FA   516 _EIPX4	=	0x00fa
                           0000FB   517 _EIPX5	=	0x00fb
                           0000FC   518 _EIPX6	=	0x00fc
                                    519 ;--------------------------------------------------------
                                    520 ; overlayable register banks
                                    521 ;--------------------------------------------------------
                                    522 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        523 	.ds 8
                                    524 ;--------------------------------------------------------
                                    525 ; internal ram data
                                    526 ;--------------------------------------------------------
                                    527 	.area DSEG    (DATA)
      000008                        528 _main_i_30000_5:
      000008                        529 	.ds 2
                                    530 ;--------------------------------------------------------
                                    531 ; overlayable items in internal ram
                                    532 ;--------------------------------------------------------
                                    533 ;--------------------------------------------------------
                                    534 ; Stack segment in internal ram
                                    535 ;--------------------------------------------------------
                                    536 	.area SSEG
      00000C                        537 __start__stack:
      00000C                        538 	.ds	1
                                    539 
                                    540 ;--------------------------------------------------------
                                    541 ; indirectly addressable internal ram data
                                    542 ;--------------------------------------------------------
                                    543 	.area ISEG    (DATA)
                                    544 ;--------------------------------------------------------
                                    545 ; absolute internal ram data
                                    546 ;--------------------------------------------------------
                                    547 	.area IABS    (ABS,DATA)
                                    548 	.area IABS    (ABS,DATA)
                                    549 ;--------------------------------------------------------
                                    550 ; bit data
                                    551 ;--------------------------------------------------------
                                    552 	.area BSEG    (BIT)
                                    553 ;--------------------------------------------------------
                                    554 ; paged external ram data
                                    555 ;--------------------------------------------------------
                                    556 	.area PSEG    (PAG,XDATA)
                                    557 ;--------------------------------------------------------
                                    558 ; uninitialized external ram data
                                    559 ;--------------------------------------------------------
                                    560 	.area XSEG    (XDATA)
                           00E400   561 _GPIF_WAVE_DATA	=	0xe400
                           00E480   562 _RES_WAVEDATA_END	=	0xe480
                           00E600   563 _CPUCS	=	0xe600
                           00E601   564 _IFCONFIG	=	0xe601
                           00E602   565 _PINFLAGSAB	=	0xe602
                           00E603   566 _PINFLAGSCD	=	0xe603
                           00E604   567 _FIFORESET	=	0xe604
                           00E605   568 _BREAKPT	=	0xe605
                           00E606   569 _BPADDRH	=	0xe606
                           00E607   570 _BPADDRL	=	0xe607
                           00E608   571 _UART230	=	0xe608
                           00E609   572 _FIFOPINPOLAR	=	0xe609
                           00E60A   573 _REVID	=	0xe60a
                           00E60B   574 _REVCTL	=	0xe60b
                           00E610   575 _EP1OUTCFG	=	0xe610
                           00E611   576 _EP1INCFG	=	0xe611
                           00E612   577 _EP2CFG	=	0xe612
                           00E613   578 _EP4CFG	=	0xe613
                           00E614   579 _EP6CFG	=	0xe614
                           00E615   580 _EP8CFG	=	0xe615
                           00E618   581 _EP2FIFOCFG	=	0xe618
                           00E619   582 _EP4FIFOCFG	=	0xe619
                           00E61A   583 _EP6FIFOCFG	=	0xe61a
                           00E61B   584 _EP8FIFOCFG	=	0xe61b
                           00E620   585 _EP2AUTOINLENH	=	0xe620
                           00E621   586 _EP2AUTOINLENL	=	0xe621
                           00E622   587 _EP4AUTOINLENH	=	0xe622
                           00E623   588 _EP4AUTOINLENL	=	0xe623
                           00E624   589 _EP6AUTOINLENH	=	0xe624
                           00E625   590 _EP6AUTOINLENL	=	0xe625
                           00E626   591 _EP8AUTOINLENH	=	0xe626
                           00E627   592 _EP8AUTOINLENL	=	0xe627
                           00E630   593 _EP2FIFOPFH	=	0xe630
                           00E631   594 _EP2FIFOPFL	=	0xe631
                           00E632   595 _EP4FIFOPFH	=	0xe632
                           00E633   596 _EP4FIFOPFL	=	0xe633
                           00E634   597 _EP6FIFOPFH	=	0xe634
                           00E635   598 _EP6FIFOPFL	=	0xe635
                           00E636   599 _EP8FIFOPFH	=	0xe636
                           00E637   600 _EP8FIFOPFL	=	0xe637
                           00E640   601 _EP2ISOINPKTS	=	0xe640
                           00E641   602 _EP4ISOINPKTS	=	0xe641
                           00E642   603 _EP6ISOINPKTS	=	0xe642
                           00E643   604 _EP8ISOINPKTS	=	0xe643
                           00E648   605 _INPKTEND	=	0xe648
                           00E649   606 _OUTPKTEND	=	0xe649
                           00E650   607 _EP2FIFOIE	=	0xe650
                           00E651   608 _EP2FIFOIRQ	=	0xe651
                           00E652   609 _EP4FIFOIE	=	0xe652
                           00E653   610 _EP4FIFOIRQ	=	0xe653
                           00E654   611 _EP6FIFOIE	=	0xe654
                           00E655   612 _EP6FIFOIRQ	=	0xe655
                           00E656   613 _EP8FIFOIE	=	0xe656
                           00E657   614 _EP8FIFOIRQ	=	0xe657
                           00E658   615 _IBNIE	=	0xe658
                           00E659   616 _IBNIRQ	=	0xe659
                           00E65A   617 _NAKIE	=	0xe65a
                           00E65B   618 _NAKIRQ	=	0xe65b
                           00E65C   619 _USBIE	=	0xe65c
                           00E65D   620 _USBIRQ	=	0xe65d
                           00E65E   621 _EPIE	=	0xe65e
                           00E65F   622 _EPIRQ	=	0xe65f
                           00E660   623 _GPIFIE	=	0xe660
                           00E661   624 _GPIFIRQ	=	0xe661
                           00E662   625 _USBERRIE	=	0xe662
                           00E663   626 _USBERRIRQ	=	0xe663
                           00E664   627 _ERRCNTLIM	=	0xe664
                           00E665   628 _CLRERRCNT	=	0xe665
                           00E666   629 _INT2IVEC	=	0xe666
                           00E667   630 _INT4IVEC	=	0xe667
                           00E668   631 _INTSETUP	=	0xe668
                           00E670   632 _PORTACFG	=	0xe670
                           00E671   633 _PORTCCFG	=	0xe671
                           00E672   634 _PORTECFG	=	0xe672
                           00E678   635 _I2CS	=	0xe678
                           00E679   636 _I2DAT	=	0xe679
                           00E67A   637 _I2CTL	=	0xe67a
                           00E67B   638 _XAUTODAT1	=	0xe67b
                           00E67C   639 _XAUTODAT2	=	0xe67c
                           00E680   640 _USBCS	=	0xe680
                           00E681   641 _SUSPEND	=	0xe681
                           00E682   642 _WAKEUPCS	=	0xe682
                           00E683   643 _TOGCTL	=	0xe683
                           00E684   644 _USBFRAMEH	=	0xe684
                           00E685   645 _USBFRAMEL	=	0xe685
                           00E686   646 _MICROFRAME	=	0xe686
                           00E687   647 _FNADDR	=	0xe687
                           00E68A   648 _EP0BCH	=	0xe68a
                           00E68B   649 _EP0BCL	=	0xe68b
                           00E68D   650 _EP1OUTBC	=	0xe68d
                           00E68F   651 _EP1INBC	=	0xe68f
                           00E690   652 _EP2BCH	=	0xe690
                           00E691   653 _EP2BCL	=	0xe691
                           00E694   654 _EP4BCH	=	0xe694
                           00E695   655 _EP4BCL	=	0xe695
                           00E698   656 _EP6BCH	=	0xe698
                           00E699   657 _EP6BCL	=	0xe699
                           00E69C   658 _EP8BCH	=	0xe69c
                           00E69D   659 _EP8BCL	=	0xe69d
                           00E6A0   660 _EP0CS	=	0xe6a0
                           00E6A1   661 _EP1OUTCS	=	0xe6a1
                           00E6A2   662 _EP1INCS	=	0xe6a2
                           00E6A3   663 _EP2CS	=	0xe6a3
                           00E6A4   664 _EP4CS	=	0xe6a4
                           00E6A5   665 _EP6CS	=	0xe6a5
                           00E6A6   666 _EP8CS	=	0xe6a6
                           00E6A7   667 _EP2FIFOFLGS	=	0xe6a7
                           00E6A8   668 _EP4FIFOFLGS	=	0xe6a8
                           00E6A9   669 _EP6FIFOFLGS	=	0xe6a9
                           00E6AA   670 _EP8FIFOFLGS	=	0xe6aa
                           00E6AB   671 _EP2FIFOBCH	=	0xe6ab
                           00E6AC   672 _EP2FIFOBCL	=	0xe6ac
                           00E6AD   673 _EP4FIFOBCH	=	0xe6ad
                           00E6AE   674 _EP4FIFOBCL	=	0xe6ae
                           00E6AF   675 _EP6FIFOBCH	=	0xe6af
                           00E6B0   676 _EP6FIFOBCL	=	0xe6b0
                           00E6B1   677 _EP8FIFOBCH	=	0xe6b1
                           00E6B2   678 _EP8FIFOBCL	=	0xe6b2
                           00E6B3   679 _SUDPTRH	=	0xe6b3
                           00E6B4   680 _SUDPTRL	=	0xe6b4
                           00E6B5   681 _SUDPTRCTL	=	0xe6b5
                           00E6B8   682 _SETUPDAT	=	0xe6b8
                           00E6C0   683 _GPIFWFSELECT	=	0xe6c0
                           00E6C1   684 _GPIFIDLECS	=	0xe6c1
                           00E6C2   685 _GPIFIDLECTL	=	0xe6c2
                           00E6C3   686 _GPIFCTLCFG	=	0xe6c3
                           00E6C4   687 _GPIFADRH	=	0xe6c4
                           00E6C5   688 _GPIFADRL	=	0xe6c5
                           00E6CE   689 _GPIFTCB3	=	0xe6ce
                           00E6CF   690 _GPIFTCB2	=	0xe6cf
                           00E6D0   691 _GPIFTCB1	=	0xe6d0
                           00E6D1   692 _GPIFTCB0	=	0xe6d1
                           00E6D2   693 _EP2GPIFFLGSEL	=	0xe6d2
                           00E6D3   694 _EP2GPIFPFSTOP	=	0xe6d3
                           00E6D4   695 _EP2GPIFTRIG	=	0xe6d4
                           00E6DA   696 _EP4GPIFFLGSEL	=	0xe6da
                           00E6DB   697 _EP4GPIFPFSTOP	=	0xe6db
                           00E6DC   698 _EP4GPIFTRIG	=	0xe6dc
                           00E6E2   699 _EP6GPIFFLGSEL	=	0xe6e2
                           00E6E3   700 _EP6GPIFPFSTOP	=	0xe6e3
                           00E6E4   701 _EP6GPIFTRIG	=	0xe6e4
                           00E6EA   702 _EP8GPIFFLGSEL	=	0xe6ea
                           00E6EB   703 _EP8GPIFPFSTOP	=	0xe6eb
                           00E6EC   704 _EP8GPIFTRIG	=	0xe6ec
                           00E6F0   705 _XGPIFSGLDATH	=	0xe6f0
                           00E6F1   706 _XGPIFSGLDATLX	=	0xe6f1
                           00E6F2   707 _XGPIFSGLDATLNOX	=	0xe6f2
                           00E6F3   708 _GPIFREADYCFG	=	0xe6f3
                           00E6F4   709 _GPIFREADYSTAT	=	0xe6f4
                           00E6F5   710 _GPIFABORT	=	0xe6f5
                           00E6C6   711 _FLOWSTATE	=	0xe6c6
                           00E6C7   712 _FLOWLOGIC	=	0xe6c7
                           00E6C8   713 _FLOWEQ0CTL	=	0xe6c8
                           00E6C9   714 _FLOWEQ1CTL	=	0xe6c9
                           00E6CA   715 _FLOWHOLDOFF	=	0xe6ca
                           00E6CB   716 _FLOWSTB	=	0xe6cb
                           00E6CC   717 _FLOWSTBEDGE	=	0xe6cc
                           00E6CD   718 _FLOWSTBHPERIOD	=	0xe6cd
                           00E60C   719 _GPIFHOLDAMOUNT	=	0xe60c
                           00E67D   720 _UDMACRCH	=	0xe67d
                           00E67E   721 _UDMACRCL	=	0xe67e
                           00E67F   722 _UDMACRCQUAL	=	0xe67f
                           00E740   723 _EP0BUF	=	0xe740
                           00E780   724 _EP1OUTBUF	=	0xe780
                           00E7C0   725 _EP1INBUF	=	0xe7c0
                           00F000   726 _EP2FIFOBUF	=	0xf000
                           00F400   727 _EP4FIFOBUF	=	0xf400
                           00F800   728 _EP6FIFOBUF	=	0xf800
                           00FC00   729 _EP8FIFOBUF	=	0xfc00
                           00E628   730 _ECCCFG	=	0xe628
                           00E629   731 _ECCRESET	=	0xe629
                           00E62A   732 _ECC1B0	=	0xe62a
                           00E62B   733 _ECC1B1	=	0xe62b
                           00E62C   734 _ECC1B2	=	0xe62c
                           00E62D   735 _ECC2B0	=	0xe62d
                           00E62E   736 _ECC2B1	=	0xe62e
                           00E62F   737 _ECC2B2	=	0xe62f
                           00E50D   738 _GPCR2	=	0xe50d
                                    739 ;--------------------------------------------------------
                                    740 ; absolute external ram data
                                    741 ;--------------------------------------------------------
                                    742 	.area XABS    (ABS,XDATA)
                                    743 ;--------------------------------------------------------
                                    744 ; initialized external ram data
                                    745 ;--------------------------------------------------------
                                    746 	.area XISEG   (XDATA)
                                    747 	.area HOME    (CODE)
                                    748 	.area GSINIT0 (CODE)
                                    749 	.area GSINIT1 (CODE)
                                    750 	.area GSINIT2 (CODE)
                                    751 	.area GSINIT3 (CODE)
                                    752 	.area GSINIT4 (CODE)
                                    753 	.area GSINIT5 (CODE)
                                    754 	.area GSINIT  (CODE)
                                    755 	.area GSFINAL (CODE)
                                    756 	.area CSEG    (CODE)
                                    757 ;--------------------------------------------------------
                                    758 ; interrupt vector
                                    759 ;--------------------------------------------------------
                                    760 	.area HOME    (CODE)
      000000                        761 __interrupt_vect:
      000000 02 00 4C         [24]  762 	ljmp	__sdcc_gsinit_startup
                                    763 ; restartable atomic support routines
      000003                        764 	.ds	5
      000008                        765 sdcc_atomic_exchange_rollback_start::
      000008 00               [12]  766 	nop
      000009 00               [12]  767 	nop
      00000A                        768 sdcc_atomic_exchange_pdata_impl:
      00000A E2               [24]  769 	movx	a, @r0
      00000B FB               [12]  770 	mov	r3, a
      00000C EA               [12]  771 	mov	a, r2
      00000D F2               [24]  772 	movx	@r0, a
      00000E 80 2C            [24]  773 	sjmp	sdcc_atomic_exchange_exit
      000010 00               [12]  774 	nop
      000011 00               [12]  775 	nop
      000012                        776 sdcc_atomic_exchange_xdata_impl:
      000012 E0               [24]  777 	movx	a, @dptr
      000013 FB               [12]  778 	mov	r3, a
      000014 EA               [12]  779 	mov	a, r2
      000015 F0               [24]  780 	movx	@dptr, a
      000016 80 24            [24]  781 	sjmp	sdcc_atomic_exchange_exit
      000018                        782 sdcc_atomic_compare_exchange_idata_impl:
      000018 E6               [12]  783 	mov	a, @r0
      000019 B5 02 02         [24]  784 	cjne	a, ar2, .+#5
      00001C EB               [12]  785 	mov	a, r3
      00001D F6               [12]  786 	mov	@r0, a
      00001E 22               [24]  787 	ret
      00001F 00               [12]  788 	nop
      000020                        789 sdcc_atomic_compare_exchange_pdata_impl:
      000020 E2               [24]  790 	movx	a, @r0
      000021 B5 02 02         [24]  791 	cjne	a, ar2, .+#5
      000024 EB               [12]  792 	mov	a, r3
      000025 F2               [24]  793 	movx	@r0, a
      000026 22               [24]  794 	ret
      000027 00               [12]  795 	nop
      000028                        796 sdcc_atomic_compare_exchange_xdata_impl:
      000028 E0               [24]  797 	movx	a, @dptr
      000029 B5 02 02         [24]  798 	cjne	a, ar2, .+#5
      00002C EB               [12]  799 	mov	a, r3
      00002D F0               [24]  800 	movx	@dptr, a
      00002E 22               [24]  801 	ret
      00002F                        802 sdcc_atomic_exchange_rollback_end::
                                    803 
      00002F                        804 sdcc_atomic_exchange_gptr_impl::
      00002F 30 F6 E0         [24]  805 	jnb	b.6, sdcc_atomic_exchange_xdata_impl
      000032 A8 82            [24]  806 	mov	r0, dpl
      000034 20 F5 D3         [24]  807 	jb	b.5, sdcc_atomic_exchange_pdata_impl
      000037                        808 sdcc_atomic_exchange_idata_impl:
      000037 EA               [12]  809 	mov	a, r2
      000038 C6               [12]  810 	xch	a, @r0
      000039 F5 82            [12]  811 	mov	dpl, a
      00003B 22               [24]  812 	ret
      00003C                        813 sdcc_atomic_exchange_exit:
      00003C 8B 82            [24]  814 	mov	dpl, r3
      00003E 22               [24]  815 	ret
      00003F                        816 sdcc_atomic_compare_exchange_gptr_impl::
      00003F 30 F6 E6         [24]  817 	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
      000042 A8 82            [24]  818 	mov	r0, dpl
      000044 20 F5 D9         [24]  819 	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
      000047 80 CF            [24]  820 	sjmp	sdcc_atomic_compare_exchange_idata_impl
                                    821 ;--------------------------------------------------------
                                    822 ; global & static initialisations
                                    823 ;--------------------------------------------------------
                                    824 	.area HOME    (CODE)
                                    825 	.area GSINIT  (CODE)
                                    826 	.area GSFINAL (CODE)
                                    827 	.area GSINIT  (CODE)
                                    828 	.globl __sdcc_gsinit_startup
                                    829 	.globl __sdcc_program_startup
                                    830 	.globl __start__stack
                                    831 	.globl __mcs51_genXINIT
                                    832 	.globl __mcs51_genXRAMCLEAR
                                    833 	.globl __mcs51_genRAMCLEAR
                                    834 	.area GSFINAL (CODE)
      0000A5 02 00 49         [24]  835 	ljmp	__sdcc_program_startup
                                    836 ;--------------------------------------------------------
                                    837 ; Home
                                    838 ;--------------------------------------------------------
                                    839 	.area HOME    (CODE)
                                    840 	.area HOME    (CODE)
      000049                        841 __sdcc_program_startup:
      000049 02 00 A8         [24]  842 	ljmp	_main
                                    843 ;	return from main will return to caller
                                    844 ;--------------------------------------------------------
                                    845 ; code
                                    846 ;--------------------------------------------------------
                                    847 	.area CSEG    (CODE)
                                    848 ;------------------------------------------------------------
                                    849 ;Allocation info for local variables in function 'main'
                                    850 ;------------------------------------------------------------
                                    851 ;i             Allocated with name '_main_i_30000_5'
                                    852 ;------------------------------------------------------------
                                    853 ;	led.c:5: void main(void)
                                    854 ;	-----------------------------------------
                                    855 ;	 function main
                                    856 ;	-----------------------------------------
      0000A8                        857 _main:
                           000007   858 	ar7 = 0x07
                           000006   859 	ar6 = 0x06
                           000005   860 	ar5 = 0x05
                           000004   861 	ar4 = 0x04
                           000003   862 	ar3 = 0x03
                           000002   863 	ar2 = 0x02
                           000001   864 	ar1 = 0x01
                           000000   865 	ar0 = 0x00
                                    866 ;	led.c:7: OEA = 0x03;       // PA0 & PA1 output
      0000A8 75 B2 03         [24]  867 	mov	_OEA,#0x03
                                    868 ;	led.c:8: IOA |= 0x03;      // LEDs off
      0000AB 43 80 03         [24]  869 	orl	_IOA,#0x03
                                    870 ;	led.c:11: CPUCS = 0x00;     // 48 MHz clock
      0000AE 90 E6 00         [24]  871 	mov	dptr,#_CPUCS
      0000B1 E4               [12]  872 	clr	a
      0000B2 F0               [24]  873 	movx	@dptr,a
                                    874 ;	led.c:12: delay(300);       // required after certain register writes
      0000B3 90 01 2C         [24]  875 	mov	dptr,#0x012c
      0000B6 12 00 D9         [24]  876 	lcall	_delay
                                    877 ;	led.c:13: REVCTL = 0x03;    // enable USB pull-up (signals host)
      0000B9 90 E6 0B         [24]  878 	mov	dptr,#_REVCTL
      0000BC 74 03            [12]  879 	mov	a,#0x03
      0000BE F0               [24]  880 	movx	@dptr,a
                                    881 ;	led.c:17: IOA ^= 0x01;  // toggle PA0
      0000BF 63 80 01         [24]  882 	xrl	_IOA,#0x01
                                    883 ;	led.c:18: IOA ^= 0x02;  // toggle PA1
      0000C2 63 80 02         [24]  884 	xrl	_IOA,#0x02
                                    885 ;	led.c:20: for (volatile int i = 0; i < 50000; i++); // crude delay ~1s
      0000C5 E4               [12]  886 	clr	a
      0000C6 F5 08            [12]  887 	mov	_main_i_30000_5,a
      0000C8 F5 09            [12]  888 	mov	(_main_i_30000_5 + 1),a
      0000CA                        889 00105$:
      0000CA AE 08            [24]  890 	mov	r6,_main_i_30000_5
      0000CC AF 09            [24]  891 	mov	r7,(_main_i_30000_5 + 1)
      0000CE 74 01            [12]  892 	mov	a,#0x01
      0000D0 2E               [12]  893 	add	a, r6
      0000D1 F5 08            [12]  894 	mov	_main_i_30000_5,a
      0000D3 E4               [12]  895 	clr	a
      0000D4 3F               [12]  896 	addc	a, r7
      0000D5 F5 09            [12]  897 	mov	(_main_i_30000_5 + 1),a
                                    898 ;	led.c:22: }
      0000D7 80 F1            [24]  899 	sjmp	00105$
                                    900 	.area CSEG    (CODE)
                                    901 	.area CONST   (CODE)
                                    902 	.area XINIT   (CODE)
                                    903 	.area CABS    (ABS,CODE)
