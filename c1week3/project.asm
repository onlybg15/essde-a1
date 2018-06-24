
project.out:     file format elf32-littlearm


Disassembly of section .text:

00000000 <func>:
   0:	b480      	push	{r7}
   2:	b085      	sub	sp, #20
   4:	af00      	add	r7, sp, #0
   6:	6078      	str	r0, [r7, #4]
   8:	2300      	movs	r3, #0
   a:	60fb      	str	r3, [r7, #12]
   c:	4b16      	ldr	r3, [pc, #88]	; (68 <func+0x68>)
   e:	60bb      	str	r3, [r7, #8]
  10:	4b16      	ldr	r3, [pc, #88]	; (6c <func+0x6c>)
  12:	681b      	ldr	r3, [r3, #0]
  14:	3301      	adds	r3, #1
  16:	4a15      	ldr	r2, [pc, #84]	; (6c <func+0x6c>)
  18:	6013      	str	r3, [r2, #0]
  1a:	4b14      	ldr	r3, [pc, #80]	; (6c <func+0x6c>)
  1c:	681b      	ldr	r3, [r3, #0]
  1e:	009b      	lsls	r3, r3, #2
  20:	4a13      	ldr	r2, [pc, #76]	; (70 <func+0x70>)
  22:	4413      	add	r3, r2
  24:	68fa      	ldr	r2, [r7, #12]
  26:	601a      	str	r2, [r3, #0]
  28:	2300      	movs	r3, #0
  2a:	60fb      	str	r3, [r7, #12]
  2c:	e011      	b.n	52 <func+0x52>
  2e:	68ba      	ldr	r2, [r7, #8]
  30:	68fb      	ldr	r3, [r7, #12]
  32:	4413      	add	r3, r2
  34:	781b      	ldrb	r3, [r3, #0]
  36:	b2db      	uxtb	r3, r3
  38:	4619      	mov	r1, r3
  3a:	4a0d      	ldr	r2, [pc, #52]	; (70 <func+0x70>)
  3c:	68fb      	ldr	r3, [r7, #12]
  3e:	f842 1023 	str.w	r1, [r2, r3, lsl #2]
  42:	4b0a      	ldr	r3, [pc, #40]	; (6c <func+0x6c>)
  44:	681b      	ldr	r3, [r3, #0]
  46:	3301      	adds	r3, #1
  48:	4a08      	ldr	r2, [pc, #32]	; (6c <func+0x6c>)
  4a:	6013      	str	r3, [r2, #0]
  4c:	68fb      	ldr	r3, [r7, #12]
  4e:	3301      	adds	r3, #1
  50:	60fb      	str	r3, [r7, #12]
  52:	68fb      	ldr	r3, [r7, #12]
  54:	2b05      	cmp	r3, #5
  56:	d9ea      	bls.n	2e <func+0x2e>
  58:	4b04      	ldr	r3, [pc, #16]	; (6c <func+0x6c>)
  5a:	681b      	ldr	r3, [r3, #0]
  5c:	4618      	mov	r0, r3
  5e:	3714      	adds	r7, #20
  60:	46bd      	mov	sp, r7
  62:	f85d 7b04 	ldr.w	r7, [sp], #4
  66:	4770      	bx	lr
	...

Disassembly of section .data:

00000000 <g5>:
   0:	00000000 	andeq	r0, r0, r0
   4:	00000001 	andeq	r0, r0, r1
   8:	00000002 	andeq	r0, r0, r2
   c:	00000003 	andeq	r0, r0, r3
  10:	00000004 	andeq	r0, r0, r4
  14:	00000005 	andeq	r0, r0, r5
  18:	00000006 	andeq	r0, r0, r6
  1c:	00000007 	andeq	r0, r0, r7
  20:	00000008 	andeq	r0, r0, r8
  24:	00000009 	andeq	r0, r0, r9

Disassembly of section .bss:

00000000 <f2.4039>:
   0:	00000000 	andeq	r0, r0, r0

Disassembly of section .rodata:

00000000 <.rodata>:
   0:	6c6c6548 	cfstr64vs	mvdx6, [ip], #-288	; 0xfffffee0
   4:	6f57206f 	svcvs	0x0057206f
   8:	21646c72 	smccs	18114	; 0x46c2
   c:	Address 0x000000000000000c is out of bounds.


Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	000000c0 	andeq	r0, r0, r0, asr #1
   4:	00000004 	andeq	r0, r0, r4
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	00000044 	andeq	r0, r0, r4, asr #32
  10:	0000340c 	andeq	r3, r0, ip, lsl #8
  14:	00001200 	andeq	r1, r0, r0, lsl #4
  18:	00000000 	andeq	r0, r0, r0
  1c:	00007400 	andeq	r7, r0, r0, lsl #8
  20:	00000000 	andeq	r0, r0, r0
  24:	000d0200 	andeq	r0, sp, r0, lsl #4
  28:	1a010000 	bne	40030 <func+0x40030>
  2c:	00000076 	andeq	r0, r0, r6, ror r0
  30:	00000000 	andeq	r0, r0, r0
  34:	00000074 	andeq	r0, r0, r4, ror r0
  38:	00769c01 	rsbseq	r9, r6, r1, lsl #24
  3c:	66030000 	strvs	r0, [r3], -r0
  40:	1a010031 	bne	4010c <func+0x4010c>
  44:	0000007d 	andeq	r0, r0, sp, ror r0
  48:	046c9102 	strbteq	r9, [ip], #-258	; 0xfffffefe
  4c:	01003266 	tsteq	r0, r6, ror #4
  50:	0000761c 	andeq	r7, r0, ip, lsl r6
  54:	00030500 	andeq	r0, r3, r0, lsl #10
  58:	04000000 	streq	r0, [r0], #-0
  5c:	01003366 	tsteq	r0, r6, ror #6
  60:	0000831d 	andeq	r8, r0, sp, lsl r3
  64:	74910200 	ldrvc	r0, [r1], #512	; 0x200
  68:	00346604 	eorseq	r6, r4, r4, lsl #12
  6c:	008a1e01 	addeq	r1, sl, r1, lsl #28
  70:	91020000 	mrsls	r0, (UNDEF: 2)
  74:	04050070 	streq	r0, [r5], #-112	; 0xffffff90
  78:	746e6905 	strbtvc	r6, [lr], #-2309	; 0xfffff6fb
  7c:	76040600 	strvc	r0, [r4], -r0, lsl #12
  80:	07000000 	streq	r0, [r0, -r0]
  84:	00000704 	andeq	r0, r0, r4, lsl #14
  88:	04060000 	streq	r0, [r6], #-0
  8c:	00000097 	muleq	r0, r7, r0
  90:	b6080107 	strlt	r0, [r8], -r7, lsl #2
  94:	08000000 	stmdaeq	r0, {}	; <UNPREDICTABLE>
  98:	00000090 	muleq	r0, r0, r0
  9c:	00007609 	andeq	r7, r0, r9, lsl #12
  a0:	0000ac00 	andeq	sl, r0, r0, lsl #24
  a4:	00ac0a00 	adceq	r0, ip, r0, lsl #20
  a8:	00090000 	andeq	r0, r9, r0
  ac:	3b070407 	blcc	1c1024 <func+0x1c1024>
  b0:	0b000000 	bleq	b8 <.debug_info+0xb8>
  b4:	01003567 	tsteq	r0, r7, ror #10
  b8:	00009c18 	andeq	r9, r0, r8, lsl ip
  bc:	00030500 	andeq	r0, r3, r0, lsl #10
  c0:	00000000 	andeq	r0, r0, r0

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0xfffffeff
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10061201 	andne	r1, r6, r1, lsl #4
  10:	02000017 	andeq	r0, r0, #23
  14:	193f012e 	ldmdbne	pc!, {r1, r2, r3, r5, r8}	; <UNPREDICTABLE>
  18:	0b3a0e03 	bleq	e8382c <func+0xe8382c>
  1c:	19270b3b 	stmdbne	r7!, {r0, r1, r3, r4, r5, r8, r9, fp}
  20:	01111349 	tsteq	r1, r9, asr #6
  24:	18400612 	stmdane	r0, {r1, r4, r9, sl}^
  28:	01194297 			; <UNDEFINED> instruction: 0x01194297
  2c:	03000013 	movweq	r0, #19
  30:	08030005 	stmdaeq	r3, {r0, r2}
  34:	0b3b0b3a 	bleq	ec2d24 <func+0xec2d24>
  38:	18021349 	stmdane	r2, {r0, r3, r6, r8, r9, ip}
  3c:	34040000 	strcc	r0, [r4], #-0
  40:	3a080300 	bcc	200c48 <func+0x200c48>
  44:	490b3b0b 	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
  48:	00180213 	andseq	r0, r8, r3, lsl r2
  4c:	00240500 	eoreq	r0, r4, r0, lsl #10
  50:	0b3e0b0b 	bleq	f82c84 <func+0xf82c84>
  54:	00000803 	andeq	r0, r0, r3, lsl #16
  58:	0b000f06 	bleq	3c78 <func+0x3c78>
  5c:	0013490b 	andseq	r4, r3, fp, lsl #18
  60:	00240700 	eoreq	r0, r4, r0, lsl #14
  64:	0b3e0b0b 	bleq	f82c98 <func+0xf82c98>
  68:	00000e03 	andeq	r0, r0, r3, lsl #28
  6c:	49003508 	stmdbmi	r0, {r3, r8, sl, ip, sp}
  70:	09000013 	stmdbeq	r0, {r0, r1, r4}
  74:	13490101 	movtne	r0, #37121	; 0x9101
  78:	00001301 	andeq	r1, r0, r1, lsl #6
  7c:	4900210a 	stmdbmi	r0, {r1, r3, r8, sp}
  80:	000b2f13 	andeq	r2, fp, r3, lsl pc
  84:	00340b00 	eorseq	r0, r4, r0, lsl #22
  88:	0b3a0803 	bleq	e8209c <func+0xe8209c>
  8c:	13490b3b 	movtne	r0, #39739	; 0x9b3b
  90:	1802193f 	stmdane	r2, {r0, r1, r2, r3, r4, r5, r8, fp, ip}
  94:	Address 0x0000000000000094 is out of bounds.


Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
	...
  14:	00000074 	andeq	r0, r0, r4, ror r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	0000004f 	andeq	r0, r0, pc, asr #32
   4:	001d0002 	andseq	r0, sp, r2
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	6373696d 	cmnvs	r3, #1785856	; 0x1b4000
  20:	0000632e 	andeq	r6, r0, lr, lsr #6
  24:	00000000 	andeq	r0, r0, r0
  28:	00000205 	andeq	r0, r0, r5, lsl #4
  2c:	1a030000 	bne	c0034 <func+0xc0034>
  30:	302f4c01 	eorcc	r4, pc, r1, lsl #24
  34:	02007659 	andeq	r7, r0, #93323264	; 0x5900000
  38:	003e0304 	eorseq	r0, lr, r4, lsl #6
  3c:	9f030402 	svcls	0x00030402
  40:	03040200 	movweq	r0, #16896	; 0x4200
  44:	04020055 	streq	r0, [r2], #-85	; 0xffffffab
  48:	063c0601 	ldrteq	r0, [ip], -r1, lsl #12
  4c:	0c022f42 	stceq	15, cr2, [r2], {66}	; 0x42
  50:	Address 0x0000000000000050 is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
   4:	64656e67 	strbtvs	r6, [r5], #-3687	; 0xfffff199
   8:	746e6920 	strbtvc	r6, [lr], #-2336	; 0xfffff6e0
   c:	6e756600 	cdpvs	6, 7, cr6, cr5, cr0, {0}
  10:	682f0063 	stmdavs	pc!, {r0, r1, r5, r6}	; <UNPREDICTABLE>
  14:	2f656d6f 	svccs	0x00656d6f
  18:	65656365 	strbvs	r6, [r5, #-869]!	; 0xfffffc9b
  1c:	6172472f 	cmnvs	r2, pc, lsr #14
  20:	435f746e 	cmpmi	pc, #1845493760	; 0x6e000000
  24:	7372756f 	cmnvc	r2, #465567744	; 0x1bc00000
  28:	2f617265 	svccs	0x00617265
  2c:	65773163 	ldrbvs	r3, [r7, #-355]!	; 0xfffffe9d
  30:	00336b65 	eorseq	r6, r3, r5, ror #22
  34:	6373696d 	cmnvs	r3, #1785856	; 0x1b4000
  38:	7300632e 	movwvc	r6, #814	; 0x32e
  3c:	74657a69 	strbtvc	r7, [r5], #-2665	; 0xfffff597
  40:	00657079 	rsbeq	r7, r5, r9, ror r0
  44:	20554e47 	subscs	r4, r5, r7, asr #28
  48:	20393943 	eorscs	r3, r9, r3, asr #18
  4c:	2e342e35 	mrccs	14, 1, r2, cr4, cr5, {1}
  50:	30322031 	eorscc	r2, r2, r1, lsr r0
  54:	39303631 	ldmdbcc	r0!, {r0, r4, r5, r9, sl, ip, sp}
  58:	2d203931 			; <UNDEFINED> instruction: 0x2d203931
  5c:	7570636d 	ldrbvc	r6, [r0, #-877]!	; 0xfffffc93
  60:	726f633d 	rsbvc	r6, pc, #-201326592	; 0xf4000000
  64:	2d786574 	cfldr64cs	mvdx6, [r8, #-464]!	; 0xfffffe30
  68:	2d20346d 	cfstrscs	mvf3, [r0, #-436]!	; 0xfffffe4c
  6c:	7568746d 	strbvc	r7, [r8, #-1133]!	; 0xfffffb93
  70:	2d20626d 	sfmcs	f6, 4, [r0, #-436]!	; 0xfffffe4c
  74:	6372616d 	cmnvs	r2, #1073741851	; 0x4000001b
  78:	72613d68 	rsbvc	r3, r1, #104, 26	; 0x1a00
  7c:	6537766d 	ldrvs	r7, [r7, #-1645]!	; 0xfffff993
  80:	2d206d2d 	stccs	13, cr6, [r0, #-180]!	; 0xffffff4c
  84:	6f6c666d 	svcvs	0x006c666d
  88:	612d7461 			; <UNDEFINED> instruction: 0x612d7461
  8c:	683d6962 	ldmdavs	sp!, {r1, r5, r6, r8, fp, sp, lr}
  90:	20647261 	rsbcs	r7, r4, r1, ror #4
  94:	70666d2d 	rsbvc	r6, r6, sp, lsr #26
  98:	70663d75 	rsbvc	r3, r6, r5, ror sp
  9c:	732d3476 			; <UNDEFINED> instruction: 0x732d3476
  a0:	31642d70 	smccc	17104	; 0x42d0
  a4:	672d2036 			; <UNDEFINED> instruction: 0x672d2036
  a8:	304f2d20 	subcc	r2, pc, r0, lsr #26
  ac:	74732d20 	ldrbtvc	r2, [r3], #-3360	; 0xfffff2e0
  b0:	39633d64 	stmdbcc	r3!, {r2, r5, r6, r8, sl, fp, ip, sp}^
  b4:	68630039 	stmdavs	r3!, {r0, r3, r4, r5}^
  b8:	Address 0x00000000000000b8 is out of bounds.


Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	; 0x3700
   4:	3128203a 			; <UNDEFINED> instruction: 0x3128203a
   8:	2e353a35 			; <UNDEFINED> instruction: 0x2e353a35
   c:	2b312e34 	blcs	c4b8e4 <func+0xc4b8e4>
  10:	326e7673 	rsbcc	r7, lr, #120586240	; 0x7300000
  14:	35313134 	ldrcc	r3, [r1, #-308]!	; 0xfffffecc
  18:	29312d35 	ldmdbcs	r1!, {r0, r2, r4, r5, r8, sl, fp, sp}
  1c:	342e3520 	strtcc	r3, [lr], #-1312	; 0xfffffae0
  20:	3220312e 	eorcc	r3, r0, #-2147483637	; 0x8000000b
  24:	30363130 	eorscc	r3, r6, r0, lsr r1
  28:	00393139 	eorseq	r3, r9, r9, lsr r1

Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	00000024 	andeq	r0, r0, r4, lsr #32
	...
  1c:	00000074 	andeq	r0, r0, r4, ror r0
  20:	87040e41 	strhi	r0, [r4, -r1, asr #28]
  24:	180e4101 	stmdane	lr, {r0, r8, lr}
  28:	6d070d41 	stcvs	13, cr0, [r7, #-260]	; 0xfffffefc
  2c:	0d41040e 	cfstrdeq	mvd0, [r1, #-56]	; 0xffffffc8
  30:	0ec7420d 	cdpeq	2, 12, cr4, cr7, cr13, {0}
  34:	00000000 	andeq	r0, r0, r0

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003841 	andeq	r3, r0, r1, asr #16
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	0000002e 	andeq	r0, r0, lr, lsr #32
  10:	726f4305 	rsbvc	r4, pc, #335544320	; 0x14000000
  14:	2d786574 	cfldr64cs	mvdx6, [r8, #-464]!	; 0xfffffe30
  18:	0600344d 	streq	r3, [r0], -sp, asr #8
  1c:	094d070d 	stmdbeq	sp, {r0, r2, r3, r8, r9, sl}^
  20:	12060a02 	andne	r0, r6, #8192	; 0x2000
  24:	15011404 	strne	r1, [r1, #-1028]	; 0xfffffbfc
  28:	18031701 	stmdane	r3, {r0, r8, r9, sl, ip}
  2c:	1a011901 	bne	46438 <func+0x46438>
  30:	1c011b01 			; <UNDEFINED> instruction: 0x1c011b01
  34:	22061e01 	andcs	r1, r6, #1, 28
  38:	Address 0x0000000000000038 is out of bounds.

