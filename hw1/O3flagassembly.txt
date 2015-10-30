
OBJ/place.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <get_bb_from_scratch>:
       0:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7 <get_bb_from_scratch+0x7>
       7:	48 63 ff             	movslq %edi,%rdi
       a:	41 57                	push   %r15
       c:	41 56                	push   %r14
       e:	41 55                	push   %r13
      10:	41 54                	push   %r12
      12:	55                   	push   %rbp
      13:	53                   	push   %rbx
      14:	8b 0c b8             	mov    (%rax,%rdi,4),%ecx
      17:	48 89 74 24 f0       	mov    %rsi,-0x10(%rsp)
      1c:	48 89 54 24 f8       	mov    %rdx,-0x8(%rsp)
      21:	85 c9                	test   %ecx,%ecx
      23:	0f 85 b7 01 00 00    	jne    1e0 <get_bb_from_scratch+0x1e0>
      29:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 30 <get_bb_from_scratch+0x30>
      30:	48 8d 14 bf          	lea    (%rdi,%rdi,4),%rdx
      34:	48 8d 04 d0          	lea    (%rax,%rdx,8),%rax
      38:	48 8b 50 10          	mov    0x10(%rax),%rdx
      3c:	8b 40 08             	mov    0x8(%rax),%eax
      3f:	83 c0 01             	add    $0x1,%eax
      42:	48 63 0a             	movslq (%rdx),%rcx
      45:	4c 8b 25 00 00 00 00 	mov    0x0(%rip),%r12        # 4c <get_bb_from_scratch+0x4c>
      4c:	44 8b 0d 00 00 00 00 	mov    0x0(%rip),%r9d        # 53 <get_bb_from_scratch+0x53>
      53:	44 8b 15 00 00 00 00 	mov    0x0(%rip),%r10d        # 5a <get_bb_from_scratch+0x5a>
      5a:	48 8d 0c 89          	lea    (%rcx,%rcx,4),%rcx
      5e:	49 8d 34 cc          	lea    (%r12,%rcx,8),%rsi
      62:	b9 01 00 00 00       	mov    $0x1,%ecx
      67:	8b 7e 18             	mov    0x18(%rsi),%edi
      6a:	8b 76 1c             	mov    0x1c(%rsi),%esi
      6d:	41 39 f9             	cmp    %edi,%r9d
      70:	41 0f 4e f9          	cmovle %r9d,%edi
      74:	85 ff                	test   %edi,%edi
      76:	0f 4e f9             	cmovle %ecx,%edi
      79:	41 39 f2             	cmp    %esi,%r10d
      7c:	41 0f 4e f2          	cmovle %r10d,%esi
      80:	85 f6                	test   %esi,%esi
      82:	0f 4e f1             	cmovle %ecx,%esi
      85:	83 f8 01             	cmp    $0x1,%eax
      88:	0f 8e 79 01 00 00    	jle    207 <get_bb_from_scratch+0x207>
      8e:	83 e8 02             	sub    $0x2,%eax
      91:	41 bf 01 00 00 00    	mov    $0x1,%r15d
      97:	48 8d 4a 04          	lea    0x4(%rdx),%rcx
      9b:	48 8d 2c 85 08 00 00 	lea    0x8(,%rax,4),%rbp
      a2:	00 
      a3:	41 89 f3             	mov    %esi,%r11d
      a6:	41 89 f8             	mov    %edi,%r8d
      a9:	c7 44 24 e8 01 00 00 	movl   $0x1,-0x18(%rsp)
      b0:	00 
      b1:	41 bd 01 00 00 00    	mov    $0x1,%r13d
      b7:	41 be 01 00 00 00    	mov    $0x1,%r14d
      bd:	48 01 d5             	add    %rdx,%rbp
      c0:	bb 01 00 00 00       	mov    $0x1,%ebx
      c5:	44 89 7c 24 ec       	mov    %r15d,-0x14(%rsp)
      ca:	eb 3b                	jmp    107 <get_bb_from_scratch+0x107>
      cc:	0f 1f 40 00          	nopl   0x0(%rax)
      d0:	39 fa                	cmp    %edi,%edx
      d2:	7e 0a                	jle    de <get_bb_from_scratch+0xde>
      d4:	89 d7                	mov    %edx,%edi
      d6:	c7 44 24 ec 01 00 00 	movl   $0x1,-0x14(%rsp)
      dd:	00 
      de:	44 39 d8             	cmp    %r11d,%eax
      e1:	74 78                	je     15b <get_bb_from_scratch+0x15b>
      e3:	39 f0                	cmp    %esi,%eax
      e5:	74 7c                	je     163 <get_bb_from_scratch+0x163>
      e7:	44 39 d8             	cmp    %r11d,%eax
      ea:	0f 8c c0 00 00 00    	jl     1b0 <get_bb_from_scratch+0x1b0>
      f0:	39 f0                	cmp    %esi,%eax
      f2:	7e 0a                	jle    fe <get_bb_from_scratch+0xfe>
      f4:	89 c6                	mov    %eax,%esi
      f6:	c7 44 24 e8 01 00 00 	movl   $0x1,-0x18(%rsp)
      fd:	00 
      fe:	48 83 c1 04          	add    $0x4,%rcx
     102:	48 39 e9             	cmp    %rbp,%rcx
     105:	74 6c                	je     173 <get_bb_from_scratch+0x173>
     107:	48 63 01             	movslq (%rcx),%rax
     10a:	44 89 ca             	mov    %r9d,%edx
     10d:	45 89 d7             	mov    %r10d,%r15d
     110:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
     114:	49 8d 04 c4          	lea    (%r12,%rax,8),%rax
     118:	44 39 48 18          	cmp    %r9d,0x18(%rax)
     11c:	0f 4e 50 18          	cmovle 0x18(%rax),%edx
     120:	85 d2                	test   %edx,%edx
     122:	0f 4e d3             	cmovle %ebx,%edx
     125:	44 39 50 1c          	cmp    %r10d,0x1c(%rax)
     129:	44 0f 4e 78 1c       	cmovle 0x1c(%rax),%r15d
     12e:	45 85 ff             	test   %r15d,%r15d
     131:	44 89 f8             	mov    %r15d,%eax
     134:	0f 4e c3             	cmovle %ebx,%eax
     137:	44 39 c2             	cmp    %r8d,%edx
     13a:	0f 84 80 00 00 00    	je     1c0 <get_bb_from_scratch+0x1c0>
     140:	39 fa                	cmp    %edi,%edx
     142:	0f 84 85 00 00 00    	je     1cd <get_bb_from_scratch+0x1cd>
     148:	44 39 c2             	cmp    %r8d,%edx
     14b:	7d 83                	jge    d0 <get_bb_from_scratch+0xd0>
     14d:	44 39 d8             	cmp    %r11d,%eax
     150:	41 89 d0             	mov    %edx,%r8d
     153:	41 be 01 00 00 00    	mov    $0x1,%r14d
     159:	75 88                	jne    e3 <get_bb_from_scratch+0xe3>
     15b:	41 83 c5 01          	add    $0x1,%r13d
     15f:	39 f0                	cmp    %esi,%eax
     161:	75 8d                	jne    f0 <get_bb_from_scratch+0xf0>
     163:	48 83 c1 04          	add    $0x4,%rcx
     167:	83 44 24 e8 01       	addl   $0x1,-0x18(%rsp)
     16c:	89 c6                	mov    %eax,%esi
     16e:	48 39 e9             	cmp    %rbp,%rcx
     171:	75 94                	jne    107 <get_bb_from_scratch+0x107>
     173:	44 8b 7c 24 ec       	mov    -0x14(%rsp),%r15d
     178:	48 8b 44 24 f0       	mov    -0x10(%rsp),%rax
     17d:	8b 5c 24 e8          	mov    -0x18(%rsp),%ebx
     181:	44 89 00             	mov    %r8d,(%rax)
     184:	89 78 04             	mov    %edi,0x4(%rax)
     187:	44 89 58 08          	mov    %r11d,0x8(%rax)
     18b:	89 70 0c             	mov    %esi,0xc(%rax)
     18e:	48 8b 44 24 f8       	mov    -0x8(%rsp),%rax
     193:	44 89 30             	mov    %r14d,(%rax)
     196:	44 89 78 04          	mov    %r15d,0x4(%rax)
     19a:	44 89 68 08          	mov    %r13d,0x8(%rax)
     19e:	89 58 0c             	mov    %ebx,0xc(%rax)
     1a1:	5b                   	pop    %rbx
     1a2:	5d                   	pop    %rbp
     1a3:	41 5c                	pop    %r12
     1a5:	41 5d                	pop    %r13
     1a7:	41 5e                	pop    %r14
     1a9:	41 5f                	pop    %r15
     1ab:	c3                   	retq   
     1ac:	0f 1f 40 00          	nopl   0x0(%rax)
     1b0:	41 89 c3             	mov    %eax,%r11d
     1b3:	41 bd 01 00 00 00    	mov    $0x1,%r13d
     1b9:	e9 40 ff ff ff       	jmpq   fe <get_bb_from_scratch+0xfe>
     1be:	66 90                	xchg   %ax,%ax
     1c0:	41 83 c6 01          	add    $0x1,%r14d
     1c4:	41 39 f8             	cmp    %edi,%r8d
     1c7:	0f 85 03 ff ff ff    	jne    d0 <get_bb_from_scratch+0xd0>
     1cd:	83 44 24 ec 01       	addl   $0x1,-0x14(%rsp)
     1d2:	89 d7                	mov    %edx,%edi
     1d4:	e9 05 ff ff ff       	jmpq   de <get_bb_from_scratch+0xde>
     1d9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
     1e0:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 1e7 <get_bb_from_scratch+0x1e7>
     1e7:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 1ee <get_bb_from_scratch+0x1ee>
     1ee:	48 8b 14 f8          	mov    (%rax,%rdi,8),%rdx
     1f2:	48 8d 04 bf          	lea    (%rdi,%rdi,4),%rax
     1f6:	48 8d 04 c6          	lea    (%rsi,%rax,8),%rax
     1fa:	8b 40 08             	mov    0x8(%rax),%eax
     1fd:	83 c0 01             	add    $0x1,%eax
     200:	29 c8                	sub    %ecx,%eax
     202:	e9 3b fe ff ff       	jmpq   42 <get_bb_from_scratch+0x42>
     207:	41 89 f3             	mov    %esi,%r11d
     20a:	41 89 f8             	mov    %edi,%r8d
     20d:	c7 44 24 e8 01 00 00 	movl   $0x1,-0x18(%rsp)
     214:	00 
     215:	41 bd 01 00 00 00    	mov    $0x1,%r13d
     21b:	41 bf 01 00 00 00    	mov    $0x1,%r15d
     221:	41 be 01 00 00 00    	mov    $0x1,%r14d
     227:	e9 4c ff ff ff       	jmpq   178 <get_bb_from_scratch+0x178>
     22c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000000230 <update_bb>:
     230:	44 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11d        # 237 <update_bb+0x7>
     237:	44 8b 15 00 00 00 00 	mov    0x0(%rip),%r10d        # 23e <update_bb+0xe>
     23e:	55                   	push   %rbp
     23f:	53                   	push   %rbx
     240:	bd 01 00 00 00       	mov    $0x1,%ebp
     245:	8b 44 24 18          	mov    0x18(%rsp),%eax
     249:	45 39 d9             	cmp    %r11d,%r9d
     24c:	45 0f 4f cb          	cmovg  %r11d,%r9d
     250:	45 85 c9             	test   %r9d,%r9d
     253:	44 0f 4e cd          	cmovle %ebp,%r9d
     257:	44 39 d0             	cmp    %r10d,%eax
     25a:	41 0f 4f c2          	cmovg  %r10d,%eax
     25e:	85 c0                	test   %eax,%eax
     260:	0f 4e c5             	cmovle %ebp,%eax
     263:	44 39 d9             	cmp    %r11d,%ecx
     266:	41 0f 4f cb          	cmovg  %r11d,%ecx
     26a:	89 c3                	mov    %eax,%ebx
     26c:	85 c9                	test   %ecx,%ecx
     26e:	0f 4e cd             	cmovle %ebp,%ecx
     271:	45 39 d0             	cmp    %r10d,%r8d
     274:	45 0f 4f c2          	cmovg  %r10d,%r8d
     278:	45 85 c0             	test   %r8d,%r8d
     27b:	44 0f 4e c5          	cmovle %ebp,%r8d
     27f:	41 39 c9             	cmp    %ecx,%r9d
     282:	0f 8d 88 00 00 00    	jge    310 <update_bb+0xe0>
     288:	48 63 c7             	movslq %edi,%rax
     28b:	48 c1 e0 04          	shl    $0x4,%rax
     28f:	48 89 c5             	mov    %rax,%rbp
     292:	48 03 2d 00 00 00 00 	add    0x0(%rip),%rbp        # 299 <update_bb+0x69>
     299:	44 8b 5d 04          	mov    0x4(%rbp),%r11d
     29d:	41 39 cb             	cmp    %ecx,%r11d
     2a0:	0f 84 5a 01 00 00    	je     400 <update_bb+0x1d0>
     2a6:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 2ad <update_bb+0x7d>
     2ad:	44 89 5e 04          	mov    %r11d,0x4(%rsi)
     2b1:	8b 48 04             	mov    0x4(%rax),%ecx
     2b4:	89 4a 04             	mov    %ecx,0x4(%rdx)
     2b7:	8b 4d 00             	mov    0x0(%rbp),%ecx
     2ba:	41 39 c9             	cmp    %ecx,%r9d
     2bd:	0f 8d 2d 01 00 00    	jge    3f0 <update_bb+0x1c0>
     2c3:	44 89 0e             	mov    %r9d,(%rsi)
     2c6:	c7 02 01 00 00 00    	movl   $0x1,(%rdx)
     2cc:	44 39 c3             	cmp    %r8d,%ebx
     2cf:	0f 8d 93 00 00 00    	jge    368 <update_bb+0x138>
     2d5:	8b 4d 0c             	mov    0xc(%rbp),%ecx
     2d8:	44 39 c1             	cmp    %r8d,%ecx
     2db:	0f 84 af 01 00 00    	je     490 <update_bb+0x260>
     2e1:	89 4e 0c             	mov    %ecx,0xc(%rsi)
     2e4:	8b 48 0c             	mov    0xc(%rax),%ecx
     2e7:	89 4a 0c             	mov    %ecx,0xc(%rdx)
     2ea:	8b 4d 08             	mov    0x8(%rbp),%ecx
     2ed:	39 cb                	cmp    %ecx,%ebx
     2ef:	0f 8c 8b 01 00 00    	jl     480 <update_bb+0x250>
     2f5:	0f 84 d5 01 00 00    	je     4d0 <update_bb+0x2a0>
     2fb:	89 4e 08             	mov    %ecx,0x8(%rsi)
     2fe:	8b 40 08             	mov    0x8(%rax),%eax
     301:	89 42 08             	mov    %eax,0x8(%rdx)
     304:	5b                   	pop    %rbx
     305:	5d                   	pop    %rbp
     306:	c3                   	retq   
     307:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
     30e:	00 00 
     310:	0f 8e 8a 00 00 00    	jle    3a0 <update_bb+0x170>
     316:	48 63 c7             	movslq %edi,%rax
     319:	48 c1 e0 04          	shl    $0x4,%rax
     31d:	48 89 c5             	mov    %rax,%rbp
     320:	48 03 2d 00 00 00 00 	add    0x0(%rip),%rbp        # 327 <update_bb+0xf7>
     327:	44 8b 55 00          	mov    0x0(%rbp),%r10d
     32b:	41 39 ca             	cmp    %ecx,%r10d
     32e:	0f 84 f4 00 00 00    	je     428 <update_bb+0x1f8>
     334:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 33b <update_bb+0x10b>
     33b:	44 89 16             	mov    %r10d,(%rsi)
     33e:	8b 08                	mov    (%rax),%ecx
     340:	89 0a                	mov    %ecx,(%rdx)
     342:	8b 4d 04             	mov    0x4(%rbp),%ecx
     345:	41 39 c9             	cmp    %ecx,%r9d
     348:	0f 8e 62 01 00 00    	jle    4b0 <update_bb+0x280>
     34e:	44 39 c3             	cmp    %r8d,%ebx
     351:	44 89 4e 04          	mov    %r9d,0x4(%rsi)
     355:	c7 42 04 01 00 00 00 	movl   $0x1,0x4(%rdx)
     35c:	0f 8c 73 ff ff ff    	jl     2d5 <update_bb+0xa5>
     362:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
     368:	8b 4d 08             	mov    0x8(%rbp),%ecx
     36b:	7e 6b                	jle    3d8 <update_bb+0x1a8>
     36d:	44 39 c1             	cmp    %r8d,%ecx
     370:	0f 84 da 00 00 00    	je     450 <update_bb+0x220>
     376:	89 4e 08             	mov    %ecx,0x8(%rsi)
     379:	8b 48 08             	mov    0x8(%rax),%ecx
     37c:	89 4a 08             	mov    %ecx,0x8(%rdx)
     37f:	8b 4d 0c             	mov    0xc(%rbp),%ecx
     382:	39 cb                	cmp    %ecx,%ebx
     384:	0f 8f 36 01 00 00    	jg     4c0 <update_bb+0x290>
     38a:	0f 84 58 01 00 00    	je     4e8 <update_bb+0x2b8>
     390:	89 4e 0c             	mov    %ecx,0xc(%rsi)
     393:	8b 40 0c             	mov    0xc(%rax),%eax
     396:	5b                   	pop    %rbx
     397:	5d                   	pop    %rbp
     398:	89 42 0c             	mov    %eax,0xc(%rdx)
     39b:	c3                   	retq   
     39c:	0f 1f 40 00          	nopl   0x0(%rax)
     3a0:	48 63 cf             	movslq %edi,%rcx
     3a3:	48 c1 e1 04          	shl    $0x4,%rcx
     3a7:	48 89 cd             	mov    %rcx,%rbp
     3aa:	48 03 2d 00 00 00 00 	add    0x0(%rip),%rbp        # 3b1 <update_bb+0x181>
     3b1:	8b 45 00             	mov    0x0(%rbp),%eax
     3b4:	89 06                	mov    %eax,(%rsi)
     3b6:	8b 45 04             	mov    0x4(%rbp),%eax
     3b9:	89 46 04             	mov    %eax,0x4(%rsi)
     3bc:	48 89 c8             	mov    %rcx,%rax
     3bf:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 3c6 <update_bb+0x196>
     3c6:	8b 08                	mov    (%rax),%ecx
     3c8:	89 0a                	mov    %ecx,(%rdx)
     3ca:	8b 48 04             	mov    0x4(%rax),%ecx
     3cd:	89 4a 04             	mov    %ecx,0x4(%rdx)
     3d0:	e9 f7 fe ff ff       	jmpq   2cc <update_bb+0x9c>
     3d5:	0f 1f 00             	nopl   (%rax)
     3d8:	89 4e 08             	mov    %ecx,0x8(%rsi)
     3db:	8b 4d 0c             	mov    0xc(%rbp),%ecx
     3de:	5b                   	pop    %rbx
     3df:	5d                   	pop    %rbp
     3e0:	89 4e 0c             	mov    %ecx,0xc(%rsi)
     3e3:	8b 48 08             	mov    0x8(%rax),%ecx
     3e6:	8b 40 0c             	mov    0xc(%rax),%eax
     3e9:	89 4a 08             	mov    %ecx,0x8(%rdx)
     3ec:	89 42 0c             	mov    %eax,0xc(%rdx)
     3ef:	c3                   	retq   
     3f0:	74 7e                	je     470 <update_bb+0x240>
     3f2:	89 0e                	mov    %ecx,(%rsi)
     3f4:	8b 08                	mov    (%rax),%ecx
     3f6:	89 0a                	mov    %ecx,(%rdx)
     3f8:	e9 cf fe ff ff       	jmpq   2cc <update_bb+0x9c>
     3fd:	0f 1f 00             	nopl   (%rax)
     400:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 407 <update_bb+0x1d7>
     407:	8b 48 04             	mov    0x4(%rax),%ecx
     40a:	83 f9 01             	cmp    $0x1,%ecx
     40d:	0f 84 ed 00 00 00    	je     500 <update_bb+0x2d0>
     413:	83 e9 01             	sub    $0x1,%ecx
     416:	89 4a 04             	mov    %ecx,0x4(%rdx)
     419:	8b 4d 04             	mov    0x4(%rbp),%ecx
     41c:	89 4e 04             	mov    %ecx,0x4(%rsi)
     41f:	e9 93 fe ff ff       	jmpq   2b7 <update_bb+0x87>
     424:	0f 1f 40 00          	nopl   0x0(%rax)
     428:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 42f <update_bb+0x1ff>
     42f:	8b 08                	mov    (%rax),%ecx
     431:	83 f9 01             	cmp    $0x1,%ecx
     434:	0f 84 c6 00 00 00    	je     500 <update_bb+0x2d0>
     43a:	83 e9 01             	sub    $0x1,%ecx
     43d:	89 0a                	mov    %ecx,(%rdx)
     43f:	8b 4d 00             	mov    0x0(%rbp),%ecx
     442:	89 0e                	mov    %ecx,(%rsi)
     444:	e9 f9 fe ff ff       	jmpq   342 <update_bb+0x112>
     449:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
     450:	8b 48 08             	mov    0x8(%rax),%ecx
     453:	83 f9 01             	cmp    $0x1,%ecx
     456:	0f 84 a4 00 00 00    	je     500 <update_bb+0x2d0>
     45c:	83 e9 01             	sub    $0x1,%ecx
     45f:	89 4a 08             	mov    %ecx,0x8(%rdx)
     462:	8b 4d 08             	mov    0x8(%rbp),%ecx
     465:	89 4e 08             	mov    %ecx,0x8(%rsi)
     468:	e9 12 ff ff ff       	jmpq   37f <update_bb+0x14f>
     46d:	0f 1f 00             	nopl   (%rax)
     470:	44 89 0e             	mov    %r9d,(%rsi)
     473:	8b 08                	mov    (%rax),%ecx
     475:	83 c1 01             	add    $0x1,%ecx
     478:	89 0a                	mov    %ecx,(%rdx)
     47a:	e9 4d fe ff ff       	jmpq   2cc <update_bb+0x9c>
     47f:	90                   	nop
     480:	89 5e 08             	mov    %ebx,0x8(%rsi)
     483:	c7 42 08 01 00 00 00 	movl   $0x1,0x8(%rdx)
     48a:	5b                   	pop    %rbx
     48b:	5d                   	pop    %rbp
     48c:	c3                   	retq   
     48d:	0f 1f 00             	nopl   (%rax)
     490:	8b 48 0c             	mov    0xc(%rax),%ecx
     493:	83 f9 01             	cmp    $0x1,%ecx
     496:	74 68                	je     500 <update_bb+0x2d0>
     498:	83 e9 01             	sub    $0x1,%ecx
     49b:	89 4a 0c             	mov    %ecx,0xc(%rdx)
     49e:	8b 4d 0c             	mov    0xc(%rbp),%ecx
     4a1:	89 4e 0c             	mov    %ecx,0xc(%rsi)
     4a4:	e9 41 fe ff ff       	jmpq   2ea <update_bb+0xba>
     4a9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
     4b0:	74 5e                	je     510 <update_bb+0x2e0>
     4b2:	89 4e 04             	mov    %ecx,0x4(%rsi)
     4b5:	8b 48 04             	mov    0x4(%rax),%ecx
     4b8:	89 4a 04             	mov    %ecx,0x4(%rdx)
     4bb:	e9 0c fe ff ff       	jmpq   2cc <update_bb+0x9c>
     4c0:	89 5e 0c             	mov    %ebx,0xc(%rsi)
     4c3:	c7 42 0c 01 00 00 00 	movl   $0x1,0xc(%rdx)
     4ca:	e9 35 fe ff ff       	jmpq   304 <update_bb+0xd4>
     4cf:	90                   	nop
     4d0:	89 5e 08             	mov    %ebx,0x8(%rsi)
     4d3:	8b 40 08             	mov    0x8(%rax),%eax
     4d6:	83 c0 01             	add    $0x1,%eax
     4d9:	89 42 08             	mov    %eax,0x8(%rdx)
     4dc:	e9 23 fe ff ff       	jmpq   304 <update_bb+0xd4>
     4e1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
     4e8:	89 5e 0c             	mov    %ebx,0xc(%rsi)
     4eb:	8b 40 0c             	mov    0xc(%rax),%eax
     4ee:	83 c0 01             	add    $0x1,%eax
     4f1:	89 42 0c             	mov    %eax,0xc(%rdx)
     4f4:	e9 0b fe ff ff       	jmpq   304 <update_bb+0xd4>
     4f9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
     500:	5b                   	pop    %rbx
     501:	5d                   	pop    %rbp
     502:	e9 f9 fa ff ff       	jmpq   0 <get_bb_from_scratch>
     507:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
     50e:	00 00 
     510:	44 89 4e 04          	mov    %r9d,0x4(%rsi)
     514:	8b 48 04             	mov    0x4(%rax),%ecx
     517:	83 c1 01             	add    $0x1,%ecx
     51a:	89 4a 04             	mov    %ecx,0x4(%rdx)
     51d:	e9 aa fd ff ff       	jmpq   2cc <update_bb+0x9c>
     522:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 nopw %cs:0x0(%rax,%rax,1)
     529:	1f 84 00 00 00 00 00 

0000000000000530 <comp_td_point_to_point_delay>:
     530:	48 83 ec 08          	sub    $0x8,%rsp
     534:	48 63 ff             	movslq %edi,%rdi
     537:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 53e <comp_td_point_to_point_delay+0xe>
     53e:	48 8d 04 bf          	lea    (%rdi,%rdi,4),%rax
     542:	48 63 f6             	movslq %esi,%rsi
     545:	48 8d 04 c2          	lea    (%rdx,%rax,8),%rax
     549:	48 8b 50 10          	mov    0x10(%rax),%rdx
     54d:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 554 <comp_td_point_to_point_delay+0x24>
     554:	48 63 0a             	movslq (%rdx),%rcx
     557:	48 63 14 b2          	movslq (%rdx,%rsi,4),%rdx
     55b:	48 8d 0c 89          	lea    (%rcx,%rcx,4),%rcx
     55f:	48 8d 14 92          	lea    (%rdx,%rdx,4),%rdx
     563:	48 8d 0c c8          	lea    (%rax,%rcx,8),%rcx
     567:	48 8d 04 d0          	lea    (%rax,%rdx,8),%rax
     56b:	48 8b 79 08          	mov    0x8(%rcx),%rdi
     56f:	48 8b 70 08          	mov    0x8(%rax),%rsi
     573:	48 85 ff             	test   %rdi,%rdi
     576:	0f 84 c2 00 00 00    	je     63e <comp_td_point_to_point_delay+0x10e>
     57c:	48 85 f6             	test   %rsi,%rsi
     57f:	0f 84 d2 00 00 00    	je     657 <comp_td_point_to_point_delay+0x127>
     585:	8b 50 18             	mov    0x18(%rax),%edx
     588:	8b 40 1c             	mov    0x1c(%rax),%eax
     58b:	2b 41 1c             	sub    0x1c(%rcx),%eax
     58e:	2b 51 18             	sub    0x18(%rcx),%edx
     591:	89 c1                	mov    %eax,%ecx
     593:	41 89 d0             	mov    %edx,%r8d
     596:	c1 f9 1f             	sar    $0x1f,%ecx
     599:	41 c1 f8 1f          	sar    $0x1f,%r8d
     59d:	31 c8                	xor    %ecx,%eax
     59f:	44 31 c2             	xor    %r8d,%edx
     5a2:	29 c8                	sub    %ecx,%eax
     5a4:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 5ab <comp_td_point_to_point_delay+0x7b>
     5ab:	44 29 c2             	sub    %r8d,%edx
     5ae:	48 63 d2             	movslq %edx,%rdx
     5b1:	48 98                	cltq   
     5b3:	48 39 cf             	cmp    %rcx,%rdi
     5b6:	74 30                	je     5e8 <comp_td_point_to_point_delay+0xb8>
     5b8:	48 39 ce             	cmp    %rcx,%rsi
     5bb:	74 43                	je     600 <comp_td_point_to_point_delay+0xd0>
     5bd:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 5c4 <comp_td_point_to_point_delay+0x94>
     5c4:	48 8b 14 d1          	mov    (%rcx,%rdx,8),%rdx
     5c8:	f3 0f 10 04 82       	movss  (%rdx,%rax,4),%xmm0
     5cd:	66 0f ef c9          	pxor   %xmm1,%xmm1
     5d1:	0f 2e c8             	ucomiss %xmm0,%xmm1
     5d4:	77 54                	ja     62a <comp_td_point_to_point_delay+0xfa>
     5d6:	0f 87 94 00 00 00    	ja     670 <comp_td_point_to_point_delay+0x140>
     5dc:	48 83 c4 08          	add    $0x8,%rsp
     5e0:	c3                   	retq   
     5e1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
     5e8:	48 39 f7             	cmp    %rsi,%rdi
     5eb:	74 2b                	je     618 <comp_td_point_to_point_delay+0xe8>
     5ed:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 5f4 <comp_td_point_to_point_delay+0xc4>
     5f4:	48 8b 14 d1          	mov    (%rcx,%rdx,8),%rdx
     5f8:	f3 0f 10 04 82       	movss  (%rdx,%rax,4),%xmm0
     5fd:	eb ce                	jmp    5cd <comp_td_point_to_point_delay+0x9d>
     5ff:	90                   	nop
     600:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 607 <comp_td_point_to_point_delay+0xd7>
     607:	48 8b 14 d1          	mov    (%rcx,%rdx,8),%rdx
     60b:	f3 0f 10 04 82       	movss  (%rdx,%rax,4),%xmm0
     610:	eb bb                	jmp    5cd <comp_td_point_to_point_delay+0x9d>
     612:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
     618:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 61f <comp_td_point_to_point_delay+0xef>
     61f:	48 8b 14 d1          	mov    (%rcx,%rdx,8),%rdx
     623:	f3 0f 10 04 82       	movss  (%rdx,%rax,4),%xmm0
     628:	eb a3                	jmp    5cd <comp_td_point_to_point_delay+0x9d>
     62a:	bf 00 00 00 00       	mov    $0x0,%edi
     62f:	e8 00 00 00 00       	callq  634 <comp_td_point_to_point_delay+0x104>
     634:	bf 01 00 00 00       	mov    $0x1,%edi
     639:	e8 00 00 00 00       	callq  63e <comp_td_point_to_point_delay+0x10e>
     63e:	b9 00 00 00 00       	mov    $0x0,%ecx
     643:	ba c0 07 00 00       	mov    $0x7c0,%edx
     648:	be 00 00 00 00       	mov    $0x0,%esi
     64d:	bf 00 00 00 00       	mov    $0x0,%edi
     652:	e8 00 00 00 00       	callq  657 <comp_td_point_to_point_delay+0x127>
     657:	b9 00 00 00 00       	mov    $0x0,%ecx
     65c:	ba c1 07 00 00       	mov    $0x7c1,%edx
     661:	be 00 00 00 00       	mov    $0x0,%esi
     666:	bf 00 00 00 00       	mov    $0x0,%edi
     66b:	e8 00 00 00 00       	callq  670 <comp_td_point_to_point_delay+0x140>
     670:	bf 00 00 00 00       	mov    $0x0,%edi
     675:	e8 00 00 00 00       	callq  67a <comp_td_point_to_point_delay+0x14a>
     67a:	bf 01 00 00 00       	mov    $0x1,%edi
     67f:	e8 00 00 00 00       	callq  684 <comp_td_point_to_point_delay+0x154>
     684:	66 66 66 2e 0f 1f 84 	data16 data16 nopw %cs:0x0(%rax,%rax,1)
     68b:	00 00 00 00 00 

0000000000000690 <update_region_occ.constprop.5>:
     690:	41 57                	push   %r15
     692:	41 56                	push   %r14
     694:	48 63 c7             	movslq %edi,%rax
     697:	41 55                	push   %r13
     699:	41 54                	push   %r12
     69b:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
     69f:	55                   	push   %rbp
     6a0:	53                   	push   %rbx
     6a1:	48 83 ec 68          	sub    $0x68,%rsp
     6a5:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 6ac <update_region_occ.constprop.5+0x1c>
     6ac:	48 8d 04 c1          	lea    (%rcx,%rax,8),%rax
     6b0:	48 63 40 08          	movslq 0x8(%rax),%rax
     6b4:	83 f8 31             	cmp    $0x31,%eax
     6b7:	0f 8e e0 03 00 00    	jle    a9d <update_region_occ.constprop.5+0x40d>
     6bd:	66 0f ef db          	pxor   %xmm3,%xmm3
     6c1:	83 e8 31             	sub    $0x31,%eax
     6c4:	f2 0f 2a d8          	cvtsi2sd %eax,%xmm3
     6c8:	f2 0f 59 1d 00 00 00 	mulsd  0x0(%rip),%xmm3        # 6d0 <update_region_occ.constprop.5+0x40>
     6cf:	00 
     6d0:	f2 0f 58 1d 00 00 00 	addsd  0x0(%rip),%xmm3        # 6d8 <update_region_occ.constprop.5+0x48>
     6d7:	00 
     6d8:	f2 0f 5a db          	cvtsd2ss %xmm3,%xmm3
     6dc:	66 0f ef c0          	pxor   %xmm0,%xmm0
     6e0:	8d 4a ff             	lea    -0x1(%rdx),%ecx
     6e3:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 6eb <update_region_occ.constprop.5+0x5b>
     6ea:	00 
     6eb:	66 0f ef e4          	pxor   %xmm4,%xmm4
     6ef:	f2 0f 2a 06          	cvtsi2sdl (%rsi),%xmm0
     6f3:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
     6f7:	66 0f ef ff          	pxor   %xmm7,%xmm7
     6fb:	66 0f ef d2          	pxor   %xmm2,%xmm2
     6ff:	f2 0f 5a e0          	cvtsd2ss %xmm0,%xmm4
     703:	66 0f ef c0          	pxor   %xmm0,%xmm0
     707:	f3 0f 2a 15 00 00 00 	cvtsi2ssl 0x0(%rip),%xmm2        # 70f <update_region_occ.constprop.5+0x7f>
     70e:	00 
     70f:	f2 0f 2a 46 04       	cvtsi2sdl 0x4(%rsi),%xmm0
     714:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
     718:	44 0f 28 c4          	movaps %xmm4,%xmm8
     71c:	66 0f ef e4          	pxor   %xmm4,%xmm4
     720:	f3 44 0f 11 44 24 0c 	movss  %xmm8,0xc(%rsp)
     727:	f2 0f 5a e0          	cvtsd2ss %xmm0,%xmm4
     72b:	66 0f ef c0          	pxor   %xmm0,%xmm0
     72f:	f2 0f 2a 46 08       	cvtsi2sdl 0x8(%rsi),%xmm0
     734:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
     738:	f2 0f 5a f8          	cvtsd2ss %xmm0,%xmm7
     73c:	66 0f ef c0          	pxor   %xmm0,%xmm0
     740:	f3 0f 11 64 24 10    	movss  %xmm4,0x10(%rsp)
     746:	f2 0f 2a 46 0c       	cvtsi2sdl 0xc(%rsi),%xmm0
     74b:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
     74f:	44 0f 28 cf          	movaps %xmm7,%xmm9
     753:	66 0f ef ff          	pxor   %xmm7,%xmm7
     757:	f3 44 0f 11 4c 24 14 	movss  %xmm9,0x14(%rsp)
     75e:	f2 0f 5a f8          	cvtsd2ss %xmm0,%xmm7
     762:	66 0f ef c0          	pxor   %xmm0,%xmm0
     766:	f3 0f 2a c2          	cvtsi2ss %edx,%xmm0
     76a:	f3 0f 11 7c 24 18    	movss  %xmm7,0x18(%rsp)
     770:	0f 28 e8             	movaps %xmm0,%xmm5
     773:	f3 0f 5e ea          	divss  %xmm2,%xmm5
     777:	66 0f ef d2          	pxor   %xmm2,%xmm2
     77b:	f3 0f 2a 15 00 00 00 	cvtsi2ssl 0x0(%rip),%xmm2        # 783 <update_region_occ.constprop.5+0xf3>
     782:	00 
     783:	f3 0f 11 6c 24 1c    	movss  %xmm5,0x1c(%rsp)
     789:	f3 0f 5e c2          	divss  %xmm2,%xmm0
     78d:	41 0f 28 d0          	movaps %xmm8,%xmm2
     791:	0f 28 f0             	movaps %xmm0,%xmm6
     794:	f3 0f 11 44 24 20    	movss  %xmm0,0x20(%rsp)
     79a:	66 0f ef c0          	pxor   %xmm0,%xmm0
     79e:	f3 0f 5a c2          	cvtss2sd %xmm2,%xmm0
     7a2:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
     7a6:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
     7aa:	66 0f ef c0          	pxor   %xmm0,%xmm0
     7ae:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
     7b2:	f3 0f 59 c5          	mulss  %xmm5,%xmm0
     7b6:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
     7ba:	66 0f ef c0          	pxor   %xmm0,%xmm0
     7be:	f3 0f 5a c4          	cvtss2sd %xmm4,%xmm0
     7c2:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
     7c6:	89 c3                	mov    %eax,%ebx
     7c8:	89 44 24 44          	mov    %eax,0x44(%rsp)
     7cc:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
     7d0:	66 0f ef c0          	pxor   %xmm0,%xmm0
     7d4:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
     7d8:	f3 0f 59 c5          	mulss  %xmm5,%xmm0
     7dc:	41 0f 28 e9          	movaps %xmm9,%xmm5
     7e0:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
     7e4:	66 0f ef c0          	pxor   %xmm0,%xmm0
     7e8:	f3 0f 5a c5          	cvtss2sd %xmm5,%xmm0
     7ec:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
     7f0:	39 c2                	cmp    %eax,%edx
     7f2:	0f 4e c1             	cmovle %ecx,%eax
     7f5:	89 c6                	mov    %eax,%esi
     7f7:	89 44 24 48          	mov    %eax,0x48(%rsp)
     7fb:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
     7ff:	66 0f ef c0          	pxor   %xmm0,%xmm0
     803:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
     807:	f3 0f 59 c6          	mulss  %xmm6,%xmm0
     80b:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
     80f:	66 0f ef c0          	pxor   %xmm0,%xmm0
     813:	f3 0f 5a c7          	cvtss2sd %xmm7,%xmm0
     817:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
     81b:	0f 28 cc             	movaps %xmm4,%xmm1
     81e:	f3 41 0f 5c c8       	subss  %xmm8,%xmm1
     823:	41 89 c0             	mov    %eax,%r8d
     826:	89 44 24 4c          	mov    %eax,0x4c(%rsp)
     82a:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
     82e:	66 0f ef c0          	pxor   %xmm0,%xmm0
     832:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
     836:	f3 0f 59 c6          	mulss  %xmm6,%xmm0
     83a:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
     83e:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 846 <update_region_occ.constprop.5+0x1b6>
     845:	00 
     846:	0f 28 e0             	movaps %xmm0,%xmm4
     849:	f3 0f 5e e1          	divss  %xmm1,%xmm4
     84d:	0f 28 cf             	movaps %xmm7,%xmm1
     850:	f3 41 0f 5c c9       	subss  %xmm9,%xmm1
     855:	39 c2                	cmp    %eax,%edx
     857:	0f 4f c8             	cmovg  %eax,%ecx
     85a:	39 f3                	cmp    %esi,%ebx
     85c:	89 4c 24 08          	mov    %ecx,0x8(%rsp)
     860:	f3 0f 5e c1          	divss  %xmm1,%xmm0
     864:	f3 0f 11 64 24 24    	movss  %xmm4,0x24(%rsp)
     86a:	f3 0f 11 44 24 28    	movss  %xmm0,0x28(%rsp)
     870:	0f 8f 18 02 00 00    	jg     a8e <update_region_occ.constprop.5+0x3fe>
     876:	48 63 c3             	movslq %ebx,%rax
     879:	89 7c 24 2c          	mov    %edi,0x2c(%rsp)
     87d:	4c 8d 34 c5 00 00 00 	lea    0x0(,%rax,8),%r14
     884:	00 
     885:	4c 8d 3c 85 04 00 00 	lea    0x4(,%rax,4),%r15
     88c:	00 
     88d:	49 63 c0             	movslq %r8d,%rax
     890:	48 89 c7             	mov    %rax,%rdi
     893:	48 8d 04 85 04 00 00 	lea    0x4(,%rax,4),%rax
     89a:	00 
     89b:	48 c1 e7 04          	shl    $0x4,%rdi
     89f:	f2 0f 10 25 00 00 00 	movsd  0x0(%rip),%xmm4        # 8a7 <update_region_occ.constprop.5+0x217>
     8a6:	00 
     8a7:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
     8ac:	4c 89 f8             	mov    %r15,%rax
     8af:	48 89 7c 24 50       	mov    %rdi,0x50(%rsp)
     8b4:	4d 89 f7             	mov    %r14,%r15
     8b7:	49 89 c6             	mov    %rax,%r14
     8ba:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
     8c0:	8b 44 24 4c          	mov    0x4c(%rsp),%eax
     8c4:	8b 74 24 08          	mov    0x8(%rsp),%esi
     8c8:	39 f0                	cmp    %esi,%eax
     8ca:	0f 8f a3 01 00 00    	jg     a73 <update_region_occ.constprop.5+0x3e3>
     8d0:	49 8d 6e fc          	lea    -0x4(%r14),%rbp
     8d4:	41 89 c5             	mov    %eax,%r13d
     8d7:	4c 89 f0             	mov    %r14,%rax
     8da:	48 8b 5c 24 58       	mov    0x58(%rsp),%rbx
     8df:	4c 8b 64 24 50       	mov    0x50(%rsp),%r12
     8e4:	49 89 ee             	mov    %rbp,%r14
     8e7:	48 89 c5             	mov    %rax,%rbp
     8ea:	e9 85 00 00 00       	jmpq   974 <update_region_occ.constprop.5+0x2e4>
     8ef:	90                   	nop
     8f0:	66 0f ef c0          	pxor   %xmm0,%xmm0
     8f4:	f3 0f 5a c1          	cvtss2sd %xmm1,%xmm0
     8f8:	66 0f 2e e0          	ucomisd %xmm0,%xmm4
     8fc:	0f 87 1d 01 00 00    	ja     a1f <update_region_occ.constprop.5+0x38f>
     902:	0f 28 c1             	movaps %xmm1,%xmm0
     905:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 90c <update_region_occ.constprop.5+0x27c>
     90c:	4c 89 e1             	mov    %r12,%rcx
     90f:	4c 89 e2             	mov    %r12,%rdx
     912:	41 83 c5 01          	add    $0x1,%r13d
     916:	49 83 c4 10          	add    $0x10,%r12
     91a:	f3 0f 59 c3          	mulss  %xmm3,%xmm0
     91e:	48 83 c3 04          	add    $0x4,%rbx
     922:	4a 03 0c 38          	add    (%rax,%r15,1),%rcx
     926:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 92d <update_region_occ.constprop.5+0x29d>
     92d:	f3 0f 59 c2          	mulss  %xmm2,%xmm0
     931:	4a 03 14 38          	add    (%rax,%r15,1),%rdx
     935:	44 3b 6c 24 08       	cmp    0x8(%rsp),%r13d
     93a:	f3 0f 59 d3          	mulss  %xmm3,%xmm2
     93e:	f3 0f 59 44 24 28    	mulss  0x28(%rsp),%xmm0
     944:	f3 0f 59 ca          	mulss  %xmm2,%xmm1
     948:	f3 0f 59 4c 24 24    	mulss  0x24(%rsp),%xmm1
     94e:	f3 0f 59 44 24 1c    	mulss  0x1c(%rsp),%xmm0
     954:	f3 0f 59 4c 24 20    	mulss  0x20(%rsp),%xmm1
     95a:	f3 0f 58 41 08       	addss  0x8(%rcx),%xmm0
     95f:	f3 0f 11 41 08       	movss  %xmm0,0x8(%rcx)
     964:	f3 0f 58 4a 08       	addss  0x8(%rdx),%xmm1
     969:	f3 0f 11 4a 08       	movss  %xmm1,0x8(%rdx)
     96e:	0f 8f fc 00 00 00    	jg     a70 <update_region_occ.constprop.5+0x3e0>
     974:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 97b <update_region_occ.constprop.5+0x2eb>
     97b:	f3 0f 10 54 24 10    	movss  0x10(%rsp),%xmm2
     981:	f3 0f 10 4c 24 18    	movss  0x18(%rsp),%xmm1
     987:	f3 42 0f 10 2c 30    	movss  (%rax,%r14,1),%xmm5
     98d:	f3 0f 5d 14 28       	minss  (%rax,%rbp,1),%xmm2
     992:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 999 <update_region_occ.constprop.5+0x309>
     999:	f3 0f 5f 6c 24 0c    	maxss  0xc(%rsp),%xmm5
     99f:	f3 0f 10 44 18 fc    	movss  -0x4(%rax,%rbx,1),%xmm0
     9a5:	f3 0f 5d 0c 18       	minss  (%rax,%rbx,1),%xmm1
     9aa:	f3 0f 5f 44 24 14    	maxss  0x14(%rsp),%xmm0
     9b0:	f3 0f 5c d5          	subss  %xmm5,%xmm2
     9b4:	f3 0f 5c c8          	subss  %xmm0,%xmm1
     9b8:	66 0f ef c0          	pxor   %xmm0,%xmm0
     9bc:	f3 0f 5a c2          	cvtss2sd %xmm2,%xmm0
     9c0:	66 0f 2e e0          	ucomisd %xmm0,%xmm4
     9c4:	0f 86 26 ff ff ff    	jbe    8f0 <update_region_occ.constprop.5+0x260>
     9ca:	8b 74 24 2c          	mov    0x2c(%rsp),%esi
     9ce:	bf 00 00 00 00       	mov    $0x0,%edi
     9d3:	b8 01 00 00 00       	mov    $0x1,%eax
     9d8:	f2 0f 11 64 24 38    	movsd  %xmm4,0x38(%rsp)
     9de:	f3 0f 11 4c 24 40    	movss  %xmm1,0x40(%rsp)
     9e4:	f3 0f 11 54 24 34    	movss  %xmm2,0x34(%rsp)
     9ea:	f3 0f 11 5c 24 30    	movss  %xmm3,0x30(%rsp)
     9f0:	e8 00 00 00 00       	callq  9f5 <update_region_occ.constprop.5+0x365>
     9f5:	66 0f ef c0          	pxor   %xmm0,%xmm0
     9f9:	f3 0f 10 4c 24 40    	movss  0x40(%rsp),%xmm1
     9ff:	f2 0f 10 64 24 38    	movsd  0x38(%rsp),%xmm4
     a05:	f3 0f 5a c1          	cvtss2sd %xmm1,%xmm0
     a09:	f3 0f 10 54 24 34    	movss  0x34(%rsp),%xmm2
     a0f:	66 0f 2e e0          	ucomisd %xmm0,%xmm4
     a13:	f3 0f 10 5c 24 30    	movss  0x30(%rsp),%xmm3
     a19:	0f 86 e3 fe ff ff    	jbe    902 <update_region_occ.constprop.5+0x272>
     a1f:	8b 74 24 2c          	mov    0x2c(%rsp),%esi
     a23:	bf 00 00 00 00       	mov    $0x0,%edi
     a28:	b8 01 00 00 00       	mov    $0x1,%eax
     a2d:	f2 0f 11 64 24 38    	movsd  %xmm4,0x38(%rsp)
     a33:	f3 0f 11 4c 24 40    	movss  %xmm1,0x40(%rsp)
     a39:	f3 0f 11 54 24 34    	movss  %xmm2,0x34(%rsp)
     a3f:	f3 0f 11 5c 24 30    	movss  %xmm3,0x30(%rsp)
     a45:	e8 00 00 00 00       	callq  a4a <update_region_occ.constprop.5+0x3ba>
     a4a:	f2 0f 10 64 24 38    	movsd  0x38(%rsp),%xmm4
     a50:	f3 0f 10 4c 24 40    	movss  0x40(%rsp),%xmm1
     a56:	f3 0f 10 54 24 34    	movss  0x34(%rsp),%xmm2
     a5c:	f3 0f 10 5c 24 30    	movss  0x30(%rsp),%xmm3
     a62:	e9 9b fe ff ff       	jmpq   902 <update_region_occ.constprop.5+0x272>
     a67:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
     a6e:	00 00 
     a70:	49 89 ee             	mov    %rbp,%r14
     a73:	83 44 24 44 01       	addl   $0x1,0x44(%rsp)
     a78:	49 83 c7 08          	add    $0x8,%r15
     a7c:	49 83 c6 04          	add    $0x4,%r14
     a80:	8b 44 24 44          	mov    0x44(%rsp),%eax
     a84:	3b 44 24 48          	cmp    0x48(%rsp),%eax
     a88:	0f 8e 32 fe ff ff    	jle    8c0 <update_region_occ.constprop.5+0x230>
     a8e:	48 83 c4 68          	add    $0x68,%rsp
     a92:	5b                   	pop    %rbx
     a93:	5d                   	pop    %rbp
     a94:	41 5c                	pop    %r12
     a96:	41 5d                	pop    %r13
     a98:	41 5e                	pop    %r14
     a9a:	41 5f                	pop    %r15
     a9c:	c3                   	retq   
     a9d:	f3 0f 10 1c 85 00 00 	movss  0x0(,%rax,4),%xmm3
     aa4:	00 00 
     aa6:	e9 31 fc ff ff       	jmpq   6dc <update_region_occ.constprop.5+0x4c>
     aab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000000ab0 <try_swap>:
     ab0:	41 57                	push   %r15
     ab2:	41 56                	push   %r14
     ab4:	41 55                	push   %r13
     ab6:	41 54                	push   %r12
     ab8:	55                   	push   %rbp
     ab9:	53                   	push   %rbx
     aba:	48 81 ec 38 01 00 00 	sub    $0x138,%rsp
     ac1:	48 89 94 24 00 01 00 	mov    %rdx,0x100(%rsp)
     ac8:	00 
     ac9:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # acf <try_swap+0x1f>
     acf:	f3 0f 11 84 24 08 01 	movss  %xmm0,0x108(%rsp)
     ad6:	00 00 
     ad8:	48 89 bc 24 e0 00 00 	mov    %rdi,0xe0(%rsp)
     adf:	00 
     ae0:	48 89 b4 24 d0 00 00 	mov    %rsi,0xd0(%rsp)
     ae7:	00 
     ae8:	f3 0f 11 0c 24       	movss  %xmm1,(%rsp)
     aed:	89 8c 24 80 00 00 00 	mov    %ecx,0x80(%rsp)
     af4:	f3 0f 11 94 24 0c 01 	movss  %xmm2,0x10c(%rsp)
     afb:	00 00 
     afd:	85 d2                	test   %edx,%edx
     aff:	4c 89 84 24 e8 00 00 	mov    %r8,0xe8(%rsp)
     b06:	00 
     b07:	f3 0f 11 9c 24 10 01 	movss  %xmm3,0x110(%rsp)
     b0e:	00 00 
     b10:	4c 89 8c 24 f0 00 00 	mov    %r9,0xf0(%rsp)
     b17:	00 
     b18:	f3 0f 11 a4 24 14 01 	movss  %xmm4,0x114(%rsp)
     b1f:	00 00 
     b21:	4c 8b ac 24 90 01 00 	mov    0x190(%rsp),%r13
     b28:	00 
     b29:	0f 8e 51 15 00 00    	jle    2080 <try_swap+0x15d0>
     b2f:	83 ea 01             	sub    $0x1,%edx
     b32:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # b39 <try_swap+0x89>
     b39:	48 8d 0c d2          	lea    (%rdx,%rdx,8),%rcx
     b3d:	48 8d 14 4a          	lea    (%rdx,%rcx,2),%rdx
     b41:	48 8d 46 08          	lea    0x8(%rsi),%rax
     b45:	48 8d 14 d5 a0 00 00 	lea    0xa0(,%rdx,8),%rdx
     b4c:	00 
     b4d:	48 01 d6             	add    %rdx,%rsi
     b50:	31 d2                	xor    %edx,%edx
     b52:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
     b58:	8b 08                	mov    (%rax),%ecx
     b5a:	39 ca                	cmp    %ecx,%edx
     b5c:	0f 4c d1             	cmovl  %ecx,%edx
     b5f:	48 05 98 00 00 00    	add    $0x98,%rax
     b65:	48 39 f0             	cmp    %rsi,%rax
     b68:	75 ee                	jne    b58 <try_swap+0xa8>
     b6a:	48 83 3d 00 00 00 00 	cmpq   $0x0,0x0(%rip)        # b72 <try_swap+0xc2>
     b71:	00 
     b72:	0f 84 98 15 00 00    	je     2110 <try_swap+0x1660>
     b78:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # b7e <try_swap+0xce>
     b7e:	8d 78 ff             	lea    -0x1(%rax),%edi
     b81:	e8 00 00 00 00       	callq  b86 <try_swap+0xd6>
     b86:	83 bc 24 78 01 00 00 	cmpl   $0x1,0x178(%rsp)
     b8d:	01 
     b8e:	89 84 24 c0 00 00 00 	mov    %eax,0xc0(%rsp)
     b95:	0f 84 aa 10 00 00    	je     1c45 <try_swap+0x1195>
     b9b:	48 98                	cltq   
     b9d:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # ba4 <try_swap+0xf4>
     ba4:	48 89 84 24 d8 00 00 	mov    %rax,0xd8(%rsp)
     bab:	00 
     bac:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
     bb0:	48 c1 e0 03          	shl    $0x3,%rax
     bb4:	48 89 84 24 b8 00 00 	mov    %rax,0xb8(%rsp)
     bbb:	00 
     bbc:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # bc3 <try_swap+0x113>
     bc3:	48 8b 58 08          	mov    0x8(%rax),%rbx
     bc7:	8b 70 18             	mov    0x18(%rax),%esi
     bca:	66 0f ef c0          	pxor   %xmm0,%xmm0
     bce:	89 b4 24 88 00 00 00 	mov    %esi,0x88(%rsp)
     bd5:	8b 70 1c             	mov    0x1c(%rax),%esi
     bd8:	8b 40 20             	mov    0x20(%rax),%eax
     bdb:	89 b4 24 84 00 00 00 	mov    %esi,0x84(%rsp)
     be2:	8b 35 00 00 00 00    	mov    0x0(%rip),%esi        # be8 <try_swap+0x138>
     be8:	89 84 24 c8 00 00 00 	mov    %eax,0xc8(%rsp)
     bef:	f3 0f 2a c6          	cvtsi2ss %esi,%xmm0
     bf3:	0f 2e 04 24          	ucomiss (%rsp),%xmm0
     bf7:	0f 86 e3 07 00 00    	jbe    13e0 <try_swap+0x930>
     bfd:	f3 44 0f 2c 24 24    	cvttss2si (%rsp),%r12d
     c03:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # c09 <try_swap+0x159>
     c09:	66 0f ef c0          	pxor   %xmm0,%xmm0
     c0d:	f3 0f 2a c2          	cvtsi2ss %edx,%xmm0
     c11:	0f 2e 04 24          	ucomiss (%rsp),%xmm0
     c15:	0f 86 b5 07 00 00    	jbe    13d0 <try_swap+0x920>
     c1b:	f3 0f 2c 04 24       	cvttss2si (%rsp),%eax
     c20:	89 44 24 18          	mov    %eax,0x18(%rsp)
     c24:	41 89 c2             	mov    %eax,%r10d
     c27:	44 8b 9c 24 88 00 00 	mov    0x88(%rsp),%r11d
     c2e:	00 
     c2f:	bd 01 00 00 00       	mov    $0x1,%ebp
     c34:	44 8b 84 24 84 00 00 	mov    0x84(%rsp),%r8d
     c3b:	00 
     c3c:	44 89 d8             	mov    %r11d,%eax
     c3f:	44 29 e0             	sub    %r12d,%eax
     c42:	85 c0                	test   %eax,%eax
     c44:	89 c7                	mov    %eax,%edi
     c46:	89 44 24 20          	mov    %eax,0x20(%rsp)
     c4a:	0f 4e fd             	cmovle %ebp,%edi
     c4d:	89 f8                	mov    %edi,%eax
     c4f:	44 89 df             	mov    %r11d,%edi
     c52:	44 01 e7             	add    %r12d,%edi
     c55:	39 f7                	cmp    %esi,%edi
     c57:	0f 4f fe             	cmovg  %esi,%edi
     c5a:	44 89 c6             	mov    %r8d,%esi
     c5d:	44 29 d6             	sub    %r10d,%esi
     c60:	85 f6                	test   %esi,%esi
     c62:	89 74 24 30          	mov    %esi,0x30(%rsp)
     c66:	0f 4f ee             	cmovg  %esi,%ebp
     c69:	45 01 d0             	add    %r10d,%r8d
     c6c:	41 39 d0             	cmp    %edx,%r8d
     c6f:	44 0f 4f c2          	cmovg  %edx,%r8d
     c73:	48 39 cb             	cmp    %rcx,%rbx
     c76:	0f 84 01 11 00 00    	je     1d7d <try_swap+0x12cd>
     c7c:	39 f8                	cmp    %edi,%eax
     c7e:	0f 8f 27 14 00 00    	jg     20ab <try_swap+0x15fb>
     c84:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # c8b <try_swap+0x1db>
     c8b:	48 63 d0             	movslq %eax,%rdx
     c8e:	83 c7 01             	add    $0x1,%edi
     c91:	45 31 c9             	xor    %r9d,%r9d
     c94:	45 31 ff             	xor    %r15d,%r15d
     c97:	48 8d 14 d6          	lea    (%rsi,%rdx,8),%rdx
     c9b:	eb 0e                	jmp    cab <try_swap+0x1fb>
     c9d:	0f 1f 00             	nopl   (%rax)
     ca0:	83 c0 01             	add    $0x1,%eax
     ca3:	48 83 c2 08          	add    $0x8,%rdx
     ca7:	39 f8                	cmp    %edi,%eax
     ca9:	74 25                	je     cd0 <try_swap+0x220>
     cab:	48 8b 32             	mov    (%rdx),%rsi
     cae:	48 39 5e 18          	cmp    %rbx,0x18(%rsi)
     cb2:	75 ec                	jne    ca0 <try_swap+0x1f0>
     cb4:	49 63 f1             	movslq %r9d,%rsi
     cb7:	41 83 c7 01          	add    $0x1,%r15d
     cbb:	41 83 c1 01          	add    $0x1,%r9d
     cbf:	41 89 44 b5 00       	mov    %eax,0x0(%r13,%rsi,4)
     cc4:	83 c0 01             	add    $0x1,%eax
     cc7:	48 83 c2 08          	add    $0x8,%rdx
     ccb:	39 f8                	cmp    %edi,%eax
     ccd:	75 dc                	jne    cab <try_swap+0x1fb>
     ccf:	90                   	nop
     cd0:	45 85 ff             	test   %r15d,%r15d
     cd3:	0f 84 d2 13 00 00    	je     20ab <try_swap+0x15fb>
     cd9:	41 83 ff 01          	cmp    $0x1,%r15d
     cdd:	0f 84 5c 10 00 00    	je     1d3f <try_swap+0x128f>
     ce3:	45 85 e4             	test   %r12d,%r12d
     ce6:	0f 8e 5f 24 00 00    	jle    314b <try_swap+0x269b>
     cec:	44 3b 25 00 00 00 00 	cmp    0x0(%rip),%r12d        # cf3 <try_swap+0x243>
     cf3:	0f 8f 52 24 00 00    	jg     314b <try_swap+0x269b>
     cf9:	8b 44 24 18          	mov    0x18(%rsp),%eax
     cfd:	41 29 e8             	sub    %ebp,%r8d
     d00:	44 8b b4 24 88 00 00 	mov    0x88(%rsp),%r14d
     d07:	00 
     d08:	44 89 44 24 08       	mov    %r8d,0x8(%rsp)
     d0d:	44 89 64 24 10       	mov    %r12d,0x10(%rsp)
     d12:	8d 34 00             	lea    (%rax,%rax,1),%esi
     d15:	83 e8 01             	sub    $0x1,%eax
     d18:	89 44 24 40          	mov    %eax,0x40(%rsp)
     d1c:	41 8d 44 24 ff       	lea    -0x1(%r12),%eax
     d21:	89 74 24 38          	mov    %esi,0x38(%rsp)
     d25:	43 8d 34 24          	lea    (%r12,%r12,1),%esi
     d29:	89 44 24 48          	mov    %eax,0x48(%rsp)
     d2d:	89 74 24 28          	mov    %esi,0x28(%rsp)
     d31:	41 8d 77 ff          	lea    -0x1(%r15),%esi
     d35:	44 8b bc 24 84 00 00 	mov    0x84(%rsp),%r15d
     d3c:	00 
     d3d:	89 34 24             	mov    %esi,(%rsp)
     d40:	e9 97 00 00 00       	jmpq   ddc <try_swap+0x32c>
     d45:	0f 1f 00             	nopl   (%rax)
     d48:	8b 3c 24             	mov    (%rsp),%edi
     d4b:	e8 00 00 00 00       	callq  d50 <try_swap+0x2a0>
     d50:	4c 63 e0             	movslq %eax,%r12
     d53:	8b 44 24 08          	mov    0x8(%rsp),%eax
     d57:	bf 00 00 00 00       	mov    $0x0,%edi
     d5c:	99                   	cltd   
     d5d:	f7 7b 10             	idivl  0x10(%rbx)
     d60:	8d 50 ff             	lea    -0x1(%rax),%edx
     d63:	85 c0                	test   %eax,%eax
     d65:	0f 4f fa             	cmovg  %edx,%edi
     d68:	e8 00 00 00 00       	callq  d6d <try_swap+0x2bd>
     d6d:	0f af 43 10          	imul   0x10(%rbx),%eax
     d71:	4b 63 74 a5 00       	movslq 0x0(%r13,%r12,4),%rsi
     d76:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # d7d <try_swap+0x2cd>
     d7d:	48 89 f2             	mov    %rsi,%rdx
     d80:	41 89 c4             	mov    %eax,%r12d
     d83:	41 01 ec             	add    %ebp,%r12d
     d86:	49 63 c4             	movslq %r12d,%rax
     d89:	48 8d 04 40          	lea    (%rax,%rax,2),%rax
     d8d:	48 c1 e0 03          	shl    $0x3,%rax
     d91:	48 03 04 f1          	add    (%rcx,%rsi,8),%rax
     d95:	44 2b 60 08          	sub    0x8(%rax),%r12d
     d99:	85 f6                	test   %esi,%esi
     d9b:	0f 8e e4 22 00 00    	jle    3085 <try_swap+0x25d5>
     da1:	3b 35 00 00 00 00    	cmp    0x0(%rip),%esi        # da7 <try_swap+0x2f7>
     da7:	0f 8f d8 22 00 00    	jg     3085 <try_swap+0x25d5>
     dad:	45 85 e4             	test   %r12d,%r12d
     db0:	0f 8e 28 23 00 00    	jle    30de <try_swap+0x262e>
     db6:	44 3b 25 00 00 00 00 	cmp    0x0(%rip),%r12d        # dbd <try_swap+0x30d>
     dbd:	0f 8f 1b 23 00 00    	jg     30de <try_swap+0x262e>
     dc3:	41 39 d6             	cmp    %edx,%r14d
     dc6:	0f 85 c4 00 00 00    	jne    e90 <try_swap+0x3e0>
     dcc:	45 39 e7             	cmp    %r12d,%r15d
     dcf:	0f 85 bb 00 00 00    	jne    e90 <try_swap+0x3e0>
     dd5:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # ddc <try_swap+0x32c>
     ddc:	48 39 cb             	cmp    %rcx,%rbx
     ddf:	0f 85 63 ff ff ff    	jne    d48 <try_swap+0x298>
     de5:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # deb <try_swap+0x33b>
     deb:	39 44 24 10          	cmp    %eax,0x10(%rsp)
     def:	7d 57                	jge    e48 <try_swap+0x398>
     df1:	45 85 f6             	test   %r14d,%r14d
     df4:	0f 84 8e 05 00 00    	je     1388 <try_swap+0x8d8>
     dfa:	83 c0 01             	add    $0x1,%eax
     dfd:	41 39 c6             	cmp    %eax,%r14d
     e00:	0f 84 b6 0d 00 00    	je     1bbc <try_swap+0x110c>
     e06:	45 85 ff             	test   %r15d,%r15d
     e09:	8b 7c 24 28          	mov    0x28(%rsp),%edi
     e0d:	0f 85 35 05 00 00    	jne    1348 <try_swap+0x898>
     e13:	e8 00 00 00 00       	callq  e18 <try_swap+0x368>
     e18:	8b 74 24 20          	mov    0x20(%rsp),%esi
     e1c:	8d 14 06             	lea    (%rsi,%rax,1),%edx
     e1f:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # e25 <try_swap+0x375>
     e25:	39 c2                	cmp    %eax,%edx
     e27:	0f 8f fb 0d 00 00    	jg     1c28 <try_swap+0x1178>
     e2d:	85 d2                	test   %edx,%edx
     e2f:	0f 8e f1 11 00 00    	jle    2026 <try_swap+0x1576>
     e35:	41 39 d6             	cmp    %edx,%r14d
     e38:	74 9b                	je     dd5 <try_swap+0x325>
     e3a:	41 89 d7             	mov    %edx,%r15d
     e3d:	45 31 f6             	xor    %r14d,%r14d
     e40:	eb 62                	jmp    ea4 <try_swap+0x3f4>
     e42:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
     e48:	bf 03 00 00 00       	mov    $0x3,%edi
     e4d:	e8 00 00 00 00       	callq  e52 <try_swap+0x3a2>
     e52:	83 f8 01             	cmp    $0x1,%eax
     e55:	0f 84 c4 0e 00 00    	je     1d1f <try_swap+0x126f>
     e5b:	0f 8e a9 05 00 00    	jle    140a <try_swap+0x95a>
     e61:	83 f8 02             	cmp    $0x2,%eax
     e64:	0f 84 80 05 00 00    	je     13ea <try_swap+0x93a>
     e6a:	83 f8 03             	cmp    $0x3,%eax
     e6d:	0f 85 98 0e 00 00    	jne    1d0b <try_swap+0x125b>
     e73:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # e79 <try_swap+0x3c9>
     e79:	45 31 e4             	xor    %r12d,%r12d
     e7c:	8d 78 ff             	lea    -0x1(%rax),%edi
     e7f:	e8 00 00 00 00       	callq  e84 <try_swap+0x3d4>
     e84:	8d 50 01             	lea    0x1(%rax),%edx
     e87:	41 39 d6             	cmp    %edx,%r14d
     e8a:	0f 84 3c ff ff ff    	je     dcc <try_swap+0x31c>
     e90:	85 d2                	test   %edx,%edx
     e92:	45 89 e6             	mov    %r12d,%r14d
     e95:	41 89 d7             	mov    %edx,%r15d
     e98:	0f 88 78 22 00 00    	js     3116 <try_swap+0x2666>
     e9e:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # ea4 <try_swap+0x3f4>
     ea4:	83 c0 01             	add    $0x1,%eax
     ea7:	44 39 f8             	cmp    %r15d,%eax
     eaa:	0f 8c 66 22 00 00    	jl     3116 <try_swap+0x2666>
     eb0:	45 85 f6             	test   %r14d,%r14d
     eb3:	0f 88 5d 22 00 00    	js     3116 <try_swap+0x2666>
     eb9:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # ebf <try_swap+0x40f>
     ebf:	83 c0 01             	add    $0x1,%eax
     ec2:	44 39 f0             	cmp    %r14d,%eax
     ec5:	0f 8c 4b 22 00 00    	jl     3116 <try_swap+0x2666>
     ecb:	49 63 c7             	movslq %r15d,%rax
     ece:	48 8b 2d 00 00 00 00 	mov    0x0(%rip),%rbp        # ed5 <try_swap+0x425>
     ed5:	48 89 c6             	mov    %rax,%rsi
     ed8:	48 89 84 24 18 01 00 	mov    %rax,0x118(%rsp)
     edf:	00 
     ee0:	49 63 c6             	movslq %r14d,%rax
     ee3:	48 8d 04 40          	lea    (%rax,%rax,2),%rax
     ee7:	48 c1 e0 03          	shl    $0x3,%rax
     eeb:	48 89 84 24 20 01 00 	mov    %rax,0x120(%rsp)
     ef2:	00 
     ef3:	48 03 44 f5 00       	add    0x0(%rbp,%rsi,8),%rax
     ef8:	48 39 18             	cmp    %rbx,(%rax)
     efb:	0f 85 31 22 00 00    	jne    3132 <try_swap+0x2682>
     f01:	8b 53 0c             	mov    0xc(%rbx),%edx
     f04:	83 fa 01             	cmp    $0x1,%edx
     f07:	0f 8e c5 0d 00 00    	jle    1cd2 <try_swap+0x1222>
     f0d:	8d 7a ff             	lea    -0x1(%rdx),%edi
     f10:	e8 00 00 00 00       	callq  f15 <try_swap+0x465>
     f15:	48 8b 2d 00 00 00 00 	mov    0x0(%rip),%rbp        # f1c <try_swap+0x46c>
     f1c:	48 8b b4 24 18 01 00 	mov    0x118(%rsp),%rsi
     f23:	00 
     f24:	48 63 d0             	movslq %eax,%rdx
     f27:	48 8b 84 24 20 01 00 	mov    0x120(%rsp),%rax
     f2e:	00 
     f2f:	48 8d 1c 95 00 00 00 	lea    0x0(,%rdx,4),%rbx
     f36:	00 
     f37:	89 94 24 28 01 00 00 	mov    %edx,0x128(%rsp)
     f3e:	48 03 44 f5 00       	add    0x0(%rbp,%rsi,8),%rax
     f43:	48 89 9c 24 f8 00 00 	mov    %rbx,0xf8(%rsp)
     f4a:	00 
     f4b:	48 8b 40 10          	mov    0x10(%rax),%rax
     f4f:	8b 04 18             	mov    (%rax,%rbx,1),%eax
     f52:	48 8b 1d 00 00 00 00 	mov    0x0(%rip),%rbx        # f59 <try_swap+0x4a9>
     f59:	83 f8 ff             	cmp    $0xffffffff,%eax
     f5c:	89 84 24 c4 00 00 00 	mov    %eax,0xc4(%rsp)
     f63:	74 2e                	je     f93 <try_swap+0x4e3>
     f65:	48 63 84 24 c4 00 00 	movslq 0xc4(%rsp),%rax
     f6c:	00 
     f6d:	8b b4 24 88 00 00 00 	mov    0x88(%rsp),%esi
     f74:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
     f78:	48 8d 04 c3          	lea    (%rbx,%rax,8),%rax
     f7c:	89 70 18             	mov    %esi,0x18(%rax)
     f7f:	8b b4 24 84 00 00 00 	mov    0x84(%rsp),%esi
     f86:	89 70 1c             	mov    %esi,0x1c(%rax)
     f89:	8b b4 24 c8 00 00 00 	mov    0xc8(%rsp),%esi
     f90:	89 70 20             	mov    %esi,0x20(%rax)
     f93:	48 8b 84 24 b8 00 00 	mov    0xb8(%rsp),%rax
     f9a:	00 
     f9b:	8b b4 24 28 01 00 00 	mov    0x128(%rsp),%esi
     fa2:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # fa9 <try_swap+0x4f9>
     fa9:	48 01 d8             	add    %rbx,%rax
     fac:	48 8b 50 08          	mov    0x8(%rax),%rdx
     fb0:	44 89 78 18          	mov    %r15d,0x18(%rax)
     fb4:	44 89 70 1c          	mov    %r14d,0x1c(%rax)
     fb8:	89 70 20             	mov    %esi,0x20(%rax)
     fbb:	8b 72 08             	mov    0x8(%rdx),%esi
     fbe:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # fc5 <try_swap+0x515>
     fc5:	85 f6                	test   %esi,%esi
     fc7:	89 b4 24 cc 00 00 00 	mov    %esi,0xcc(%rsp)
     fce:	0f 8e 61 12 00 00    	jle    2235 <try_swap+0x1785>
     fd4:	66 0f ef e4          	pxor   %xmm4,%xmm4
     fd8:	4c 8b 48 10          	mov    0x10(%rax),%r9
     fdc:	4c 8b 25 00 00 00 00 	mov    0x0(%rip),%r12        # fe3 <try_swap+0x533>
     fe3:	4c 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11        # fea <try_swap+0x53a>
     fea:	31 c0                	xor    %eax,%eax
     fec:	45 31 ed             	xor    %r13d,%r13d
     fef:	44 8b 94 24 cc 00 00 	mov    0xcc(%rsp),%r10d
     ff6:	00 
     ff7:	f3 0f 11 a4 24 b4 00 	movss  %xmm4,0xb4(%rsp)
     ffe:	00 00 
    1000:	0f 28 cc             	movaps %xmm4,%xmm1
    1003:	eb 0c                	jmp    1011 <try_swap+0x561>
    1005:	0f 1f 00             	nopl   (%rax)
    1008:	48 83 c0 01          	add    $0x1,%rax
    100c:	41 39 c2             	cmp    %eax,%r10d
    100f:	7e 4e                	jle    105f <try_swap+0x5af>
    1011:	41 8b 3c 81          	mov    (%r9,%rax,4),%edi
    1015:	83 ff ff             	cmp    $0xffffffff,%edi
    1018:	74 ee                	je     1008 <try_swap+0x558>
    101a:	48 63 f7             	movslq %edi,%rsi
    101d:	4c 8d 04 b5 00 00 00 	lea    0x0(,%rsi,4),%r8
    1024:	00 
    1025:	4c 01 c6             	add    %r8,%rsi
    1028:	41 8b 74 f4 20       	mov    0x20(%r12,%rsi,8),%esi
    102d:	85 f6                	test   %esi,%esi
    102f:	75 d7                	jne    1008 <try_swap+0x558>
    1031:	4d 01 d8             	add    %r11,%r8
    1034:	f3 41 0f 10 00       	movss  (%r8),%xmm0
    1039:	0f 2e c1             	ucomiss %xmm1,%xmm0
    103c:	77 ca                	ja     1008 <try_swap+0x558>
    103e:	48 83 c0 01          	add    $0x1,%rax
    1042:	49 63 f5             	movslq %r13d,%rsi
    1045:	41 83 c5 01          	add    $0x1,%r13d
    1049:	41 39 c2             	cmp    %eax,%r10d
    104c:	89 3c b2             	mov    %edi,(%rdx,%rsi,4)
    104f:	c7 04 b1 00 00 00 00 	movl   $0x0,(%rcx,%rsi,4)
    1056:	41 c7 00 00 00 80 3f 	movl   $0x3f800000,(%r8)
    105d:	7f b2                	jg     1011 <try_swap+0x561>
    105f:	48 63 84 24 c4 00 00 	movslq 0xc4(%rsp),%rax
    1066:	00 
    1067:	44 89 6c 24 7c       	mov    %r13d,0x7c(%rsp)
    106c:	83 f8 ff             	cmp    $0xffffffff,%eax
    106f:	0f 84 ad 00 00 00    	je     1122 <try_swap+0x672>
    1075:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    1079:	44 89 34 24          	mov    %r14d,(%rsp)
    107d:	44 8b b4 24 cc 00 00 	mov    0xcc(%rsp),%r14d
    1084:	00 
    1085:	45 31 c9             	xor    %r9d,%r9d
    1088:	f3 0f 10 8c 24 b4 00 	movss  0xb4(%rsp),%xmm1
    108f:	00 00 
    1091:	4c 8b 54 c3 10       	mov    0x10(%rbx,%rax,8),%r10
    1096:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    109d:	00 00 00 
    10a0:	47 8b 04 8a          	mov    (%r10,%r9,4),%r8d
    10a4:	41 83 f8 ff          	cmp    $0xffffffff,%r8d
    10a8:	74 66                	je     1110 <try_swap+0x660>
    10aa:	49 63 c0             	movslq %r8d,%rax
    10ad:	48 8d 34 85 00 00 00 	lea    0x0(,%rax,4),%rsi
    10b4:	00 
    10b5:	48 01 f0             	add    %rsi,%rax
    10b8:	41 8b 44 c4 20       	mov    0x20(%r12,%rax,8),%eax
    10bd:	85 c0                	test   %eax,%eax
    10bf:	75 4f                	jne    1110 <try_swap+0x660>
    10c1:	4c 01 de             	add    %r11,%rsi
    10c4:	f3 0f 10 06          	movss  (%rsi),%xmm0
    10c8:	0f 2e c1             	ucomiss %xmm1,%xmm0
    10cb:	0f 86 37 05 00 00    	jbe    1608 <try_swap+0xb58>
    10d1:	45 85 ed             	test   %r13d,%r13d
    10d4:	0f 8e ad 0f 00 00    	jle    2087 <try_swap+0x15d7>
    10da:	44 3b 02             	cmp    (%rdx),%r8d
    10dd:	0f 84 ab 0f 00 00    	je     208e <try_swap+0x15de>
    10e3:	bf 04 00 00 00       	mov    $0x4,%edi
    10e8:	31 f6                	xor    %esi,%esi
    10ea:	eb 16                	jmp    1102 <try_swap+0x652>
    10ec:	0f 1f 40 00          	nopl   0x0(%rax)
    10f0:	48 8d 47 04          	lea    0x4(%rdi),%rax
    10f4:	44 3b 44 02 fc       	cmp    -0x4(%rdx,%rax,1),%r8d
    10f9:	0f 84 59 03 00 00    	je     1458 <try_swap+0x9a8>
    10ff:	48 89 c7             	mov    %rax,%rdi
    1102:	83 c6 01             	add    $0x1,%esi
    1105:	44 39 ee             	cmp    %r13d,%esi
    1108:	75 e6                	jne    10f0 <try_swap+0x640>
    110a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    1110:	49 83 c1 01          	add    $0x1,%r9
    1114:	45 39 ce             	cmp    %r9d,%r14d
    1117:	7f 87                	jg     10a0 <try_swap+0x5f0>
    1119:	44 8b 34 24          	mov    (%rsp),%r14d
    111d:	44 89 6c 24 7c       	mov    %r13d,0x7c(%rsp)
    1122:	83 bc 24 80 00 00 00 	cmpl   $0x1,0x80(%rsp)
    1129:	01 
    112a:	0f 84 32 10 00 00    	je     2162 <try_swap+0x16b2>
    1130:	44 8b 44 24 7c       	mov    0x7c(%rsp),%r8d
    1135:	45 85 c0             	test   %r8d,%r8d
    1138:	0f 8e f3 1a 00 00    	jle    2c31 <try_swap+0x2181>
    113e:	8b 84 24 70 01 00 00 	mov    0x170(%rsp),%eax
    1145:	f3 0f 10 a4 24 b4 00 	movss  0xb4(%rsp),%xmm4
    114c:	00 00 
    114e:	f3 0f 11 64 24 74    	movss  %xmm4,0x74(%rsp)
    1154:	48 c7 44 24 68 00 00 	movq   $0x0,0x68(%rsp)
    115b:	00 00 
    115d:	c7 44 24 78 00 00 00 	movl   $0x0,0x78(%rsp)
    1164:	00 
    1165:	f2 0f 10 25 00 00 00 	movsd  0x0(%rip),%xmm4        # 116d <try_swap+0x6bd>
    116c:	00 
    116d:	44 89 b4 24 ac 00 00 	mov    %r14d,0xac(%rsp)
    1174:	00 
    1175:	83 e8 01             	sub    $0x1,%eax
    1178:	44 89 bc 24 b0 00 00 	mov    %r15d,0xb0(%rsp)
    117f:	00 
    1180:	89 84 24 2c 01 00 00 	mov    %eax,0x12c(%rsp)
    1187:	e9 25 01 00 00       	jmpq   12b1 <try_swap+0x801>
    118c:	0f 1f 40 00          	nopl   0x0(%rax)
    1190:	48 83 ec 08          	sub    $0x8,%rsp
    1194:	48 03 2d 00 00 00 00 	add    0x0(%rip),%rbp        # 119b <try_swap+0x6eb>
    119b:	48 03 15 00 00 00 00 	add    0x0(%rip),%rdx        # 11a2 <try_swap+0x6f2>
    11a2:	8b 84 24 b4 00 00 00 	mov    0xb4(%rsp),%eax
    11a9:	50                   	push   %rax
    11aa:	44 8b 8c 24 c0 00 00 	mov    0xc0(%rsp),%r9d
    11b1:	00 
    11b2:	44 8b 84 24 94 00 00 	mov    0x94(%rsp),%r8d
    11b9:	00 
    11ba:	8b 8c 24 98 00 00 00 	mov    0x98(%rsp),%ecx
    11c1:	8b 7c 24 58          	mov    0x58(%rsp),%edi
    11c5:	48 89 ee             	mov    %rbp,%rsi
    11c8:	e8 63 f0 ff ff       	callq  230 <update_bb>
    11cd:	59                   	pop    %rcx
    11ce:	5e                   	pop    %rsi
    11cf:	83 bc 24 80 00 00 00 	cmpl   $0x1,0x80(%rsp)
    11d6:	01 
    11d7:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 11de <try_swap+0x72e>
    11de:	f2 0f 10 24 24       	movsd  (%rsp),%xmm4
    11e3:	4a 63 44 28 08       	movslq 0x8(%rax,%r13,1),%rax
    11e8:	0f 84 4a 04 00 00    	je     1638 <try_swap+0xb88>
    11ee:	48 c1 e3 02          	shl    $0x2,%rbx
    11f2:	48 89 de             	mov    %rbx,%rsi
    11f5:	48 03 35 00 00 00 00 	add    0x0(%rip),%rsi        # 11fc <try_swap+0x74c>
    11fc:	83 f8 31             	cmp    $0x31,%eax
    11ff:	0f 8f 2b 02 00 00    	jg     1430 <try_swap+0x980>
    1205:	f3 0f 10 04 85 00 00 	movss  0x0(,%rax,4),%xmm0
    120c:	00 00 
    120e:	48 63 7d 04          	movslq 0x4(%rbp),%rdi
    1212:	4c 63 55 0c          	movslq 0xc(%rbp),%r10
    1216:	48 63 4d 00          	movslq 0x0(%rbp),%rcx
    121a:	4c 63 4d 08          	movslq 0x8(%rbp),%r9
    121e:	66 0f ef d2          	pxor   %xmm2,%xmm2
    1222:	66 0f ef c9          	pxor   %xmm1,%xmm1
    1226:	4c 89 d0             	mov    %r10,%rax
    1229:	89 fa                	mov    %edi,%edx
    122b:	29 ca                	sub    %ecx,%edx
    122d:	44 29 c8             	sub    %r9d,%eax
    1230:	83 c2 01             	add    $0x1,%edx
    1233:	83 c0 01             	add    $0x1,%eax
    1236:	f3 0f 2a d2          	cvtsi2ss %edx,%xmm2
    123a:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 1241 <try_swap+0x791>
    1241:	f3 0f 2a c8          	cvtsi2ss %eax,%xmm1
    1245:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 124c <try_swap+0x79c>
    124c:	4a 8b 14 d2          	mov    (%rdx,%r10,8),%rdx
    1250:	48 8b 04 f8          	mov    (%rax,%rdi,8),%rax
    1254:	f3 0f 59 d0          	mulss  %xmm0,%xmm2
    1258:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
    125c:	f3 42 0f 59 54 8a fc 	mulss  -0x4(%rdx,%r9,4),%xmm2
    1263:	f3 0f 59 44 88 fc    	mulss  -0x4(%rax,%rcx,4),%xmm0
    1269:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 1270 <try_swap+0x7c0>
    1270:	f3 0f 58 c2          	addss  %xmm2,%xmm0
    1274:	f3 0f 11 06          	movss  %xmm0,(%rsi)
    1278:	f3 0f 5c 04 18       	subss  (%rax,%rbx,1),%xmm0
    127d:	f3 0f 58 44 24 74    	addss  0x74(%rsp),%xmm0
    1283:	f3 0f 11 44 24 74    	movss  %xmm0,0x74(%rsp)
    1289:	83 44 24 78 01       	addl   $0x1,0x78(%rsp)
    128e:	48 83 44 24 68 01    	addq   $0x1,0x68(%rsp)
    1294:	48 8b 44 24 68       	mov    0x68(%rsp),%rax
    1299:	39 44 24 7c          	cmp    %eax,0x7c(%rsp)
    129d:	0f 8e e7 07 00 00    	jle    1a8a <try_swap+0xfda>
    12a3:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 12aa <try_swap+0x7fa>
    12aa:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 12b1 <try_swap+0x801>
    12b1:	48 8b 44 24 68       	mov    0x68(%rsp),%rax
    12b6:	8b 34 82             	mov    (%rdx,%rax,4),%esi
    12b9:	8b 14 81             	mov    (%rcx,%rax,4),%edx
    12bc:	83 fa 02             	cmp    $0x2,%edx
    12bf:	89 74 24 48          	mov    %esi,0x48(%rsp)
    12c3:	74 c9                	je     128e <try_swap+0x7de>
    12c5:	48 63 de             	movslq %esi,%rbx
    12c8:	4c 8d 2c 9b          	lea    (%rbx,%rbx,4),%r13
    12cc:	49 c1 e5 03          	shl    $0x3,%r13
    12d0:	4c 89 e9             	mov    %r13,%rcx
    12d3:	48 03 0d 00 00 00 00 	add    0x0(%rip),%rcx        # 12da <try_swap+0x82a>
    12da:	48 63 41 08          	movslq 0x8(%rcx),%rax
    12de:	83 f8 03             	cmp    $0x3,%eax
    12e1:	0f 8e a9 01 00 00    	jle    1490 <try_swap+0x9e0>
    12e7:	48 63 44 24 78       	movslq 0x78(%rsp),%rax
    12ec:	f2 0f 11 24 24       	movsd  %xmm4,(%rsp)
    12f1:	48 c1 e0 04          	shl    $0x4,%rax
    12f5:	85 d2                	test   %edx,%edx
    12f7:	48 89 84 24 a0 00 00 	mov    %rax,0xa0(%rsp)
    12fe:	00 
    12ff:	48 89 c2             	mov    %rax,%rdx
    1302:	48 89 c5             	mov    %rax,%rbp
    1305:	0f 84 85 fe ff ff    	je     1190 <try_swap+0x6e0>
    130b:	48 83 ec 08          	sub    $0x8,%rsp
    130f:	48 03 2d 00 00 00 00 	add    0x0(%rip),%rbp        # 1316 <try_swap+0x866>
    1316:	48 03 15 00 00 00 00 	add    0x0(%rip),%rdx        # 131d <try_swap+0x86d>
    131d:	8b 84 24 8c 00 00 00 	mov    0x8c(%rsp),%eax
    1324:	50                   	push   %rax
    1325:	44 8b 8c 24 98 00 00 	mov    0x98(%rsp),%r9d
    132c:	00 
    132d:	44 8b 84 24 bc 00 00 	mov    0xbc(%rsp),%r8d
    1334:	00 
    1335:	8b 8c 24 c0 00 00 00 	mov    0xc0(%rsp),%ecx
    133c:	e9 80 fe ff ff       	jmpq   11c1 <try_swap+0x711>
    1341:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1348:	e8 00 00 00 00       	callq  134d <try_swap+0x89d>
    134d:	8b 74 24 20          	mov    0x20(%rsp),%esi
    1351:	8d 14 06             	lea    (%rsi,%rax,1),%edx
    1354:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 135a <try_swap+0x8aa>
    135a:	39 c2                	cmp    %eax,%edx
    135c:	0f 8f a3 08 00 00    	jg     1c05 <try_swap+0x1155>
    1362:	85 d2                	test   %edx,%edx
    1364:	0f 8e da 0c 00 00    	jle    2044 <try_swap+0x1594>
    136a:	41 39 d6             	cmp    %edx,%r14d
    136d:	0f 84 62 fa ff ff    	je     dd5 <try_swap+0x325>
    1373:	41 89 d7             	mov    %edx,%r15d
    1376:	44 8b b4 24 84 00 00 	mov    0x84(%rsp),%r14d
    137d:	00 
    137e:	e9 21 fb ff ff       	jmpq   ea4 <try_swap+0x3f4>
    1383:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    1388:	8b 7c 24 38          	mov    0x38(%rsp),%edi
    138c:	e8 00 00 00 00       	callq  1391 <try_swap+0x8e1>
    1391:	8b 74 24 30          	mov    0x30(%rsp),%esi
    1395:	44 8d 24 06          	lea    (%rsi,%rax,1),%r12d
    1399:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 139f <try_swap+0x8ef>
    139f:	41 39 c4             	cmp    %eax,%r12d
    13a2:	0f 8f 4e 09 00 00    	jg     1cf6 <try_swap+0x1246>
    13a8:	31 d2                	xor    %edx,%edx
    13aa:	45 85 e4             	test   %r12d,%r12d
    13ad:	0f 8f 19 fa ff ff    	jg     dcc <try_swap+0x31c>
    13b3:	8b 7c 24 48          	mov    0x48(%rsp),%edi
    13b7:	45 31 e4             	xor    %r12d,%r12d
    13ba:	e8 00 00 00 00       	callq  13bf <try_swap+0x90f>
    13bf:	8d 50 01             	lea    0x1(%rax),%edx
    13c2:	e9 fc f9 ff ff       	jmpq   dc3 <try_swap+0x313>
    13c7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    13ce:	00 00 
    13d0:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
    13d4:	89 44 24 18          	mov    %eax,0x18(%rsp)
    13d8:	41 89 c2             	mov    %eax,%r10d
    13db:	e9 47 f8 ff ff       	jmpq   c27 <try_swap+0x177>
    13e0:	f3 44 0f 2c e0       	cvttss2si %xmm0,%r12d
    13e5:	e9 19 f8 ff ff       	jmpq   c03 <try_swap+0x153>
    13ea:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 13f0 <try_swap+0x940>
    13f0:	8d 78 ff             	lea    -0x1(%rax),%edi
    13f3:	e8 00 00 00 00       	callq  13f8 <try_swap+0x948>
    13f8:	44 8d 60 01          	lea    0x1(%rax),%r12d
    13fc:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1402 <try_swap+0x952>
    1402:	8d 50 01             	lea    0x1(%rax),%edx
    1405:	e9 b9 f9 ff ff       	jmpq   dc3 <try_swap+0x313>
    140a:	85 c0                	test   %eax,%eax
    140c:	0f 85 f9 08 00 00    	jne    1d0b <try_swap+0x125b>
    1412:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1418 <try_swap+0x968>
    1418:	8d 78 ff             	lea    -0x1(%rax),%edi
    141b:	e8 00 00 00 00       	callq  1420 <try_swap+0x970>
    1420:	31 d2                	xor    %edx,%edx
    1422:	44 8d 60 01          	lea    0x1(%rax),%r12d
    1426:	e9 98 f9 ff ff       	jmpq   dc3 <try_swap+0x313>
    142b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    1430:	66 0f ef c0          	pxor   %xmm0,%xmm0
    1434:	83 e8 31             	sub    $0x31,%eax
    1437:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    143b:	f2 0f 59 05 00 00 00 	mulsd  0x0(%rip),%xmm0        # 1443 <try_swap+0x993>
    1442:	00 
    1443:	f2 0f 58 05 00 00 00 	addsd  0x0(%rip),%xmm0        # 144b <try_swap+0x99b>
    144a:	00 
    144b:	f2 0f 5a c0          	cvtsd2ss %xmm0,%xmm0
    144f:	e9 ba fd ff ff       	jmpq   120e <try_swap+0x75e>
    1454:	0f 1f 40 00          	nopl   0x0(%rax)
    1458:	48 01 cf             	add    %rcx,%rdi
    145b:	44 8b 07             	mov    (%rdi),%r8d
    145e:	45 85 c0             	test   %r8d,%r8d
    1461:	75 06                	jne    1469 <try_swap+0x9b9>
    1463:	c7 07 02 00 00 00    	movl   $0x2,(%rdi)
    1469:	44 39 ee             	cmp    %r13d,%esi
    146c:	0f 8e 9e fc ff ff    	jle    1110 <try_swap+0x660>
    1472:	bf 00 00 00 00       	mov    $0x0,%edi
    1477:	44 89 ea             	mov    %r13d,%edx
    147a:	31 c0                	xor    %eax,%eax
    147c:	e8 00 00 00 00       	callq  1481 <try_swap+0x9d1>
    1481:	bf 01 00 00 00       	mov    $0x1,%edi
    1486:	e8 00 00 00 00       	callq  148b <try_swap+0x9db>
    148b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    1490:	48 63 54 24 78       	movslq 0x78(%rsp),%rdx
    1495:	4c 8b 69 10          	mov    0x10(%rcx),%r13
    1499:	4c 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11        # 14a0 <try_swap+0x9f0>
    14a0:	48 c1 e2 04          	shl    $0x4,%rdx
    14a4:	48 89 d5             	mov    %rdx,%rbp
    14a7:	48 89 94 24 a0 00 00 	mov    %rdx,0xa0(%rsp)
    14ae:	00 
    14af:	49 63 55 00          	movslq 0x0(%r13),%rdx
    14b3:	48 03 2d 00 00 00 00 	add    0x0(%rip),%rbp        # 14ba <try_swap+0xa0a>
    14ba:	85 c0                	test   %eax,%eax
    14bc:	48 8d 14 92          	lea    (%rdx,%rdx,4),%rdx
    14c0:	49 8d 14 d3          	lea    (%r11,%rdx,8),%rdx
    14c4:	8b 72 18             	mov    0x18(%rdx),%esi
    14c7:	8b 52 1c             	mov    0x1c(%rdx),%edx
    14ca:	0f 8e d2 0b 00 00    	jle    20a2 <try_swap+0x15f2>
    14d0:	49 63 4d 04          	movslq 0x4(%r13),%rcx
    14d4:	48 8d 0c 89          	lea    (%rcx,%rcx,4),%rcx
    14d8:	49 8d 3c cb          	lea    (%r11,%rcx,8),%rdi
    14dc:	8b 4f 18             	mov    0x18(%rdi),%ecx
    14df:	44 8b 4f 1c          	mov    0x1c(%rdi),%r9d
    14e3:	39 ce                	cmp    %ecx,%esi
    14e5:	41 89 c8             	mov    %ecx,%r8d
    14e8:	44 89 cf             	mov    %r9d,%edi
    14eb:	44 0f 4d c6          	cmovge %esi,%r8d
    14ef:	0f 4e ce             	cmovle %esi,%ecx
    14f2:	44 0f 4f c6          	cmovg  %esi,%r8d
    14f6:	44 39 ca             	cmp    %r9d,%edx
    14f9:	0f 4d fa             	cmovge %edx,%edi
    14fc:	0f 4f fa             	cmovg  %edx,%edi
    14ff:	41 0f 4f d1          	cmovg  %r9d,%edx
    1503:	83 f8 01             	cmp    $0x1,%eax
    1506:	0f 84 b8 0b 00 00    	je     20c4 <try_swap+0x1614>
    150c:	49 63 75 08          	movslq 0x8(%r13),%rsi
    1510:	48 8d 34 b6          	lea    (%rsi,%rsi,4),%rsi
    1514:	49 8d 34 f3          	lea    (%r11,%rsi,8),%rsi
    1518:	44 8b 56 18          	mov    0x18(%rsi),%r10d
    151c:	44 8b 4e 1c          	mov    0x1c(%rsi),%r9d
    1520:	44 89 c6             	mov    %r8d,%esi
    1523:	45 39 c2             	cmp    %r8d,%r10d
    1526:	41 0f 4d f2          	cmovge %r10d,%esi
    152a:	41 39 ca             	cmp    %ecx,%r10d
    152d:	41 0f 4c f0          	cmovl  %r8d,%esi
    1531:	44 39 d1             	cmp    %r10d,%ecx
    1534:	41 89 f8             	mov    %edi,%r8d
    1537:	41 0f 4f ca          	cmovg  %r10d,%ecx
    153b:	41 39 f9             	cmp    %edi,%r9d
    153e:	45 0f 4d c1          	cmovge %r9d,%r8d
    1542:	41 39 d1             	cmp    %edx,%r9d
    1545:	41 0f 4d f8          	cmovge %r8d,%edi
    1549:	44 39 ca             	cmp    %r9d,%edx
    154c:	41 0f 4f d1          	cmovg  %r9d,%edx
    1550:	83 f8 03             	cmp    $0x3,%eax
    1553:	75 44                	jne    1599 <try_swap+0xae9>
    1555:	4d 63 45 0c          	movslq 0xc(%r13),%r8
    1559:	41 89 f2             	mov    %esi,%r10d
    155c:	4f 8d 04 80          	lea    (%r8,%r8,4),%r8
    1560:	4f 8d 04 c3          	lea    (%r11,%r8,8),%r8
    1564:	45 8b 48 18          	mov    0x18(%r8),%r9d
    1568:	45 8b 40 1c          	mov    0x1c(%r8),%r8d
    156c:	41 39 f1             	cmp    %esi,%r9d
    156f:	45 0f 4d d1          	cmovge %r9d,%r10d
    1573:	41 39 c9             	cmp    %ecx,%r9d
    1576:	41 0f 4d f2          	cmovge %r10d,%esi
    157a:	44 39 c9             	cmp    %r9d,%ecx
    157d:	41 0f 4f c9          	cmovg  %r9d,%ecx
    1581:	41 39 f8             	cmp    %edi,%r8d
    1584:	41 89 f9             	mov    %edi,%r9d
    1587:	45 0f 4d c8          	cmovge %r8d,%r9d
    158b:	41 39 d0             	cmp    %edx,%r8d
    158e:	41 0f 4d f9          	cmovge %r9d,%edi
    1592:	44 39 c2             	cmp    %r8d,%edx
    1595:	41 0f 4f d0          	cmovg  %r8d,%edx
    1599:	44 8b 0d 00 00 00 00 	mov    0x0(%rip),%r9d        # 15a0 <try_swap+0xaf0>
    15a0:	41 b8 01 00 00 00    	mov    $0x1,%r8d
    15a6:	44 39 c9             	cmp    %r9d,%ecx
    15a9:	41 0f 4f c9          	cmovg  %r9d,%ecx
    15ad:	85 c9                	test   %ecx,%ecx
    15af:	41 0f 4e c8          	cmovle %r8d,%ecx
    15b3:	89 4d 00             	mov    %ecx,0x0(%rbp)
    15b6:	8b 0d 00 00 00 00    	mov    0x0(%rip),%ecx        # 15bc <try_swap+0xb0c>
    15bc:	39 ca                	cmp    %ecx,%edx
    15be:	0f 4f d1             	cmovg  %ecx,%edx
    15c1:	85 d2                	test   %edx,%edx
    15c3:	41 0f 4e d0          	cmovle %r8d,%edx
    15c7:	44 39 ce             	cmp    %r9d,%esi
    15ca:	41 0f 4f f1          	cmovg  %r9d,%esi
    15ce:	89 55 08             	mov    %edx,0x8(%rbp)
    15d1:	85 f6                	test   %esi,%esi
    15d3:	41 0f 4e f0          	cmovle %r8d,%esi
    15d7:	39 cf                	cmp    %ecx,%edi
    15d9:	0f 4f f9             	cmovg  %ecx,%edi
    15dc:	89 75 04             	mov    %esi,0x4(%rbp)
    15df:	85 ff                	test   %edi,%edi
    15e1:	41 0f 4e f8          	cmovle %r8d,%edi
    15e5:	83 bc 24 80 00 00 00 	cmpl   $0x1,0x80(%rsp)
    15ec:	01 
    15ed:	89 7d 0c             	mov    %edi,0xc(%rbp)
    15f0:	74 46                	je     1638 <try_swap+0xb88>
    15f2:	48 c1 e3 02          	shl    $0x2,%rbx
    15f6:	48 89 de             	mov    %rbx,%rsi
    15f9:	48 03 35 00 00 00 00 	add    0x0(%rip),%rsi        # 1600 <try_swap+0xb50>
    1600:	e9 00 fc ff ff       	jmpq   1205 <try_swap+0x755>
    1605:	0f 1f 00             	nopl   (%rax)
    1608:	49 83 c1 01          	add    $0x1,%r9
    160c:	49 63 c5             	movslq %r13d,%rax
    160f:	41 83 c5 01          	add    $0x1,%r13d
    1613:	45 39 ce             	cmp    %r9d,%r14d
    1616:	44 89 04 82          	mov    %r8d,(%rdx,%rax,4)
    161a:	c7 04 81 01 00 00 00 	movl   $0x1,(%rcx,%rax,4)
    1621:	c7 06 00 00 80 3f    	movl   $0x3f800000,(%rsi)
    1627:	0f 8f 73 fa ff ff    	jg     10a0 <try_swap+0x5f0>
    162d:	e9 e7 fa ff ff       	jmpq   1119 <try_swap+0x669>
    1632:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    1638:	48 c1 e3 04          	shl    $0x4,%rbx
    163c:	48 03 1d 00 00 00 00 	add    0x0(%rip),%rbx        # 1643 <try_swap+0xb93>
    1643:	83 f8 31             	cmp    $0x31,%eax
    1646:	48 89 da             	mov    %rbx,%rdx
    1649:	0f 8e 20 07 00 00    	jle    1d6f <try_swap+0x12bf>
    164f:	66 0f ef db          	pxor   %xmm3,%xmm3
    1653:	83 e8 31             	sub    $0x31,%eax
    1656:	f2 0f 2a d8          	cvtsi2sd %eax,%xmm3
    165a:	f2 0f 59 1d 00 00 00 	mulsd  0x0(%rip),%xmm3        # 1662 <try_swap+0xbb2>
    1661:	00 
    1662:	f2 0f 58 1d 00 00 00 	addsd  0x0(%rip),%xmm3        # 166a <try_swap+0xbba>
    1669:	00 
    166a:	f2 0f 5a db          	cvtsd2ss %xmm3,%xmm3
    166e:	66 0f ef c0          	pxor   %xmm0,%xmm0
    1672:	8b 8c 24 2c 01 00 00 	mov    0x12c(%rsp),%ecx
    1679:	66 0f ef f6          	pxor   %xmm6,%xmm6
    167d:	66 0f ef ff          	pxor   %xmm7,%xmm7
    1681:	f2 0f 2a 02          	cvtsi2sdl (%rdx),%xmm0
    1685:	f2 0f 5c 05 00 00 00 	subsd  0x0(%rip),%xmm0        # 168d <try_swap+0xbdd>
    168c:	00 
    168d:	66 0f ef c9          	pxor   %xmm1,%xmm1
    1691:	f3 0f 2a 0d 00 00 00 	cvtsi2ssl 0x0(%rip),%xmm1        # 1699 <try_swap+0xbe9>
    1698:	00 
    1699:	f2 0f 5a f0          	cvtsd2ss %xmm0,%xmm6
    169d:	66 0f ef c0          	pxor   %xmm0,%xmm0
    16a1:	f2 0f 2a 42 04       	cvtsi2sdl 0x4(%rdx),%xmm0
    16a6:	f2 0f 58 05 00 00 00 	addsd  0x0(%rip),%xmm0        # 16ae <try_swap+0xbfe>
    16ad:	00 
    16ae:	44 0f 28 c6          	movaps %xmm6,%xmm8
    16b2:	66 0f ef f6          	pxor   %xmm6,%xmm6
    16b6:	f3 44 0f 11 44 24 08 	movss  %xmm8,0x8(%rsp)
    16bd:	f2 0f 5a f0          	cvtsd2ss %xmm0,%xmm6
    16c1:	66 0f ef c0          	pxor   %xmm0,%xmm0
    16c5:	f2 0f 2a 42 08       	cvtsi2sdl 0x8(%rdx),%xmm0
    16ca:	f2 0f 5c 05 00 00 00 	subsd  0x0(%rip),%xmm0        # 16d2 <try_swap+0xc22>
    16d1:	00 
    16d2:	f2 0f 5a f8          	cvtsd2ss %xmm0,%xmm7
    16d6:	66 0f ef c0          	pxor   %xmm0,%xmm0
    16da:	f3 0f 11 74 24 10    	movss  %xmm6,0x10(%rsp)
    16e0:	f2 0f 2a 42 0c       	cvtsi2sdl 0xc(%rdx),%xmm0
    16e5:	f2 0f 58 05 00 00 00 	addsd  0x0(%rip),%xmm0        # 16ed <try_swap+0xc3d>
    16ec:	00 
    16ed:	44 0f 28 cf          	movaps %xmm7,%xmm9
    16f1:	66 0f ef ff          	pxor   %xmm7,%xmm7
    16f5:	f3 44 0f 11 4c 24 18 	movss  %xmm9,0x18(%rsp)
    16fc:	f2 0f 5a f8          	cvtsd2ss %xmm0,%xmm7
    1700:	66 0f ef c0          	pxor   %xmm0,%xmm0
    1704:	f3 0f 2a 84 24 70 01 	cvtsi2ssl 0x170(%rsp),%xmm0
    170b:	00 00 
    170d:	f3 0f 11 7c 24 20    	movss  %xmm7,0x20(%rsp)
    1713:	0f 28 e8             	movaps %xmm0,%xmm5
    1716:	f3 0f 5e e9          	divss  %xmm1,%xmm5
    171a:	66 0f ef c9          	pxor   %xmm1,%xmm1
    171e:	f3 0f 2a 0d 00 00 00 	cvtsi2ssl 0x0(%rip),%xmm1        # 1726 <try_swap+0xc76>
    1725:	00 
    1726:	f3 0f 11 6c 24 28    	movss  %xmm5,0x28(%rsp)
    172c:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    1730:	41 0f 28 c8          	movaps %xmm8,%xmm1
    1734:	0f 28 d0             	movaps %xmm0,%xmm2
    1737:	f3 0f 11 44 24 30    	movss  %xmm0,0x30(%rsp)
    173d:	66 0f ef c0          	pxor   %xmm0,%xmm0
    1741:	f3 0f 5a c1          	cvtss2sd %xmm1,%xmm0
    1745:	0f 28 ce             	movaps %xmm6,%xmm1
    1748:	f2 0f 5c 05 00 00 00 	subsd  0x0(%rip),%xmm0        # 1750 <try_swap+0xca0>
    174f:	00 
    1750:	f3 41 0f 5c c8       	subss  %xmm8,%xmm1
    1755:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    1759:	66 0f ef c0          	pxor   %xmm0,%xmm0
    175d:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    1761:	f3 0f 59 c5          	mulss  %xmm5,%xmm0
    1765:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
    1769:	66 0f ef c0          	pxor   %xmm0,%xmm0
    176d:	f3 0f 5a c6          	cvtss2sd %xmm6,%xmm0
    1771:	f2 0f 5c 05 00 00 00 	subsd  0x0(%rip),%xmm0        # 1779 <try_swap+0xcc9>
    1778:	00 
    1779:	89 c6                	mov    %eax,%esi
    177b:	89 44 24 70          	mov    %eax,0x70(%rsp)
    177f:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    1783:	66 0f ef c0          	pxor   %xmm0,%xmm0
    1787:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    178b:	f3 0f 59 c5          	mulss  %xmm5,%xmm0
    178f:	41 0f 28 e9          	movaps %xmm9,%xmm5
    1793:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
    1797:	66 0f ef c0          	pxor   %xmm0,%xmm0
    179b:	f3 0f 5a c5          	cvtss2sd %xmm5,%xmm0
    179f:	f2 0f 5c 05 00 00 00 	subsd  0x0(%rip),%xmm0        # 17a7 <try_swap+0xcf7>
    17a6:	00 
    17a7:	39 84 24 70 01 00 00 	cmp    %eax,0x170(%rsp)
    17ae:	0f 4e c1             	cmovle %ecx,%eax
    17b1:	89 c3                	mov    %eax,%ebx
    17b3:	89 84 24 8c 00 00 00 	mov    %eax,0x8c(%rsp)
    17ba:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    17be:	66 0f ef c0          	pxor   %xmm0,%xmm0
    17c2:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    17c6:	f3 0f 59 c2          	mulss  %xmm2,%xmm0
    17ca:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
    17ce:	66 0f ef c0          	pxor   %xmm0,%xmm0
    17d2:	f3 0f 5a c7          	cvtss2sd %xmm7,%xmm0
    17d6:	f2 0f 5c 05 00 00 00 	subsd  0x0(%rip),%xmm0        # 17de <try_swap+0xd2e>
    17dd:	00 
    17de:	89 c7                	mov    %eax,%edi
    17e0:	89 84 24 a8 00 00 00 	mov    %eax,0xa8(%rsp)
    17e7:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    17eb:	66 0f ef c0          	pxor   %xmm0,%xmm0
    17ef:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    17f3:	f3 0f 59 c2          	mulss  %xmm2,%xmm0
    17f7:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
    17fb:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 1803 <try_swap+0xd53>
    1802:	00 
    1803:	0f 28 f0             	movaps %xmm0,%xmm6
    1806:	f3 0f 5e f1          	divss  %xmm1,%xmm6
    180a:	0f 28 cf             	movaps %xmm7,%xmm1
    180d:	f3 41 0f 5c c9       	subss  %xmm9,%xmm1
    1812:	39 84 24 70 01 00 00 	cmp    %eax,0x170(%rsp)
    1819:	0f 4e c1             	cmovle %ecx,%eax
    181c:	39 de                	cmp    %ebx,%esi
    181e:	89 04 24             	mov    %eax,(%rsp)
    1821:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    1825:	f3 0f 11 74 24 38    	movss  %xmm6,0x38(%rsp)
    182b:	f3 0f 11 44 24 40    	movss  %xmm0,0x40(%rsp)
    1831:	0f 8f 31 02 00 00    	jg     1a68 <try_swap+0xfb8>
    1837:	48 63 c6             	movslq %esi,%rax
    183a:	4c 8d 2c c5 00 00 00 	lea    0x0(,%rax,8),%r13
    1841:	00 
    1842:	4c 8d 34 85 04 00 00 	lea    0x4(,%rax,4),%r14
    1849:	00 
    184a:	48 63 c7             	movslq %edi,%rax
    184d:	48 89 c3             	mov    %rax,%rbx
    1850:	48 8d 04 85 04 00 00 	lea    0x4(,%rax,4),%rax
    1857:	00 
    1858:	48 c1 e3 04          	shl    $0x4,%rbx
    185c:	48 89 84 24 90 00 00 	mov    %rax,0x90(%rsp)
    1863:	00 
    1864:	4c 89 f0             	mov    %r14,%rax
    1867:	48 89 9c 24 98 00 00 	mov    %rbx,0x98(%rsp)
    186e:	00 
    186f:	4d 89 ee             	mov    %r13,%r14
    1872:	49 89 c5             	mov    %rax,%r13
    1875:	0f 1f 00             	nopl   (%rax)
    1878:	8b 84 24 a8 00 00 00 	mov    0xa8(%rsp),%eax
    187f:	8b 1c 24             	mov    (%rsp),%ebx
    1882:	39 d8                	cmp    %ebx,%eax
    1884:	0f 8f b1 01 00 00    	jg     1a3b <try_swap+0xf8b>
    188a:	49 8d 6d fc          	lea    -0x4(%r13),%rbp
    188e:	41 89 c7             	mov    %eax,%r15d
    1891:	48 8b 9c 24 90 00 00 	mov    0x90(%rsp),%rbx
    1898:	00 
    1899:	4c 8b a4 24 98 00 00 	mov    0x98(%rsp),%r12
    18a0:	00 
    18a1:	48 89 e8             	mov    %rbp,%rax
    18a4:	4c 89 ed             	mov    %r13,%rbp
    18a7:	49 89 c5             	mov    %rax,%r13
    18aa:	e9 8f 00 00 00       	jmpq   193e <try_swap+0xe8e>
    18af:	90                   	nop
    18b0:	66 0f ef c0          	pxor   %xmm0,%xmm0
    18b4:	f3 0f 5a c2          	cvtss2sd %xmm2,%xmm0
    18b8:	66 0f 2e e0          	ucomisd %xmm0,%xmm4
    18bc:	0f 87 27 01 00 00    	ja     19e9 <try_swap+0xf39>
    18c2:	0f 28 c2             	movaps %xmm2,%xmm0
    18c5:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 18cc <try_swap+0xe1c>
    18cc:	4c 89 e1             	mov    %r12,%rcx
    18cf:	4c 89 e7             	mov    %r12,%rdi
    18d2:	41 83 c7 01          	add    $0x1,%r15d
    18d6:	49 83 c4 10          	add    $0x10,%r12
    18da:	f3 0f 59 c3          	mulss  %xmm3,%xmm0
    18de:	48 83 c3 04          	add    $0x4,%rbx
    18e2:	4a 03 0c 30          	add    (%rax,%r14,1),%rcx
    18e6:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
    18ea:	f3 0f 59 cb          	mulss  %xmm3,%xmm1
    18ee:	f3 0f 10 69 08       	movss  0x8(%rcx),%xmm5
    18f3:	48 89 c8             	mov    %rcx,%rax
    18f6:	f3 0f 59 44 24 40    	mulss  0x40(%rsp),%xmm0
    18fc:	f3 0f 59 ca          	mulss  %xmm2,%xmm1
    1900:	f3 0f 59 4c 24 38    	mulss  0x38(%rsp),%xmm1
    1906:	f3 0f 59 44 24 28    	mulss  0x28(%rsp),%xmm0
    190c:	f3 0f 59 4c 24 30    	mulss  0x30(%rsp),%xmm1
    1912:	f3 0f 5c e8          	subss  %xmm0,%xmm5
    1916:	f3 0f 11 68 08       	movss  %xmm5,0x8(%rax)
    191b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 1922 <try_swap+0xe72>
    1922:	4a 03 3c 30          	add    (%rax,%r14,1),%rdi
    1926:	44 3b 3c 24          	cmp    (%rsp),%r15d
    192a:	f3 0f 10 47 08       	movss  0x8(%rdi),%xmm0
    192f:	f3 0f 5c c1          	subss  %xmm1,%xmm0
    1933:	f3 0f 11 47 08       	movss  %xmm0,0x8(%rdi)
    1938:	0f 8f fa 00 00 00    	jg     1a38 <try_swap+0xf88>
    193e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 1945 <try_swap+0xe95>
    1945:	f3 0f 10 4c 24 10    	movss  0x10(%rsp),%xmm1
    194b:	f3 0f 10 54 24 20    	movss  0x20(%rsp),%xmm2
    1951:	f3 42 0f 10 2c 28    	movss  (%rax,%r13,1),%xmm5
    1957:	f3 0f 5d 0c 28       	minss  (%rax,%rbp,1),%xmm1
    195c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 1963 <try_swap+0xeb3>
    1963:	f3 0f 5f 6c 24 08    	maxss  0x8(%rsp),%xmm5
    1969:	f3 0f 10 44 18 fc    	movss  -0x4(%rax,%rbx,1),%xmm0
    196f:	f3 0f 5d 14 18       	minss  (%rax,%rbx,1),%xmm2
    1974:	f3 0f 5f 44 24 18    	maxss  0x18(%rsp),%xmm0
    197a:	f3 0f 5c cd          	subss  %xmm5,%xmm1
    197e:	f3 0f 5c d0          	subss  %xmm0,%xmm2
    1982:	66 0f ef c0          	pxor   %xmm0,%xmm0
    1986:	f3 0f 5a c1          	cvtss2sd %xmm1,%xmm0
    198a:	66 0f 2e e0          	ucomisd %xmm0,%xmm4
    198e:	0f 86 1c ff ff ff    	jbe    18b0 <try_swap+0xe00>
    1994:	8b 74 24 48          	mov    0x48(%rsp),%esi
    1998:	bf 00 00 00 00       	mov    $0x0,%edi
    199d:	b8 01 00 00 00       	mov    $0x1,%eax
    19a2:	f3 0f 11 5c 24 64    	movss  %xmm3,0x64(%rsp)
    19a8:	f2 0f 11 64 24 58    	movsd  %xmm4,0x58(%rsp)
    19ae:	f3 0f 11 54 24 60    	movss  %xmm2,0x60(%rsp)
    19b4:	f3 0f 11 4c 24 54    	movss  %xmm1,0x54(%rsp)
    19ba:	e8 00 00 00 00       	callq  19bf <try_swap+0xf0f>
    19bf:	66 0f ef c0          	pxor   %xmm0,%xmm0
    19c3:	f3 0f 10 54 24 60    	movss  0x60(%rsp),%xmm2
    19c9:	f2 0f 10 64 24 58    	movsd  0x58(%rsp),%xmm4
    19cf:	f3 0f 5a c2          	cvtss2sd %xmm2,%xmm0
    19d3:	f3 0f 10 5c 24 64    	movss  0x64(%rsp),%xmm3
    19d9:	66 0f 2e e0          	ucomisd %xmm0,%xmm4
    19dd:	f3 0f 10 4c 24 54    	movss  0x54(%rsp),%xmm1
    19e3:	0f 86 d9 fe ff ff    	jbe    18c2 <try_swap+0xe12>
    19e9:	8b 74 24 48          	mov    0x48(%rsp),%esi
    19ed:	bf 00 00 00 00       	mov    $0x0,%edi
    19f2:	b8 01 00 00 00       	mov    $0x1,%eax
    19f7:	f3 0f 11 5c 24 64    	movss  %xmm3,0x64(%rsp)
    19fd:	f2 0f 11 64 24 58    	movsd  %xmm4,0x58(%rsp)
    1a03:	f3 0f 11 54 24 60    	movss  %xmm2,0x60(%rsp)
    1a09:	f3 0f 11 4c 24 54    	movss  %xmm1,0x54(%rsp)
    1a0f:	e8 00 00 00 00       	callq  1a14 <try_swap+0xf64>
    1a14:	f3 0f 10 5c 24 64    	movss  0x64(%rsp),%xmm3
    1a1a:	f2 0f 10 64 24 58    	movsd  0x58(%rsp),%xmm4
    1a20:	f3 0f 10 54 24 60    	movss  0x60(%rsp),%xmm2
    1a26:	f3 0f 10 4c 24 54    	movss  0x54(%rsp),%xmm1
    1a2c:	e9 91 fe ff ff       	jmpq   18c2 <try_swap+0xe12>
    1a31:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1a38:	49 89 ed             	mov    %rbp,%r13
    1a3b:	83 44 24 70 01       	addl   $0x1,0x70(%rsp)
    1a40:	49 83 c6 08          	add    $0x8,%r14
    1a44:	49 83 c5 04          	add    $0x4,%r13
    1a48:	8b 44 24 70          	mov    0x70(%rsp),%eax
    1a4c:	3b 84 24 8c 00 00 00 	cmp    0x8c(%rsp),%eax
    1a53:	0f 8e 1f fe ff ff    	jle    1878 <try_swap+0xdc8>
    1a59:	48 8b ac 24 a0 00 00 	mov    0xa0(%rsp),%rbp
    1a60:	00 
    1a61:	48 03 2d 00 00 00 00 	add    0x0(%rip),%rbp        # 1a68 <try_swap+0xfb8>
    1a68:	8b 94 24 70 01 00 00 	mov    0x170(%rsp),%edx
    1a6f:	8b 7c 24 48          	mov    0x48(%rsp),%edi
    1a73:	48 89 ee             	mov    %rbp,%rsi
    1a76:	f2 0f 11 24 24       	movsd  %xmm4,(%rsp)
    1a7b:	e8 10 ec ff ff       	callq  690 <update_region_occ.constprop.5>
    1a80:	f2 0f 10 24 24       	movsd  (%rsp),%xmm4
    1a85:	e9 ff f7 ff ff       	jmpq   1289 <try_swap+0x7d9>
    1a8a:	83 bc 24 80 00 00 00 	cmpl   $0x1,0x80(%rsp)
    1a91:	01 
    1a92:	44 8b b4 24 ac 00 00 	mov    0xac(%rsp),%r14d
    1a99:	00 
    1a9a:	44 8b bc 24 b0 00 00 	mov    0xb0(%rsp),%r15d
    1aa1:	00 
    1aa2:	0f 84 ba 04 00 00    	je     1f62 <try_swap+0x14b2>
    1aa8:	8b 84 24 80 01 00 00 	mov    0x180(%rsp),%eax
    1aaf:	83 e8 01             	sub    $0x1,%eax
    1ab2:	83 f8 01             	cmp    $0x1,%eax
    1ab5:	89 44 24 20          	mov    %eax,0x20(%rsp)
    1ab9:	0f 86 b6 07 00 00    	jbe    2275 <try_swap+0x17c5>
    1abf:	f3 0f 10 a4 24 b4 00 	movss  0xb4(%rsp),%xmm4
    1ac6:	00 00 
    1ac8:	0f 2e 64 24 74       	ucomiss 0x74(%rsp),%xmm4
    1acd:	0f 83 f9 05 00 00    	jae    20cc <try_swap+0x161c>
    1ad3:	0f 28 d4             	movaps %xmm4,%xmm2
    1ad6:	f3 0f 10 64 24 74    	movss  0x74(%rsp),%xmm4
    1adc:	f3 0f 11 64 24 18    	movss  %xmm4,0x18(%rsp)
    1ae2:	0f 28 ca             	movaps %xmm2,%xmm1
    1ae5:	f3 0f 10 a4 24 08 01 	movss  0x108(%rsp),%xmm4
    1aec:	00 00 
    1aee:	0f 2e a4 24 b4 00 00 	ucomiss 0xb4(%rsp),%xmm4
    1af5:	00 
    1af6:	0f 8a 89 02 00 00    	jp     1d85 <try_swap+0x12d5>
    1afc:	0f 85 83 02 00 00    	jne    1d85 <try_swap+0x12d5>
    1b02:	8b 5c 24 7c          	mov    0x7c(%rsp),%ebx
    1b06:	85 db                	test   %ebx,%ebx
    1b08:	7e 39                	jle    1b43 <try_swap+0x1093>
    1b0a:	89 da                	mov    %ebx,%edx
    1b0c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 1b13 <try_swap+0x1063>
    1b13:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 1b1a <try_swap+0x106a>
    1b1a:	83 ea 01             	sub    $0x1,%edx
    1b1d:	48 8d 0c 95 04 00 00 	lea    0x4(,%rdx,4),%rcx
    1b24:	00 
    1b25:	48 01 c1             	add    %rax,%rcx
    1b28:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    1b2f:	00 
    1b30:	48 63 10             	movslq (%rax),%rdx
    1b33:	48 83 c0 04          	add    $0x4,%rax
    1b37:	48 39 c8             	cmp    %rcx,%rax
    1b3a:	c7 04 96 00 00 80 bf 	movl   $0xbf800000,(%rsi,%rdx,4)
    1b41:	75 ed                	jne    1b30 <try_swap+0x1080>
    1b43:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 1b4a <try_swap+0x109a>
    1b4a:	48 8b 84 24 b8 00 00 	mov    0xb8(%rsp),%rax
    1b51:	00 
    1b52:	8b 9c 24 88 00 00 00 	mov    0x88(%rsp),%ebx
    1b59:	48 01 d0             	add    %rdx,%rax
    1b5c:	89 58 18             	mov    %ebx,0x18(%rax)
    1b5f:	8b 9c 24 84 00 00 00 	mov    0x84(%rsp),%ebx
    1b66:	89 58 1c             	mov    %ebx,0x1c(%rax)
    1b69:	8b 9c 24 c8 00 00 00 	mov    0xc8(%rsp),%ebx
    1b70:	89 58 20             	mov    %ebx,0x20(%rax)
    1b73:	48 63 84 24 c4 00 00 	movslq 0xc4(%rsp),%rax
    1b7a:	00 
    1b7b:	83 f8 ff             	cmp    $0xffffffff,%eax
    1b7e:	74 1a                	je     1b9a <try_swap+0x10ea>
    1b80:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    1b84:	8b 9c 24 28 01 00 00 	mov    0x128(%rsp),%ebx
    1b8b:	48 8d 04 c2          	lea    (%rdx,%rax,8),%rax
    1b8f:	44 89 78 18          	mov    %r15d,0x18(%rax)
    1b93:	44 89 70 1c          	mov    %r14d,0x1c(%rax)
    1b97:	89 58 20             	mov    %ebx,0x20(%rax)
    1b9a:	83 bc 24 80 00 00 00 	cmpl   $0x1,0x80(%rsp)
    1ba1:	01 
    1ba2:	0f 84 57 0f 00 00    	je     2aff <try_swap+0x204f>
    1ba8:	31 c0                	xor    %eax,%eax
    1baa:	48 81 c4 38 01 00 00 	add    $0x138,%rsp
    1bb1:	5b                   	pop    %rbx
    1bb2:	5d                   	pop    %rbp
    1bb3:	41 5c                	pop    %r12
    1bb5:	41 5d                	pop    %r13
    1bb7:	41 5e                	pop    %r14
    1bb9:	41 5f                	pop    %r15
    1bbb:	c3                   	retq   
    1bbc:	8b 7c 24 38          	mov    0x38(%rsp),%edi
    1bc0:	e8 00 00 00 00       	callq  1bc5 <try_swap+0x1115>
    1bc5:	8b 74 24 30          	mov    0x30(%rsp),%esi
    1bc9:	44 8d 24 06          	lea    (%rsi,%rax,1),%r12d
    1bcd:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1bd3 <try_swap+0x1123>
    1bd3:	41 39 c4             	cmp    %eax,%r12d
    1bd6:	0f 8f 82 04 00 00    	jg     205e <try_swap+0x15ae>
    1bdc:	45 85 e4             	test   %r12d,%r12d
    1bdf:	44 89 f2             	mov    %r14d,%edx
    1be2:	0f 8f e4 f1 ff ff    	jg     dcc <try_swap+0x31c>
    1be8:	44 8b 25 00 00 00 00 	mov    0x0(%rip),%r12d        # 1bef <try_swap+0x113f>
    1bef:	8b 7c 24 48          	mov    0x48(%rsp),%edi
    1bf3:	e8 00 00 00 00       	callq  1bf8 <try_swap+0x1148>
    1bf8:	44 89 e2             	mov    %r12d,%edx
    1bfb:	45 31 e4             	xor    %r12d,%r12d
    1bfe:	29 c2                	sub    %eax,%edx
    1c00:	e9 be f1 ff ff       	jmpq   dc3 <try_swap+0x313>
    1c05:	44 8b 25 00 00 00 00 	mov    0x0(%rip),%r12d        # 1c0c <try_swap+0x115c>
    1c0c:	8b 7c 24 40          	mov    0x40(%rsp),%edi
    1c10:	8d 50 01             	lea    0x1(%rax),%edx
    1c13:	89 54 24 54          	mov    %edx,0x54(%rsp)
    1c17:	e8 00 00 00 00       	callq  1c1c <try_swap+0x116c>
    1c1c:	8b 54 24 54          	mov    0x54(%rsp),%edx
    1c20:	41 29 c4             	sub    %eax,%r12d
    1c23:	e9 9b f1 ff ff       	jmpq   dc3 <try_swap+0x313>
    1c28:	8b 7c 24 40          	mov    0x40(%rsp),%edi
    1c2c:	8d 50 01             	lea    0x1(%rax),%edx
    1c2f:	89 54 24 54          	mov    %edx,0x54(%rsp)
    1c33:	e8 00 00 00 00       	callq  1c38 <try_swap+0x1188>
    1c38:	8b 54 24 54          	mov    0x54(%rsp),%edx
    1c3c:	44 8d 60 01          	lea    0x1(%rax),%r12d
    1c40:	e9 7e f1 ff ff       	jmpq   dc3 <try_swap+0x313>
    1c45:	48 63 84 24 c0 00 00 	movslq 0xc0(%rsp),%rax
    1c4c:	00 
    1c4d:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1c54 <try_swap+0x11a4>
    1c54:	48 89 84 24 d8 00 00 	mov    %rax,0xd8(%rsp)
    1c5b:	00 
    1c5c:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    1c60:	48 c1 e0 03          	shl    $0x3,%rax
    1c64:	48 89 84 24 b8 00 00 	mov    %rax,0xb8(%rsp)
    1c6b:	00 
    1c6c:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 1c73 <try_swap+0x11c3>
    1c73:	48 8b 58 08          	mov    0x8(%rax),%rbx
    1c77:	48 39 cb             	cmp    %rcx,%rbx
    1c7a:	0f 85 47 ef ff ff    	jne    bc7 <try_swap+0x117>
    1c80:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1c86 <try_swap+0x11d6>
    1c86:	8d 78 ff             	lea    -0x1(%rax),%edi
    1c89:	e8 00 00 00 00       	callq  1c8e <try_swap+0x11de>
    1c8e:	48 63 f0             	movslq %eax,%rsi
    1c91:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1c98 <try_swap+0x11e8>
    1c98:	48 8d 14 b6          	lea    (%rsi,%rsi,4),%rdx
    1c9c:	48 c1 e2 03          	shl    $0x3,%rdx
    1ca0:	48 89 d7             	mov    %rdx,%rdi
    1ca3:	48 03 3d 00 00 00 00 	add    0x0(%rip),%rdi        # 1caa <try_swap+0x11fa>
    1caa:	48 8b 5f 08          	mov    0x8(%rdi),%rbx
    1cae:	48 39 cb             	cmp    %rcx,%rbx
    1cb1:	74 cd                	je     1c80 <try_swap+0x11d0>
    1cb3:	89 84 24 c0 00 00 00 	mov    %eax,0xc0(%rsp)
    1cba:	48 89 b4 24 d8 00 00 	mov    %rsi,0xd8(%rsp)
    1cc1:	00 
    1cc2:	48 89 f8             	mov    %rdi,%rax
    1cc5:	48 89 94 24 b8 00 00 	mov    %rdx,0xb8(%rsp)
    1ccc:	00 
    1ccd:	e9 f5 ee ff ff       	jmpq   bc7 <try_swap+0x117>
    1cd2:	48 c7 84 24 f8 00 00 	movq   $0x0,0xf8(%rsp)
    1cd9:	00 00 00 00 00 
    1cde:	c7 84 24 28 01 00 00 	movl   $0x0,0x128(%rsp)
    1ce5:	00 00 00 00 
    1ce9:	48 8b 9c 24 f8 00 00 	mov    0xf8(%rsp),%rbx
    1cf0:	00 
    1cf1:	e9 55 f2 ff ff       	jmpq   f4b <try_swap+0x49b>
    1cf6:	8b 7c 24 48          	mov    0x48(%rsp),%edi
    1cfa:	44 8d 60 01          	lea    0x1(%rax),%r12d
    1cfe:	e8 00 00 00 00       	callq  1d03 <try_swap+0x1253>
    1d03:	8d 50 01             	lea    0x1(%rax),%edx
    1d06:	e9 b8 f0 ff ff       	jmpq   dc3 <try_swap+0x313>
    1d0b:	bf 00 00 00 00       	mov    $0x0,%edi
    1d10:	e8 00 00 00 00       	callq  1d15 <try_swap+0x1265>
    1d15:	bf 01 00 00 00       	mov    $0x1,%edi
    1d1a:	e8 00 00 00 00       	callq  1d1f <try_swap+0x126f>
    1d1f:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1d25 <try_swap+0x1275>
    1d25:	8d 78 ff             	lea    -0x1(%rax),%edi
    1d28:	e8 00 00 00 00       	callq  1d2d <try_swap+0x127d>
    1d2d:	8d 50 01             	lea    0x1(%rax),%edx
    1d30:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1d36 <try_swap+0x1286>
    1d36:	44 8d 60 01          	lea    0x1(%rax),%r12d
    1d3a:	e9 84 f0 ff ff       	jmpq   dc3 <try_swap+0x313>
    1d3f:	8b 73 10             	mov    0x10(%rbx),%esi
    1d42:	44 89 c0             	mov    %r8d,%eax
    1d45:	29 e8                	sub    %ebp,%eax
    1d47:	99                   	cltd   
    1d48:	f7 fe                	idiv   %esi
    1d4a:	83 f8 01             	cmp    $0x1,%eax
    1d4d:	0f 8e 55 fe ff ff    	jle    1ba8 <try_swap+0x10f8>
    1d53:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1d59 <try_swap+0x12a9>
    1d59:	89 c2                	mov    %eax,%edx
    1d5b:	c1 ea 1f             	shr    $0x1f,%edx
    1d5e:	01 d0                	add    %edx,%eax
    1d60:	d1 f8                	sar    %eax
    1d62:	39 c6                	cmp    %eax,%esi
    1d64:	0f 8e 79 ef ff ff    	jle    ce3 <try_swap+0x233>
    1d6a:	e9 39 fe ff ff       	jmpq   1ba8 <try_swap+0x10f8>
    1d6f:	f3 0f 10 1c 85 00 00 	movss  0x0(,%rax,4),%xmm3
    1d76:	00 00 
    1d78:	e9 f1 f8 ff ff       	jmpq   166e <try_swap+0xbbe>
    1d7d:	45 31 ff             	xor    %r15d,%r15d
    1d80:	e9 5e ef ff ff       	jmpq   ce3 <try_swap+0x233>
    1d85:	f3 0f 11 4c 24 10    	movss  %xmm1,0x10(%rsp)
    1d8b:	f3 0f 11 54 24 08    	movss  %xmm2,0x8(%rsp)
    1d91:	e8 00 00 00 00       	callq  1d96 <try_swap+0x12e6>
    1d96:	f3 0f 11 04 24       	movss  %xmm0,(%rsp)
    1d9b:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 1da3 <try_swap+0x12f3>
    1da2:	00 
    1da3:	f3 0f 10 64 24 74    	movss  0x74(%rsp),%xmm4
    1da9:	0f 57 c4             	xorps  %xmm4,%xmm0
    1dac:	f3 0f 5e 84 24 08 01 	divss  0x108(%rsp),%xmm0
    1db3:	00 00 
    1db5:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    1db9:	e8 00 00 00 00       	callq  1dbe <try_swap+0x130e>
    1dbe:	f2 0f 5a c0          	cvtsd2ss %xmm0,%xmm0
    1dc2:	0f 2e 04 24          	ucomiss (%rsp),%xmm0
    1dc6:	f3 0f 10 54 24 08    	movss  0x8(%rsp),%xmm2
    1dcc:	f3 0f 10 4c 24 10    	movss  0x10(%rsp),%xmm1
    1dd2:	0f 86 2a fd ff ff    	jbe    1b02 <try_swap+0x1052>
    1dd8:	48 8b 84 24 e0 00 00 	mov    0xe0(%rsp),%rax
    1ddf:	00 
    1de0:	f3 0f 10 44 24 74    	movss  0x74(%rsp),%xmm0
    1de6:	83 7c 24 20 01       	cmpl   $0x1,0x20(%rsp)
    1deb:	f3 0f 58 00          	addss  (%rax),%xmm0
    1def:	f3 0f 11 00          	movss  %xmm0,(%rax)
    1df3:	48 8b 84 24 d0 00 00 	mov    0xd0(%rsp),%rax
    1dfa:	00 
    1dfb:	f3 0f 10 44 24 18    	movss  0x18(%rsp),%xmm0
    1e01:	f3 0f 58 00          	addss  (%rax),%xmm0
    1e05:	f3 0f 11 00          	movss  %xmm0,(%rax)
    1e09:	0f 86 9c 08 00 00    	jbe    26ab <try_swap+0x1bfb>
    1e0f:	48 8b 2d 00 00 00 00 	mov    0x0(%rip),%rbp        # 1e16 <try_swap+0x1366>
    1e16:	8b 44 24 7c          	mov    0x7c(%rsp),%eax
    1e1a:	85 c0                	test   %eax,%eax
    1e1c:	0f 8e cf 00 00 00    	jle    1ef1 <try_swap+0x1441>
    1e22:	4c 8b 15 00 00 00 00 	mov    0x0(%rip),%r10        # 1e29 <try_swap+0x1379>
    1e29:	4c 8b 0d 00 00 00 00 	mov    0x0(%rip),%r9        # 1e30 <try_swap+0x1380>
    1e30:	31 d2                	xor    %edx,%edx
    1e32:	4c 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11        # 1e39 <try_swap+0x1389>
    1e39:	31 ff                	xor    %edi,%edi
    1e3b:	44 8b 44 24 7c       	mov    0x7c(%rsp),%r8d
    1e40:	e9 8c 00 00 00       	jmpq   1ed1 <try_swap+0x1421>
    1e45:	0f 1f 00             	nopl   (%rax)
    1e48:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1e4f <try_swap+0x139f>
    1e4f:	48 63 f7             	movslq %edi,%rsi
    1e52:	48 89 c3             	mov    %rax,%rbx
    1e55:	48 c1 e6 04          	shl    $0x4,%rsi
    1e59:	48 c1 e3 04          	shl    $0x4,%rbx
    1e5d:	4c 8b 25 00 00 00 00 	mov    0x0(%rip),%r12        # 1e64 <try_swap+0x13b4>
    1e64:	4c 8b 2c 31          	mov    (%rcx,%rsi,1),%r13
    1e68:	4c 8b 74 31 08       	mov    0x8(%rcx,%rsi,1),%r14
    1e6d:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1e74 <try_swap+0x13c4>
    1e74:	4c 89 2c 19          	mov    %r13,(%rcx,%rbx,1)
    1e78:	4c 89 74 19 08       	mov    %r14,0x8(%rcx,%rbx,1)
    1e7d:	48 8d 0c 80          	lea    (%rax,%rax,4),%rcx
    1e81:	49 8d 0c cc          	lea    (%r12,%rcx,8),%rcx
    1e85:	83 79 08 03          	cmpl   $0x3,0x8(%rcx)
    1e89:	7e 20                	jle    1eab <try_swap+0x13fb>
    1e8b:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1e92 <try_swap+0x13e2>
    1e92:	4c 8b 2c 31          	mov    (%rcx,%rsi,1),%r13
    1e96:	4c 8b 74 31 08       	mov    0x8(%rcx,%rsi,1),%r14
    1e9b:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1ea2 <try_swap+0x13f2>
    1ea2:	4c 89 2c 19          	mov    %r13,(%rcx,%rbx,1)
    1ea6:	4c 89 74 19 08       	mov    %r14,0x8(%rcx,%rbx,1)
    1eab:	49 8d 0c 83          	lea    (%r11,%rax,4),%rcx
    1eaf:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 1eb6 <try_swap+0x1406>
    1eb6:	48 83 c2 01          	add    $0x1,%rdx
    1eba:	83 c7 01             	add    $0x1,%edi
    1ebd:	41 39 d0             	cmp    %edx,%r8d
    1ec0:	f3 0f 10 01          	movss  (%rcx),%xmm0
    1ec4:	f3 0f 11 04 86       	movss  %xmm0,(%rsi,%rax,4)
    1ec9:	c7 01 00 00 80 bf    	movl   $0xbf800000,(%rcx)
    1ecf:	7e 20                	jle    1ef1 <try_swap+0x1441>
    1ed1:	41 83 3c 91 02       	cmpl   $0x2,(%r9,%rdx,4)
    1ed6:	49 63 04 92          	movslq (%r10,%rdx,4),%rax
    1eda:	0f 85 68 ff ff ff    	jne    1e48 <try_swap+0x1398>
    1ee0:	48 83 c2 01          	add    $0x1,%rdx
    1ee4:	41 c7 04 83 00 00 80 	movl   $0xbf800000,(%r11,%rax,4)
    1eeb:	bf 
    1eec:	41 39 d0             	cmp    %edx,%r8d
    1eef:	7f e0                	jg     1ed1 <try_swap+0x1421>
    1ef1:	48 8b 84 24 18 01 00 	mov    0x118(%rsp),%rax
    1ef8:	00 
    1ef9:	48 8b 94 24 20 01 00 	mov    0x120(%rsp),%rdx
    1f00:	00 
    1f01:	48 8b 9c 24 f8 00 00 	mov    0xf8(%rsp),%rbx
    1f08:	00 
    1f09:	8b b4 24 c0 00 00 00 	mov    0xc0(%rsp),%esi
    1f10:	48 03 54 c5 00       	add    0x0(%rbp,%rax,8),%rdx
    1f15:	48 8b 42 10          	mov    0x10(%rdx),%rax
    1f19:	89 34 18             	mov    %esi,(%rax,%rbx,1)
    1f1c:	48 63 b4 24 88 00 00 	movslq 0x88(%rsp),%rsi
    1f23:	00 
    1f24:	48 63 84 24 84 00 00 	movslq 0x84(%rsp),%rax
    1f2b:	00 
    1f2c:	8b 9c 24 c4 00 00 00 	mov    0xc4(%rsp),%ebx
    1f33:	83 fb ff             	cmp    $0xffffffff,%ebx
    1f36:	48 8d 0c 40          	lea    (%rax,%rax,2),%rcx
    1f3a:	48 8b 44 f5 00       	mov    0x0(%rbp,%rsi,8),%rax
    1f3f:	48 63 b4 24 c8 00 00 	movslq 0xc8(%rsp),%rsi
    1f46:	00 
    1f47:	48 8d 04 c8          	lea    (%rax,%rcx,8),%rax
    1f4b:	48 8b 48 10          	mov    0x10(%rax),%rcx
    1f4f:	89 1c b1             	mov    %ebx,(%rcx,%rsi,4)
    1f52:	0f 84 d0 02 00 00    	je     2228 <try_swap+0x1778>
    1f58:	b8 01 00 00 00       	mov    $0x1,%eax
    1f5d:	e9 48 fc ff ff       	jmpq   1baa <try_swap+0x10fa>
    1f62:	8b 94 24 70 01 00 00 	mov    0x170(%rsp),%edx
    1f69:	85 d2                	test   %edx,%edx
    1f6b:	0f 8e cb 10 00 00    	jle    303c <try_swap+0x258c>
    1f71:	8b 84 24 70 01 00 00 	mov    0x170(%rsp),%eax
    1f78:	48 8b 1d 00 00 00 00 	mov    0x0(%rip),%rbx        # 1f7f <try_swap+0x14cf>
    1f7f:	48 8b 2d 00 00 00 00 	mov    0x0(%rip),%rbp        # 1f86 <try_swap+0x14d6>
    1f86:	44 8d 60 ff          	lea    -0x1(%rax),%r12d
    1f8a:	41 89 c0             	mov    %eax,%r8d
    1f8d:	66 0f ef c0          	pxor   %xmm0,%xmm0
    1f91:	44 89 e7             	mov    %r12d,%edi
    1f94:	31 f6                	xor    %esi,%esi
    1f96:	48 c1 e7 04          	shl    $0x4,%rdi
    1f9a:	48 83 c7 14          	add    $0x14,%rdi
    1f9e:	0f 28 c8             	movaps %xmm0,%xmm1
    1fa1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1fa8:	48 8b 4c f5 00       	mov    0x0(%rbp,%rsi,8),%rcx
    1fad:	48 8b 14 f3          	mov    (%rbx,%rsi,8),%rdx
    1fb1:	48 8d 41 04          	lea    0x4(%rcx),%rax
    1fb5:	48 83 c2 04          	add    $0x4,%rdx
    1fb9:	48 01 f9             	add    %rdi,%rcx
    1fbc:	0f 1f 40 00          	nopl   0x0(%rax)
    1fc0:	f3 0f 10 52 04       	movss  0x4(%rdx),%xmm2
    1fc5:	f3 0f 10 42 fc       	movss  -0x4(%rdx),%xmm0
    1fca:	0f 2e c2             	ucomiss %xmm2,%xmm0
    1fcd:	f3 0f 59 12          	mulss  (%rdx),%xmm2
    1fd1:	77 04                	ja     1fd7 <try_swap+0x1527>
    1fd3:	f3 0f 59 d2          	mulss  %xmm2,%xmm2
    1fd7:	f3 0f 58 d1          	addss  %xmm1,%xmm2
    1fdb:	f3 0f 10 40 fc       	movss  -0x4(%rax),%xmm0
    1fe0:	f3 0f 10 48 04       	movss  0x4(%rax),%xmm1
    1fe5:	0f 2e c1             	ucomiss %xmm1,%xmm0
    1fe8:	f3 0f 59 08          	mulss  (%rax),%xmm1
    1fec:	77 04                	ja     1ff2 <try_swap+0x1542>
    1fee:	f3 0f 59 c9          	mulss  %xmm1,%xmm1
    1ff2:	48 83 c0 10          	add    $0x10,%rax
    1ff6:	48 83 c2 10          	add    $0x10,%rdx
    1ffa:	f3 0f 58 ca          	addss  %xmm2,%xmm1
    1ffe:	48 39 c8             	cmp    %rcx,%rax
    2001:	75 bd                	jne    1fc0 <try_swap+0x1510>
    2003:	48 83 c6 01          	add    $0x1,%rsi
    2007:	41 39 f0             	cmp    %esi,%r8d
    200a:	7f 9c                	jg     1fa8 <try_swap+0x14f8>
    200c:	0f 28 c1             	movaps %xmm1,%xmm0
    200f:	48 8b 84 24 d0 00 00 	mov    0xd0(%rsp),%rax
    2016:	00 
    2017:	f3 0f 5c 00          	subss  (%rax),%xmm0
    201b:	f3 0f 11 44 24 74    	movss  %xmm0,0x74(%rsp)
    2021:	e9 82 fa ff ff       	jmpq   1aa8 <try_swap+0xff8>
    2026:	8b 7c 24 18          	mov    0x18(%rsp),%edi
    202a:	83 ef 01             	sub    $0x1,%edi
    202d:	e8 00 00 00 00       	callq  2032 <try_swap+0x1582>
    2032:	44 8d 70 01          	lea    0x1(%rax),%r14d
    2036:	45 31 ff             	xor    %r15d,%r15d
    2039:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 203f <try_swap+0x158f>
    203f:	e9 60 ee ff ff       	jmpq   ea4 <try_swap+0x3f4>
    2044:	8b 2d 00 00 00 00    	mov    0x0(%rip),%ebp        # 204a <try_swap+0x159a>
    204a:	8b 7c 24 18          	mov    0x18(%rsp),%edi
    204e:	41 89 ee             	mov    %ebp,%r14d
    2051:	83 ef 01             	sub    $0x1,%edi
    2054:	e8 00 00 00 00       	callq  2059 <try_swap+0x15a9>
    2059:	41 29 c6             	sub    %eax,%r14d
    205c:	eb d8                	jmp    2036 <try_swap+0x1586>
    205e:	44 8d 60 01          	lea    0x1(%rax),%r12d
    2062:	8b 7c 24 48          	mov    0x48(%rsp),%edi
    2066:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 206c <try_swap+0x15bc>
    206c:	89 44 24 54          	mov    %eax,0x54(%rsp)
    2070:	e8 00 00 00 00       	callq  2075 <try_swap+0x15c5>
    2075:	8b 54 24 54          	mov    0x54(%rsp),%edx
    2079:	29 c2                	sub    %eax,%edx
    207b:	e9 43 ed ff ff       	jmpq   dc3 <try_swap+0x313>
    2080:	31 d2                	xor    %edx,%edx
    2082:	e9 e3 ea ff ff       	jmpq   b6a <try_swap+0xba>
    2087:	31 f6                	xor    %esi,%esi
    2089:	e9 db f3 ff ff       	jmpq   1469 <try_swap+0x9b9>
    208e:	8b 01                	mov    (%rcx),%eax
    2090:	31 f6                	xor    %esi,%esi
    2092:	48 89 cf             	mov    %rcx,%rdi
    2095:	85 c0                	test   %eax,%eax
    2097:	0f 84 c6 f3 ff ff    	je     1463 <try_swap+0x9b3>
    209d:	e9 6e f0 ff ff       	jmpq   1110 <try_swap+0x660>
    20a2:	89 d7                	mov    %edx,%edi
    20a4:	89 f1                	mov    %esi,%ecx
    20a6:	e9 ee f4 ff ff       	jmpq   1599 <try_swap+0xae9>
    20ab:	b9 00 00 00 00       	mov    $0x0,%ecx
    20b0:	ba b2 06 00 00       	mov    $0x6b2,%edx
    20b5:	be 00 00 00 00       	mov    $0x0,%esi
    20ba:	bf 00 00 00 00       	mov    $0x0,%edi
    20bf:	e8 00 00 00 00       	callq  20c4 <try_swap+0x1614>
    20c4:	44 89 c6             	mov    %r8d,%esi
    20c7:	e9 cd f4 ff ff       	jmpq   1599 <try_swap+0xae9>
    20cc:	48 8b 2d 00 00 00 00 	mov    0x0(%rip),%rbp        # 20d3 <try_swap+0x1623>
    20d3:	f3 0f 10 64 24 74    	movss  0x74(%rsp),%xmm4
    20d9:	48 8b 84 24 e0 00 00 	mov    0xe0(%rsp),%rax
    20e0:	00 
    20e1:	f3 0f 10 00          	movss  (%rax),%xmm0
    20e5:	f3 0f 58 c4          	addss  %xmm4,%xmm0
    20e9:	f3 0f 11 00          	movss  %xmm0,(%rax)
    20ed:	48 8b 84 24 d0 00 00 	mov    0xd0(%rsp),%rax
    20f4:	00 
    20f5:	f3 0f 10 00          	movss  (%rax),%xmm0
    20f9:	f3 0f 58 c4          	addss  %xmm4,%xmm0
    20fd:	f3 0f 11 00          	movss  %xmm0,(%rax)
    2101:	e9 10 fd ff ff       	jmpq   1e16 <try_swap+0x1366>
    2106:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    210d:	00 00 00 
    2110:	8d 1c 12             	lea    (%rdx,%rdx,1),%ebx
    2113:	48 63 db             	movslq %ebx,%rbx
    2116:	48 89 dd             	mov    %rbx,%rbp
    2119:	48 c1 e3 02          	shl    $0x2,%rbx
    211d:	48 c1 e5 04          	shl    $0x4,%rbp
    2121:	48 89 ef             	mov    %rbp,%rdi
    2124:	e8 00 00 00 00       	callq  2129 <try_swap+0x1679>
    2129:	48 89 ef             	mov    %rbp,%rdi
    212c:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 2133 <try_swap+0x1683>
    2133:	e8 00 00 00 00       	callq  2138 <try_swap+0x1688>
    2138:	48 89 df             	mov    %rbx,%rdi
    213b:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 2142 <try_swap+0x1692>
    2142:	e8 00 00 00 00       	callq  2147 <try_swap+0x1697>
    2147:	48 89 df             	mov    %rbx,%rdi
    214a:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 2151 <try_swap+0x16a1>
    2151:	e8 00 00 00 00       	callq  2156 <try_swap+0x16a6>
    2156:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 215d <try_swap+0x16ad>
    215d:	e9 16 ea ff ff       	jmpq   b78 <try_swap+0xc8>
    2162:	8b bc 24 70 01 00 00 	mov    0x170(%rsp),%edi
    2169:	85 ff                	test   %edi,%edi
    216b:	0f 8e bf 0e 00 00    	jle    3030 <try_swap+0x2580>
    2171:	8b 84 24 70 01 00 00 	mov    0x170(%rsp),%eax
    2178:	44 89 34 24          	mov    %r14d,(%rsp)
    217c:	45 31 db             	xor    %r11d,%r11d
    217f:	44 89 7c 24 08       	mov    %r15d,0x8(%rsp)
    2184:	48 8b 1d 00 00 00 00 	mov    0x0(%rip),%rbx        # 218b <try_swap+0x16db>
    218b:	48 8b 2d 00 00 00 00 	mov    0x0(%rip),%rbp        # 2192 <try_swap+0x16e2>
    2192:	4c 8b ac 24 e8 00 00 	mov    0xe8(%rsp),%r13
    2199:	00 
    219a:	83 e8 01             	sub    $0x1,%eax
    219d:	4c 8b b4 24 f0 00 00 	mov    0xf0(%rsp),%r14
    21a4:	00 
    21a5:	44 8b bc 24 70 01 00 	mov    0x170(%rsp),%r15d
    21ac:	00 
    21ad:	4c 8d 14 85 04 00 00 	lea    0x4(,%rax,4),%r10
    21b4:	00 
    21b5:	49 89 c4             	mov    %rax,%r12
    21b8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    21bf:	00 
    21c0:	4f 8b 4c dd 00       	mov    0x0(%r13,%r11,8),%r9
    21c5:	4e 8b 04 db          	mov    (%rbx,%r11,8),%r8
    21c9:	31 c0                	xor    %eax,%eax
    21cb:	4b 8b 3c de          	mov    (%r14,%r11,8),%rdi
    21cf:	4a 8b 74 dd 00       	mov    0x0(%rbp,%r11,8),%rsi
    21d4:	0f 1f 40 00          	nopl   0x0(%rax)
    21d8:	f3 41 0f 10 44 80 08 	movss  0x8(%r8,%rax,4),%xmm0
    21df:	f3 41 0f 11 04 01    	movss  %xmm0,(%r9,%rax,1)
    21e5:	f3 0f 10 44 86 08    	movss  0x8(%rsi,%rax,4),%xmm0
    21eb:	f3 0f 11 04 07       	movss  %xmm0,(%rdi,%rax,1)
    21f0:	48 83 c0 04          	add    $0x4,%rax
    21f4:	4c 39 d0             	cmp    %r10,%rax
    21f7:	75 df                	jne    21d8 <try_swap+0x1728>
    21f9:	49 83 c3 01          	add    $0x1,%r11
    21fd:	45 39 df             	cmp    %r11d,%r15d
    2200:	7f be                	jg     21c0 <try_swap+0x1710>
    2202:	8b 74 24 7c          	mov    0x7c(%rsp),%esi
    2206:	44 8b 34 24          	mov    (%rsp),%r14d
    220a:	44 8b 7c 24 08       	mov    0x8(%rsp),%r15d
    220f:	44 8b 84 24 70 01 00 	mov    0x170(%rsp),%r8d
    2216:	00 
    2217:	85 f6                	test   %esi,%esi
    2219:	0f 8f 1f ef ff ff    	jg     113e <try_swap+0x68e>
    221f:	e9 69 fd ff ff       	jmpq   1f8d <try_swap+0x14dd>
    2224:	0f 1f 40 00          	nopl   0x0(%rax)
    2228:	83 42 0c 01          	addl   $0x1,0xc(%rdx)
    222c:	83 68 0c 01          	subl   $0x1,0xc(%rax)
    2230:	e9 23 fd ff ff       	jmpq   1f58 <try_swap+0x14a8>
    2235:	83 bc 24 80 00 00 00 	cmpl   $0x1,0x80(%rsp)
    223c:	01 
    223d:	66 0f ef e4          	pxor   %xmm4,%xmm4
    2241:	c7 44 24 7c 00 00 00 	movl   $0x0,0x7c(%rsp)
    2248:	00 
    2249:	f3 0f 11 a4 24 b4 00 	movss  %xmm4,0xb4(%rsp)
    2250:	00 00 
    2252:	0f 84 0a ff ff ff    	je     2162 <try_swap+0x16b2>
    2258:	8b 84 24 80 01 00 00 	mov    0x180(%rsp),%eax
    225f:	f3 0f 11 64 24 74    	movss  %xmm4,0x74(%rsp)
    2265:	83 e8 01             	sub    $0x1,%eax
    2268:	83 f8 01             	cmp    $0x1,%eax
    226b:	89 44 24 20          	mov    %eax,0x20(%rsp)
    226f:	0f 87 64 fe ff ff    	ja     20d9 <try_swap+0x1629>
    2275:	8b 84 24 cc 00 00 00 	mov    0xcc(%rsp),%eax
    227c:	f3 0f 10 64 24 74    	movss  0x74(%rsp),%xmm4
    2282:	f3 0f 11 64 24 18    	movss  %xmm4,0x18(%rsp)
    2288:	85 c0                	test   %eax,%eax
    228a:	0f 8e 67 0e 00 00    	jle    30f7 <try_swap+0x2647>
    2290:	48 8b 1d 00 00 00 00 	mov    0x0(%rip),%rbx        # 2297 <try_swap+0x17e7>
    2297:	f3 0f 10 94 24 b4 00 	movss  0xb4(%rsp),%xmm2
    229e:	00 00 
    22a0:	48 8b 84 24 d8 00 00 	mov    0xd8(%rsp),%rax
    22a7:	00 
    22a8:	f3 0f 11 14 24       	movss  %xmm2,(%rsp)
    22ad:	45 31 ed             	xor    %r13d,%r13d
    22b0:	f3 0f 11 54 24 08    	movss  %xmm2,0x8(%rsp)
    22b6:	44 89 74 24 30       	mov    %r14d,0x30(%rsp)
    22bb:	44 89 7c 24 38       	mov    %r15d,0x38(%rsp)
    22c0:	48 c1 e0 03          	shl    $0x3,%rax
    22c4:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
    22c9:	8b 84 24 cc 00 00 00 	mov    0xcc(%rsp),%eax
    22d0:	83 e8 01             	sub    $0x1,%eax
    22d3:	48 8d 04 85 04 00 00 	lea    0x4(,%rax,4),%rax
    22da:	00 
    22db:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
    22e0:	48 8b 84 24 b8 00 00 	mov    0xb8(%rsp),%rax
    22e7:	00 
    22e8:	48 8b 44 03 10       	mov    0x10(%rbx,%rax,1),%rax
    22ed:	46 8b 24 28          	mov    (%rax,%r13,1),%r12d
    22f1:	41 83 fc ff          	cmp    $0xffffffff,%r12d
    22f5:	0f 84 f5 00 00 00    	je     23f0 <try_swap+0x1940>
    22fb:	49 63 dc             	movslq %r12d,%rbx
    22fe:	48 8d 2c 9b          	lea    (%rbx,%rbx,4),%rbp
    2302:	48 c1 e5 03          	shl    $0x3,%rbp
    2306:	48 89 e9             	mov    %rbp,%rcx
    2309:	48 03 0d 00 00 00 00 	add    0x0(%rip),%rcx        # 2310 <try_swap+0x1860>
    2310:	8b 41 20             	mov    0x20(%rcx),%eax
    2313:	85 c0                	test   %eax,%eax
    2315:	0f 85 d5 00 00 00    	jne    23f0 <try_swap+0x1940>
    231b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2322 <try_swap+0x1872>
    2322:	48 8b 74 24 28       	mov    0x28(%rsp),%rsi
    2327:	48 8b 04 30          	mov    (%rax,%rsi,1),%rax
    232b:	42 8b 04 28          	mov    (%rax,%r13,1),%eax
    232f:	85 c0                	test   %eax,%eax
    2331:	0f 85 d4 00 00 00    	jne    240b <try_swap+0x195b>
    2337:	8b 41 08             	mov    0x8(%rcx),%eax
    233a:	45 31 ff             	xor    %r15d,%r15d
    233d:	4c 8d 34 dd 00 00 00 	lea    0x0(,%rbx,8),%r14
    2344:	00 
    2345:	85 c0                	test   %eax,%eax
    2347:	0f 8e a3 00 00 00    	jle    23f0 <try_swap+0x1940>
    234d:	0f 1f 00             	nopl   (%rax)
    2350:	41 8d 77 01          	lea    0x1(%r15),%esi
    2354:	44 89 e7             	mov    %r12d,%edi
    2357:	44 89 fb             	mov    %r15d,%ebx
    235a:	83 c3 02             	add    $0x2,%ebx
    235d:	e8 ce e1 ff ff       	callq  530 <comp_td_point_to_point_delay>
    2362:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 2369 <try_swap+0x18b9>
    2369:	49 8d 47 01          	lea    0x1(%r15),%rax
    236d:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2374 <try_swap+0x18c4>
    2374:	49 89 c7             	mov    %rax,%r15
    2377:	4a 8b 14 32          	mov    (%rdx,%r14,1),%rdx
    237b:	4a 8b 0c 31          	mov    (%rcx,%r14,1),%rcx
    237f:	48 8d 14 82          	lea    (%rdx,%rax,4),%rdx
    2383:	f3 0f 11 02          	movss  %xmm0,(%rdx)
    2387:	f3 0f 59 04 81       	mulss  (%rcx,%rax,4),%xmm0
    238c:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2393 <try_swap+0x18e3>
    2393:	4a 8b 0c 31          	mov    (%rcx,%r14,1),%rcx
    2397:	f3 0f 11 04 81       	movss  %xmm0,(%rcx,%rax,4)
    239c:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 23a3 <try_swap+0x18f3>
    23a3:	f3 0f 10 0a          	movss  (%rdx),%xmm1
    23a7:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 23ae <try_swap+0x18fe>
    23ae:	4a 8b 0c 31          	mov    (%rcx,%r14,1),%rcx
    23b2:	4a 8b 14 32          	mov    (%rdx,%r14,1),%rdx
    23b6:	f3 0f 5c 0c 81       	subss  (%rcx,%rax,4),%xmm1
    23bb:	f3 0f 5c 04 82       	subss  (%rdx,%rax,4),%xmm0
    23c0:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 23c7 <try_swap+0x1917>
    23c7:	f3 0f 58 0c 24       	addss  (%rsp),%xmm1
    23cc:	3b 5c 28 08          	cmp    0x8(%rax,%rbp,1),%ebx
    23d0:	f3 0f 58 44 24 08    	addss  0x8(%rsp),%xmm0
    23d6:	f3 0f 11 0c 24       	movss  %xmm1,(%rsp)
    23db:	f3 0f 11 44 24 08    	movss  %xmm0,0x8(%rsp)
    23e1:	0f 8e 69 ff ff ff    	jle    2350 <try_swap+0x18a0>
    23e7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    23ee:	00 00 
    23f0:	49 83 c5 04          	add    $0x4,%r13
    23f4:	4c 3b 6c 24 10       	cmp    0x10(%rsp),%r13
    23f9:	0f 84 a9 00 00 00    	je     24a8 <try_swap+0x19f8>
    23ff:	48 8b 1d 00 00 00 00 	mov    0x0(%rip),%rbx        # 2406 <try_swap+0x1956>
    2406:	e9 d5 fe ff ff       	jmpq   22e0 <try_swap+0x1830>
    240b:	48 8b 51 10          	mov    0x10(%rcx),%rdx
    240f:	8b 12                	mov    (%rdx),%edx
    2411:	39 94 24 c4 00 00 00 	cmp    %edx,0xc4(%rsp)
    2418:	74 d6                	je     23f0 <try_swap+0x1940>
    241a:	39 94 24 c0 00 00 00 	cmp    %edx,0xc0(%rsp)
    2421:	74 cd                	je     23f0 <try_swap+0x1940>
    2423:	89 c6                	mov    %eax,%esi
    2425:	44 89 e7             	mov    %r12d,%edi
    2428:	89 44 24 40          	mov    %eax,0x40(%rsp)
    242c:	e8 ff e0 ff ff       	callq  530 <comp_td_point_to_point_delay>
    2431:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 2438 <try_swap+0x1988>
    2438:	48 63 44 24 40       	movslq 0x40(%rsp),%rax
    243d:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2444 <try_swap+0x1994>
    2444:	48 8b 14 da          	mov    (%rdx,%rbx,8),%rdx
    2448:	48 8b 0c d9          	mov    (%rcx,%rbx,8),%rcx
    244c:	48 8d 14 82          	lea    (%rdx,%rax,4),%rdx
    2450:	f3 0f 11 02          	movss  %xmm0,(%rdx)
    2454:	f3 0f 59 04 81       	mulss  (%rcx,%rax,4),%xmm0
    2459:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2460 <try_swap+0x19b0>
    2460:	48 8b 0c d9          	mov    (%rcx,%rbx,8),%rcx
    2464:	f3 0f 11 04 81       	movss  %xmm0,(%rcx,%rax,4)
    2469:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2470 <try_swap+0x19c0>
    2470:	f3 0f 10 0a          	movss  (%rdx),%xmm1
    2474:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 247b <try_swap+0x19cb>
    247b:	48 8b 0c d9          	mov    (%rcx,%rbx,8),%rcx
    247f:	48 8b 14 da          	mov    (%rdx,%rbx,8),%rdx
    2483:	f3 0f 5c 0c 81       	subss  (%rcx,%rax,4),%xmm1
    2488:	f3 0f 5c 04 82       	subss  (%rdx,%rax,4),%xmm0
    248d:	f3 0f 58 0c 24       	addss  (%rsp),%xmm1
    2492:	f3 0f 58 44 24 08    	addss  0x8(%rsp),%xmm0
    2498:	f3 0f 11 0c 24       	movss  %xmm1,(%rsp)
    249d:	f3 0f 11 44 24 08    	movss  %xmm0,0x8(%rsp)
    24a3:	e9 48 ff ff ff       	jmpq   23f0 <try_swap+0x1940>
    24a8:	48 63 84 24 c4 00 00 	movslq 0xc4(%rsp),%rax
    24af:	00 
    24b0:	44 8b 74 24 30       	mov    0x30(%rsp),%r14d
    24b5:	44 8b 7c 24 38       	mov    0x38(%rsp),%r15d
    24ba:	f3 0f 10 14 24       	movss  (%rsp),%xmm2
    24bf:	f3 0f 10 4c 24 08    	movss  0x8(%rsp),%xmm1
    24c5:	83 f8 ff             	cmp    $0xffffffff,%eax
    24c8:	0f 84 66 01 00 00    	je     2634 <try_swap+0x1b84>
    24ce:	48 8d 14 80          	lea    (%rax,%rax,4),%rdx
    24d2:	48 c1 e0 03          	shl    $0x3,%rax
    24d6:	45 31 ed             	xor    %r13d,%r13d
    24d9:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
    24de:	44 89 74 24 38       	mov    %r14d,0x38(%rsp)
    24e3:	48 8d 1c d5 00 00 00 	lea    0x0(,%rdx,8),%rbx
    24ea:	00 
    24eb:	44 89 7c 24 40       	mov    %r15d,0x40(%rsp)
    24f0:	48 89 5c 24 28       	mov    %rbx,0x28(%rsp)
    24f5:	0f 1f 00             	nopl   (%rax)
    24f8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 24ff <try_swap+0x1a4f>
    24ff:	48 8b 5c 24 28       	mov    0x28(%rsp),%rbx
    2504:	48 8b 44 18 10       	mov    0x10(%rax,%rbx,1),%rax
    2509:	42 8b 2c 28          	mov    (%rax,%r13,1),%ebp
    250d:	83 fd ff             	cmp    $0xffffffff,%ebp
    2510:	0f 84 fa 00 00 00    	je     2610 <try_swap+0x1b60>
    2516:	48 63 dd             	movslq %ebp,%rbx
    2519:	4c 8d 24 9b          	lea    (%rbx,%rbx,4),%r12
    251d:	49 c1 e4 03          	shl    $0x3,%r12
    2521:	4c 89 e1             	mov    %r12,%rcx
    2524:	48 03 0d 00 00 00 00 	add    0x0(%rip),%rcx        # 252b <try_swap+0x1a7b>
    252b:	8b 41 20             	mov    0x20(%rcx),%eax
    252e:	85 c0                	test   %eax,%eax
    2530:	0f 85 da 00 00 00    	jne    2610 <try_swap+0x1b60>
    2536:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 253d <try_swap+0x1a8d>
    253d:	48 8b 74 24 30       	mov    0x30(%rsp),%rsi
    2542:	48 8b 04 30          	mov    (%rax,%rsi,1),%rax
    2546:	42 8b 04 28          	mov    (%rax,%r13,1),%eax
    254a:	85 c0                	test   %eax,%eax
    254c:	0f 85 3b 06 00 00    	jne    2b8d <try_swap+0x20dd>
    2552:	8b 41 08             	mov    0x8(%rcx),%eax
    2555:	45 31 ff             	xor    %r15d,%r15d
    2558:	4c 8d 34 dd 00 00 00 	lea    0x0(,%rbx,8),%r14
    255f:	00 
    2560:	85 c0                	test   %eax,%eax
    2562:	0f 8e a8 00 00 00    	jle    2610 <try_swap+0x1b60>
    2568:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    256f:	00 
    2570:	41 8d 77 01          	lea    0x1(%r15),%esi
    2574:	89 ef                	mov    %ebp,%edi
    2576:	44 89 fb             	mov    %r15d,%ebx
    2579:	83 c3 02             	add    $0x2,%ebx
    257c:	e8 af df ff ff       	callq  530 <comp_td_point_to_point_delay>
    2581:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 2588 <try_swap+0x1ad8>
    2588:	49 8d 47 01          	lea    0x1(%r15),%rax
    258c:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2593 <try_swap+0x1ae3>
    2593:	49 89 c7             	mov    %rax,%r15
    2596:	4a 8b 14 32          	mov    (%rdx,%r14,1),%rdx
    259a:	4a 8b 0c 31          	mov    (%rcx,%r14,1),%rcx
    259e:	48 8d 14 82          	lea    (%rdx,%rax,4),%rdx
    25a2:	f3 0f 11 02          	movss  %xmm0,(%rdx)
    25a6:	f3 0f 59 04 81       	mulss  (%rcx,%rax,4),%xmm0
    25ab:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 25b2 <try_swap+0x1b02>
    25b2:	4a 8b 0c 31          	mov    (%rcx,%r14,1),%rcx
    25b6:	f3 0f 11 04 81       	movss  %xmm0,(%rcx,%rax,4)
    25bb:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 25c2 <try_swap+0x1b12>
    25c2:	f3 0f 10 1a          	movss  (%rdx),%xmm3
    25c6:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 25cd <try_swap+0x1b1d>
    25cd:	4a 8b 0c 31          	mov    (%rcx,%r14,1),%rcx
    25d1:	4a 8b 14 32          	mov    (%rdx,%r14,1),%rdx
    25d5:	f3 0f 5c 1c 81       	subss  (%rcx,%rax,4),%xmm3
    25da:	f3 0f 5c 04 82       	subss  (%rdx,%rax,4),%xmm0
    25df:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 25e6 <try_swap+0x1b36>
    25e6:	f3 0f 58 1c 24       	addss  (%rsp),%xmm3
    25eb:	42 39 5c 20 08       	cmp    %ebx,0x8(%rax,%r12,1)
    25f0:	f3 0f 58 44 24 08    	addss  0x8(%rsp),%xmm0
    25f6:	f3 0f 11 1c 24       	movss  %xmm3,(%rsp)
    25fb:	f3 0f 11 44 24 08    	movss  %xmm0,0x8(%rsp)
    2601:	0f 8d 69 ff ff ff    	jge    2570 <try_swap+0x1ac0>
    2607:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    260e:	00 00 
    2610:	49 83 c5 04          	add    $0x4,%r13
    2614:	4c 39 6c 24 10       	cmp    %r13,0x10(%rsp)
    2619:	0f 85 d9 fe ff ff    	jne    24f8 <try_swap+0x1a48>
    261f:	44 8b 74 24 38       	mov    0x38(%rsp),%r14d
    2624:	44 8b 7c 24 40       	mov    0x40(%rsp),%r15d
    2629:	f3 0f 10 14 24       	movss  (%rsp),%xmm2
    262e:	f3 0f 10 4c 24 08    	movss  0x8(%rsp),%xmm1
    2634:	f3 0f 10 a4 24 0c 01 	movss  0x10c(%rsp),%xmm4
    263b:	00 00 
    263d:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 2645 <try_swap+0x1b95>
    2644:	00 
    2645:	f3 0f 5c c4          	subss  %xmm4,%xmm0
    2649:	f3 0f 59 e1          	mulss  %xmm1,%xmm4
    264d:	f3 0f 10 9c 24 14 01 	movss  0x114(%rsp),%xmm3
    2654:	00 00 
    2656:	f3 0f 59 44 24 18    	mulss  0x18(%rsp),%xmm0
    265c:	f3 0f 59 dc          	mulss  %xmm4,%xmm3
    2660:	f3 0f 10 a4 24 b4 00 	movss  0xb4(%rsp),%xmm4
    2667:	00 00 
    2669:	f3 0f 59 84 24 10 01 	mulss  0x110(%rsp),%xmm0
    2670:	00 00 
    2672:	f3 0f 58 c3          	addss  %xmm3,%xmm0
    2676:	0f 2e e0             	ucomiss %xmm0,%xmm4
    2679:	f3 0f 11 44 24 74    	movss  %xmm0,0x74(%rsp)
    267f:	0f 82 60 f4 ff ff    	jb     1ae5 <try_swap+0x1035>
    2685:	48 8b 84 24 e0 00 00 	mov    0xe0(%rsp),%rax
    268c:	00 
    268d:	f3 0f 58 00          	addss  (%rax),%xmm0
    2691:	f3 0f 11 00          	movss  %xmm0,(%rax)
    2695:	48 8b 84 24 d0 00 00 	mov    0xd0(%rsp),%rax
    269c:	00 
    269d:	f3 0f 10 44 24 18    	movss  0x18(%rsp),%xmm0
    26a3:	f3 0f 58 00          	addss  (%rax),%xmm0
    26a7:	f3 0f 11 00          	movss  %xmm0,(%rax)
    26ab:	48 8b 84 24 00 01 00 	mov    0x100(%rsp),%rax
    26b2:	00 
    26b3:	44 8b bc 24 cc 00 00 	mov    0xcc(%rsp),%r15d
    26ba:	00 
    26bb:	f3 0f 58 08          	addss  (%rax),%xmm1
    26bf:	45 85 ff             	test   %r15d,%r15d
    26c2:	f3 0f 11 08          	movss  %xmm1,(%rax)
    26c6:	48 8b 84 24 88 01 00 	mov    0x188(%rsp),%rax
    26cd:	00 
    26ce:	f3 0f 58 10          	addss  (%rax),%xmm2
    26d2:	f3 0f 11 10          	movss  %xmm2,(%rax)
    26d6:	0f 8e 33 f7 ff ff    	jle    1e0f <try_swap+0x135f>
    26dc:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 26e3 <try_swap+0x1c33>
    26e3:	48 8b 9c 24 b8 00 00 	mov    0xb8(%rsp),%rbx
    26ea:	00 
    26eb:	45 31 ff             	xor    %r15d,%r15d
    26ee:	4c 8b 25 00 00 00 00 	mov    0x0(%rip),%r12        # 26f5 <try_swap+0x1c45>
    26f5:	0f 28 0d 00 00 00 00 	movaps 0x0(%rip),%xmm1        # 26fc <try_swap+0x1c4c>
    26fc:	48 8b 6c 18 10       	mov    0x10(%rax,%rbx,1),%rbp
    2701:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
    2706:	48 8b 9c 24 d8 00 00 	mov    0xd8(%rsp),%rbx
    270d:	00 
    270e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2715 <try_swap+0x1c65>
    2715:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
    271a:	48 8d 04 d8          	lea    (%rax,%rbx,8),%rax
    271e:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
    2723:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 272a <try_swap+0x1c7a>
    272a:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    272f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2736 <try_swap+0x1c86>
    2736:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
    273b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2742 <try_swap+0x1c92>
    2742:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    2747:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 274e <try_swap+0x1c9e>
    274e:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
    2753:	8b 84 24 cc 00 00 00 	mov    0xcc(%rsp),%eax
    275a:	83 e8 01             	sub    $0x1,%eax
    275d:	48 8d 04 85 04 00 00 	lea    0x4(,%rax,4),%rax
    2764:	00 
    2765:	48 89 04 24          	mov    %rax,(%rsp)
    2769:	e9 f8 02 00 00       	jmpq   2a66 <try_swap+0x1fb6>
    276e:	8b 72 08             	mov    0x8(%rdx),%esi
    2771:	85 f6                	test   %esi,%esi
    2773:	0f 8e df 02 00 00    	jle    2a58 <try_swap+0x1fa8>
    2779:	48 8b 5c 24 08       	mov    0x8(%rsp),%rbx
    277e:	48 8b 3c c3          	mov    (%rbx,%rax,8),%rdi
    2782:	48 8b 5c 24 20       	mov    0x20(%rsp),%rbx
    2787:	48 8b 14 c3          	mov    (%rbx,%rax,8),%rdx
    278b:	48 8b 5c 24 18       	mov    0x18(%rsp),%rbx
    2790:	4c 8d 6f 04          	lea    0x4(%rdi),%r13
    2794:	4c 8b 04 c3          	mov    (%rbx,%rax,8),%r8
    2798:	48 8b 5c 24 10       	mov    0x10(%rsp),%rbx
    279d:	4c 8d 5a 14          	lea    0x14(%rdx),%r11
    27a1:	4d 39 dd             	cmp    %r11,%r13
    27a4:	48 8b 0c c3          	mov    (%rbx,%rax,8),%rcx
    27a8:	0f 93 44 24 54       	setae  0x54(%rsp)
    27ad:	48 8d 5f 14          	lea    0x14(%rdi),%rbx
    27b1:	48 8d 42 04          	lea    0x4(%rdx),%rax
    27b5:	44 0f b6 4c 24 54    	movzbl 0x54(%rsp),%r9d
    27bb:	4d 8d 50 04          	lea    0x4(%r8),%r10
    27bf:	4c 8d 71 04          	lea    0x4(%rcx),%r14
    27c3:	48 39 d8             	cmp    %rbx,%rax
    27c6:	4c 89 54 24 30       	mov    %r10,0x30(%rsp)
    27cb:	4d 8d 50 14          	lea    0x14(%r8),%r10
    27cf:	4c 89 74 24 48       	mov    %r14,0x48(%rsp)
    27d4:	41 0f 93 c6          	setae  %r14b
    27d8:	45 09 ce             	or     %r9d,%r14d
    27db:	4c 89 54 24 28       	mov    %r10,0x28(%rsp)
    27e0:	4c 39 6c 24 28       	cmp    %r13,0x28(%rsp)
    27e5:	44 88 74 24 54       	mov    %r14b,0x54(%rsp)
    27ea:	4c 8d 51 14          	lea    0x14(%rcx),%r10
    27ee:	0f 96 44 24 60       	setbe  0x60(%rsp)
    27f3:	48 39 5c 24 30       	cmp    %rbx,0x30(%rsp)
    27f8:	44 0f b6 4c 24 60    	movzbl 0x60(%rsp),%r9d
    27fe:	41 0f 93 c6          	setae  %r14b
    2802:	45 09 ce             	or     %r9d,%r14d
    2805:	45 89 f1             	mov    %r14d,%r9d
    2808:	44 22 4c 24 54       	and    0x54(%rsp),%r9b
    280d:	83 fe 0a             	cmp    $0xa,%esi
    2810:	41 0f 97 c6          	seta   %r14b
    2814:	45 21 ce             	and    %r9d,%r14d
    2817:	4c 8b 4c 24 48       	mov    0x48(%rsp),%r9
    281c:	4d 39 ea             	cmp    %r13,%r10
    281f:	41 0f 96 c5          	setbe  %r13b
    2823:	49 39 d9             	cmp    %rbx,%r9
    2826:	0f 93 c3             	setae  %bl
    2829:	44 09 eb             	or     %r13d,%ebx
    282c:	41 21 de             	and    %ebx,%r14d
    282f:	48 39 44 24 28       	cmp    %rax,0x28(%rsp)
    2834:	41 0f 96 c5          	setbe  %r13b
    2838:	4c 39 5c 24 30       	cmp    %r11,0x30(%rsp)
    283d:	0f 93 c3             	setae  %bl
    2840:	44 09 eb             	or     %r13d,%ebx
    2843:	4d 89 cd             	mov    %r9,%r13
    2846:	41 21 de             	and    %ebx,%r14d
    2849:	49 39 c2             	cmp    %rax,%r10
    284c:	0f 96 c3             	setbe  %bl
    284f:	4d 39 d9             	cmp    %r11,%r9
    2852:	41 0f 93 c3          	setae  %r11b
    2856:	41 09 db             	or     %ebx,%r11d
    2859:	45 84 de             	test   %r11b,%r14b
    285c:	0f 84 3c 08 00 00    	je     309e <try_swap+0x25ee>
    2862:	4c 3b 54 24 30       	cmp    0x30(%rsp),%r10
    2867:	4c 8b 54 24 28       	mov    0x28(%rsp),%r10
    286c:	41 0f 96 c1          	setbe  %r9b
    2870:	4d 39 d5             	cmp    %r10,%r13
    2873:	41 0f 93 c2          	setae  %r10b
    2877:	45 08 d1             	or     %r10b,%r9b
    287a:	0f 84 1e 08 00 00    	je     309e <try_swap+0x25ee>
    2880:	83 e0 0f             	and    $0xf,%eax
    2883:	49 89 c1             	mov    %rax,%r9
    2886:	b8 01 00 00 00       	mov    $0x1,%eax
    288b:	49 c1 e9 02          	shr    $0x2,%r9
    288f:	49 f7 d9             	neg    %r9
    2892:	41 83 e1 03          	and    $0x3,%r9d
    2896:	41 39 f1             	cmp    %esi,%r9d
    2899:	4c 0f 47 ce          	cmova  %rsi,%r9
    289d:	45 85 c9             	test   %r9d,%r9d
    28a0:	74 7b                	je     291d <try_swap+0x1e6d>
    28a2:	f3 0f 10 42 04       	movss  0x4(%rdx),%xmm0
    28a7:	41 83 f9 01          	cmp    $0x1,%r9d
    28ab:	b0 02                	mov    $0x2,%al
    28ad:	f3 0f 11 47 04       	movss  %xmm0,0x4(%rdi)
    28b2:	c7 42 04 00 00 80 bf 	movl   $0xbf800000,0x4(%rdx)
    28b9:	f3 0f 10 41 04       	movss  0x4(%rcx),%xmm0
    28be:	f3 41 0f 11 40 04    	movss  %xmm0,0x4(%r8)
    28c4:	c7 41 04 00 00 80 bf 	movl   $0xbf800000,0x4(%rcx)
    28cb:	74 50                	je     291d <try_swap+0x1e6d>
    28cd:	f3 0f 10 42 08       	movss  0x8(%rdx),%xmm0
    28d2:	41 83 f9 03          	cmp    $0x3,%r9d
    28d6:	f3 0f 11 47 08       	movss  %xmm0,0x8(%rdi)
    28db:	c7 42 08 00 00 80 bf 	movl   $0xbf800000,0x8(%rdx)
    28e2:	b0 03                	mov    $0x3,%al
    28e4:	f3 0f 10 41 08       	movss  0x8(%rcx),%xmm0
    28e9:	f3 41 0f 11 40 08    	movss  %xmm0,0x8(%r8)
    28ef:	c7 41 08 00 00 80 bf 	movl   $0xbf800000,0x8(%rcx)
    28f6:	75 25                	jne    291d <try_swap+0x1e6d>
    28f8:	f3 0f 10 42 0c       	movss  0xc(%rdx),%xmm0
    28fd:	b0 04                	mov    $0x4,%al
    28ff:	f3 0f 11 47 0c       	movss  %xmm0,0xc(%rdi)
    2904:	c7 42 0c 00 00 80 bf 	movl   $0xbf800000,0xc(%rdx)
    290b:	f3 0f 10 41 0c       	movss  0xc(%rcx),%xmm0
    2910:	f3 41 0f 11 40 0c    	movss  %xmm0,0xc(%r8)
    2916:	c7 41 0c 00 00 80 bf 	movl   $0xbf800000,0xc(%rcx)
    291d:	89 f3                	mov    %esi,%ebx
    291f:	89 44 24 54          	mov    %eax,0x54(%rsp)
    2923:	44 29 cb             	sub    %r9d,%ebx
    2926:	4e 8d 0c 8d 04 00 00 	lea    0x4(,%r9,4),%r9
    292d:	00 
    292e:	44 8d 53 fc          	lea    -0x4(%rbx),%r10d
    2932:	89 5c 24 48          	mov    %ebx,0x48(%rsp)
    2936:	4e 8d 1c 0f          	lea    (%rdi,%r9,1),%r11
    293a:	4e 8d 34 0a          	lea    (%rdx,%r9,1),%r14
    293e:	4e 8d 2c 09          	lea    (%rcx,%r9,1),%r13
    2942:	41 c1 ea 02          	shr    $0x2,%r10d
    2946:	41 83 c2 01          	add    $0x1,%r10d
    294a:	4c 89 5c 24 30       	mov    %r11,0x30(%rsp)
    294f:	4f 8d 1c 08          	lea    (%r8,%r9,1),%r11
    2953:	42 8d 1c 95 00 00 00 	lea    0x0(,%r10,4),%ebx
    295a:	00 
    295b:	45 31 c9             	xor    %r9d,%r9d
    295e:	4c 89 5c 24 28       	mov    %r11,0x28(%rsp)
    2963:	45 31 db             	xor    %r11d,%r11d
    2966:	48 8b 44 24 30       	mov    0x30(%rsp),%rax
    296b:	41 83 c3 01          	add    $0x1,%r11d
    296f:	43 0f 28 04 0e       	movaps (%r14,%r9,1),%xmm0
    2974:	42 0f 11 04 08       	movups %xmm0,(%rax,%r9,1)
    2979:	48 8b 44 24 28       	mov    0x28(%rsp),%rax
    297e:	43 0f 29 0c 0e       	movaps %xmm1,(%r14,%r9,1)
    2983:	43 0f 10 44 0d 00    	movups 0x0(%r13,%r9,1),%xmm0
    2989:	42 0f 11 04 08       	movups %xmm0,(%rax,%r9,1)
    298e:	43 0f 11 4c 0d 00    	movups %xmm1,0x0(%r13,%r9,1)
    2994:	49 83 c1 10          	add    $0x10,%r9
    2998:	45 39 da             	cmp    %r11d,%r10d
    299b:	77 c9                	ja     2966 <try_swap+0x1eb6>
    299d:	8b 44 24 54          	mov    0x54(%rsp),%eax
    29a1:	01 d8                	add    %ebx,%eax
    29a3:	3b 5c 24 48          	cmp    0x48(%rsp),%ebx
    29a7:	0f 84 ab 00 00 00    	je     2a58 <try_swap+0x1fa8>
    29ad:	4c 63 d0             	movslq %eax,%r10
    29b0:	4e 8d 0c 95 00 00 00 	lea    0x0(,%r10,4),%r9
    29b7:	00 
    29b8:	4e 8d 1c 0a          	lea    (%rdx,%r9,1),%r11
    29bc:	49 01 c9             	add    %rcx,%r9
    29bf:	f3 41 0f 10 03       	movss  (%r11),%xmm0
    29c4:	f3 42 0f 11 04 97    	movss  %xmm0,(%rdi,%r10,4)
    29ca:	41 c7 03 00 00 80 bf 	movl   $0xbf800000,(%r11)
    29d1:	f3 41 0f 10 01       	movss  (%r9),%xmm0
    29d6:	f3 43 0f 11 04 90    	movss  %xmm0,(%r8,%r10,4)
    29dc:	41 c7 01 00 00 80 bf 	movl   $0xbf800000,(%r9)
    29e3:	44 8d 48 01          	lea    0x1(%rax),%r9d
    29e7:	44 39 ce             	cmp    %r9d,%esi
    29ea:	7c 6c                	jl     2a58 <try_swap+0x1fa8>
    29ec:	4d 63 c9             	movslq %r9d,%r9
    29ef:	83 c0 02             	add    $0x2,%eax
    29f2:	4e 8d 14 8d 00 00 00 	lea    0x0(,%r9,4),%r10
    29f9:	00 
    29fa:	4e 8d 1c 12          	lea    (%rdx,%r10,1),%r11
    29fe:	49 01 ca             	add    %rcx,%r10
    2a01:	39 c6                	cmp    %eax,%esi
    2a03:	f3 41 0f 10 03       	movss  (%r11),%xmm0
    2a08:	f3 42 0f 11 04 8f    	movss  %xmm0,(%rdi,%r9,4)
    2a0e:	41 c7 03 00 00 80 bf 	movl   $0xbf800000,(%r11)
    2a15:	f3 41 0f 10 02       	movss  (%r10),%xmm0
    2a1a:	f3 43 0f 11 04 88    	movss  %xmm0,(%r8,%r9,4)
    2a20:	41 c7 02 00 00 80 bf 	movl   $0xbf800000,(%r10)
    2a27:	7c 2f                	jl     2a58 <try_swap+0x1fa8>
    2a29:	48 98                	cltq   
    2a2b:	48 8d 34 85 00 00 00 	lea    0x0(,%rax,4),%rsi
    2a32:	00 
    2a33:	48 01 f2             	add    %rsi,%rdx
    2a36:	48 01 f1             	add    %rsi,%rcx
    2a39:	f3 0f 10 02          	movss  (%rdx),%xmm0
    2a3d:	f3 0f 11 04 87       	movss  %xmm0,(%rdi,%rax,4)
    2a42:	c7 02 00 00 80 bf    	movl   $0xbf800000,(%rdx)
    2a48:	f3 0f 10 01          	movss  (%rcx),%xmm0
    2a4c:	f3 41 0f 11 04 80    	movss  %xmm0,(%r8,%rax,4)
    2a52:	c7 01 00 00 80 bf    	movl   $0xbf800000,(%rcx)
    2a58:	49 83 c7 04          	add    $0x4,%r15
    2a5c:	4c 3b 3c 24          	cmp    (%rsp),%r15
    2a60:	0f 84 f6 01 00 00    	je     2c5c <try_swap+0x21ac>
    2a66:	4a 63 44 3d 00       	movslq 0x0(%rbp,%r15,1),%rax
    2a6b:	83 f8 ff             	cmp    $0xffffffff,%eax
    2a6e:	74 e8                	je     2a58 <try_swap+0x1fa8>
    2a70:	48 8d 14 80          	lea    (%rax,%rax,4),%rdx
    2a74:	49 8d 14 d4          	lea    (%r12,%rdx,8),%rdx
    2a78:	44 8b 72 20          	mov    0x20(%rdx),%r14d
    2a7c:	45 85 f6             	test   %r14d,%r14d
    2a7f:	75 d7                	jne    2a58 <try_swap+0x1fa8>
    2a81:	48 8b 5c 24 38       	mov    0x38(%rsp),%rbx
    2a86:	48 8b 0b             	mov    (%rbx),%rcx
    2a89:	4a 63 0c 39          	movslq (%rcx,%r15,1),%rcx
    2a8d:	85 c9                	test   %ecx,%ecx
    2a8f:	0f 84 d9 fc ff ff    	je     276e <try_swap+0x1cbe>
    2a95:	48 8b 52 10          	mov    0x10(%rdx),%rdx
    2a99:	8b 12                	mov    (%rdx),%edx
    2a9b:	39 94 24 c4 00 00 00 	cmp    %edx,0xc4(%rsp)
    2aa2:	74 b4                	je     2a58 <try_swap+0x1fa8>
    2aa4:	39 94 24 c0 00 00 00 	cmp    %edx,0xc0(%rsp)
    2aab:	74 ab                	je     2a58 <try_swap+0x1fa8>
    2aad:	48 8b 5c 24 20       	mov    0x20(%rsp),%rbx
    2ab2:	48 8d 14 8d 00 00 00 	lea    0x0(,%rcx,4),%rdx
    2ab9:	00 
    2aba:	48 89 d6             	mov    %rdx,%rsi
    2abd:	48 03 34 c3          	add    (%rbx,%rax,8),%rsi
    2ac1:	48 8b 5c 24 08       	mov    0x8(%rsp),%rbx
    2ac6:	48 8b 3c c3          	mov    (%rbx,%rax,8),%rdi
    2aca:	48 8b 5c 24 10       	mov    0x10(%rsp),%rbx
    2acf:	f3 0f 10 06          	movss  (%rsi),%xmm0
    2ad3:	48 03 14 c3          	add    (%rbx,%rax,8),%rdx
    2ad7:	48 8b 5c 24 18       	mov    0x18(%rsp),%rbx
    2adc:	f3 0f 11 04 8f       	movss  %xmm0,(%rdi,%rcx,4)
    2ae1:	c7 06 00 00 80 bf    	movl   $0xbf800000,(%rsi)
    2ae7:	48 8b 04 c3          	mov    (%rbx,%rax,8),%rax
    2aeb:	f3 0f 10 02          	movss  (%rdx),%xmm0
    2aef:	f3 0f 11 04 88       	movss  %xmm0,(%rax,%rcx,4)
    2af4:	c7 02 00 00 80 bf    	movl   $0xbf800000,(%rdx)
    2afa:	e9 59 ff ff ff       	jmpq   2a58 <try_swap+0x1fa8>
    2aff:	44 8b 8c 24 70 01 00 	mov    0x170(%rsp),%r9d
    2b06:	00 
    2b07:	45 85 c9             	test   %r9d,%r9d
    2b0a:	0f 8e 98 f0 ff ff    	jle    1ba8 <try_swap+0x10f8>
    2b10:	8b 84 24 70 01 00 00 	mov    0x170(%rsp),%eax
    2b17:	4c 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11        # 2b1e <try_swap+0x206e>
    2b1e:	45 31 c9             	xor    %r9d,%r9d
    2b21:	4c 8b 15 00 00 00 00 	mov    0x0(%rip),%r10        # 2b28 <try_swap+0x2078>
    2b28:	48 8b 9c 24 e8 00 00 	mov    0xe8(%rsp),%rbx
    2b2f:	00 
    2b30:	48 8b ac 24 f0 00 00 	mov    0xf0(%rsp),%rbp
    2b37:	00 
    2b38:	44 8b a4 24 70 01 00 	mov    0x170(%rsp),%r12d
    2b3f:	00 
    2b40:	83 e8 01             	sub    $0x1,%eax
    2b43:	4c 8d 04 85 04 00 00 	lea    0x4(,%rax,4),%r8
    2b4a:	00 
    2b4b:	4b 8b 3c cb          	mov    (%r11,%r9,8),%rdi
    2b4f:	4a 8b 34 cb          	mov    (%rbx,%r9,8),%rsi
    2b53:	31 c0                	xor    %eax,%eax
    2b55:	4b 8b 0c ca          	mov    (%r10,%r9,8),%rcx
    2b59:	4a 8b 54 cd 00       	mov    0x0(%rbp,%r9,8),%rdx
    2b5e:	66 90                	xchg   %ax,%ax
    2b60:	f3 0f 10 04 06       	movss  (%rsi,%rax,1),%xmm0
    2b65:	f3 0f 11 44 87 08    	movss  %xmm0,0x8(%rdi,%rax,4)
    2b6b:	f3 0f 10 04 02       	movss  (%rdx,%rax,1),%xmm0
    2b70:	f3 0f 11 44 81 08    	movss  %xmm0,0x8(%rcx,%rax,4)
    2b76:	48 83 c0 04          	add    $0x4,%rax
    2b7a:	4c 39 c0             	cmp    %r8,%rax
    2b7d:	75 e1                	jne    2b60 <try_swap+0x20b0>
    2b7f:	49 83 c1 01          	add    $0x1,%r9
    2b83:	45 39 cc             	cmp    %r9d,%r12d
    2b86:	7f c3                	jg     2b4b <try_swap+0x209b>
    2b88:	e9 1b f0 ff ff       	jmpq   1ba8 <try_swap+0x10f8>
    2b8d:	48 8b 51 10          	mov    0x10(%rcx),%rdx
    2b91:	8b 12                	mov    (%rdx),%edx
    2b93:	39 94 24 c4 00 00 00 	cmp    %edx,0xc4(%rsp)
    2b9a:	0f 84 70 fa ff ff    	je     2610 <try_swap+0x1b60>
    2ba0:	39 94 24 c0 00 00 00 	cmp    %edx,0xc0(%rsp)
    2ba7:	0f 84 63 fa ff ff    	je     2610 <try_swap+0x1b60>
    2bad:	89 c6                	mov    %eax,%esi
    2baf:	89 ef                	mov    %ebp,%edi
    2bb1:	89 44 24 48          	mov    %eax,0x48(%rsp)
    2bb5:	e8 76 d9 ff ff       	callq  530 <comp_td_point_to_point_delay>
    2bba:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 2bc1 <try_swap+0x2111>
    2bc1:	48 63 44 24 48       	movslq 0x48(%rsp),%rax
    2bc6:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2bcd <try_swap+0x211d>
    2bcd:	48 8b 14 da          	mov    (%rdx,%rbx,8),%rdx
    2bd1:	48 8b 0c d9          	mov    (%rcx,%rbx,8),%rcx
    2bd5:	48 8d 14 82          	lea    (%rdx,%rax,4),%rdx
    2bd9:	f3 0f 11 02          	movss  %xmm0,(%rdx)
    2bdd:	f3 0f 59 04 81       	mulss  (%rcx,%rax,4),%xmm0
    2be2:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2be9 <try_swap+0x2139>
    2be9:	48 8b 0c d9          	mov    (%rcx,%rbx,8),%rcx
    2bed:	f3 0f 11 04 81       	movss  %xmm0,(%rcx,%rax,4)
    2bf2:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2bf9 <try_swap+0x2149>
    2bf9:	f3 0f 10 1a          	movss  (%rdx),%xmm3
    2bfd:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 2c04 <try_swap+0x2154>
    2c04:	48 8b 0c d9          	mov    (%rcx,%rbx,8),%rcx
    2c08:	48 8b 14 da          	mov    (%rdx,%rbx,8),%rdx
    2c0c:	f3 0f 5c 1c 81       	subss  (%rcx,%rax,4),%xmm3
    2c11:	f3 0f 5c 04 82       	subss  (%rdx,%rax,4),%xmm0
    2c16:	f3 0f 58 1c 24       	addss  (%rsp),%xmm3
    2c1b:	f3 0f 58 44 24 08    	addss  0x8(%rsp),%xmm0
    2c21:	f3 0f 11 1c 24       	movss  %xmm3,(%rsp)
    2c26:	f3 0f 11 44 24 08    	movss  %xmm0,0x8(%rsp)
    2c2c:	e9 df f9 ff ff       	jmpq   2610 <try_swap+0x1b60>
    2c31:	8b 84 24 80 01 00 00 	mov    0x180(%rsp),%eax
    2c38:	f3 0f 10 a4 24 b4 00 	movss  0xb4(%rsp),%xmm4
    2c3f:	00 00 
    2c41:	83 e8 01             	sub    $0x1,%eax
    2c44:	83 f8 01             	cmp    $0x1,%eax
    2c47:	89 44 24 20          	mov    %eax,0x20(%rsp)
    2c4b:	0f 86 b7 04 00 00    	jbe    3108 <try_swap+0x2658>
    2c51:	f3 0f 11 64 24 74    	movss  %xmm4,0x74(%rsp)
    2c57:	e9 7d f4 ff ff       	jmpq   20d9 <try_swap+0x1629>
    2c5c:	83 bc 24 c4 00 00 00 	cmpl   $0xffffffff,0xc4(%rsp)
    2c63:	ff 
    2c64:	0f 84 a5 f1 ff ff    	je     1e0f <try_swap+0x135f>
    2c6a:	48 63 84 24 c4 00 00 	movslq 0xc4(%rsp),%rax
    2c71:	00 
    2c72:	48 8b 5c 24 40       	mov    0x40(%rsp),%rbx
    2c77:	45 31 ff             	xor    %r15d,%r15d
    2c7a:	0f 28 05 00 00 00 00 	movaps 0x0(%rip),%xmm0        # 2c81 <try_swap+0x21d1>
    2c81:	48 8d 14 80          	lea    (%rax,%rax,4),%rdx
    2c85:	48 8b 5c d3 10       	mov    0x10(%rbx,%rdx,8),%rbx
    2c8a:	48 89 1c 24          	mov    %rbx,(%rsp)
    2c8e:	48 8b 5c 24 58       	mov    0x58(%rsp),%rbx
    2c93:	48 8d 04 c3          	lea    (%rbx,%rax,8),%rax
    2c97:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
    2c9c:	e9 e9 02 00 00       	jmpq   2f8a <try_swap+0x24da>
    2ca1:	8b 72 08             	mov    0x8(%rdx),%esi
    2ca4:	85 f6                	test   %esi,%esi
    2ca6:	0f 8e cc 02 00 00    	jle    2f78 <try_swap+0x24c8>
    2cac:	48 8b 5c 24 08       	mov    0x8(%rsp),%rbx
    2cb1:	48 8b 3c c3          	mov    (%rbx,%rax,8),%rdi
    2cb5:	48 8b 5c 24 20       	mov    0x20(%rsp),%rbx
    2cba:	48 8b 14 c3          	mov    (%rbx,%rax,8),%rdx
    2cbe:	48 8b 5c 24 18       	mov    0x18(%rsp),%rbx
    2cc3:	4c 8d 6f 04          	lea    0x4(%rdi),%r13
    2cc7:	48 8d 6f 14          	lea    0x14(%rdi),%rbp
    2ccb:	4c 8b 04 c3          	mov    (%rbx,%rax,8),%r8
    2ccf:	48 8b 5c 24 10       	mov    0x10(%rsp),%rbx
    2cd4:	48 8b 0c c3          	mov    (%rbx,%rax,8),%rcx
    2cd8:	48 8d 5a 14          	lea    0x14(%rdx),%rbx
    2cdc:	48 8d 42 04          	lea    0x4(%rdx),%rax
    2ce0:	4d 8d 50 14          	lea    0x14(%r8),%r10
    2ce4:	4d 8d 58 04          	lea    0x4(%r8),%r11
    2ce8:	4c 39 eb             	cmp    %r13,%rbx
    2ceb:	0f 96 44 24 40       	setbe  0x40(%rsp)
    2cf0:	44 0f b6 4c 24 40    	movzbl 0x40(%rsp),%r9d
    2cf6:	48 39 e8             	cmp    %rbp,%rax
    2cf9:	41 0f 93 c6          	setae  %r14b
    2cfd:	4c 89 54 24 30       	mov    %r10,0x30(%rsp)
    2d02:	4c 8d 51 04          	lea    0x4(%rcx),%r10
    2d06:	4c 89 54 24 28       	mov    %r10,0x28(%rsp)
    2d0b:	4c 8d 51 14          	lea    0x14(%rcx),%r10
    2d0f:	45 09 ce             	or     %r9d,%r14d
    2d12:	4c 39 6c 24 30       	cmp    %r13,0x30(%rsp)
    2d17:	44 88 74 24 40       	mov    %r14b,0x40(%rsp)
    2d1c:	0f 96 44 24 48       	setbe  0x48(%rsp)
    2d21:	44 0f b6 4c 24 48    	movzbl 0x48(%rsp),%r9d
    2d27:	49 39 eb             	cmp    %rbp,%r11
    2d2a:	41 0f 93 c6          	setae  %r14b
    2d2e:	45 09 ce             	or     %r9d,%r14d
    2d31:	45 89 f1             	mov    %r14d,%r9d
    2d34:	44 22 4c 24 40       	and    0x40(%rsp),%r9b
    2d39:	83 fe 0a             	cmp    $0xa,%esi
    2d3c:	41 0f 97 c6          	seta   %r14b
    2d40:	45 21 ce             	and    %r9d,%r14d
    2d43:	4d 39 ea             	cmp    %r13,%r10
    2d46:	4c 8b 4c 24 30       	mov    0x30(%rsp),%r9
    2d4b:	41 0f 96 c5          	setbe  %r13b
    2d4f:	48 39 6c 24 28       	cmp    %rbp,0x28(%rsp)
    2d54:	40 0f 93 c5          	setae  %bpl
    2d58:	44 09 ed             	or     %r13d,%ebp
    2d5b:	41 21 ee             	and    %ebp,%r14d
    2d5e:	49 39 c1             	cmp    %rax,%r9
    2d61:	41 0f 96 c5          	setbe  %r13b
    2d65:	49 39 db             	cmp    %rbx,%r11
    2d68:	40 0f 93 c5          	setae  %bpl
    2d6c:	44 09 ed             	or     %r13d,%ebp
    2d6f:	4c 8b 6c 24 28       	mov    0x28(%rsp),%r13
    2d74:	41 21 ee             	and    %ebp,%r14d
    2d77:	49 39 c2             	cmp    %rax,%r10
    2d7a:	40 0f 96 c5          	setbe  %bpl
    2d7e:	49 39 dd             	cmp    %rbx,%r13
    2d81:	0f 93 c3             	setae  %bl
    2d84:	09 eb                	or     %ebp,%ebx
    2d86:	41 84 de             	test   %bl,%r14b
    2d89:	0f 84 b6 02 00 00    	je     3045 <try_swap+0x2595>
    2d8f:	4d 39 d3             	cmp    %r10,%r11
    2d92:	41 0f 93 c2          	setae  %r10b
    2d96:	4d 39 cd             	cmp    %r9,%r13
    2d99:	41 0f 93 c1          	setae  %r9b
    2d9d:	45 08 ca             	or     %r9b,%r10b
    2da0:	0f 84 9f 02 00 00    	je     3045 <try_swap+0x2595>
    2da6:	83 e0 0f             	and    $0xf,%eax
    2da9:	49 89 c1             	mov    %rax,%r9
    2dac:	b8 01 00 00 00       	mov    $0x1,%eax
    2db1:	49 c1 e9 02          	shr    $0x2,%r9
    2db5:	49 f7 d9             	neg    %r9
    2db8:	41 83 e1 03          	and    $0x3,%r9d
    2dbc:	41 39 f1             	cmp    %esi,%r9d
    2dbf:	4c 0f 47 ce          	cmova  %rsi,%r9
    2dc3:	45 85 c9             	test   %r9d,%r9d
    2dc6:	74 7b                	je     2e43 <try_swap+0x2393>
    2dc8:	f3 0f 10 4a 04       	movss  0x4(%rdx),%xmm1
    2dcd:	41 83 f9 01          	cmp    $0x1,%r9d
    2dd1:	b0 02                	mov    $0x2,%al
    2dd3:	f3 0f 11 4f 04       	movss  %xmm1,0x4(%rdi)
    2dd8:	c7 42 04 00 00 80 bf 	movl   $0xbf800000,0x4(%rdx)
    2ddf:	f3 0f 10 49 04       	movss  0x4(%rcx),%xmm1
    2de4:	f3 41 0f 11 48 04    	movss  %xmm1,0x4(%r8)
    2dea:	c7 41 04 00 00 80 bf 	movl   $0xbf800000,0x4(%rcx)
    2df1:	74 50                	je     2e43 <try_swap+0x2393>
    2df3:	f3 0f 10 4a 08       	movss  0x8(%rdx),%xmm1
    2df8:	41 83 f9 03          	cmp    $0x3,%r9d
    2dfc:	f3 0f 11 4f 08       	movss  %xmm1,0x8(%rdi)
    2e01:	c7 42 08 00 00 80 bf 	movl   $0xbf800000,0x8(%rdx)
    2e08:	b0 03                	mov    $0x3,%al
    2e0a:	f3 0f 10 49 08       	movss  0x8(%rcx),%xmm1
    2e0f:	f3 41 0f 11 48 08    	movss  %xmm1,0x8(%r8)
    2e15:	c7 41 08 00 00 80 bf 	movl   $0xbf800000,0x8(%rcx)
    2e1c:	75 25                	jne    2e43 <try_swap+0x2393>
    2e1e:	f3 0f 10 4a 0c       	movss  0xc(%rdx),%xmm1
    2e23:	b0 04                	mov    $0x4,%al
    2e25:	f3 0f 11 4f 0c       	movss  %xmm1,0xc(%rdi)
    2e2a:	c7 42 0c 00 00 80 bf 	movl   $0xbf800000,0xc(%rdx)
    2e31:	f3 0f 10 49 0c       	movss  0xc(%rcx),%xmm1
    2e36:	f3 41 0f 11 48 0c    	movss  %xmm1,0xc(%r8)
    2e3c:	c7 41 0c 00 00 80 bf 	movl   $0xbf800000,0xc(%rcx)
    2e43:	89 f5                	mov    %esi,%ebp
    2e45:	89 44 24 40          	mov    %eax,0x40(%rsp)
    2e49:	44 29 cd             	sub    %r9d,%ebp
    2e4c:	4e 8d 0c 8d 04 00 00 	lea    0x4(,%r9,4),%r9
    2e53:	00 
    2e54:	44 8d 55 fc          	lea    -0x4(%rbp),%r10d
    2e58:	4e 8d 1c 0f          	lea    (%rdi,%r9,1),%r11
    2e5c:	4e 8d 34 0a          	lea    (%rdx,%r9,1),%r14
    2e60:	4e 8d 2c 09          	lea    (%rcx,%r9,1),%r13
    2e64:	41 c1 ea 02          	shr    $0x2,%r10d
    2e68:	41 83 c2 01          	add    $0x1,%r10d
    2e6c:	4c 89 5c 24 28       	mov    %r11,0x28(%rsp)
    2e71:	4f 8d 1c 08          	lea    (%r8,%r9,1),%r11
    2e75:	42 8d 1c 95 00 00 00 	lea    0x0(,%r10,4),%ebx
    2e7c:	00 
    2e7d:	45 31 c9             	xor    %r9d,%r9d
    2e80:	4c 89 5c 24 30       	mov    %r11,0x30(%rsp)
    2e85:	45 31 db             	xor    %r11d,%r11d
    2e88:	48 8b 44 24 28       	mov    0x28(%rsp),%rax
    2e8d:	41 83 c3 01          	add    $0x1,%r11d
    2e91:	43 0f 28 0c 0e       	movaps (%r14,%r9,1),%xmm1
    2e96:	42 0f 11 0c 08       	movups %xmm1,(%rax,%r9,1)
    2e9b:	48 8b 44 24 30       	mov    0x30(%rsp),%rax
    2ea0:	43 0f 29 04 0e       	movaps %xmm0,(%r14,%r9,1)
    2ea5:	43 0f 10 4c 0d 00    	movups 0x0(%r13,%r9,1),%xmm1
    2eab:	42 0f 11 0c 08       	movups %xmm1,(%rax,%r9,1)
    2eb0:	43 0f 11 44 0d 00    	movups %xmm0,0x0(%r13,%r9,1)
    2eb6:	49 83 c1 10          	add    $0x10,%r9
    2eba:	45 39 d3             	cmp    %r10d,%r11d
    2ebd:	72 c9                	jb     2e88 <try_swap+0x23d8>
    2ebf:	8b 44 24 40          	mov    0x40(%rsp),%eax
    2ec3:	01 d8                	add    %ebx,%eax
    2ec5:	39 dd                	cmp    %ebx,%ebp
    2ec7:	0f 84 ab 00 00 00    	je     2f78 <try_swap+0x24c8>
    2ecd:	4c 63 d0             	movslq %eax,%r10
    2ed0:	4e 8d 0c 95 00 00 00 	lea    0x0(,%r10,4),%r9
    2ed7:	00 
    2ed8:	4e 8d 1c 0a          	lea    (%rdx,%r9,1),%r11
    2edc:	49 01 c9             	add    %rcx,%r9
    2edf:	f3 41 0f 10 0b       	movss  (%r11),%xmm1
    2ee4:	f3 42 0f 11 0c 97    	movss  %xmm1,(%rdi,%r10,4)
    2eea:	41 c7 03 00 00 80 bf 	movl   $0xbf800000,(%r11)
    2ef1:	f3 41 0f 10 09       	movss  (%r9),%xmm1
    2ef6:	f3 43 0f 11 0c 90    	movss  %xmm1,(%r8,%r10,4)
    2efc:	41 c7 01 00 00 80 bf 	movl   $0xbf800000,(%r9)
    2f03:	44 8d 48 01          	lea    0x1(%rax),%r9d
    2f07:	44 39 ce             	cmp    %r9d,%esi
    2f0a:	7c 6c                	jl     2f78 <try_swap+0x24c8>
    2f0c:	4d 63 c9             	movslq %r9d,%r9
    2f0f:	83 c0 02             	add    $0x2,%eax
    2f12:	4e 8d 14 8d 00 00 00 	lea    0x0(,%r9,4),%r10
    2f19:	00 
    2f1a:	4e 8d 1c 12          	lea    (%rdx,%r10,1),%r11
    2f1e:	49 01 ca             	add    %rcx,%r10
    2f21:	39 f0                	cmp    %esi,%eax
    2f23:	f3 41 0f 10 0b       	movss  (%r11),%xmm1
    2f28:	f3 42 0f 11 0c 8f    	movss  %xmm1,(%rdi,%r9,4)
    2f2e:	41 c7 03 00 00 80 bf 	movl   $0xbf800000,(%r11)
    2f35:	f3 41 0f 10 0a       	movss  (%r10),%xmm1
    2f3a:	f3 43 0f 11 0c 88    	movss  %xmm1,(%r8,%r9,4)
    2f40:	41 c7 02 00 00 80 bf 	movl   $0xbf800000,(%r10)
    2f47:	7f 2f                	jg     2f78 <try_swap+0x24c8>
    2f49:	48 98                	cltq   
    2f4b:	48 8d 34 85 00 00 00 	lea    0x0(,%rax,4),%rsi
    2f52:	00 
    2f53:	48 01 f2             	add    %rsi,%rdx
    2f56:	48 01 f1             	add    %rsi,%rcx
    2f59:	f3 0f 10 0a          	movss  (%rdx),%xmm1
    2f5d:	f3 0f 11 0c 87       	movss  %xmm1,(%rdi,%rax,4)
    2f62:	c7 02 00 00 80 bf    	movl   $0xbf800000,(%rdx)
    2f68:	f3 0f 10 09          	movss  (%rcx),%xmm1
    2f6c:	f3 41 0f 11 0c 80    	movss  %xmm1,(%r8,%rax,4)
    2f72:	c7 01 00 00 80 bf    	movl   $0xbf800000,(%rcx)
    2f78:	49 83 c7 01          	add    $0x1,%r15
    2f7c:	44 39 bc 24 cc 00 00 	cmp    %r15d,0xcc(%rsp)
    2f83:	00 
    2f84:	0f 8e 85 ee ff ff    	jle    1e0f <try_swap+0x135f>
    2f8a:	48 8b 04 24          	mov    (%rsp),%rax
    2f8e:	4a 8d 0c bd 00 00 00 	lea    0x0(,%r15,4),%rcx
    2f95:	00 
    2f96:	4a 63 04 b8          	movslq (%rax,%r15,4),%rax
    2f9a:	83 f8 ff             	cmp    $0xffffffff,%eax
    2f9d:	74 d9                	je     2f78 <try_swap+0x24c8>
    2f9f:	48 8d 14 80          	lea    (%rax,%rax,4),%rdx
    2fa3:	49 8d 14 d4          	lea    (%r12,%rdx,8),%rdx
    2fa7:	44 8b 6a 20          	mov    0x20(%rdx),%r13d
    2fab:	45 85 ed             	test   %r13d,%r13d
    2fae:	75 c8                	jne    2f78 <try_swap+0x24c8>
    2fb0:	48 8b 5c 24 38       	mov    0x38(%rsp),%rbx
    2fb5:	48 8b 33             	mov    (%rbx),%rsi
    2fb8:	8b 0c 0e             	mov    (%rsi,%rcx,1),%ecx
    2fbb:	85 c9                	test   %ecx,%ecx
    2fbd:	0f 84 de fc ff ff    	je     2ca1 <try_swap+0x21f1>
    2fc3:	48 8b 52 10          	mov    0x10(%rdx),%rdx
    2fc7:	8b 12                	mov    (%rdx),%edx
    2fc9:	39 94 24 c4 00 00 00 	cmp    %edx,0xc4(%rsp)
    2fd0:	74 a6                	je     2f78 <try_swap+0x24c8>
    2fd2:	39 94 24 c0 00 00 00 	cmp    %edx,0xc0(%rsp)
    2fd9:	74 9d                	je     2f78 <try_swap+0x24c8>
    2fdb:	48 63 d1             	movslq %ecx,%rdx
    2fde:	48 8b 5c 24 20       	mov    0x20(%rsp),%rbx
    2fe3:	48 8d 0c 95 00 00 00 	lea    0x0(,%rdx,4),%rcx
    2fea:	00 
    2feb:	48 89 ce             	mov    %rcx,%rsi
    2fee:	48 03 34 c3          	add    (%rbx,%rax,8),%rsi
    2ff2:	48 8b 5c 24 08       	mov    0x8(%rsp),%rbx
    2ff7:	48 8b 3c c3          	mov    (%rbx,%rax,8),%rdi
    2ffb:	48 8b 5c 24 10       	mov    0x10(%rsp),%rbx
    3000:	f3 0f 10 0e          	movss  (%rsi),%xmm1
    3004:	48 03 0c c3          	add    (%rbx,%rax,8),%rcx
    3008:	48 8b 5c 24 18       	mov    0x18(%rsp),%rbx
    300d:	f3 0f 11 0c 97       	movss  %xmm1,(%rdi,%rdx,4)
    3012:	c7 06 00 00 80 bf    	movl   $0xbf800000,(%rsi)
    3018:	48 8b 04 c3          	mov    (%rbx,%rax,8),%rax
    301c:	f3 0f 10 09          	movss  (%rcx),%xmm1
    3020:	f3 0f 11 0c 90       	movss  %xmm1,(%rax,%rdx,4)
    3025:	c7 01 00 00 80 bf    	movl   $0xbf800000,(%rcx)
    302b:	e9 48 ff ff ff       	jmpq   2f78 <try_swap+0x24c8>
    3030:	8b 7c 24 7c          	mov    0x7c(%rsp),%edi
    3034:	85 ff                	test   %edi,%edi
    3036:	0f 8f 02 e1 ff ff    	jg     113e <try_swap+0x68e>
    303c:	66 0f ef c0          	pxor   %xmm0,%xmm0
    3040:	e9 ca ef ff ff       	jmpq   200f <try_swap+0x155f>
    3045:	8d 46 ff             	lea    -0x1(%rsi),%eax
    3048:	31 f6                	xor    %esi,%esi
    304a:	48 83 c0 01          	add    $0x1,%rax
    304e:	f3 0f 10 4c b2 04    	movss  0x4(%rdx,%rsi,4),%xmm1
    3054:	f3 0f 11 4c b7 04    	movss  %xmm1,0x4(%rdi,%rsi,4)
    305a:	c7 44 b2 04 00 00 80 	movl   $0xbf800000,0x4(%rdx,%rsi,4)
    3061:	bf 
    3062:	f3 0f 10 4c b1 04    	movss  0x4(%rcx,%rsi,4),%xmm1
    3068:	f3 41 0f 11 4c b0 04 	movss  %xmm1,0x4(%r8,%rsi,4)
    306f:	c7 44 b1 04 00 00 80 	movl   $0xbf800000,0x4(%rcx,%rsi,4)
    3076:	bf 
    3077:	48 83 c6 01          	add    $0x1,%rsi
    307b:	48 39 c6             	cmp    %rax,%rsi
    307e:	75 ce                	jne    304e <try_swap+0x259e>
    3080:	e9 f3 fe ff ff       	jmpq   2f78 <try_swap+0x24c8>
    3085:	b9 00 00 00 00       	mov    $0x0,%ecx
    308a:	ba 3a 07 00 00       	mov    $0x73a,%edx
    308f:	be 00 00 00 00       	mov    $0x0,%esi
    3094:	bf 00 00 00 00       	mov    $0x0,%edi
    3099:	e8 00 00 00 00       	callq  309e <try_swap+0x25ee>
    309e:	83 ee 01             	sub    $0x1,%esi
    30a1:	31 c0                	xor    %eax,%eax
    30a3:	48 83 c6 01          	add    $0x1,%rsi
    30a7:	f3 0f 10 44 82 04    	movss  0x4(%rdx,%rax,4),%xmm0
    30ad:	f3 0f 11 44 87 04    	movss  %xmm0,0x4(%rdi,%rax,4)
    30b3:	c7 44 82 04 00 00 80 	movl   $0xbf800000,0x4(%rdx,%rax,4)
    30ba:	bf 
    30bb:	f3 0f 10 44 81 04    	movss  0x4(%rcx,%rax,4),%xmm0
    30c1:	f3 41 0f 11 44 80 04 	movss  %xmm0,0x4(%r8,%rax,4)
    30c8:	c7 44 81 04 00 00 80 	movl   $0xbf800000,0x4(%rcx,%rax,4)
    30cf:	bf 
    30d0:	48 83 c0 01          	add    $0x1,%rax
    30d4:	48 39 f0             	cmp    %rsi,%rax
    30d7:	75 ce                	jne    30a7 <try_swap+0x25f7>
    30d9:	e9 7a f9 ff ff       	jmpq   2a58 <try_swap+0x1fa8>
    30de:	b9 00 00 00 00       	mov    $0x0,%ecx
    30e3:	ba 3b 07 00 00       	mov    $0x73b,%edx
    30e8:	be 00 00 00 00       	mov    $0x0,%esi
    30ed:	bf 00 00 00 00       	mov    $0x0,%edi
    30f2:	e8 00 00 00 00       	callq  30f7 <try_swap+0x2647>
    30f7:	f3 0f 10 8c 24 b4 00 	movss  0xb4(%rsp),%xmm1
    30fe:	00 00 
    3100:	0f 28 d1             	movaps %xmm1,%xmm2
    3103:	e9 2c f5 ff ff       	jmpq   2634 <try_swap+0x1b84>
    3108:	f3 0f 11 64 24 18    	movss  %xmm4,0x18(%rsp)
    310e:	0f 28 d4             	movaps %xmm4,%xmm2
    3111:	e9 8a f1 ff ff       	jmpq   22a0 <try_swap+0x17f0>
    3116:	bf 00 00 00 00       	mov    $0x0,%edi
    311b:	44 89 f2             	mov    %r14d,%edx
    311e:	44 89 fe             	mov    %r15d,%esi
    3121:	31 c0                	xor    %eax,%eax
    3123:	e8 00 00 00 00       	callq  3128 <try_swap+0x2678>
    3128:	bf 01 00 00 00       	mov    $0x1,%edi
    312d:	e8 00 00 00 00       	callq  3132 <try_swap+0x2682>
    3132:	b9 00 00 00 00       	mov    $0x0,%ecx
    3137:	ba 48 07 00 00       	mov    $0x748,%edx
    313c:	be 00 00 00 00       	mov    $0x0,%esi
    3141:	bf 00 00 00 00       	mov    $0x0,%edi
    3146:	e8 00 00 00 00       	callq  314b <try_swap+0x269b>
    314b:	bf 00 00 00 00       	mov    $0x0,%edi
    3150:	44 89 e6             	mov    %r12d,%esi
    3153:	31 c0                	xor    %eax,%eax
    3155:	e8 00 00 00 00       	callq  315a <try_swap+0x26aa>
    315a:	bf 01 00 00 00       	mov    $0x1,%edi
    315f:	e8 00 00 00 00       	callq  3164 <try_swap+0x26b4>
    3164:	66 66 66 2e 0f 1f 84 	data16 data16 nopw %cs:0x0(%rax,%rax,1)
    316b:	00 00 00 00 00 

0000000000003170 <comp_td_costs>:
    3170:	41 57                	push   %r15
    3172:	41 56                	push   %r14
    3174:	41 55                	push   %r13
    3176:	41 54                	push   %r12
    3178:	55                   	push   %rbp
    3179:	53                   	push   %rbx
    317a:	48 83 ec 58          	sub    $0x58,%rsp
    317e:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3184 <comp_td_costs+0x14>
    3184:	48 89 7c 24 40       	mov    %rdi,0x40(%rsp)
    3189:	48 89 74 24 48       	mov    %rsi,0x48(%rsp)
    318e:	85 c0                	test   %eax,%eax
    3190:	89 44 24 24          	mov    %eax,0x24(%rsp)
    3194:	0f 8e 49 02 00 00    	jle    33e3 <comp_td_costs+0x273>
    319a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 31a1 <comp_td_costs+0x31>
    31a1:	66 0f ef e4          	pxor   %xmm4,%xmm4
    31a5:	4c 8b 15 00 00 00 00 	mov    0x0(%rip),%r10        # 31ac <comp_td_costs+0x3c>
    31ac:	4c 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11        # 31b3 <comp_td_costs+0x43>
    31b3:	31 f6                	xor    %esi,%esi
    31b5:	4c 8b 3d 00 00 00 00 	mov    0x0(%rip),%r15        # 31bc <comp_td_costs+0x4c>
    31bc:	4c 8b 35 00 00 00 00 	mov    0x0(%rip),%r14        # 31c3 <comp_td_costs+0x53>
    31c3:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
    31c8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 31cf <comp_td_costs+0x5f>
    31cf:	4c 8b 2d 00 00 00 00 	mov    0x0(%rip),%r13        # 31d6 <comp_td_costs+0x66>
    31d6:	4c 8b 25 00 00 00 00 	mov    0x0(%rip),%r12        # 31dd <comp_td_costs+0x6d>
    31dd:	48 8b 2d 00 00 00 00 	mov    0x0(%rip),%rbp        # 31e4 <comp_td_costs+0x74>
    31e4:	0f 28 d4             	movaps %xmm4,%xmm2
    31e7:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
    31ec:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 31f3 <comp_td_costs+0x83>
    31f3:	0f 28 dc             	movaps %xmm4,%xmm3
    31f6:	0f 28 ec             	movaps %xmm4,%xmm5
    31f9:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
    31fe:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3205 <comp_td_costs+0x95>
    3205:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
    320a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3211 <comp_td_costs+0xa1>
    3211:	48 83 c0 20          	add    $0x20,%rax
    3215:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    321a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    3220:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
    3225:	8b 10                	mov    (%rax),%edx
    3227:	85 d2                	test   %edx,%edx
    3229:	0f 85 51 01 00 00    	jne    3380 <comp_td_costs+0x210>
    322f:	48 89 c3             	mov    %rax,%rbx
    3232:	8b 40 e8             	mov    -0x18(%rax),%eax
    3235:	85 c0                	test   %eax,%eax
    3237:	89 44 24 08          	mov    %eax,0x8(%rsp)
    323b:	0f 8e 3f 01 00 00    	jle    3380 <comp_td_costs+0x210>
    3241:	48 8b 5b f0          	mov    -0x10(%rbx),%rbx
    3245:	48 63 03             	movslq (%rbx),%rax
    3248:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    324c:	49 8d 14 c2          	lea    (%r10,%rax,8),%rdx
    3250:	48 8b 42 08          	mov    0x8(%rdx),%rax
    3254:	48 89 c7             	mov    %rax,%rdi
    3257:	48 89 04 24          	mov    %rax,(%rsp)
    325b:	48 63 43 04          	movslq 0x4(%rbx),%rax
    325f:	48 85 ff             	test   %rdi,%rdi
    3262:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    3266:	49 8d 04 c2          	lea    (%r10,%rax,8),%rax
    326a:	4c 8b 40 08          	mov    0x8(%rax),%r8
    326e:	0f 84 b9 01 00 00    	je     342d <comp_td_costs+0x2bd>
    3274:	4d 85 c0             	test   %r8,%r8
    3277:	0f 84 97 01 00 00    	je     3414 <comp_td_costs+0x2a4>
    327d:	8b 7a 18             	mov    0x18(%rdx),%edi
    3280:	89 7c 24 0c          	mov    %edi,0xc(%rsp)
    3284:	8b 7a 1c             	mov    0x1c(%rdx),%edi
    3287:	89 7c 24 20          	mov    %edi,0x20(%rsp)
    328b:	31 ff                	xor    %edi,%edi
    328d:	e9 94 00 00 00       	jmpq   3326 <comp_td_costs+0x1b6>
    3292:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    3298:	4d 39 d8             	cmp    %r11,%r8
    329b:	0f 84 17 01 00 00    	je     33b8 <comp_td_costs+0x248>
    32a1:	4c 8b 44 24 10       	mov    0x10(%rsp),%r8
    32a6:	49 8b 14 d0          	mov    (%r8,%rdx,8),%rdx
    32aa:	f3 0f 10 04 82       	movss  (%rdx,%rax,4),%xmm0
    32af:	0f 2e e0             	ucomiss %xmm0,%xmm4
    32b2:	0f 87 34 01 00 00    	ja     33ec <comp_td_costs+0x27c>
    32b8:	0f 2e e8             	ucomiss %xmm0,%xmm5
    32bb:	0f 87 3f 01 00 00    	ja     3400 <comp_td_costs+0x290>
    32c1:	49 8b 04 f7          	mov    (%r15,%rsi,8),%rax
    32c5:	f3 0f 58 d0          	addss  %xmm0,%xmm2
    32c9:	f3 0f 10 0c 88       	movss  (%rax,%rcx,4),%xmm1
    32ce:	49 8b 04 f6          	mov    (%r14,%rsi,8),%rax
    32d2:	f3 0f 59 c8          	mulss  %xmm0,%xmm1
    32d6:	f3 0f 11 04 88       	movss  %xmm0,(%rax,%rcx,4)
    32db:	49 8b 44 f5 00       	mov    0x0(%r13,%rsi,8),%rax
    32e0:	f3 0f 58 d9          	addss  %xmm1,%xmm3
    32e4:	c7 04 88 00 00 80 bf 	movl   $0xbf800000,(%rax,%rcx,4)
    32eb:	49 8b 04 f4          	mov    (%r12,%rsi,8),%rax
    32ef:	f3 0f 11 0c 88       	movss  %xmm1,(%rax,%rcx,4)
    32f4:	48 8b 44 f5 00       	mov    0x0(%rbp,%rsi,8),%rax
    32f9:	c7 04 88 00 00 80 bf 	movl   $0xbf800000,(%rax,%rcx,4)
    3300:	8d 47 02             	lea    0x2(%rdi),%eax
    3303:	39 44 24 08          	cmp    %eax,0x8(%rsp)
    3307:	7c 77                	jl     3380 <comp_td_costs+0x210>
    3309:	48 63 44 bb 08       	movslq 0x8(%rbx,%rdi,4),%rax
    330e:	48 89 cf             	mov    %rcx,%rdi
    3311:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    3315:	49 8d 04 c2          	lea    (%r10,%rax,8),%rax
    3319:	4c 8b 40 08          	mov    0x8(%rax),%r8
    331d:	4d 85 c0             	test   %r8,%r8
    3320:	0f 84 ee 00 00 00    	je     3414 <comp_td_costs+0x2a4>
    3326:	8b 50 18             	mov    0x18(%rax),%edx
    3329:	2b 54 24 0c          	sub    0xc(%rsp),%edx
    332d:	48 8d 4f 01          	lea    0x1(%rdi),%rcx
    3331:	8b 40 1c             	mov    0x1c(%rax),%eax
    3334:	2b 44 24 20          	sub    0x20(%rsp),%eax
    3338:	41 89 d1             	mov    %edx,%r9d
    333b:	41 c1 f9 1f          	sar    $0x1f,%r9d
    333f:	44 31 ca             	xor    %r9d,%edx
    3342:	44 29 ca             	sub    %r9d,%edx
    3345:	41 89 c1             	mov    %eax,%r9d
    3348:	41 c1 f9 1f          	sar    $0x1f,%r9d
    334c:	48 63 d2             	movslq %edx,%rdx
    334f:	44 31 c8             	xor    %r9d,%eax
    3352:	44 29 c8             	sub    %r9d,%eax
    3355:	4c 39 1c 24          	cmp    %r11,(%rsp)
    3359:	48 98                	cltq   
    335b:	0f 85 37 ff ff ff    	jne    3298 <comp_td_costs+0x128>
    3361:	4c 3b 04 24          	cmp    (%rsp),%r8
    3365:	74 69                	je     33d0 <comp_td_costs+0x260>
    3367:	4c 8b 44 24 28       	mov    0x28(%rsp),%r8
    336c:	49 8b 14 d0          	mov    (%r8,%rdx,8),%rdx
    3370:	f3 0f 10 04 82       	movss  (%rdx,%rax,4),%xmm0
    3375:	e9 35 ff ff ff       	jmpq   32af <comp_td_costs+0x13f>
    337a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    3380:	48 83 c6 01          	add    $0x1,%rsi
    3384:	48 83 44 24 18 28    	addq   $0x28,0x18(%rsp)
    338a:	39 74 24 24          	cmp    %esi,0x24(%rsp)
    338e:	0f 8f 8c fe ff ff    	jg     3220 <comp_td_costs+0xb0>
    3394:	48 8b 44 24 40       	mov    0x40(%rsp),%rax
    3399:	f3 0f 11 18          	movss  %xmm3,(%rax)
    339d:	48 8b 44 24 48       	mov    0x48(%rsp),%rax
    33a2:	f3 0f 11 10          	movss  %xmm2,(%rax)
    33a6:	48 83 c4 58          	add    $0x58,%rsp
    33aa:	5b                   	pop    %rbx
    33ab:	5d                   	pop    %rbp
    33ac:	41 5c                	pop    %r12
    33ae:	41 5d                	pop    %r13
    33b0:	41 5e                	pop    %r14
    33b2:	41 5f                	pop    %r15
    33b4:	c3                   	retq   
    33b5:	0f 1f 00             	nopl   (%rax)
    33b8:	4c 8b 44 24 30       	mov    0x30(%rsp),%r8
    33bd:	49 8b 14 d0          	mov    (%r8,%rdx,8),%rdx
    33c1:	f3 0f 10 04 82       	movss  (%rdx,%rax,4),%xmm0
    33c6:	e9 e4 fe ff ff       	jmpq   32af <comp_td_costs+0x13f>
    33cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    33d0:	4c 8b 44 24 38       	mov    0x38(%rsp),%r8
    33d5:	49 8b 14 d0          	mov    (%r8,%rdx,8),%rdx
    33d9:	f3 0f 10 04 82       	movss  (%rdx,%rax,4),%xmm0
    33de:	e9 cc fe ff ff       	jmpq   32af <comp_td_costs+0x13f>
    33e3:	66 0f ef d2          	pxor   %xmm2,%xmm2
    33e7:	0f 28 da             	movaps %xmm2,%xmm3
    33ea:	eb a8                	jmp    3394 <comp_td_costs+0x224>
    33ec:	bf 00 00 00 00       	mov    $0x0,%edi
    33f1:	e8 00 00 00 00       	callq  33f6 <comp_td_costs+0x286>
    33f6:	bf 01 00 00 00       	mov    $0x1,%edi
    33fb:	e8 00 00 00 00       	callq  3400 <comp_td_costs+0x290>
    3400:	bf 00 00 00 00       	mov    $0x0,%edi
    3405:	e8 00 00 00 00       	callq  340a <comp_td_costs+0x29a>
    340a:	bf 01 00 00 00       	mov    $0x1,%edi
    340f:	e8 00 00 00 00       	callq  3414 <comp_td_costs+0x2a4>
    3414:	b9 00 00 00 00       	mov    $0x0,%ecx
    3419:	ba c1 07 00 00       	mov    $0x7c1,%edx
    341e:	be 00 00 00 00       	mov    $0x0,%esi
    3423:	bf 00 00 00 00       	mov    $0x0,%edi
    3428:	e8 00 00 00 00       	callq  342d <comp_td_costs+0x2bd>
    342d:	b9 00 00 00 00       	mov    $0x0,%ecx
    3432:	ba c0 07 00 00       	mov    $0x7c0,%edx
    3437:	be 00 00 00 00       	mov    $0x0,%esi
    343c:	bf 00 00 00 00       	mov    $0x0,%edi
    3441:	e8 00 00 00 00       	callq  3446 <comp_td_costs+0x2d6>
    3446:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    344d:	00 00 00 

0000000000003450 <comp_bb_cost>:
    3450:	41 57                	push   %r15
    3452:	41 56                	push   %r14
    3454:	41 55                	push   %r13
    3456:	41 54                	push   %r12
    3458:	41 89 fd             	mov    %edi,%r13d
    345b:	55                   	push   %rbp
    345c:	53                   	push   %rbx
    345d:	48 83 ec 28          	sub    $0x28,%rsp
    3461:	83 fe 01             	cmp    $0x1,%esi
    3464:	89 74 24 08          	mov    %esi,0x8(%rsp)
    3468:	89 54 24 0c          	mov    %edx,0xc(%rsp)
    346c:	0f 84 79 03 00 00    	je     37eb <comp_bb_cost+0x39b>
    3472:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 3478 <comp_bb_cost+0x28>
    3478:	66 0f ef c0          	pxor   %xmm0,%xmm0
    347c:	66 0f ef db          	pxor   %xmm3,%xmm3
    3480:	85 d2                	test   %edx,%edx
    3482:	0f 8e f7 01 00 00    	jle    367f <comp_bb_cost+0x22f>
    3488:	66 0f ef ed          	pxor   %xmm5,%xmm5
    348c:	31 db                	xor    %ebx,%ebx
    348e:	66 0f ef c0          	pxor   %xmm0,%xmm0
    3492:	f3 0f 11 6c 24 1c    	movss  %xmm5,0x1c(%rsp)
    3498:	0f 28 dd             	movaps %xmm5,%xmm3
    349b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    34a0:	4c 8d 24 9b          	lea    (%rbx,%rbx,4),%r12
    34a4:	41 89 de             	mov    %ebx,%r14d
    34a7:	49 c1 e4 03          	shl    $0x3,%r12
    34ab:	4c 89 e0             	mov    %r12,%rax
    34ae:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 34b5 <comp_bb_cost+0x65>
    34b5:	8b 48 20             	mov    0x20(%rax),%ecx
    34b8:	85 c9                	test   %ecx,%ecx
    34ba:	0f 85 a1 01 00 00    	jne    3661 <comp_bb_cost+0x211>
    34c0:	45 85 ed             	test   %r13d,%r13d
    34c3:	8b 50 08             	mov    0x8(%rax),%edx
    34c6:	75 09                	jne    34d1 <comp_bb_cost+0x81>
    34c8:	83 fa 03             	cmp    $0x3,%edx
    34cb:	0f 8f 3f 02 00 00    	jg     3710 <comp_bb_cost+0x2c0>
    34d1:	48 8b 70 10          	mov    0x10(%rax),%rsi
    34d5:	4c 8b 3d 00 00 00 00 	mov    0x0(%rip),%r15        # 34dc <comp_bb_cost+0x8c>
    34dc:	48 89 dd             	mov    %rbx,%rbp
    34df:	48 c1 e5 04          	shl    $0x4,%rbp
    34e3:	48 03 2d 00 00 00 00 	add    0x0(%rip),%rbp        # 34ea <comp_bb_cost+0x9a>
    34ea:	85 d2                	test   %edx,%edx
    34ec:	48 63 06             	movslq (%rsi),%rax
    34ef:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    34f3:	49 8d 04 c7          	lea    (%r15,%rax,8),%rax
    34f7:	44 8b 40 18          	mov    0x18(%rax),%r8d
    34fb:	8b 48 1c             	mov    0x1c(%rax),%ecx
    34fe:	0f 8e dc 02 00 00    	jle    37e0 <comp_bb_cost+0x390>
    3504:	8d 42 ff             	lea    -0x1(%rdx),%eax
    3507:	4c 8d 5e 04          	lea    0x4(%rsi),%r11
    350b:	41 89 c9             	mov    %ecx,%r9d
    350e:	45 89 c2             	mov    %r8d,%r10d
    3511:	48 8d 3c 85 08 00 00 	lea    0x8(,%rax,4),%rdi
    3518:	00 
    3519:	48 01 f7             	add    %rsi,%rdi
    351c:	0f 1f 40 00          	nopl   0x0(%rax)
    3520:	49 63 03             	movslq (%r11),%rax
    3523:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    3527:	49 8d 04 c7          	lea    (%r15,%rax,8),%rax
    352b:	8b 50 18             	mov    0x18(%rax),%edx
    352e:	8b 40 1c             	mov    0x1c(%rax),%eax
    3531:	41 39 d0             	cmp    %edx,%r8d
    3534:	89 d6                	mov    %edx,%esi
    3536:	41 0f 4d f0          	cmovge %r8d,%esi
    353a:	44 39 d2             	cmp    %r10d,%edx
    353d:	44 0f 4d c6          	cmovge %esi,%r8d
    3541:	41 39 d2             	cmp    %edx,%r10d
    3544:	44 0f 4f d2          	cmovg  %edx,%r10d
    3548:	39 c1                	cmp    %eax,%ecx
    354a:	89 c2                	mov    %eax,%edx
    354c:	0f 4d d1             	cmovge %ecx,%edx
    354f:	44 39 c8             	cmp    %r9d,%eax
    3552:	0f 4d ca             	cmovge %edx,%ecx
    3555:	41 39 c1             	cmp    %eax,%r9d
    3558:	44 0f 4f c8          	cmovg  %eax,%r9d
    355c:	49 83 c3 04          	add    $0x4,%r11
    3560:	49 39 fb             	cmp    %rdi,%r11
    3563:	75 bb                	jne    3520 <comp_bb_cost+0xd0>
    3565:	8b 35 00 00 00 00    	mov    0x0(%rip),%esi        # 356b <comp_bb_cost+0x11b>
    356b:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 3571 <comp_bb_cost+0x121>
    3571:	b8 01 00 00 00       	mov    $0x1,%eax
    3576:	41 39 f2             	cmp    %esi,%r10d
    3579:	44 0f 4f d6          	cmovg  %esi,%r10d
    357d:	45 85 d2             	test   %r10d,%r10d
    3580:	44 0f 4e d0          	cmovle %eax,%r10d
    3584:	41 39 d1             	cmp    %edx,%r9d
    3587:	44 0f 4f ca          	cmovg  %edx,%r9d
    358b:	44 89 55 00          	mov    %r10d,0x0(%rbp)
    358f:	45 85 c9             	test   %r9d,%r9d
    3592:	44 0f 4e c8          	cmovle %eax,%r9d
    3596:	41 39 f0             	cmp    %esi,%r8d
    3599:	44 0f 4f c6          	cmovg  %esi,%r8d
    359d:	44 89 4d 08          	mov    %r9d,0x8(%rbp)
    35a1:	45 85 c0             	test   %r8d,%r8d
    35a4:	44 0f 4e c0          	cmovle %eax,%r8d
    35a8:	39 d1                	cmp    %edx,%ecx
    35aa:	0f 4f ca             	cmovg  %edx,%ecx
    35ad:	44 89 45 04          	mov    %r8d,0x4(%rbp)
    35b1:	85 c9                	test   %ecx,%ecx
    35b3:	0f 4e c8             	cmovle %eax,%ecx
    35b6:	83 7c 24 08 01       	cmpl   $0x1,0x8(%rsp)
    35bb:	89 4d 0c             	mov    %ecx,0xc(%rbp)
    35be:	0f 84 91 01 00 00    	je     3755 <comp_bb_cost+0x305>
    35c4:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 35cb <comp_bb_cost+0x17b>
    35cb:	4c 8d 04 98          	lea    (%rax,%rbx,4),%r8
    35cf:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 35d6 <comp_bb_cost+0x186>
    35d6:	4a 63 7c 20 08       	movslq 0x8(%rax,%r12,1),%rdi
    35db:	83 ff 31             	cmp    $0x31,%edi
    35de:	0f 8f bc 00 00 00    	jg     36a0 <comp_bb_cost+0x250>
    35e4:	48 63 c7             	movslq %edi,%rax
    35e7:	f3 0f 10 14 85 00 00 	movss  0x0(,%rax,4),%xmm2
    35ee:	00 00 
    35f0:	48 63 55 04          	movslq 0x4(%rbp),%rdx
    35f4:	48 63 45 00          	movslq 0x0(%rbp),%rax
    35f8:	66 0f ef c9          	pxor   %xmm1,%xmm1
    35fc:	8b 4d 0c             	mov    0xc(%rbp),%ecx
    35ff:	4c 8b 15 00 00 00 00 	mov    0x0(%rip),%r10        # 3606 <comp_bb_cost+0x1b6>
    3606:	4c 63 5d 08          	movslq 0x8(%rbp),%r11
    360a:	4c 8b 0d 00 00 00 00 	mov    0x0(%rip),%r9        # 3611 <comp_bb_cost+0x1c1>
    3611:	89 d6                	mov    %edx,%esi
    3613:	48 63 e9             	movslq %ecx,%rbp
    3616:	29 c6                	sub    %eax,%esi
    3618:	4d 8b 14 ea          	mov    (%r10,%rbp,8),%r10
    361c:	49 8b 14 d1          	mov    (%r9,%rdx,8),%rdx
    3620:	83 c6 01             	add    $0x1,%esi
    3623:	44 29 d9             	sub    %r11d,%ecx
    3626:	f3 0f 2a ce          	cvtsi2ss %esi,%xmm1
    362a:	83 c1 01             	add    $0x1,%ecx
    362d:	41 83 fd 01          	cmp    $0x1,%r13d
    3631:	f3 43 0f 10 64 9a fc 	movss  -0x4(%r10,%r11,4),%xmm4
    3638:	f3 0f 59 ca          	mulss  %xmm2,%xmm1
    363c:	f3 0f 59 e1          	mulss  %xmm1,%xmm4
    3640:	66 0f ef c9          	pxor   %xmm1,%xmm1
    3644:	f3 0f 2a c9          	cvtsi2ss %ecx,%xmm1
    3648:	f3 0f 59 d1          	mulss  %xmm1,%xmm2
    364c:	f3 0f 59 54 82 fc    	mulss  -0x4(%rdx,%rax,4),%xmm2
    3652:	f3 0f 58 e2          	addss  %xmm2,%xmm4
    3656:	f3 41 0f 11 20       	movss  %xmm4,(%r8)
    365b:	f3 0f 58 dc          	addss  %xmm4,%xmm3
    365f:	74 67                	je     36c8 <comp_bb_cost+0x278>
    3661:	8d 43 01             	lea    0x1(%rbx),%eax
    3664:	48 83 c3 01          	add    $0x1,%rbx
    3668:	3b 05 00 00 00 00    	cmp    0x0(%rip),%eax        # 366e <comp_bb_cost+0x21e>
    366e:	0f 8c 2c fe ff ff    	jl     34a0 <comp_bb_cost+0x50>
    3674:	83 7c 24 08 01       	cmpl   $0x1,0x8(%rsp)
    3679:	0f 84 f1 01 00 00    	je     3870 <comp_bb_cost+0x420>
    367f:	41 83 fd 01          	cmp    $0x1,%r13d
    3683:	0f 84 c6 02 00 00    	je     394f <comp_bb_cost+0x4ff>
    3689:	48 83 c4 28          	add    $0x28,%rsp
    368d:	0f 28 c3             	movaps %xmm3,%xmm0
    3690:	5b                   	pop    %rbx
    3691:	5d                   	pop    %rbp
    3692:	41 5c                	pop    %r12
    3694:	41 5d                	pop    %r13
    3696:	41 5e                	pop    %r14
    3698:	41 5f                	pop    %r15
    369a:	c3                   	retq   
    369b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    36a0:	66 0f ef d2          	pxor   %xmm2,%xmm2
    36a4:	8d 47 cf             	lea    -0x31(%rdi),%eax
    36a7:	f2 0f 2a d0          	cvtsi2sd %eax,%xmm2
    36ab:	f2 0f 59 15 00 00 00 	mulsd  0x0(%rip),%xmm2        # 36b3 <comp_bb_cost+0x263>
    36b2:	00 
    36b3:	f2 0f 58 15 00 00 00 	addsd  0x0(%rip),%xmm2        # 36bb <comp_bb_cost+0x26b>
    36ba:	00 
    36bb:	f2 0f 5a d2          	cvtsd2ss %xmm2,%xmm2
    36bf:	e9 2c ff ff ff       	jmpq   35f0 <comp_bb_cost+0x1a0>
    36c4:	0f 1f 40 00          	nopl   0x0(%rax)
    36c8:	8d 47 ce             	lea    -0x32(%rdi),%eax
    36cb:	83 f8 21             	cmp    $0x21,%eax
    36ce:	0f 86 ec 00 00 00    	jbe    37c0 <comp_bb_cost+0x370>
    36d4:	83 ff 53             	cmp    $0x53,%edi
    36d7:	0f 8f a4 00 00 00    	jg     3781 <comp_bb_cost+0x331>
    36dd:	66 0f ef c9          	pxor   %xmm1,%xmm1
    36e1:	f3 0f 5a 0c bd 00 00 	cvtss2sd 0x0(,%rdi,4),%xmm1
    36e8:	00 00 
    36ea:	66 0f ef d2          	pxor   %xmm2,%xmm2
    36ee:	66 0f ef e4          	pxor   %xmm4,%xmm4
    36f2:	f2 0f 2a d6          	cvtsi2sd %esi,%xmm2
    36f6:	f2 0f 2a e1          	cvtsi2sd %ecx,%xmm4
    36fa:	f2 0f 59 d1          	mulsd  %xmm1,%xmm2
    36fe:	f2 0f 59 cc          	mulsd  %xmm4,%xmm1
    3702:	f2 0f 58 ca          	addsd  %xmm2,%xmm1
    3706:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    370a:	e9 52 ff ff ff       	jmpq   3661 <comp_bb_cost+0x211>
    370f:	90                   	nop
    3710:	48 89 da             	mov    %rbx,%rdx
    3713:	89 df                	mov    %ebx,%edi
    3715:	f3 0f 11 5c 24 18    	movss  %xmm3,0x18(%rsp)
    371b:	48 c1 e2 04          	shl    $0x4,%rdx
    371f:	f2 0f 11 44 24 10    	movsd  %xmm0,0x10(%rsp)
    3725:	48 89 d5             	mov    %rdx,%rbp
    3728:	48 03 2d 00 00 00 00 	add    0x0(%rip),%rbp        # 372f <comp_bb_cost+0x2df>
    372f:	48 03 15 00 00 00 00 	add    0x0(%rip),%rdx        # 3736 <comp_bb_cost+0x2e6>
    3736:	48 89 ee             	mov    %rbp,%rsi
    3739:	e8 c2 c8 ff ff       	callq  0 <get_bb_from_scratch>
    373e:	83 7c 24 08 01       	cmpl   $0x1,0x8(%rsp)
    3743:	f2 0f 10 44 24 10    	movsd  0x10(%rsp),%xmm0
    3749:	f3 0f 10 5c 24 18    	movss  0x18(%rsp),%xmm3
    374f:	0f 85 6f fe ff ff    	jne    35c4 <comp_bb_cost+0x174>
    3755:	8b 54 24 0c          	mov    0xc(%rsp),%edx
    3759:	48 89 ee             	mov    %rbp,%rsi
    375c:	44 89 f7             	mov    %r14d,%edi
    375f:	f3 0f 11 5c 24 18    	movss  %xmm3,0x18(%rsp)
    3765:	f2 0f 11 44 24 10    	movsd  %xmm0,0x10(%rsp)
    376b:	e8 20 cf ff ff       	callq  690 <update_region_occ.constprop.5>
    3770:	f3 0f 10 5c 24 18    	movss  0x18(%rsp),%xmm3
    3776:	f2 0f 10 44 24 10    	movsd  0x10(%rsp),%xmm0
    377c:	e9 e0 fe ff ff       	jmpq   3661 <comp_bb_cost+0x211>
    3781:	66 0f ef d2          	pxor   %xmm2,%xmm2
    3785:	83 c7 01             	add    $0x1,%edi
    3788:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 3790 <comp_bb_cost+0x340>
    378f:	00 
    3790:	f2 0f 10 25 00 00 00 	movsd  0x0(%rip),%xmm4        # 3798 <comp_bb_cost+0x348>
    3797:	00 
    3798:	f2 0f 2a d7          	cvtsi2sd %edi,%xmm2
    379c:	f2 0f 59 ca          	mulsd  %xmm2,%xmm1
    37a0:	f2 0f 59 e2          	mulsd  %xmm2,%xmm4
    37a4:	f2 0f 58 0d 00 00 00 	addsd  0x0(%rip),%xmm1        # 37ac <comp_bb_cost+0x35c>
    37ab:	00 
    37ac:	f2 0f 59 d4          	mulsd  %xmm4,%xmm2
    37b0:	f2 0f 5c ca          	subsd  %xmm2,%xmm1
    37b4:	e9 31 ff ff ff       	jmpq   36ea <comp_bb_cost+0x29a>
    37b9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    37c0:	66 0f ef c9          	pxor   %xmm1,%xmm1
    37c4:	83 ef 31             	sub    $0x31,%edi
    37c7:	f2 0f 2a cf          	cvtsi2sd %edi,%xmm1
    37cb:	f2 0f 59 0d 00 00 00 	mulsd  0x0(%rip),%xmm1        # 37d3 <comp_bb_cost+0x383>
    37d2:	00 
    37d3:	f2 0f 58 0d 00 00 00 	addsd  0x0(%rip),%xmm1        # 37db <comp_bb_cost+0x38b>
    37da:	00 
    37db:	e9 0a ff ff ff       	jmpq   36ea <comp_bb_cost+0x29a>
    37e0:	41 89 c9             	mov    %ecx,%r9d
    37e3:	45 89 c2             	mov    %r8d,%r10d
    37e6:	e9 7a fd ff ff       	jmpq   3565 <comp_bb_cost+0x115>
    37eb:	85 d2                	test   %edx,%edx
    37ed:	0f 8e 7f fc ff ff    	jle    3472 <comp_bb_cost+0x22>
    37f3:	8d 72 ff             	lea    -0x1(%rdx),%esi
    37f6:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 37fd <comp_bb_cost+0x3ad>
    37fd:	4c 8b 05 00 00 00 00 	mov    0x0(%rip),%r8        # 3804 <comp_bb_cost+0x3b4>
    3804:	45 31 c9             	xor    %r9d,%r9d
    3807:	41 89 d3             	mov    %edx,%r11d
    380a:	49 89 f2             	mov    %rsi,%r10
    380d:	48 83 c6 01          	add    $0x1,%rsi
    3811:	48 c1 e6 04          	shl    $0x4,%rsi
    3815:	0f 1f 00             	nopl   (%rax)
    3818:	4a 8b 0c cf          	mov    (%rdi,%r9,8),%rcx
    381c:	4b 8b 14 c8          	mov    (%r8,%r9,8),%rdx
    3820:	31 c0                	xor    %eax,%eax
    3822:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    3828:	c7 44 01 08 00 00 00 	movl   $0x0,0x8(%rcx,%rax,1)
    382f:	00 
    3830:	c7 44 02 08 00 00 00 	movl   $0x0,0x8(%rdx,%rax,1)
    3837:	00 
    3838:	48 83 c0 10          	add    $0x10,%rax
    383c:	48 39 f0             	cmp    %rsi,%rax
    383f:	75 e7                	jne    3828 <comp_bb_cost+0x3d8>
    3841:	49 83 c1 01          	add    $0x1,%r9
    3845:	45 39 cb             	cmp    %r9d,%r11d
    3848:	7f ce                	jg     3818 <comp_bb_cost+0x3c8>
    384a:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3850 <comp_bb_cost+0x400>
    3850:	85 c0                	test   %eax,%eax
    3852:	0f 8f 30 fc ff ff    	jg     3488 <comp_bb_cost+0x38>
    3858:	66 0f ef f6          	pxor   %xmm6,%xmm6
    385c:	66 0f ef c0          	pxor   %xmm0,%xmm0
    3860:	f3 0f 11 74 24 1c    	movss  %xmm6,0x1c(%rsp)
    3866:	0f 28 de             	movaps %xmm6,%xmm3
    3869:	eb 2d                	jmp    3898 <comp_bb_cost+0x448>
    386b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    3870:	8b 44 24 0c          	mov    0xc(%rsp),%eax
    3874:	66 0f ef db          	pxor   %xmm3,%xmm3
    3878:	85 c0                	test   %eax,%eax
    387a:	0f 8e ff fd ff ff    	jle    367f <comp_bb_cost+0x22f>
    3880:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 3887 <comp_bb_cost+0x437>
    3887:	4c 8b 05 00 00 00 00 	mov    0x0(%rip),%r8        # 388e <comp_bb_cost+0x43e>
    388e:	44 8d 50 ff          	lea    -0x1(%rax),%r10d
    3892:	f3 0f 10 5c 24 1c    	movss  0x1c(%rsp),%xmm3
    3898:	45 89 d1             	mov    %r10d,%r9d
    389b:	44 8b 54 24 0c       	mov    0xc(%rsp),%r10d
    38a0:	31 f6                	xor    %esi,%esi
    38a2:	49 c1 e1 04          	shl    $0x4,%r9
    38a6:	49 83 c1 14          	add    $0x14,%r9
    38aa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    38b0:	49 8b 0c f0          	mov    (%r8,%rsi,8),%rcx
    38b4:	48 8b 1c f7          	mov    (%rdi,%rsi,8),%rbx
    38b8:	48 8d 41 04          	lea    0x4(%rcx),%rax
    38bc:	48 8d 53 04          	lea    0x4(%rbx),%rdx
    38c0:	4c 01 c9             	add    %r9,%rcx
    38c3:	eb 2e                	jmp    38f3 <comp_bb_cost+0x4a3>
    38c5:	0f 1f 00             	nopl   (%rax)
    38c8:	f3 0f 58 cb          	addss  %xmm3,%xmm1
    38cc:	f3 0f 10 50 04       	movss  0x4(%rax),%xmm2
    38d1:	f3 0f 10 58 fc       	movss  -0x4(%rax),%xmm3
    38d6:	0f 2e da             	ucomiss %xmm2,%xmm3
    38d9:	f3 0f 59 10          	mulss  (%rax),%xmm2
    38dd:	76 41                	jbe    3920 <comp_bb_cost+0x4d0>
    38df:	0f 28 da             	movaps %xmm2,%xmm3
    38e2:	48 83 c0 10          	add    $0x10,%rax
    38e6:	48 83 c2 10          	add    $0x10,%rdx
    38ea:	48 39 c8             	cmp    %rcx,%rax
    38ed:	f3 0f 58 d9          	addss  %xmm1,%xmm3
    38f1:	74 45                	je     3938 <comp_bb_cost+0x4e8>
    38f3:	f3 0f 10 4a 04       	movss  0x4(%rdx),%xmm1
    38f8:	f3 0f 10 52 fc       	movss  -0x4(%rdx),%xmm2
    38fd:	0f 2e d1             	ucomiss %xmm1,%xmm2
    3900:	f3 0f 59 0a          	mulss  (%rdx),%xmm1
    3904:	0f 28 d1             	movaps %xmm1,%xmm2
    3907:	77 bf                	ja     38c8 <comp_bb_cost+0x478>
    3909:	f3 0f 59 d1          	mulss  %xmm1,%xmm2
    390d:	f3 0f 58 da          	addss  %xmm2,%xmm3
    3911:	0f 28 cb             	movaps %xmm3,%xmm1
    3914:	eb b6                	jmp    38cc <comp_bb_cost+0x47c>
    3916:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    391d:	00 00 00 
    3920:	f3 0f 59 d2          	mulss  %xmm2,%xmm2
    3924:	0f 28 d9             	movaps %xmm1,%xmm3
    3927:	48 83 c0 10          	add    $0x10,%rax
    392b:	48 83 c2 10          	add    $0x10,%rdx
    392f:	48 39 c8             	cmp    %rcx,%rax
    3932:	f3 0f 58 da          	addss  %xmm2,%xmm3
    3936:	75 bb                	jne    38f3 <comp_bb_cost+0x4a3>
    3938:	48 83 c6 01          	add    $0x1,%rsi
    393c:	41 39 f2             	cmp    %esi,%r10d
    393f:	0f 8f 6b ff ff ff    	jg     38b0 <comp_bb_cost+0x460>
    3945:	41 83 fd 01          	cmp    $0x1,%r13d
    3949:	0f 85 3a fd ff ff    	jne    3689 <comp_bb_cost+0x239>
    394f:	bf 00 00 00 00       	mov    $0x0,%edi
    3954:	b8 01 00 00 00       	mov    $0x1,%eax
    3959:	f3 0f 11 5c 24 08    	movss  %xmm3,0x8(%rsp)
    395f:	e8 00 00 00 00       	callq  3964 <comp_bb_cost+0x514>
    3964:	f3 0f 10 5c 24 08    	movss  0x8(%rsp),%xmm3
    396a:	e9 1a fd ff ff       	jmpq   3689 <comp_bb_cost+0x239>
    396f:	90                   	nop

0000000000003970 <try_place>:
    3970:	41 57                	push   %r15
    3972:	41 56                	push   %r14
    3974:	41 55                	push   %r13
    3976:	41 54                	push   %r12
    3978:	49 89 d4             	mov    %rdx,%r12
    397b:	55                   	push   %rbp
    397c:	53                   	push   %rbx
    397d:	48 89 fd             	mov    %rdi,%rbp
    3980:	48 81 ec a8 02 00 00 	sub    $0x2a8,%rsp
    3987:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 398e <try_place+0x1e>
    398e:	8b 84 24 e0 02 00 00 	mov    0x2e0(%rsp),%eax
    3995:	f3 0f 10 ac 24 e4 02 	movss  0x2e4(%rsp),%xmm5
    399c:	00 00 
    399e:	f3 0f 11 6c 24 20    	movss  %xmm5,0x20(%rsp)
    39a4:	48 89 8c 24 f8 00 00 	mov    %rcx,0xf8(%rsp)
    39ab:	00 
    39ac:	48 89 b4 24 30 01 00 	mov    %rsi,0x130(%rsp)
    39b3:	00 
    39b4:	f3 0f 10 ac 24 1c 03 	movss  0x31c(%rsp),%xmm5
    39bb:	00 00 
    39bd:	8b 9c 24 0c 03 00 00 	mov    0x30c(%rsp),%ebx
    39c4:	41 89 c7             	mov    %eax,%r15d
    39c7:	89 84 24 e4 00 00 00 	mov    %eax,0xe4(%rsp)
    39ce:	48 c1 e7 02          	shl    $0x2,%rdi
    39d2:	8b 84 24 ec 02 00 00 	mov    0x2ec(%rsp),%eax
    39d9:	f3 0f 11 84 24 38 01 	movss  %xmm0,0x138(%rsp)
    39e0:	00 00 
    39e2:	f3 0f 11 ac 24 cc 00 	movss  %xmm5,0xcc(%rsp)
    39e9:	00 00 
    39eb:	89 44 24 2c          	mov    %eax,0x2c(%rsp)
    39ef:	8b 84 24 f8 02 00 00 	mov    0x2f8(%rsp),%eax
    39f6:	89 84 24 d0 00 00 00 	mov    %eax,0xd0(%rsp)
    39fd:	8b 84 24 10 03 00 00 	mov    0x310(%rsp),%eax
    3a04:	89 84 24 d4 00 00 00 	mov    %eax,0xd4(%rsp)
    3a0b:	8b 84 24 14 03 00 00 	mov    0x314(%rsp),%eax
    3a12:	41 89 c6             	mov    %eax,%r14d
    3a15:	89 84 24 e0 00 00 00 	mov    %eax,0xe0(%rsp)
    3a1c:	8b 84 24 18 03 00 00 	mov    0x318(%rsp),%eax
    3a23:	89 84 24 c4 00 00 00 	mov    %eax,0xc4(%rsp)
    3a2a:	8b 84 24 28 03 00 00 	mov    0x328(%rsp),%eax
    3a31:	89 84 24 dc 00 00 00 	mov    %eax,0xdc(%rsp)
    3a38:	e8 00 00 00 00       	callq  3a3d <try_place+0xcd>
    3a3d:	45 85 f6             	test   %r14d,%r14d
    3a40:	48 89 44 24 60       	mov    %rax,0x60(%rsp)
    3a45:	44 89 f8             	mov    %r15d,%eax
    3a48:	0f 95 84 24 16 01 00 	setne  0x116(%rsp)
    3a4f:	00 
    3a50:	83 e8 01             	sub    $0x1,%eax
    3a53:	0f b6 bc 24 16 01 00 	movzbl 0x116(%rsp),%edi
    3a5a:	00 
    3a5b:	83 f8 01             	cmp    $0x1,%eax
    3a5e:	48 c7 84 24 08 01 00 	movq   $0x0,0x108(%rsp)
    3a65:	00 00 00 00 00 
    3a6a:	0f 96 84 24 15 01 00 	setbe  0x115(%rsp)
    3a71:	00 
    3a72:	0f b6 84 24 15 01 00 	movzbl 0x115(%rsp),%eax
    3a79:	00 
    3a7a:	40 08 f8             	or     %dil,%al
    3a7d:	88 84 24 17 01 00 00 	mov    %al,0x117(%rsp)
    3a84:	0f 84 f5 00 00 00    	je     3b7f <try_place+0x20f>
    3a8a:	48 83 ec 08          	sub    $0x8,%rsp
    3a8e:	41 ff 74 24 10       	pushq  0x10(%r12)
    3a93:	41 ff 74 24 08       	pushq  0x8(%r12)
    3a98:	41 ff 34 24          	pushq  (%r12)
    3a9c:	ff b4 24 e8 03 00 00 	pushq  0x3e8(%rsp)
    3aa3:	48 89 ef             	mov    %rbp,%rdi
    3aa6:	ff b4 24 e8 03 00 00 	pushq  0x3e8(%rsp)
    3aad:	ff b4 24 e8 03 00 00 	pushq  0x3e8(%rsp)
    3ab4:	ff b4 24 e8 03 00 00 	pushq  0x3e8(%rsp)
    3abb:	ff b4 24 e8 03 00 00 	pushq  0x3e8(%rsp)
    3ac2:	ff b4 24 e8 03 00 00 	pushq  0x3e8(%rsp)
    3ac9:	ff b4 24 e8 03 00 00 	pushq  0x3e8(%rsp)
    3ad0:	ff b4 24 e8 03 00 00 	pushq  0x3e8(%rsp)
    3ad7:	ff b4 24 e8 03 00 00 	pushq  0x3e8(%rsp)
    3ade:	ff b4 24 e8 03 00 00 	pushq  0x3e8(%rsp)
    3ae5:	ff b4 24 e8 03 00 00 	pushq  0x3e8(%rsp)
    3aec:	ff b4 24 e8 03 00 00 	pushq  0x3e8(%rsp)
    3af3:	48 83 ec 30          	sub    $0x30,%rsp
    3af7:	48 8b 84 24 f0 03 00 	mov    0x3f0(%rsp),%rax
    3afe:	00 
    3aff:	48 8d 8c 24 10 02 00 	lea    0x210(%rsp),%rcx
    3b06:	00 
    3b07:	48 8d 94 24 18 02 00 	lea    0x218(%rsp),%rdx
    3b0e:	00 
    3b0f:	48 89 04 24          	mov    %rax,(%rsp)
    3b13:	48 8b 84 24 f8 03 00 	mov    0x3f8(%rsp),%rax
    3b1a:	00 
    3b1b:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    3b20:	48 8b 84 24 00 04 00 	mov    0x400(%rsp),%rax
    3b27:	00 
    3b28:	48 8b b4 24 e0 01 00 	mov    0x1e0(%rsp),%rsi
    3b2f:	00 
    3b30:	f3 0f 10 84 24 e8 01 	movss  0x1e8(%rsp),%xmm0
    3b37:	00 00 
    3b39:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
    3b3e:	48 8b 84 24 08 04 00 	mov    0x408(%rsp),%rax
    3b45:	00 
    3b46:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    3b4b:	48 8b 84 24 10 04 00 	mov    0x410(%rsp),%rax
    3b52:	00 
    3b53:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
    3b58:	8b 84 24 18 04 00 00 	mov    0x418(%rsp),%eax
    3b5f:	89 44 24 28          	mov    %eax,0x28(%rsp)
    3b63:	e8 00 00 00 00       	callq  3b68 <try_place+0x1f8>
    3b68:	48 8b 84 24 18 02 00 	mov    0x218(%rsp),%rax
    3b6f:	00 
    3b70:	48 89 84 24 b8 01 00 	mov    %rax,0x1b8(%rsp)
    3b77:	00 
    3b78:	48 81 c4 b0 00 00 00 	add    $0xb0,%rsp
    3b7f:	8b 84 24 f4 02 00 00 	mov    0x2f4(%rsp),%eax
    3b86:	48 83 ec 30          	sub    $0x30,%rsp
    3b8a:	89 84 24 40 01 00 00 	mov    %eax,0x140(%rsp)
    3b91:	89 c7                	mov    %eax,%edi
    3b93:	48 8b 84 24 70 03 00 	mov    0x370(%rsp),%rax
    3b9a:	00 
    3b9b:	48 89 04 24          	mov    %rax,(%rsp)
    3b9f:	48 8b 84 24 78 03 00 	mov    0x378(%rsp),%rax
    3ba6:	00 
    3ba7:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    3bac:	48 8b 84 24 80 03 00 	mov    0x380(%rsp),%rax
    3bb3:	00 
    3bb4:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
    3bb9:	48 8b 84 24 88 03 00 	mov    0x388(%rsp),%rax
    3bc0:	00 
    3bc1:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    3bc6:	48 8b 84 24 90 03 00 	mov    0x390(%rsp),%rax
    3bcd:	00 
    3bce:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
    3bd3:	8b 84 24 98 03 00 00 	mov    0x398(%rsp),%eax
    3bda:	89 44 24 28          	mov    %eax,0x28(%rsp)
    3bde:	e8 00 00 00 00       	callq  3be3 <try_place+0x273>
    3be3:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 3be9 <try_place+0x279>
    3be9:	f3 0f 10 ac 24 20 03 	movss  0x320(%rsp),%xmm5
    3bf0:	00 00 
    3bf2:	f3 0f 11 6c 24 48    	movss  %xmm5,0x48(%rsp)
    3bf8:	48 83 c4 30          	add    $0x30,%rsp
    3bfc:	85 d2                	test   %edx,%edx
    3bfe:	0f 8e b4 34 00 00    	jle    70b8 <try_place+0x3748>
    3c04:	83 ea 01             	sub    $0x1,%edx
    3c07:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 3c0e <try_place+0x29e>
    3c0e:	31 ed                	xor    %ebp,%ebp
    3c10:	48 8d 34 d2          	lea    (%rdx,%rdx,8),%rsi
    3c14:	48 8d 14 72          	lea    (%rdx,%rsi,2),%rdx
    3c18:	48 8d 41 08          	lea    0x8(%rcx),%rax
    3c1c:	48 8d 14 d5 a0 00 00 	lea    0xa0(,%rdx,8),%rdx
    3c23:	00 
    3c24:	48 01 d1             	add    %rdx,%rcx
    3c27:	8b 10                	mov    (%rax),%edx
    3c29:	39 d5                	cmp    %edx,%ebp
    3c2b:	0f 4c ea             	cmovl  %edx,%ebp
    3c2e:	48 05 98 00 00 00    	add    $0x98,%rax
    3c34:	48 39 c8             	cmp    %rcx,%rax
    3c37:	75 ee                	jne    3c27 <try_place+0x2b7>
    3c39:	80 bc 24 17 01 00 00 	cmpb   $0x0,0x117(%rsp)
    3c40:	00 
    3c41:	44 8b 2d 00 00 00 00 	mov    0x0(%rip),%r13d        # 3c48 <try_place+0x2d8>
    3c48:	0f 84 12 03 00 00    	je     3f60 <try_place+0x5f0>
    3c4e:	49 63 fd             	movslq %r13d,%rdi
    3c51:	48 c1 e7 03          	shl    $0x3,%rdi
    3c55:	e8 00 00 00 00       	callq  3c5a <try_place+0x2ea>
    3c5a:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 3c61 <try_place+0x2f1>
    3c61:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 3c68 <try_place+0x2f8>
    3c68:	48 c1 e7 03          	shl    $0x3,%rdi
    3c6c:	e8 00 00 00 00       	callq  3c71 <try_place+0x301>
    3c71:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 3c78 <try_place+0x308>
    3c78:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 3c7f <try_place+0x30f>
    3c7f:	48 c1 e7 03          	shl    $0x3,%rdi
    3c83:	e8 00 00 00 00       	callq  3c88 <try_place+0x318>
    3c88:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 3c8f <try_place+0x31f>
    3c8f:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 3c96 <try_place+0x326>
    3c96:	48 c1 e7 03          	shl    $0x3,%rdi
    3c9a:	e8 00 00 00 00       	callq  3c9f <try_place+0x32f>
    3c9f:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 3ca6 <try_place+0x336>
    3ca6:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3cac <try_place+0x33c>
    3cac:	8d 4d ff             	lea    -0x1(%rbp),%ecx
    3caf:	31 d2                	xor    %edx,%edx
    3cb1:	31 ff                	xor    %edi,%edi
    3cb3:	41 b8 04 00 00 00    	mov    $0x4,%r8d
    3cb9:	8d 70 ff             	lea    -0x1(%rax),%esi
    3cbc:	e8 00 00 00 00       	callq  3cc1 <try_place+0x351>
    3cc1:	44 8b 2d 00 00 00 00 	mov    0x0(%rip),%r13d        # 3cc8 <try_place+0x358>
    3cc8:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 3ccf <try_place+0x35f>
    3ccf:	45 85 ed             	test   %r13d,%r13d
    3cd2:	0f 8e 88 02 00 00    	jle    3f60 <try_place+0x5f0>
    3cd8:	45 31 e4             	xor    %r12d,%r12d
    3cdb:	45 31 f6             	xor    %r14d,%r14d
    3cde:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3ce5 <try_place+0x375>
    3ce5:	4b 8d 2c a4          	lea    (%r12,%r12,4),%rbp
    3ce9:	4d 89 e5             	mov    %r12,%r13
    3cec:	4c 03 2d 00 00 00 00 	add    0x0(%rip),%r13        # 3cf3 <try_place+0x383>
    3cf3:	41 83 c6 01          	add    $0x1,%r14d
    3cf7:	48 63 7c 28 08       	movslq 0x8(%rax,%rbp,1),%rdi
    3cfc:	48 c1 e7 02          	shl    $0x2,%rdi
    3d00:	e8 00 00 00 00       	callq  3d05 <try_place+0x395>
    3d05:	49 89 45 00          	mov    %rax,0x0(%r13)
    3d09:	4c 89 e0             	mov    %r12,%rax
    3d0c:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 3d13 <try_place+0x3a3>
    3d13:	4d 89 e5             	mov    %r12,%r13
    3d16:	4c 03 2d 00 00 00 00 	add    0x0(%rip),%r13        # 3d1d <try_place+0x3ad>
    3d1d:	48 83 28 04          	subq   $0x4,(%rax)
    3d21:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3d28 <try_place+0x3b8>
    3d28:	48 63 7c 28 08       	movslq 0x8(%rax,%rbp,1),%rdi
    3d2d:	48 c1 e7 02          	shl    $0x2,%rdi
    3d31:	e8 00 00 00 00       	callq  3d36 <try_place+0x3c6>
    3d36:	49 89 45 00          	mov    %rax,0x0(%r13)
    3d3a:	4c 89 e0             	mov    %r12,%rax
    3d3d:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 3d44 <try_place+0x3d4>
    3d44:	4d 89 e5             	mov    %r12,%r13
    3d47:	4c 03 2d 00 00 00 00 	add    0x0(%rip),%r13        # 3d4e <try_place+0x3de>
    3d4e:	48 83 28 04          	subq   $0x4,(%rax)
    3d52:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3d59 <try_place+0x3e9>
    3d59:	48 63 7c 28 08       	movslq 0x8(%rax,%rbp,1),%rdi
    3d5e:	48 c1 e7 02          	shl    $0x2,%rdi
    3d62:	e8 00 00 00 00       	callq  3d67 <try_place+0x3f7>
    3d67:	49 89 45 00          	mov    %rax,0x0(%r13)
    3d6b:	4c 89 e0             	mov    %r12,%rax
    3d6e:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 3d75 <try_place+0x405>
    3d75:	4d 89 e5             	mov    %r12,%r13
    3d78:	4c 03 2d 00 00 00 00 	add    0x0(%rip),%r13        # 3d7f <try_place+0x40f>
    3d7f:	48 83 28 04          	subq   $0x4,(%rax)
    3d83:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3d8a <try_place+0x41a>
    3d8a:	48 63 7c 28 08       	movslq 0x8(%rax,%rbp,1),%rdi
    3d8f:	48 c1 e7 02          	shl    $0x2,%rdi
    3d93:	e8 00 00 00 00       	callq  3d98 <try_place+0x428>
    3d98:	49 89 45 00          	mov    %rax,0x0(%r13)
    3d9c:	4c 89 e0             	mov    %r12,%rax
    3d9f:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 3da6 <try_place+0x436>
    3da6:	44 8b 2d 00 00 00 00 	mov    0x0(%rip),%r13d        # 3dad <try_place+0x43d>
    3dad:	49 83 c4 08          	add    $0x8,%r12
    3db1:	48 83 28 04          	subq   $0x4,(%rax)
    3db5:	45 39 ee             	cmp    %r13d,%r14d
    3db8:	0f 8c 20 ff ff ff    	jl     3cde <try_place+0x36e>
    3dbe:	45 85 ed             	test   %r13d,%r13d
    3dc1:	0f 8e 99 01 00 00    	jle    3f60 <try_place+0x5f0>
    3dc7:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3dce <try_place+0x45e>
    3dce:	48 8b 2d 00 00 00 00 	mov    0x0(%rip),%rbp        # 3dd5 <try_place+0x465>
    3dd5:	45 31 f6             	xor    %r14d,%r14d
    3dd8:	4c 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11        # 3ddf <try_place+0x46f>
    3ddf:	66 0f ef c0          	pxor   %xmm0,%xmm0
    3de3:	4c 8d 78 08          	lea    0x8(%rax),%r15
    3de7:	e9 0e 01 00 00       	jmpq   3efa <try_place+0x58a>
    3dec:	83 f8 0e             	cmp    $0xe,%eax
    3def:	0f 86 3c 01 00 00    	jbe    3f31 <try_place+0x5c1>
    3df5:	48 89 f7             	mov    %rsi,%rdi
    3df8:	be 01 00 00 00       	mov    $0x1,%esi
    3dfd:	83 e7 0f             	and    $0xf,%edi
    3e00:	48 c1 ef 02          	shr    $0x2,%rdi
    3e04:	48 f7 df             	neg    %rdi
    3e07:	83 e7 03             	and    $0x3,%edi
    3e0a:	39 f8                	cmp    %edi,%eax
    3e0c:	48 0f 46 f8          	cmovbe %rax,%rdi
    3e10:	85 ff                	test   %edi,%edi
    3e12:	74 3d                	je     3e51 <try_place+0x4e1>
    3e14:	83 ff 01             	cmp    $0x1,%edi
    3e17:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%rdx)
    3e1e:	40 b6 02             	mov    $0x2,%sil
    3e21:	c7 41 04 00 00 00 00 	movl   $0x0,0x4(%rcx)
    3e28:	74 27                	je     3e51 <try_place+0x4e1>
    3e2a:	83 ff 03             	cmp    $0x3,%edi
    3e2d:	c7 42 08 00 00 00 00 	movl   $0x0,0x8(%rdx)
    3e34:	40 b6 03             	mov    $0x3,%sil
    3e37:	c7 41 08 00 00 00 00 	movl   $0x0,0x8(%rcx)
    3e3e:	75 11                	jne    3e51 <try_place+0x4e1>
    3e40:	c7 42 0c 00 00 00 00 	movl   $0x0,0xc(%rdx)
    3e47:	40 b6 04             	mov    $0x4,%sil
    3e4a:	c7 41 0c 00 00 00 00 	movl   $0x0,0xc(%rcx)
    3e51:	41 89 c2             	mov    %eax,%r10d
    3e54:	45 31 c9             	xor    %r9d,%r9d
    3e57:	41 29 fa             	sub    %edi,%r10d
    3e5a:	45 8d 42 fc          	lea    -0x4(%r10),%r8d
    3e5e:	44 89 54 24 10       	mov    %r10d,0x10(%rsp)
    3e63:	41 c1 e8 02          	shr    $0x2,%r8d
    3e67:	41 83 c0 01          	add    $0x1,%r8d
    3e6b:	46 8d 14 85 00 00 00 	lea    0x0(,%r8,4),%r10d
    3e72:	00 
    3e73:	44 89 54 24 08       	mov    %r10d,0x8(%rsp)
    3e78:	4c 8d 14 bd 04 00 00 	lea    0x4(,%rdi,4),%r10
    3e7f:	00 
    3e80:	31 ff                	xor    %edi,%edi
    3e82:	4e 8d 24 12          	lea    (%rdx,%r10,1),%r12
    3e86:	49 01 ca             	add    %rcx,%r10
    3e89:	41 83 c1 01          	add    $0x1,%r9d
    3e8d:	41 0f 29 04 3c       	movaps %xmm0,(%r12,%rdi,1)
    3e92:	41 0f 11 04 3a       	movups %xmm0,(%r10,%rdi,1)
    3e97:	48 83 c7 10          	add    $0x10,%rdi
    3e9b:	45 39 c1             	cmp    %r8d,%r9d
    3e9e:	72 e9                	jb     3e89 <try_place+0x519>
    3ea0:	8b 7c 24 08          	mov    0x8(%rsp),%edi
    3ea4:	01 fe                	add    %edi,%esi
    3ea6:	3b 7c 24 10          	cmp    0x10(%rsp),%edi
    3eaa:	74 41                	je     3eed <try_place+0x57d>
    3eac:	48 63 fe             	movslq %esi,%rdi
    3eaf:	c7 04 ba 00 00 00 00 	movl   $0x0,(%rdx,%rdi,4)
    3eb6:	c7 04 b9 00 00 00 00 	movl   $0x0,(%rcx,%rdi,4)
    3ebd:	8d 7e 01             	lea    0x1(%rsi),%edi
    3ec0:	39 f8                	cmp    %edi,%eax
    3ec2:	7c 29                	jl     3eed <try_place+0x57d>
    3ec4:	83 c6 02             	add    $0x2,%esi
    3ec7:	48 63 ff             	movslq %edi,%rdi
    3eca:	39 f0                	cmp    %esi,%eax
    3ecc:	c7 04 ba 00 00 00 00 	movl   $0x0,(%rdx,%rdi,4)
    3ed3:	c7 04 b9 00 00 00 00 	movl   $0x0,(%rcx,%rdi,4)
    3eda:	7c 11                	jl     3eed <try_place+0x57d>
    3edc:	48 63 f6             	movslq %esi,%rsi
    3edf:	c7 04 b2 00 00 00 00 	movl   $0x0,(%rdx,%rsi,4)
    3ee6:	c7 04 b1 00 00 00 00 	movl   $0x0,(%rcx,%rsi,4)
    3eed:	49 83 c6 01          	add    $0x1,%r14
    3ef1:	49 83 c7 28          	add    $0x28,%r15
    3ef5:	45 39 f5             	cmp    %r14d,%r13d
    3ef8:	7e 66                	jle    3f60 <try_place+0x5f0>
    3efa:	41 8b 07             	mov    (%r15),%eax
    3efd:	85 c0                	test   %eax,%eax
    3eff:	7e ec                	jle    3eed <try_place+0x57d>
    3f01:	4a 8b 54 f5 00       	mov    0x0(%rbp,%r14,8),%rdx
    3f06:	4b 8b 0c f3          	mov    (%r11,%r14,8),%rcx
    3f0a:	48 8d 72 04          	lea    0x4(%rdx),%rsi
    3f0e:	48 8d 79 14          	lea    0x14(%rcx),%rdi
    3f12:	4c 8d 4a 14          	lea    0x14(%rdx),%r9
    3f16:	48 39 fe             	cmp    %rdi,%rsi
    3f19:	48 8d 79 04          	lea    0x4(%rcx),%rdi
    3f1d:	41 0f 93 c0          	setae  %r8b
    3f21:	49 39 f9             	cmp    %rdi,%r9
    3f24:	40 0f 96 c7          	setbe  %dil
    3f28:	41 08 f8             	or     %dil,%r8b
    3f2b:	0f 85 bb fe ff ff    	jne    3dec <try_place+0x47c>
    3f31:	83 e8 01             	sub    $0x1,%eax
    3f34:	48 8d 70 01          	lea    0x1(%rax),%rsi
    3f38:	31 c0                	xor    %eax,%eax
    3f3a:	c7 44 82 04 00 00 00 	movl   $0x0,0x4(%rdx,%rax,4)
    3f41:	00 
    3f42:	c7 44 81 04 00 00 00 	movl   $0x0,0x4(%rcx,%rax,4)
    3f49:	00 
    3f4a:	48 83 c0 01          	add    $0x1,%rax
    3f4e:	48 39 f0             	cmp    %rsi,%rax
    3f51:	75 e7                	jne    3f3a <try_place+0x5ca>
    3f53:	49 83 c6 01          	add    $0x1,%r14
    3f57:	49 83 c7 28          	add    $0x28,%r15
    3f5b:	45 39 f5             	cmp    %r14d,%r13d
    3f5e:	7f 9a                	jg     3efa <try_place+0x58a>
    3f60:	49 63 fd             	movslq %r13d,%rdi
    3f63:	48 c1 e7 02          	shl    $0x2,%rdi
    3f67:	e8 00 00 00 00       	callq  3f6c <try_place+0x5fc>
    3f6c:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 3f73 <try_place+0x603>
    3f73:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 3f7a <try_place+0x60a>
    3f7a:	48 c1 e7 02          	shl    $0x2,%rdi
    3f7e:	e8 00 00 00 00       	callq  3f83 <try_place+0x613>
    3f83:	48 63 0d 00 00 00 00 	movslq 0x0(%rip),%rcx        # 3f8a <try_place+0x61a>
    3f8a:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 3f91 <try_place+0x621>
    3f91:	85 c9                	test   %ecx,%ecx
    3f93:	0f 8e f8 00 00 00    	jle    4091 <try_place+0x721>
    3f99:	48 89 c2             	mov    %rax,%rdx
    3f9c:	83 e2 0f             	and    $0xf,%edx
    3f9f:	48 c1 ea 02          	shr    $0x2,%rdx
    3fa3:	48 f7 da             	neg    %rdx
    3fa6:	83 e2 03             	and    $0x3,%edx
    3fa9:	39 ca                	cmp    %ecx,%edx
    3fab:	0f 47 d1             	cmova  %ecx,%edx
    3fae:	83 f9 06             	cmp    $0x6,%ecx
    3fb1:	0f 8f 5a 17 00 00    	jg     5711 <try_place+0x1da1>
    3fb7:	89 ca                	mov    %ecx,%edx
    3fb9:	c7 00 00 00 80 bf    	movl   $0xbf800000,(%rax)
    3fbf:	83 fa 01             	cmp    $0x1,%edx
    3fc2:	0f 84 62 17 00 00    	je     572a <try_place+0x1dba>
    3fc8:	83 fa 02             	cmp    $0x2,%edx
    3fcb:	c7 40 04 00 00 80 bf 	movl   $0xbf800000,0x4(%rax)
    3fd2:	0f 84 e7 30 00 00    	je     70bf <try_place+0x374f>
    3fd8:	83 fa 03             	cmp    $0x3,%edx
    3fdb:	c7 40 08 00 00 80 bf 	movl   $0xbf800000,0x8(%rax)
    3fe2:	0f 84 20 31 00 00    	je     7108 <try_place+0x3798>
    3fe8:	83 fa 04             	cmp    $0x4,%edx
    3feb:	c7 40 0c 00 00 80 bf 	movl   $0xbf800000,0xc(%rax)
    3ff2:	0f 84 1a 31 00 00    	je     7112 <try_place+0x37a2>
    3ff8:	83 fa 06             	cmp    $0x6,%edx
    3ffb:	c7 40 10 00 00 80 bf 	movl   $0xbf800000,0x10(%rax)
    4002:	0f 85 61 31 00 00    	jne    7169 <try_place+0x37f9>
    4008:	c7 40 14 00 00 80 bf 	movl   $0xbf800000,0x14(%rax)
    400f:	be 06 00 00 00       	mov    $0x6,%esi
    4014:	39 ca                	cmp    %ecx,%edx
    4016:	74 79                	je     4091 <try_place+0x721>
    4018:	41 89 c9             	mov    %ecx,%r9d
    401b:	44 8d 59 ff          	lea    -0x1(%rcx),%r11d
    401f:	41 89 d0             	mov    %edx,%r8d
    4022:	41 29 d1             	sub    %edx,%r9d
    4025:	41 8d 79 fc          	lea    -0x4(%r9),%edi
    4029:	41 29 d3             	sub    %edx,%r11d
    402c:	c1 ef 02             	shr    $0x2,%edi
    402f:	83 c7 01             	add    $0x1,%edi
    4032:	41 83 fb 02          	cmp    $0x2,%r11d
    4036:	44 8d 14 bd 00 00 00 	lea    0x0(,%rdi,4),%r10d
    403d:	00 
    403e:	76 25                	jbe    4065 <try_place+0x6f5>
    4040:	4e 8d 04 80          	lea    (%rax,%r8,4),%r8
    4044:	0f 28 05 00 00 00 00 	movaps 0x0(%rip),%xmm0        # 404b <try_place+0x6db>
    404b:	31 d2                	xor    %edx,%edx
    404d:	83 c2 01             	add    $0x1,%edx
    4050:	49 83 c0 10          	add    $0x10,%r8
    4054:	41 0f 29 40 f0       	movaps %xmm0,-0x10(%r8)
    4059:	39 fa                	cmp    %edi,%edx
    405b:	72 f0                	jb     404d <try_place+0x6dd>
    405d:	44 01 d6             	add    %r10d,%esi
    4060:	45 39 ca             	cmp    %r9d,%r10d
    4063:	74 2c                	je     4091 <try_place+0x721>
    4065:	48 63 d6             	movslq %esi,%rdx
    4068:	c7 04 90 00 00 80 bf 	movl   $0xbf800000,(%rax,%rdx,4)
    406f:	8d 56 01             	lea    0x1(%rsi),%edx
    4072:	39 d1                	cmp    %edx,%ecx
    4074:	7e 1b                	jle    4091 <try_place+0x721>
    4076:	48 63 d2             	movslq %edx,%rdx
    4079:	c7 04 90 00 00 80 bf 	movl   $0xbf800000,(%rax,%rdx,4)
    4080:	8d 56 02             	lea    0x2(%rsi),%edx
    4083:	39 d1                	cmp    %edx,%ecx
    4085:	7e 0a                	jle    4091 <try_place+0x721>
    4087:	48 63 d2             	movslq %edx,%rdx
    408a:	c7 04 90 00 00 80 bf 	movl   $0xbf800000,(%rax,%rdx,4)
    4091:	48 89 cf             	mov    %rcx,%rdi
    4094:	48 c1 e7 04          	shl    $0x4,%rdi
    4098:	e8 00 00 00 00       	callq  409d <try_place+0x72d>
    409d:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 40a4 <try_place+0x734>
    40a4:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 40ab <try_place+0x73b>
    40ab:	48 c1 e7 04          	shl    $0x4,%rdi
    40af:	e8 00 00 00 00       	callq  40b4 <try_place+0x744>
    40b4:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 40bb <try_place+0x74b>
    40bb:	be 04 00 00 00       	mov    $0x4,%esi
    40c0:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 40c7 <try_place+0x757>
    40c7:	e8 00 00 00 00       	callq  40cc <try_place+0x75c>
    40cc:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 40d3 <try_place+0x763>
    40d3:	be 04 00 00 00       	mov    $0x4,%esi
    40d8:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 40df <try_place+0x76f>
    40df:	e8 00 00 00 00       	callq  40e4 <try_place+0x774>
    40e4:	8b 2d 00 00 00 00    	mov    0x0(%rip),%ebp        # 40ea <try_place+0x77a>
    40ea:	49 89 c5             	mov    %rax,%r13
    40ed:	85 ed                	test   %ebp,%ebp
    40ef:	0f 8e 30 01 00 00    	jle    4225 <try_place+0x8b5>
    40f5:	4c 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11        # 40fc <try_place+0x78c>
    40fc:	45 31 d2             	xor    %r10d,%r10d
    40ff:	89 5c 24 30          	mov    %ebx,0x30(%rsp)
    4103:	45 31 ff             	xor    %r15d,%r15d
    4106:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%rsp)
    410d:	00 
    410e:	44 89 d3             	mov    %r10d,%ebx
    4111:	4f 8d 04 bf          	lea    (%r15,%r15,4),%r8
    4115:	4f 8d 24 00          	lea    (%r8,%r8,1),%r12
    4119:	4b 8d 3c 23          	lea    (%r11,%r12,1),%rdi
    411d:	8b 47 08             	mov    0x8(%rdi),%eax
    4120:	85 c0                	test   %eax,%eax
    4122:	0f 88 e6 00 00 00    	js     420e <try_place+0x89e>
    4128:	4c 8b 4f 10          	mov    0x10(%rdi),%r9
    412c:	31 ed                	xor    %ebp,%ebp
    412e:	31 d2                	xor    %edx,%edx
    4130:	4c 89 c9             	mov    %r9,%rcx
    4133:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
    4138:	48 63 01             	movslq (%rcx),%rax
    413b:	49 8d 74 85 00       	lea    0x0(%r13,%rax,4),%rsi
    4140:	8b 06                	mov    (%rsi),%eax
    4142:	83 c0 01             	add    $0x1,%eax
    4145:	83 f8 01             	cmp    $0x1,%eax
    4148:	89 06                	mov    %eax,(%rsi)
    414a:	8d 75 01             	lea    0x1(%rbp),%esi
    414d:	8b 47 08             	mov    0x8(%rdi),%eax
    4150:	0f 4f ee             	cmovg  %esi,%ebp
    4153:	83 c2 01             	add    $0x1,%edx
    4156:	48 83 c1 04          	add    $0x4,%rcx
    415a:	39 c2                	cmp    %eax,%edx
    415c:	7e da                	jle    4138 <try_place+0x7c8>
    415e:	85 ed                	test   %ebp,%ebp
    4160:	0f 84 51 15 00 00    	je     56b7 <try_place+0x1d47>
    4166:	44 8b 5c 24 10       	mov    0x10(%rsp),%r11d
    416b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4172 <try_place+0x802>
    4172:	4c 8b 35 00 00 00 00 	mov    0x0(%rip),%r14        # 4179 <try_place+0x809>
    4179:	45 85 db             	test   %r11d,%r11d
    417c:	42 89 2c 38          	mov    %ebp,(%rax,%r15,1)
    4180:	0f 84 ff 14 00 00    	je     5685 <try_place+0x1d15>
    4186:	8b 7f 08             	mov    0x8(%rdi),%edi
    4189:	4b 8d 14 3f          	lea    (%r15,%r15,1),%rdx
    418d:	49 01 d6             	add    %rdx,%r14
    4190:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
    4195:	83 c7 01             	add    $0x1,%edi
    4198:	29 ef                	sub    %ebp,%edi
    419a:	48 63 ff             	movslq %edi,%rdi
    419d:	48 c1 e7 02          	shl    $0x2,%rdi
    41a1:	e8 00 00 00 00       	callq  41a6 <try_place+0x836>
    41a6:	49 89 06             	mov    %rax,(%r14)
    41a9:	4c 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11        # 41b0 <try_place+0x840>
    41b0:	4f 8d 04 23          	lea    (%r11,%r12,1),%r8
    41b4:	41 8b 78 08          	mov    0x8(%r8),%edi
    41b8:	85 ff                	test   %edi,%edi
    41ba:	78 52                	js     420e <try_place+0x89e>
    41bc:	48 8b 54 24 08       	mov    0x8(%rsp),%rdx
    41c1:	48 03 15 00 00 00 00 	add    0x0(%rip),%rdx        # 41c8 <try_place+0x858>
    41c8:	45 31 c9             	xor    %r9d,%r9d
    41cb:	31 c0                	xor    %eax,%eax
    41cd:	48 89 d5             	mov    %rdx,%rbp
    41d0:	49 8b 50 10          	mov    0x10(%r8),%rdx
    41d4:	0f 1f 40 00          	nopl   0x0(%rax)
    41d8:	48 63 32             	movslq (%rdx),%rsi
    41db:	48 89 f1             	mov    %rsi,%rcx
    41de:	49 8d 74 b5 00       	lea    0x0(%r13,%rsi,4),%rsi
    41e3:	44 8b 16             	mov    (%rsi),%r10d
    41e6:	45 85 d2             	test   %r10d,%r10d
    41e9:	74 18                	je     4203 <try_place+0x893>
    41eb:	c7 06 00 00 00 00    	movl   $0x0,(%rsi)
    41f1:	48 8b 75 00          	mov    0x0(%rbp),%rsi
    41f5:	49 63 f9             	movslq %r9d,%rdi
    41f8:	41 83 c1 01          	add    $0x1,%r9d
    41fc:	89 0c be             	mov    %ecx,(%rsi,%rdi,4)
    41ff:	41 8b 78 08          	mov    0x8(%r8),%edi
    4203:	83 c0 01             	add    $0x1,%eax
    4206:	48 83 c2 04          	add    $0x4,%rdx
    420a:	39 f8                	cmp    %edi,%eax
    420c:	7e ca                	jle    41d8 <try_place+0x868>
    420e:	83 c3 01             	add    $0x1,%ebx
    4211:	49 83 c7 04          	add    $0x4,%r15
    4215:	3b 1d 00 00 00 00    	cmp    0x0(%rip),%ebx        # 421b <try_place+0x8ab>
    421b:	0f 8c f0 fe ff ff    	jl     4111 <try_place+0x7a1>
    4221:	8b 5c 24 30          	mov    0x30(%rsp),%ebx
    4225:	4c 89 ef             	mov    %r13,%rdi
    4228:	e8 00 00 00 00       	callq  422d <try_place+0x8bd>
    422d:	83 7c 24 2c 01       	cmpl   $0x1,0x2c(%rsp)
    4232:	0f 84 25 15 00 00    	je     575d <try_place+0x1ded>
    4238:	8b 44 24 2c          	mov    0x2c(%rsp),%eax
    423c:	85 c0                	test   %eax,%eax
    423e:	0f 85 8d 05 00 00    	jne    47d1 <try_place+0xe61>
    4244:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 424a <try_place+0x8da>
    424a:	8d 78 01             	lea    0x1(%rax),%edi
    424d:	48 63 ff             	movslq %edi,%rdi
    4250:	48 c1 e7 03          	shl    $0x3,%rdi
    4254:	e8 00 00 00 00       	callq  4259 <try_place+0x8e9>
    4259:	44 8b 3d 00 00 00 00 	mov    0x0(%rip),%r15d        # 4260 <try_place+0x8f0>
    4260:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 4267 <try_place+0x8f7>
    4267:	45 85 ff             	test   %r15d,%r15d
    426a:	78 32                	js     429e <try_place+0x92e>
    426c:	31 ed                	xor    %ebp,%ebp
    426e:	eb 0a                	jmp    427a <try_place+0x90a>
    4270:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4277 <try_place+0x907>
    4277:	4c 89 e5             	mov    %r12,%rbp
    427a:	4c 8d 65 01          	lea    0x1(%rbp),%r12
    427e:	4c 8d 2c e8          	lea    (%rax,%rbp,8),%r13
    4282:	83 c5 01             	add    $0x1,%ebp
    4285:	4a 8d 3c a5 00 00 00 	lea    0x0(,%r12,4),%rdi
    428c:	00 
    428d:	e8 00 00 00 00       	callq  4292 <try_place+0x922>
    4292:	39 2d 00 00 00 00    	cmp    %ebp,0x0(%rip)        # 4298 <try_place+0x928>
    4298:	49 89 45 00          	mov    %rax,0x0(%r13)
    429c:	7d d2                	jge    4270 <try_place+0x900>
    429e:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 42a4 <try_place+0x934>
    42a4:	8d 78 01             	lea    0x1(%rax),%edi
    42a7:	48 63 ff             	movslq %edi,%rdi
    42aa:	48 c1 e7 03          	shl    $0x3,%rdi
    42ae:	e8 00 00 00 00       	callq  42b3 <try_place+0x943>
    42b3:	44 8b 35 00 00 00 00 	mov    0x0(%rip),%r14d        # 42ba <try_place+0x94a>
    42ba:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 42c1 <try_place+0x951>
    42c1:	45 85 f6             	test   %r14d,%r14d
    42c4:	0f 88 ff 2d 00 00    	js     70c9 <try_place+0x3759>
    42ca:	31 ed                	xor    %ebp,%ebp
    42cc:	eb 0a                	jmp    42d8 <try_place+0x968>
    42ce:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 42d5 <try_place+0x965>
    42d5:	4c 89 e5             	mov    %r12,%rbp
    42d8:	4c 8d 65 01          	lea    0x1(%rbp),%r12
    42dc:	4c 8d 2c e8          	lea    (%rax,%rbp,8),%r13
    42e0:	83 c5 01             	add    $0x1,%ebp
    42e3:	4a 8d 3c a5 00 00 00 	lea    0x0(,%r12,4),%rdi
    42ea:	00 
    42eb:	e8 00 00 00 00       	callq  42f0 <try_place+0x980>
    42f0:	44 8b 35 00 00 00 00 	mov    0x0(%rip),%r14d        # 42f7 <try_place+0x987>
    42f7:	49 89 45 00          	mov    %rax,0x0(%r13)
    42fb:	41 39 ee             	cmp    %ebp,%r14d
    42fe:	7d ce                	jge    42ce <try_place+0x95e>
    4300:	4c 8b 3d 00 00 00 00 	mov    0x0(%rip),%r15        # 4307 <try_place+0x997>
    4307:	4c 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11        # 430e <try_place+0x99e>
    430e:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4312:	48 8b 2d 00 00 00 00 	mov    0x0(%rip),%rbp        # 4319 <try_place+0x9a9>
    4319:	44 8b 15 00 00 00 00 	mov    0x0(%rip),%r10d        # 4320 <try_place+0x9b0>
    4320:	41 bd 04 00 00 00    	mov    $0x4,%r13d
    4326:	41 bc 01 00 00 00    	mov    $0x1,%r12d
    432c:	f3 41 0f 2a 03       	cvtsi2ssl (%r11),%xmm0
    4331:	48 8b 45 00          	mov    0x0(%rbp),%rax
    4335:	41 83 fa 00          	cmp    $0x0,%r10d
    4339:	f3 0f 11 00          	movss  %xmm0,(%rax)
    433d:	41 8d 42 01          	lea    0x1(%r10),%eax
    4341:	89 44 24 08          	mov    %eax,0x8(%rsp)
    4345:	0f 8f 1f 01 00 00    	jg     446a <try_place+0xafa>
    434b:	e9 81 2d 00 00       	jmpq   70d1 <try_place+0x3761>
    4350:	41 83 fc 0a          	cmp    $0xa,%r12d
    4354:	0f 86 4d 01 00 00    	jbe    44a7 <try_place+0xb37>
    435a:	48 89 d7             	mov    %rdx,%rdi
    435d:	83 e7 0f             	and    $0xf,%edi
    4360:	48 c1 ef 02          	shr    $0x2,%rdi
    4364:	48 f7 df             	neg    %rdi
    4367:	83 e7 03             	and    $0x3,%edi
    436a:	44 39 e7             	cmp    %r12d,%edi
    436d:	49 0f 47 fc          	cmova  %r12,%rdi
    4371:	31 c9                	xor    %ecx,%ecx
    4373:	85 ff                	test   %edi,%edi
    4375:	74 38                	je     43af <try_place+0xa3f>
    4377:	f3 0f 10 0a          	movss  (%rdx),%xmm1
    437b:	83 ff 01             	cmp    $0x1,%edi
    437e:	b1 01                	mov    $0x1,%cl
    4380:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    4384:	f3 0f 11 08          	movss  %xmm1,(%rax)
    4388:	74 25                	je     43af <try_place+0xa3f>
    438a:	f3 0f 10 4a 04       	movss  0x4(%rdx),%xmm1
    438f:	83 ff 03             	cmp    $0x3,%edi
    4392:	b1 02                	mov    $0x2,%cl
    4394:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    4398:	f3 0f 11 48 04       	movss  %xmm1,0x4(%rax)
    439d:	75 10                	jne    43af <try_place+0xa3f>
    439f:	f3 0f 10 4a 08       	movss  0x8(%rdx),%xmm1
    43a4:	b1 03                	mov    $0x3,%cl
    43a6:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    43aa:	f3 0f 11 48 08       	movss  %xmm1,0x8(%rax)
    43af:	45 89 e1             	mov    %r12d,%r9d
    43b2:	0f 28 c8             	movaps %xmm0,%xmm1
    43b5:	41 29 f9             	sub    %edi,%r9d
    43b8:	48 c1 e7 02          	shl    $0x2,%rdi
    43bc:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
    43c1:	41 8d 71 fc          	lea    -0x4(%r9),%esi
    43c5:	4c 8d 04 3a          	lea    (%rdx,%rdi,1),%r8
    43c9:	48 01 c7             	add    %rax,%rdi
    43cc:	0f c6 c9 00          	shufps $0x0,%xmm1,%xmm1
    43d0:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
    43d5:	c1 ee 02             	shr    $0x2,%esi
    43d8:	4c 89 44 24 10       	mov    %r8,0x10(%rsp)
    43dd:	31 ff                	xor    %edi,%edi
    43df:	83 c6 01             	add    $0x1,%esi
    43e2:	45 31 c0             	xor    %r8d,%r8d
    43e5:	44 8d 34 b5 00 00 00 	lea    0x0(,%rsi,4),%r14d
    43ec:	00 
    43ed:	48 8b 44 24 10       	mov    0x10(%rsp),%rax
    43f2:	41 83 c0 01          	add    $0x1,%r8d
    43f6:	0f 28 14 38          	movaps (%rax,%rdi,1),%xmm2
    43fa:	48 8b 44 24 30       	mov    0x30(%rsp),%rax
    43ff:	0f 58 d1             	addps  %xmm1,%xmm2
    4402:	0f 11 14 38          	movups %xmm2,(%rax,%rdi,1)
    4406:	48 83 c7 10          	add    $0x10,%rdi
    440a:	44 39 c6             	cmp    %r8d,%esi
    440d:	77 de                	ja     43ed <try_place+0xa7d>
    440f:	44 01 f1             	add    %r14d,%ecx
    4412:	45 39 ce             	cmp    %r9d,%r14d
    4415:	48 8b 44 24 38       	mov    0x38(%rsp),%rax
    441a:	74 3f                	je     445b <try_place+0xaeb>
    441c:	48 63 f1             	movslq %ecx,%rsi
    441f:	f3 0f 10 0c b2       	movss  (%rdx,%rsi,4),%xmm1
    4424:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    4428:	f3 0f 11 0c b0       	movss  %xmm1,(%rax,%rsi,4)
    442d:	8d 71 01             	lea    0x1(%rcx),%esi
    4430:	41 39 f4             	cmp    %esi,%r12d
    4433:	7e 26                	jle    445b <try_place+0xaeb>
    4435:	48 63 f6             	movslq %esi,%rsi
    4438:	83 c1 02             	add    $0x2,%ecx
    443b:	f3 0f 10 0c b2       	movss  (%rdx,%rsi,4),%xmm1
    4440:	41 39 cc             	cmp    %ecx,%r12d
    4443:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    4447:	f3 0f 11 0c b0       	movss  %xmm1,(%rax,%rsi,4)
    444c:	7e 0d                	jle    445b <try_place+0xaeb>
    444e:	48 63 c9             	movslq %ecx,%rcx
    4451:	f3 0f 58 04 8a       	addss  (%rdx,%rcx,4),%xmm0
    4456:	f3 0f 11 04 88       	movss  %xmm0,(%rax,%rcx,4)
    445b:	41 83 c4 01          	add    $0x1,%r12d
    445f:	49 83 c5 04          	add    $0x4,%r13
    4463:	44 3b 64 24 08       	cmp    0x8(%rsp),%r12d
    4468:	74 65                	je     44cf <try_place+0xb5f>
    446a:	66 0f ef c0          	pxor   %xmm0,%xmm0
    446e:	4a 8b 44 6d 00       	mov    0x0(%rbp,%r13,2),%rax
    4473:	45 85 e4             	test   %r12d,%r12d
    4476:	f3 43 0f 2a 04 2b    	cvtsi2ssl (%r11,%r13,1),%xmm0
    447c:	f3 42 0f 11 04 28    	movss  %xmm0,(%rax,%r13,1)
    4482:	7e d7                	jle    445b <try_place+0xaeb>
    4484:	4a 8b 54 6d f8       	mov    -0x8(%rbp,%r13,2),%rdx
    4489:	48 8d 4a 10          	lea    0x10(%rdx),%rcx
    448d:	48 39 c8             	cmp    %rcx,%rax
    4490:	48 8d 48 10          	lea    0x10(%rax),%rcx
    4494:	40 0f 93 c6          	setae  %sil
    4498:	48 39 ca             	cmp    %rcx,%rdx
    449b:	0f 93 c1             	setae  %cl
    449e:	40 08 ce             	or     %cl,%sil
    44a1:	0f 85 a9 fe ff ff    	jne    4350 <try_place+0x9e0>
    44a7:	31 c9                	xor    %ecx,%ecx
    44a9:	f3 0f 10 0c 8a       	movss  (%rdx,%rcx,4),%xmm1
    44ae:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    44b2:	f3 0f 11 0c 88       	movss  %xmm1,(%rax,%rcx,4)
    44b7:	48 83 c1 01          	add    $0x1,%rcx
    44bb:	41 39 cc             	cmp    %ecx,%r12d
    44be:	7f e9                	jg     44a9 <try_place+0xb39>
    44c0:	41 83 c4 01          	add    $0x1,%r12d
    44c4:	49 83 c5 04          	add    $0x4,%r13
    44c8:	44 3b 64 24 08       	cmp    0x8(%rsp),%r12d
    44cd:	75 9b                	jne    446a <try_place+0xafa>
    44cf:	49 89 ee             	mov    %rbp,%r14
    44d2:	31 ed                	xor    %ebp,%ebp
    44d4:	85 ed                	test   %ebp,%ebp
    44d6:	0f 88 85 00 00 00    	js     4561 <try_place+0xbf1>
    44dc:	66 0f ef f6          	pxor   %xmm6,%xmm6
    44e0:	45 31 ed             	xor    %r13d,%r13d
    44e3:	f3 0f 5a 74 24 18    	cvtss2sd 0x18(%rsp),%xmm6
    44e9:	f2 0f 11 74 24 08    	movsd  %xmm6,0x8(%rsp)
    44ef:	90                   	nop
    44f0:	66 0f ef c0          	pxor   %xmm0,%xmm0
    44f4:	89 ea                	mov    %ebp,%edx
    44f6:	4e 8d 24 ad 00 00 00 	lea    0x0(,%r13,4),%r12
    44fd:	00 
    44fe:	44 29 ea             	sub    %r13d,%edx
    4501:	66 0f ef c9          	pxor   %xmm1,%xmm1
    4505:	4c 89 e0             	mov    %r12,%rax
    4508:	49 03 06             	add    (%r14),%rax
    450b:	4d 03 26             	add    (%r14),%r12
    450e:	f2 0f 2a c2          	cvtsi2sd %edx,%xmm0
    4512:	49 83 c5 01          	add    $0x1,%r13
    4516:	66 0f ef ff          	pxor   %xmm7,%xmm7
    451a:	f3 0f 5a 08          	cvtss2sd (%rax),%xmm1
    451e:	f2 0f 58 05 00 00 00 	addsd  0x0(%rip),%xmm0        # 4526 <try_place+0xbb6>
    4525:	00 
    4526:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
    452a:	f2 0f 10 4c 24 08    	movsd  0x8(%rsp),%xmm1
    4530:	f2 0f 5a f8          	cvtsd2ss %xmm0,%xmm7
    4534:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4538:	f3 0f 11 38          	movss  %xmm7,(%rax)
    453c:	f3 41 0f 5a 04 24    	cvtss2sd (%r12),%xmm0
    4542:	e8 00 00 00 00       	callq  4547 <try_place+0xbd7>
    4547:	66 0f ef f6          	pxor   %xmm6,%xmm6
    454b:	44 39 ed             	cmp    %r13d,%ebp
    454e:	f2 0f 5a f0          	cvtsd2ss %xmm0,%xmm6
    4552:	f3 41 0f 11 34 24    	movss  %xmm6,(%r12)
    4558:	7d 96                	jge    44f0 <try_place+0xb80>
    455a:	44 8b 15 00 00 00 00 	mov    0x0(%rip),%r10d        # 4561 <try_place+0xbf1>
    4561:	83 c5 01             	add    $0x1,%ebp
    4564:	49 83 c6 08          	add    $0x8,%r14
    4568:	44 39 d5             	cmp    %r10d,%ebp
    456b:	0f 8e 63 ff ff ff    	jle    44d4 <try_place+0xb64>
    4571:	44 8b 35 00 00 00 00 	mov    0x0(%rip),%r14d        # 4578 <try_place+0xc08>
    4578:	4c 8b 15 00 00 00 00 	mov    0x0(%rip),%r10        # 457f <try_place+0xc0f>
    457f:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4583:	49 8b 07             	mov    (%r15),%rax
    4586:	41 83 fe 00          	cmp    $0x0,%r14d
    458a:	41 8d 6e 01          	lea    0x1(%r14),%ebp
    458e:	41 bd 04 00 00 00    	mov    $0x4,%r13d
    4594:	41 bc 01 00 00 00    	mov    $0x1,%r12d
    459a:	f3 41 0f 2a 02       	cvtsi2ssl (%r10),%xmm0
    459f:	f3 0f 11 00          	movss  %xmm0,(%rax)
    45a3:	0f 8f 1f 01 00 00    	jg     46c8 <try_place+0xd58>
    45a9:	e9 ff 2a 00 00       	jmpq   70ad <try_place+0x373d>
    45ae:	66 90                	xchg   %ax,%ax
    45b0:	41 83 fc 0a          	cmp    $0xa,%r12d
    45b4:	0f 86 4a 01 00 00    	jbe    4704 <try_place+0xd94>
    45ba:	48 89 d7             	mov    %rdx,%rdi
    45bd:	83 e7 0f             	and    $0xf,%edi
    45c0:	48 c1 ef 02          	shr    $0x2,%rdi
    45c4:	48 f7 df             	neg    %rdi
    45c7:	83 e7 03             	and    $0x3,%edi
    45ca:	41 39 fc             	cmp    %edi,%r12d
    45cd:	49 0f 46 fc          	cmovbe %r12,%rdi
    45d1:	31 c9                	xor    %ecx,%ecx
    45d3:	85 ff                	test   %edi,%edi
    45d5:	74 38                	je     460f <try_place+0xc9f>
    45d7:	f3 0f 10 0a          	movss  (%rdx),%xmm1
    45db:	83 ff 01             	cmp    $0x1,%edi
    45de:	b1 01                	mov    $0x1,%cl
    45e0:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    45e4:	f3 0f 11 08          	movss  %xmm1,(%rax)
    45e8:	74 25                	je     460f <try_place+0xc9f>
    45ea:	f3 0f 10 4a 04       	movss  0x4(%rdx),%xmm1
    45ef:	83 ff 03             	cmp    $0x3,%edi
    45f2:	b1 02                	mov    $0x2,%cl
    45f4:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    45f8:	f3 0f 11 48 04       	movss  %xmm1,0x4(%rax)
    45fd:	75 10                	jne    460f <try_place+0xc9f>
    45ff:	f3 0f 10 4a 08       	movss  0x8(%rdx),%xmm1
    4604:	b1 03                	mov    $0x3,%cl
    4606:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    460a:	f3 0f 11 48 08       	movss  %xmm1,0x8(%rax)
    460f:	45 89 e1             	mov    %r12d,%r9d
    4612:	0f 28 c8             	movaps %xmm0,%xmm1
    4615:	41 29 f9             	sub    %edi,%r9d
    4618:	48 c1 e7 02          	shl    $0x2,%rdi
    461c:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
    4621:	41 8d 71 fc          	lea    -0x4(%r9),%esi
    4625:	4c 8d 04 3a          	lea    (%rdx,%rdi,1),%r8
    4629:	48 01 c7             	add    %rax,%rdi
    462c:	0f c6 c9 00          	shufps $0x0,%xmm1,%xmm1
    4630:	48 89 7c 24 08       	mov    %rdi,0x8(%rsp)
    4635:	c1 ee 02             	shr    $0x2,%esi
    4638:	4c 89 44 24 10       	mov    %r8,0x10(%rsp)
    463d:	31 ff                	xor    %edi,%edi
    463f:	83 c6 01             	add    $0x1,%esi
    4642:	45 31 c0             	xor    %r8d,%r8d
    4645:	44 8d 1c b5 00 00 00 	lea    0x0(,%rsi,4),%r11d
    464c:	00 
    464d:	48 8b 44 24 10       	mov    0x10(%rsp),%rax
    4652:	41 83 c0 01          	add    $0x1,%r8d
    4656:	0f 28 14 38          	movaps (%rax,%rdi,1),%xmm2
    465a:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    465f:	0f 58 d1             	addps  %xmm1,%xmm2
    4662:	0f 11 14 38          	movups %xmm2,(%rax,%rdi,1)
    4666:	48 83 c7 10          	add    $0x10,%rdi
    466a:	44 39 c6             	cmp    %r8d,%esi
    466d:	77 de                	ja     464d <try_place+0xcdd>
    466f:	44 01 d9             	add    %r11d,%ecx
    4672:	45 39 cb             	cmp    %r9d,%r11d
    4675:	48 8b 44 24 30       	mov    0x30(%rsp),%rax
    467a:	74 3f                	je     46bb <try_place+0xd4b>
    467c:	48 63 f1             	movslq %ecx,%rsi
    467f:	f3 0f 10 0c b2       	movss  (%rdx,%rsi,4),%xmm1
    4684:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    4688:	f3 0f 11 0c b0       	movss  %xmm1,(%rax,%rsi,4)
    468d:	8d 71 01             	lea    0x1(%rcx),%esi
    4690:	44 39 e6             	cmp    %r12d,%esi
    4693:	7d 26                	jge    46bb <try_place+0xd4b>
    4695:	48 63 f6             	movslq %esi,%rsi
    4698:	83 c1 02             	add    $0x2,%ecx
    469b:	f3 0f 10 0c b2       	movss  (%rdx,%rsi,4),%xmm1
    46a0:	44 39 e1             	cmp    %r12d,%ecx
    46a3:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    46a7:	f3 0f 11 0c b0       	movss  %xmm1,(%rax,%rsi,4)
    46ac:	7d 0d                	jge    46bb <try_place+0xd4b>
    46ae:	48 63 c9             	movslq %ecx,%rcx
    46b1:	f3 0f 58 04 8a       	addss  (%rdx,%rcx,4),%xmm0
    46b6:	f3 0f 11 04 88       	movss  %xmm0,(%rax,%rcx,4)
    46bb:	41 83 c4 01          	add    $0x1,%r12d
    46bf:	49 83 c5 04          	add    $0x4,%r13
    46c3:	41 39 ec             	cmp    %ebp,%r12d
    46c6:	74 62                	je     472a <try_place+0xdba>
    46c8:	66 0f ef c0          	pxor   %xmm0,%xmm0
    46cc:	4b 8b 04 6f          	mov    (%r15,%r13,2),%rax
    46d0:	45 85 e4             	test   %r12d,%r12d
    46d3:	f3 43 0f 2a 04 2a    	cvtsi2ssl (%r10,%r13,1),%xmm0
    46d9:	f3 42 0f 11 04 28    	movss  %xmm0,(%rax,%r13,1)
    46df:	7e da                	jle    46bb <try_place+0xd4b>
    46e1:	4b 8b 54 6f f8       	mov    -0x8(%r15,%r13,2),%rdx
    46e6:	48 8d 4a 10          	lea    0x10(%rdx),%rcx
    46ea:	48 39 c8             	cmp    %rcx,%rax
    46ed:	48 8d 48 10          	lea    0x10(%rax),%rcx
    46f1:	40 0f 93 c6          	setae  %sil
    46f5:	48 39 ca             	cmp    %rcx,%rdx
    46f8:	0f 93 c1             	setae  %cl
    46fb:	40 08 ce             	or     %cl,%sil
    46fe:	0f 85 ac fe ff ff    	jne    45b0 <try_place+0xc40>
    4704:	31 c9                	xor    %ecx,%ecx
    4706:	f3 0f 10 0c 8a       	movss  (%rdx,%rcx,4),%xmm1
    470b:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    470f:	f3 0f 11 0c 88       	movss  %xmm1,(%rax,%rcx,4)
    4714:	48 83 c1 01          	add    $0x1,%rcx
    4718:	41 39 cc             	cmp    %ecx,%r12d
    471b:	7f e9                	jg     4706 <try_place+0xd96>
    471d:	41 83 c4 01          	add    $0x1,%r12d
    4721:	49 83 c5 04          	add    $0x4,%r13
    4725:	41 39 ec             	cmp    %ebp,%r12d
    4728:	75 9e                	jne    46c8 <try_place+0xd58>
    472a:	31 ed                	xor    %ebp,%ebp
    472c:	85 ed                	test   %ebp,%ebp
    472e:	0f 88 8d 00 00 00    	js     47c1 <try_place+0xe51>
    4734:	66 0f ef f6          	pxor   %xmm6,%xmm6
    4738:	45 31 ed             	xor    %r13d,%r13d
    473b:	f3 0f 5a 74 24 18    	cvtss2sd 0x18(%rsp),%xmm6
    4741:	f2 0f 11 74 24 08    	movsd  %xmm6,0x8(%rsp)
    4747:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    474e:	00 00 
    4750:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4754:	89 ea                	mov    %ebp,%edx
    4756:	4e 8d 24 ad 00 00 00 	lea    0x0(,%r13,4),%r12
    475d:	00 
    475e:	44 29 ea             	sub    %r13d,%edx
    4761:	66 0f ef c9          	pxor   %xmm1,%xmm1
    4765:	4c 89 e0             	mov    %r12,%rax
    4768:	49 03 07             	add    (%r15),%rax
    476b:	4d 03 27             	add    (%r15),%r12
    476e:	f2 0f 2a c2          	cvtsi2sd %edx,%xmm0
    4772:	49 83 c5 01          	add    $0x1,%r13
    4776:	66 0f ef ff          	pxor   %xmm7,%xmm7
    477a:	f3 0f 5a 08          	cvtss2sd (%rax),%xmm1
    477e:	f2 0f 58 05 00 00 00 	addsd  0x0(%rip),%xmm0        # 4786 <try_place+0xe16>
    4785:	00 
    4786:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
    478a:	f2 0f 10 4c 24 08    	movsd  0x8(%rsp),%xmm1
    4790:	f2 0f 5a f8          	cvtsd2ss %xmm0,%xmm7
    4794:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4798:	f3 0f 11 38          	movss  %xmm7,(%rax)
    479c:	f3 41 0f 5a 04 24    	cvtss2sd (%r12),%xmm0
    47a2:	e8 00 00 00 00       	callq  47a7 <try_place+0xe37>
    47a7:	66 0f ef ed          	pxor   %xmm5,%xmm5
    47ab:	44 39 ed             	cmp    %r13d,%ebp
    47ae:	f2 0f 5a e8          	cvtsd2ss %xmm0,%xmm5
    47b2:	f3 41 0f 11 2c 24    	movss  %xmm5,(%r12)
    47b8:	7d 96                	jge    4750 <try_place+0xde0>
    47ba:	44 8b 35 00 00 00 00 	mov    0x0(%rip),%r14d        # 47c1 <try_place+0xe51>
    47c1:	83 c5 01             	add    $0x1,%ebp
    47c4:	49 83 c7 08          	add    $0x8,%r15
    47c8:	44 39 f5             	cmp    %r14d,%ebp
    47cb:	0f 8e 5b ff ff ff    	jle    472c <try_place+0xdbc>
    47d1:	48 c7 44 24 50 00 00 	movq   $0x0,0x50(%rsp)
    47d8:	00 00 
    47da:	48 c7 44 24 48 00 00 	movq   $0x0,0x48(%rsp)
    47e1:	00 00 
    47e3:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 47ea <try_place+0xe7a>
    47ea:	48 8b 84 24 00 03 00 	mov    0x300(%rsp),%rax
    47f1:	00 
    47f2:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
    47f7:	48 c1 e7 03          	shl    $0x3,%rdi
    47fb:	e8 00 00 00 00       	callq  4800 <try_place+0xe90>
    4800:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 4807 <try_place+0xe97>
    4807:	be 04 00 00 00       	mov    $0x4,%esi
    480c:	49 89 c4             	mov    %rax,%r12
    480f:	e8 00 00 00 00       	callq  4814 <try_place+0xea4>
    4814:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 481b <try_place+0xeab>
    481b:	be 04 00 00 00       	mov    $0x4,%esi
    4820:	48 89 c5             	mov    %rax,%rbp
    4823:	e8 00 00 00 00       	callq  4828 <try_place+0xeb8>
    4828:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 482e <try_place+0xebe>
    482e:	49 89 c5             	mov    %rax,%r13
    4831:	83 fa ff             	cmp    $0xffffffff,%edx
    4834:	0f 8c a2 28 00 00    	jl     70dc <try_place+0x376c>
    483a:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 4840 <try_place+0xed0>
    4840:	4c 8b 0d 00 00 00 00 	mov    0x0(%rip),%r9        # 4847 <try_place+0xed7>
    4847:	45 31 d2             	xor    %r10d,%r10d
    484a:	83 f8 ff             	cmp    $0xffffffff,%eax
    484d:	7c 74                	jl     48c3 <try_place+0xf53>
    484f:	49 8b 39             	mov    (%r9),%rdi
    4852:	45 31 c0             	xor    %r8d,%r8d
    4855:	48 8d 77 0c          	lea    0xc(%rdi),%rsi
    4859:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    4860:	48 8b 4e f4          	mov    -0xc(%rsi),%rcx
    4864:	c7 06 00 00 00 00    	movl   $0x0,(%rsi)
    486a:	44 8b 71 0c          	mov    0xc(%rcx),%r14d
    486e:	45 85 f6             	test   %r14d,%r14d
    4871:	7e 3a                	jle    48ad <try_place+0xf3d>
    4873:	48 8b 56 04          	mov    0x4(%rsi),%rdx
    4877:	31 c0                	xor    %eax,%eax
    4879:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    4880:	c7 02 ff ff ff ff    	movl   $0xffffffff,(%rdx)
    4886:	44 8b 5e fc          	mov    -0x4(%rsi),%r11d
    488a:	45 85 db             	test   %r11d,%r11d
    488d:	75 0c                	jne    489b <try_place+0xf2b>
    488f:	48 63 b9 90 00 00 00 	movslq 0x90(%rcx),%rdi
    4896:	83 44 bd 00 01       	addl   $0x1,0x0(%rbp,%rdi,4)
    489b:	83 c0 01             	add    $0x1,%eax
    489e:	48 83 c2 04          	add    $0x4,%rdx
    48a2:	3b 41 0c             	cmp    0xc(%rcx),%eax
    48a5:	7c d9                	jl     4880 <try_place+0xf10>
    48a7:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 48ad <try_place+0xf3d>
    48ad:	8d 50 01             	lea    0x1(%rax),%edx
    48b0:	41 83 c0 01          	add    $0x1,%r8d
    48b4:	48 83 c6 18          	add    $0x18,%rsi
    48b8:	41 39 d0             	cmp    %edx,%r8d
    48bb:	7e a3                	jle    4860 <try_place+0xef0>
    48bd:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 48c3 <try_place+0xf53>
    48c3:	8d 4a 01             	lea    0x1(%rdx),%ecx
    48c6:	41 83 c2 01          	add    $0x1,%r10d
    48ca:	49 83 c1 08          	add    $0x8,%r9
    48ce:	41 39 ca             	cmp    %ecx,%r10d
    48d1:	0f 8e 73 ff ff ff    	jle    484a <try_place+0xeda>
    48d7:	8b 3d 00 00 00 00    	mov    0x0(%rip),%edi        # 48dd <try_place+0xf6d>
    48dd:	85 ff                	test   %edi,%edi
    48df:	7e 2f                	jle    4910 <try_place+0xfa0>
    48e1:	45 31 f6             	xor    %r14d,%r14d
    48e4:	4a 63 44 b5 00       	movslq 0x0(%rbp,%r14,4),%rax
    48e9:	48 8d 3c 40          	lea    (%rax,%rax,2),%rdi
    48ed:	48 c1 e7 02          	shl    $0x2,%rdi
    48f1:	e8 00 00 00 00       	callq  48f6 <try_place+0xf86>
    48f6:	4b 89 04 f4          	mov    %rax,(%r12,%r14,8)
    48fa:	41 8d 46 01          	lea    0x1(%r14),%eax
    48fe:	49 83 c6 01          	add    $0x1,%r14
    4902:	39 05 00 00 00 00    	cmp    %eax,0x0(%rip)        # 4908 <try_place+0xf98>
    4908:	7f da                	jg     48e4 <try_place+0xf74>
    490a:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 4910 <try_place+0xfa0>
    4910:	83 fa ff             	cmp    $0xffffffff,%edx
    4913:	0f 8c a6 00 00 00    	jl     49bf <try_place+0x104f>
    4919:	8b 0d 00 00 00 00    	mov    0x0(%rip),%ecx        # 491f <try_place+0xfaf>
    491f:	4c 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11        # 4926 <try_place+0xfb6>
    4926:	45 31 d2             	xor    %r10d,%r10d
    4929:	83 f9 ff             	cmp    $0xffffffff,%ecx
    492c:	7c 7d                	jl     49ab <try_place+0x103b>
    492e:	49 8b 3b             	mov    (%r11),%rdi
    4931:	45 31 c9             	xor    %r9d,%r9d
    4934:	0f 1f 40 00          	nopl   0x0(%rax)
    4938:	4c 8b 07             	mov    (%rdi),%r8
    493b:	31 c0                	xor    %eax,%eax
    493d:	41 8b 50 0c          	mov    0xc(%r8),%edx
    4941:	85 d2                	test   %edx,%edx
    4943:	7e 50                	jle    4995 <try_place+0x1025>
    4945:	0f 1f 00             	nopl   (%rax)
    4948:	8b 77 08             	mov    0x8(%rdi),%esi
    494b:	85 f6                	test   %esi,%esi
    494d:	75 39                	jne    4988 <try_place+0x1018>
    494f:	49 63 90 90 00 00 00 	movslq 0x90(%r8),%rdx
    4956:	49 8b 0c d4          	mov    (%r12,%rdx,8),%rcx
    495a:	49 8d 54 95 00       	lea    0x0(%r13,%rdx,4),%rdx
    495f:	48 63 32             	movslq (%rdx),%rsi
    4962:	48 8d 34 76          	lea    (%rsi,%rsi,2),%rsi
    4966:	44 89 14 b1          	mov    %r10d,(%rcx,%rsi,4)
    496a:	48 63 32             	movslq (%rdx),%rsi
    496d:	48 8d 34 76          	lea    (%rsi,%rsi,2),%rsi
    4971:	44 89 4c b1 04       	mov    %r9d,0x4(%rcx,%rsi,4)
    4976:	48 63 32             	movslq (%rdx),%rsi
    4979:	48 8d 34 76          	lea    (%rsi,%rsi,2),%rsi
    497d:	89 44 b1 08          	mov    %eax,0x8(%rcx,%rsi,4)
    4981:	83 02 01             	addl   $0x1,(%rdx)
    4984:	41 8b 50 0c          	mov    0xc(%r8),%edx
    4988:	83 c0 01             	add    $0x1,%eax
    498b:	39 d0                	cmp    %edx,%eax
    498d:	7c b9                	jl     4948 <try_place+0xfd8>
    498f:	8b 0d 00 00 00 00    	mov    0x0(%rip),%ecx        # 4995 <try_place+0x1025>
    4995:	8d 41 01             	lea    0x1(%rcx),%eax
    4998:	41 83 c1 01          	add    $0x1,%r9d
    499c:	48 83 c7 18          	add    $0x18,%rdi
    49a0:	41 39 c1             	cmp    %eax,%r9d
    49a3:	7e 93                	jle    4938 <try_place+0xfc8>
    49a5:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 49ab <try_place+0x103b>
    49ab:	8d 42 01             	lea    0x1(%rdx),%eax
    49ae:	41 83 c2 01          	add    $0x1,%r10d
    49b2:	49 83 c3 08          	add    $0x8,%r11
    49b6:	41 39 c2             	cmp    %eax,%r10d
    49b9:	0f 8e 6a ff ff ff    	jle    4929 <try_place+0xfb9>
    49bf:	83 bc 24 d0 00 00 00 	cmpl   $0x2,0xd0(%rsp)
    49c6:	02 
    49c7:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 49cd <try_place+0x105d>
    49cd:	0f 95 44 24 08       	setne  0x8(%rsp)
    49d2:	45 31 f6             	xor    %r14d,%r14d
    49d5:	85 d2                	test   %edx,%edx
    49d7:	0f 8e cf 00 00 00    	jle    4aac <try_place+0x113c>
    49dd:	89 5c 24 18          	mov    %ebx,0x18(%rsp)
    49e1:	4c 89 6c 24 30       	mov    %r13,0x30(%rsp)
    49e6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    49ed:	00 00 00 
    49f0:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 49f7 <try_place+0x1087>
    49f7:	4b 8d 04 b6          	lea    (%r14,%r14,4),%rax
    49fb:	45 89 f5             	mov    %r14d,%r13d
    49fe:	48 8d 04 c1          	lea    (%rcx,%rax,8),%rax
    4a02:	48 8b 40 08          	mov    0x8(%rax),%rax
    4a06:	48 3b 05 00 00 00 00 	cmp    0x0(%rip),%rax        # 4a0d <try_place+0x109d>
    4a0d:	75 07                	jne    4a16 <try_place+0x10a6>
    4a0f:	80 7c 24 08 00       	cmpb   $0x0,0x8(%rsp)
    4a14:	74 7d                	je     4a93 <try_place+0x1123>
    4a16:	4c 63 b8 90 00 00 00 	movslq 0x90(%rax),%r15
    4a1d:	4a 8d 5c bd 00       	lea    0x0(%rbp,%r15,4),%rbx
    4a22:	8b 03                	mov    (%rbx),%eax
    4a24:	85 c0                	test   %eax,%eax
    4a26:	0f 8e c3 26 00 00    	jle    70ef <try_place+0x377f>
    4a2c:	8d 78 ff             	lea    -0x1(%rax),%edi
    4a2f:	e8 00 00 00 00       	callq  4a34 <try_place+0x10c4>
    4a34:	4f 8b 04 fc          	mov    (%r12,%r15,8),%r8
    4a38:	48 98                	cltq   
    4a3a:	48 8d 04 40          	lea    (%rax,%rax,2),%rax
    4a3e:	49 8d 04 80          	lea    (%r8,%rax,4),%rax
    4a42:	48 63 48 04          	movslq 0x4(%rax),%rcx
    4a46:	4c 63 08             	movslq (%rax),%r9
    4a49:	48 8d 3c 49          	lea    (%rcx,%rcx,2),%rdi
    4a4d:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4a54 <try_place+0x10e4>
    4a54:	4a 8b 0c c9          	mov    (%rcx,%r9,8),%rcx
    4a58:	4c 63 48 08          	movslq 0x8(%rax),%r9
    4a5c:	48 8d 3c f9          	lea    (%rcx,%rdi,8),%rdi
    4a60:	48 8b 4f 10          	mov    0x10(%rdi),%rcx
    4a64:	46 89 2c 89          	mov    %r13d,(%rcx,%r9,4)
    4a68:	83 47 0c 01          	addl   $0x1,0xc(%rdi)
    4a6c:	48 63 0b             	movslq (%rbx),%rcx
    4a6f:	48 8d 0c 49          	lea    (%rcx,%rcx,2),%rcx
    4a73:	48 8d 0c 8d f4 ff ff 	lea    -0xc(,%rcx,4),%rcx
    4a7a:	ff 
    4a7b:	4c 01 c1             	add    %r8,%rcx
    4a7e:	48 8b 31             	mov    (%rcx),%rsi
    4a81:	48 89 30             	mov    %rsi,(%rax)
    4a84:	8b 49 08             	mov    0x8(%rcx),%ecx
    4a87:	89 48 08             	mov    %ecx,0x8(%rax)
    4a8a:	83 2b 01             	subl   $0x1,(%rbx)
    4a8d:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 4a93 <try_place+0x1123>
    4a93:	41 8d 46 01          	lea    0x1(%r14),%eax
    4a97:	49 83 c6 01          	add    $0x1,%r14
    4a9b:	39 d0                	cmp    %edx,%eax
    4a9d:	0f 8c 4d ff ff ff    	jl     49f0 <try_place+0x1080>
    4aa3:	8b 5c 24 18          	mov    0x18(%rsp),%ebx
    4aa7:	4c 8b 6c 24 30       	mov    0x30(%rsp),%r13
    4aac:	83 bc 24 d0 00 00 00 	cmpl   $0x2,0xd0(%rsp)
    4ab3:	02 
    4ab4:	0f 84 94 0c 00 00    	je     574e <try_place+0x1dde>
    4aba:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 4ac0 <try_place+0x1150>
    4ac0:	83 f8 ff             	cmp    $0xffffffff,%eax
    4ac3:	0f 8c a3 00 00 00    	jl     4b6c <try_place+0x11fc>
    4ac9:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 4ad0 <try_place+0x1160>
    4ad0:	44 8b 3d 00 00 00 00 	mov    0x0(%rip),%r15d        # 4ad7 <try_place+0x1167>
    4ad7:	83 c0 01             	add    $0x1,%eax
    4ada:	4c 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11        # 4ae1 <try_place+0x1171>
    4ae1:	45 31 f6             	xor    %r14d,%r14d
    4ae4:	89 44 24 10          	mov    %eax,0x10(%rsp)
    4ae8:	48 89 7c 24 08       	mov    %rdi,0x8(%rsp)
    4aed:	41 8d 7f 01          	lea    0x1(%r15),%edi
    4af1:	41 83 ff ff          	cmp    $0xffffffff,%r15d
    4af5:	45 89 f1             	mov    %r14d,%r9d
    4af8:	7c 67                	jl     4b61 <try_place+0x11f1>
    4afa:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    4aff:	45 31 c0             	xor    %r8d,%r8d
    4b02:	4e 8b 14 f0          	mov    (%rax,%r14,8),%r10
    4b06:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    4b0d:	00 00 00 
    4b10:	49 8b 02             	mov    (%r10),%rax
    4b13:	8b 48 0c             	mov    0xc(%rax),%ecx
    4b16:	85 c9                	test   %ecx,%ecx
    4b18:	7e 3a                	jle    4b54 <try_place+0x11e4>
    4b1a:	49 8b 72 10          	mov    0x10(%r10),%rsi
    4b1e:	48 85 f6             	test   %rsi,%rsi
    4b21:	0f 84 d1 0b 00 00    	je     56f8 <try_place+0x1d88>
    4b27:	31 d2                	xor    %edx,%edx
    4b29:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    4b30:	48 63 04 96          	movslq (%rsi,%rdx,4),%rax
    4b34:	83 f8 ff             	cmp    $0xffffffff,%eax
    4b37:	74 13                	je     4b4c <try_place+0x11dc>
    4b39:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    4b3d:	49 8d 04 c3          	lea    (%r11,%rax,8),%rax
    4b41:	44 89 48 18          	mov    %r9d,0x18(%rax)
    4b45:	44 89 40 1c          	mov    %r8d,0x1c(%rax)
    4b49:	89 50 20             	mov    %edx,0x20(%rax)
    4b4c:	48 83 c2 01          	add    $0x1,%rdx
    4b50:	39 d1                	cmp    %edx,%ecx
    4b52:	7f dc                	jg     4b30 <try_place+0x11c0>
    4b54:	41 83 c0 01          	add    $0x1,%r8d
    4b58:	49 83 c2 18          	add    $0x18,%r10
    4b5c:	41 39 f8             	cmp    %edi,%r8d
    4b5f:	7e af                	jle    4b10 <try_place+0x11a0>
    4b61:	49 83 c6 01          	add    $0x1,%r14
    4b65:	44 39 74 24 10       	cmp    %r14d,0x10(%rsp)
    4b6a:	7d 85                	jge    4af1 <try_place+0x1181>
    4b6c:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 4b72 <try_place+0x1202>
    4b72:	45 31 f6             	xor    %r14d,%r14d
    4b75:	4d 89 e7             	mov    %r12,%r15
    4b78:	85 c0                	test   %eax,%eax
    4b7a:	7e 19                	jle    4b95 <try_place+0x1225>
    4b7c:	49 8b 3f             	mov    (%r15),%rdi
    4b7f:	41 83 c6 01          	add    $0x1,%r14d
    4b83:	49 83 c7 08          	add    $0x8,%r15
    4b87:	e8 00 00 00 00       	callq  4b8c <try_place+0x121c>
    4b8c:	44 3b 35 00 00 00 00 	cmp    0x0(%rip),%r14d        # 4b93 <try_place+0x1223>
    4b93:	7c e7                	jl     4b7c <try_place+0x120c>
    4b95:	4c 89 e7             	mov    %r12,%rdi
    4b98:	e8 00 00 00 00       	callq  4b9d <try_place+0x122d>
    4b9d:	4c 89 ef             	mov    %r13,%rdi
    4ba0:	e8 00 00 00 00       	callq  4ba5 <try_place+0x1235>
    4ba5:	48 89 ef             	mov    %rbp,%rdi
    4ba8:	e8 00 00 00 00       	callq  4bad <try_place+0x123d>
    4bad:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4bb1:	f3 0f 2a 84 24 10 01 	cvtsi2ssl 0x110(%rsp),%xmm0
    4bb8:	00 00 
    4bba:	e8 00 00 00 00       	callq  4bbf <try_place+0x124f>
    4bbf:	80 bc 24 15 01 00 00 	cmpb   $0x0,0x115(%rsp)
    4bc6:	00 
    4bc7:	0f 85 94 28 00 00    	jne    7461 <try_place+0x3af1>
    4bcd:	8b 74 24 2c          	mov    0x2c(%rsp),%esi
    4bd1:	89 da                	mov    %ebx,%edx
    4bd3:	31 ff                	xor    %edi,%edi
    4bd5:	e8 76 e8 ff ff       	callq  3450 <comp_bb_cost>
    4bda:	48 8d 84 24 50 01 00 	lea    0x150(%rsp),%rax
    4be1:	00 
    4be2:	f3 0f 11 84 24 48 01 	movss  %xmm0,0x148(%rsp)
    4be9:	00 00 
    4beb:	c7 84 24 00 01 00 00 	movl   $0x0,0x100(%rsp)
    4bf2:	00 00 00 00 
    4bf6:	f3 0f 11 84 24 40 01 	movss  %xmm0,0x140(%rsp)
    4bfd:	00 00 
    4bff:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4c03:	f3 0f 10 3d 00 00 00 	movss  0x0(%rip),%xmm7        # 4c0b <try_place+0x129b>
    4c0a:	00 
    4c0b:	48 89 84 24 e8 00 00 	mov    %rax,0xe8(%rsp)
    4c12:	00 
    4c13:	48 8d 84 24 44 01 00 	lea    0x144(%rsp),%rax
    4c1a:	00 
    4c1b:	f3 0f 11 bc 24 bc 00 	movss  %xmm7,0xbc(%rsp)
    4c22:	00 00 
    4c24:	f3 0f 11 84 24 44 01 	movss  %xmm0,0x144(%rsp)
    4c2b:	00 00 
    4c2d:	c7 84 24 f0 00 00 00 	movl   $0x0,0xf0(%rsp)
    4c34:	00 00 00 00 
    4c38:	f3 0f 11 84 24 50 01 	movss  %xmm0,0x150(%rsp)
    4c3f:	00 00 
    4c41:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
    4c46:	f3 0f 11 84 24 b8 00 	movss  %xmm0,0xb8(%rsp)
    4c4d:	00 00 
    4c4f:	f3 0f 11 44 24 40    	movss  %xmm0,0x40(%rsp)
    4c55:	f3 0f 11 44 24 38    	movss  %xmm0,0x38(%rsp)
    4c5b:	f3 0f 11 84 24 c8 00 	movss  %xmm0,0xc8(%rsp)
    4c62:	00 00 
    4c64:	f3 0f 11 84 24 b4 00 	movss  %xmm0,0xb4(%rsp)
    4c6b:	00 00 
    4c6d:	66 0f ef ed          	pxor   %xmm5,%xmm5
    4c71:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4c75:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 4c7d <try_place+0x130d>
    4c7c:	00 
    4c7d:	f3 0f 5a ac 24 2c 03 	cvtss2sd 0x32c(%rsp),%xmm5
    4c84:	00 00 
    4c86:	f2 0f 2a 05 00 00 00 	cvtsi2sdl 0x0(%rip),%xmm0        # 4c8e <try_place+0x131e>
    4c8d:	00 
    4c8e:	f2 0f 11 6c 24 08    	movsd  %xmm5,0x8(%rsp)
    4c94:	e8 00 00 00 00       	callq  4c99 <try_place+0x1329>
    4c99:	f2 0f 59 44 24 08    	mulsd  0x8(%rsp),%xmm0
    4c9f:	8b ac 24 c4 00 00 00 	mov    0xc4(%rsp),%ebp
    4ca6:	85 ed                	test   %ebp,%ebp
    4ca8:	f2 44 0f 2c e8       	cvttsd2si %xmm0,%r13d
    4cad:	41 8d 45 01          	lea    0x1(%r13),%eax
    4cb1:	89 84 24 c0 00 00 00 	mov    %eax,0xc0(%rsp)
    4cb8:	74 31                	je     4ceb <try_place+0x137b>
    4cba:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4cbe:	66 0f ef c9          	pxor   %xmm1,%xmm1
    4cc2:	f3 41 0f 2a c5       	cvtsi2ss %r13d,%xmm0
    4cc7:	f3 0f 2a 8c 24 c4 00 	cvtsi2ssl 0xc4(%rsp),%xmm1
    4cce:	00 00 
    4cd0:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    4cd4:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    4cd8:	f2 0f 58 05 00 00 00 	addsd  0x0(%rip),%xmm0        # 4ce0 <try_place+0x1370>
    4cdf:	00 
    4ce0:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    4ce4:	89 84 24 c0 00 00 00 	mov    %eax,0xc0(%rsp)
    4ceb:	45 85 ed             	test   %r13d,%r13d
    4cee:	b8 01 00 00 00       	mov    $0x1,%eax
    4cf3:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 4cf9 <try_place+0x1389>
    4cf9:	44 0f 4e e8          	cmovle %eax,%r13d
    4cfd:	48 63 05 00 00 00 00 	movslq 0x0(%rip),%rax        # 4d04 <try_place+0x1394>
    4d04:	39 d0                	cmp    %edx,%eax
    4d06:	0f 8e 2c 0a 00 00    	jle    5738 <try_place+0x1dc8>
    4d0c:	66 0f ef f6          	pxor   %xmm6,%xmm6
    4d10:	f3 0f 2a f0          	cvtsi2ss %eax,%xmm6
    4d14:	f3 0f 11 74 24 10    	movss  %xmm6,0x10(%rsp)
    4d1a:	0f 28 c6             	movaps %xmm6,%xmm0
    4d1d:	f3 0f 10 b4 24 bc 00 	movss  0xbc(%rsp),%xmm6
    4d24:	00 00 
    4d26:	44 8b 9c 24 d0 00 00 	mov    0xd0(%rsp),%r11d
    4d2d:	00 
    4d2e:	f3 0f 5c c6          	subss  %xmm6,%xmm0
    4d32:	48 8d 3c 85 00 00 00 	lea    0x0(,%rax,4),%rdi
    4d39:	00 
    4d3a:	45 31 f6             	xor    %r14d,%r14d
    4d3d:	45 85 db             	test   %r11d,%r11d
    4d40:	41 0f 95 c6          	setne  %r14b
    4d44:	f3 0f 5e f0          	divss  %xmm0,%xmm6
    4d48:	f3 0f 11 b4 24 28 01 	movss  %xmm6,0x128(%rsp)
    4d4f:	00 00 
    4d51:	f3 0f 10 b4 24 30 03 	movss  0x330(%rsp),%xmm6
    4d58:	00 00 
    4d5a:	f3 0f 11 74 24 08    	movss  %xmm6,0x8(%rsp)
    4d60:	e8 00 00 00 00       	callq  4d65 <try_place+0x13f5>
    4d65:	83 bc 24 dc 00 00 00 	cmpl   $0x1,0xdc(%rsp)
    4d6c:	01 
    4d6d:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    4d72:	0f 84 c2 26 00 00    	je     743a <try_place+0x3aca>
    4d78:	44 8b 25 00 00 00 00 	mov    0x0(%rip),%r12d        # 4d7f <try_place+0x140f>
    4d7f:	45 39 e5             	cmp    %r12d,%r13d
    4d82:	45 0f 4e e5          	cmovle %r13d,%r12d
    4d86:	45 85 e4             	test   %r12d,%r12d
    4d89:	0f 8e 7e 26 00 00    	jle    740d <try_place+0x3a9d>
    4d8f:	66 0f ef ed          	pxor   %xmm5,%xmm5
    4d93:	48 8d 84 24 40 01 00 	lea    0x140(%rsp),%rax
    4d9a:	00 
    4d9b:	45 31 d2             	xor    %r10d,%r10d
    4d9e:	31 ed                	xor    %ebp,%ebp
    4da0:	4c 8d bc 24 48 01 00 	lea    0x148(%rsp),%r15
    4da7:	00 
    4da8:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
    4dad:	66 0f 28 f5          	movapd %xmm5,%xmm6
    4db1:	f2 0f 11 ac 24 a0 00 	movsd  %xmm5,0xa0(%rsp)
    4db8:	00 00 
    4dba:	eb 0d                	jmp    4dc9 <try_place+0x1459>
    4dbc:	41 83 c2 01          	add    $0x1,%r10d
    4dc0:	45 39 e2             	cmp    %r12d,%r10d
    4dc3:	0f 84 c0 00 00 00    	je     4e89 <try_place+0x1519>
    4dc9:	f2 0f 11 6c 24 70    	movsd  %xmm5,0x70(%rsp)
    4dcf:	44 89 54 24 08       	mov    %r10d,0x8(%rsp)
    4dd4:	48 83 ec 08          	sub    $0x8,%rsp
    4dd8:	f2 0f 11 74 24 70    	movsd  %xmm6,0x70(%rsp)
    4dde:	ff 74 24 20          	pushq  0x20(%rsp)
    4de2:	ff b4 24 f8 00 00 00 	pushq  0xf8(%rsp)
    4de9:	8b 84 24 fc 00 00 00 	mov    0xfc(%rsp),%eax
    4df0:	4c 89 fe             	mov    %r15,%rsi
    4df3:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 4dfb <try_place+0x148b>
    4dfa:	00 
    4dfb:	50                   	push   %rax
    4dfc:	41 56                	push   %r14
    4dfe:	53                   	push   %rbx
    4dff:	4c 8b 4c 24 78       	mov    0x78(%rsp),%r9
    4e04:	4c 8b 84 24 80 00 00 	mov    0x80(%rsp),%r8
    4e0b:	00 
    4e0c:	8b 4c 24 5c          	mov    0x5c(%rsp),%ecx
    4e10:	48 8b 54 24 60       	mov    0x60(%rsp),%rdx
    4e15:	48 8b bc 24 88 00 00 	mov    0x88(%rsp),%rdi
    4e1c:	00 
    4e1d:	f3 0f 10 64 24 70    	movss  0x70(%rsp),%xmm4
    4e23:	f3 0f 10 5c 24 68    	movss  0x68(%rsp),%xmm3
    4e29:	f3 0f 10 54 24 50    	movss  0x50(%rsp),%xmm2
    4e2f:	f3 0f 10 4c 24 40    	movss  0x40(%rsp),%xmm1
    4e35:	e8 76 bc ff ff       	callq  ab0 <try_swap>
    4e3a:	48 83 c4 30          	add    $0x30,%rsp
    4e3e:	83 f8 01             	cmp    $0x1,%eax
    4e41:	44 8b 54 24 08       	mov    0x8(%rsp),%r10d
    4e46:	f2 0f 10 74 24 68    	movsd  0x68(%rsp),%xmm6
    4e4c:	f2 0f 10 6c 24 70    	movsd  0x70(%rsp),%xmm5
    4e52:	0f 85 64 ff ff ff    	jne    4dbc <try_place+0x144c>
    4e58:	66 0f ef c9          	pxor   %xmm1,%xmm1
    4e5c:	f3 0f 10 84 24 40 01 	movss  0x140(%rsp),%xmm0
    4e63:	00 00 
    4e65:	41 83 c2 01          	add    $0x1,%r10d
    4e69:	83 c5 01             	add    $0x1,%ebp
    4e6c:	45 39 e2             	cmp    %r12d,%r10d
    4e6f:	f3 0f 5a c8          	cvtss2sd %xmm0,%xmm1
    4e73:	f3 0f 59 c0          	mulss  %xmm0,%xmm0
    4e77:	f2 0f 58 f1          	addsd  %xmm1,%xmm6
    4e7b:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    4e7f:	f2 0f 58 e8          	addsd  %xmm0,%xmm5
    4e83:	0f 85 40 ff ff ff    	jne    4dc9 <try_place+0x1459>
    4e89:	85 ed                	test   %ebp,%ebp
    4e8b:	0f 84 aa 0e 00 00    	je     5d3b <try_place+0x23cb>
    4e91:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4e95:	83 fd 01             	cmp    $0x1,%ebp
    4e98:	f2 0f 2a c5          	cvtsi2sd %ebp,%xmm0
    4e9c:	f2 0f 5e f0          	divsd  %xmm0,%xmm6
    4ea0:	0f 84 5e 25 00 00    	je     7404 <try_place+0x3a94>
    4ea6:	8d 45 ff             	lea    -0x1(%rbp),%eax
    4ea9:	f2 0f 59 c6          	mulsd  %xmm6,%xmm0
    4ead:	f2 0f 59 c6          	mulsd  %xmm6,%xmm0
    4eb1:	f2 0f 5c e8          	subsd  %xmm0,%xmm5
    4eb5:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4eb9:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    4ebd:	66 0f 28 cd          	movapd %xmm5,%xmm1
    4ec1:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
    4ec5:	66 0f 2e 8c 24 a0 00 	ucomisd 0xa0(%rsp),%xmm1
    4ecc:	00 00 
    4ece:	0f 86 30 25 00 00    	jbe    7404 <try_place+0x3a94>
    4ed4:	f2 0f 51 c1          	sqrtsd %xmm1,%xmm0
    4ed8:	66 0f 2e c0          	ucomisd %xmm0,%xmm0
    4edc:	0f 8a a4 21 00 00    	jp     7086 <try_place+0x3716>
    4ee2:	41 39 ec             	cmp    %ebp,%r12d
    4ee5:	0f 85 54 0e 00 00    	jne    5d3f <try_place+0x23cf>
    4eeb:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
    4ef0:	f2 0f 11 44 24 08    	movsd  %xmm0,0x8(%rsp)
    4ef6:	e8 00 00 00 00       	callq  4efb <try_place+0x158b>
    4efb:	f2 0f 10 44 24 08    	movsd  0x8(%rsp),%xmm0
    4f01:	66 0f ef f6          	pxor   %xmm6,%xmm6
    4f05:	f2 0f 59 05 00 00 00 	mulsd  0x0(%rip),%xmm0        # 4f0d <try_place+0x159d>
    4f0c:	00 
    4f0d:	f2 0f 5a f0          	cvtsd2ss %xmm0,%xmm6
    4f11:	f3 0f 11 74 24 08    	movss  %xmm6,0x8(%rsp)
    4f17:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4f1b:	bf 00 00 00 00       	mov    $0x0,%edi
    4f20:	b8 04 00 00 00       	mov    $0x4,%eax
    4f25:	66 0f ef db          	pxor   %xmm3,%xmm3
    4f29:	66 0f ef d2          	pxor   %xmm2,%xmm2
    4f2d:	66 0f ef c9          	pxor   %xmm1,%xmm1
    4f31:	f3 0f 5a 84 24 40 01 	cvtss2sd 0x140(%rsp),%xmm0
    4f38:	00 00 
    4f3a:	f3 0f 5a 9c 24 50 01 	cvtss2sd 0x150(%rsp),%xmm3
    4f41:	00 00 
    4f43:	f3 0f 5a 94 24 44 01 	cvtss2sd 0x144(%rsp),%xmm2
    4f4a:	00 00 
    4f4c:	f3 0f 5a 8c 24 48 01 	cvtss2sd 0x148(%rsp),%xmm1
    4f53:	00 00 
    4f55:	e8 00 00 00 00       	callq  4f5a <try_place+0x15ea>
    4f5a:	68 00 00 00 00       	pushq  $0x0
    4f5f:	68 00 00 00 00       	pushq  $0x0
    4f64:	41 b9 00 00 00 00    	mov    $0x0,%r9d
    4f6a:	68 00 00 00 00       	pushq  $0x0
    4f6f:	68 00 00 00 00       	pushq  $0x0
    4f74:	41 b8 00 00 00 00    	mov    $0x0,%r8d
    4f7a:	68 00 00 00 00       	pushq  $0x0
    4f7f:	68 00 00 00 00       	pushq  $0x0
    4f84:	b9 00 00 00 00       	mov    $0x0,%ecx
    4f89:	68 00 00 00 00       	pushq  $0x0
    4f8e:	68 00 00 00 00       	pushq  $0x0
    4f93:	ba 00 00 00 00       	mov    $0x0,%edx
    4f98:	be 00 00 00 00       	mov    $0x0,%esi
    4f9d:	bf 00 00 00 00       	mov    $0x0,%edi
    4fa2:	31 c0                	xor    %eax,%eax
    4fa4:	e8 00 00 00 00       	callq  4fa9 <try_place+0x1639>
    4fa9:	48 83 c4 40          	add    $0x40,%rsp
    4fad:	41 b8 00 00 00 00    	mov    $0x0,%r8d
    4fb3:	41 b9 00 00 00 00    	mov    $0x0,%r9d
    4fb9:	68 00 00 00 00       	pushq  $0x0
    4fbe:	68 00 00 00 00       	pushq  $0x0
    4fc3:	4c 89 c1             	mov    %r8,%rcx
    4fc6:	68 00 00 00 00       	pushq  $0x0
    4fcb:	68 00 00 00 00       	pushq  $0x0
    4fd0:	ba 00 00 00 00       	mov    $0x0,%edx
    4fd5:	68 00 00 00 00       	pushq  $0x0
    4fda:	68 00 00 00 00       	pushq  $0x0
    4fdf:	be 00 00 00 00       	mov    $0x0,%esi
    4fe4:	68 00 00 00 00       	pushq  $0x0
    4fe9:	68 00 00 00 00       	pushq  $0x0
    4fee:	bf 00 00 00 00       	mov    $0x0,%edi
    4ff3:	31 c0                	xor    %eax,%eax
    4ff5:	e8 00 00 00 00       	callq  4ffa <try_place+0x168a>
    4ffa:	66 0f ef c0          	pxor   %xmm0,%xmm0
    4ffe:	48 83 c4 40          	add    $0x40,%rsp
    5002:	66 0f ef e4          	pxor   %xmm4,%xmm4
    5006:	8b 94 24 10 01 00 00 	mov    0x110(%rsp),%edx
    500d:	66 0f ef db          	pxor   %xmm3,%xmm3
    5011:	48 8d bc 24 70 01 00 	lea    0x170(%rsp),%rdi
    5018:	00 
    5019:	66 0f ef d2          	pxor   %xmm2,%xmm2
    501d:	f3 0f 5a 84 24 40 01 	cvtss2sd 0x140(%rsp),%xmm0
    5024:	00 00 
    5026:	66 0f ef c9          	pxor   %xmm1,%xmm1
    502a:	f3 0f 5a a4 24 b4 00 	cvtss2sd 0xb4(%rsp),%xmm4
    5031:	00 00 
    5033:	f3 0f 5a 9c 24 50 01 	cvtss2sd 0x150(%rsp),%xmm3
    503a:	00 00 
    503c:	be 00 00 00 00       	mov    $0x0,%esi
    5041:	b8 05 00 00 00       	mov    $0x5,%eax
    5046:	f3 0f 5a 94 24 44 01 	cvtss2sd 0x144(%rsp),%xmm2
    504d:	00 00 
    504f:	f3 0f 5a 8c 24 48 01 	cvtss2sd 0x148(%rsp),%xmm1
    5056:	00 00 
    5058:	e8 00 00 00 00       	callq  505d <try_place+0x16ed>
    505d:	48 8d b4 24 70 01 00 	lea    0x170(%rsp),%rsi
    5064:	00 
    5065:	ba 01 00 00 00       	mov    $0x1,%edx
    506a:	31 c9                	xor    %ecx,%ecx
    506c:	bf 01 00 00 00       	mov    $0x1,%edi
    5071:	e8 00 00 00 00       	callq  5076 <try_place+0x1706>
    5076:	8d 43 ff             	lea    -0x1(%rbx),%eax
    5079:	44 0f b6 a4 24 15 01 	movzbl 0x115(%rsp),%r12d
    5080:	00 00 
    5082:	4c 89 7c 24 68       	mov    %r15,0x68(%rsp)
    5087:	f3 0f 10 ac 24 38 03 	movss  0x338(%rsp),%xmm5
    508e:	00 00 
    5090:	8b ac 24 e4 00 00 00 	mov    0xe4(%rsp),%ebp
    5097:	48 8d 50 01          	lea    0x1(%rax),%rdx
    509b:	89 84 24 2c 01 00 00 	mov    %eax,0x12c(%rsp)
    50a2:	48 c1 e0 04          	shl    $0x4,%rax
    50a6:	48 83 c0 14          	add    $0x14,%rax
    50aa:	4c 8b bc 24 e8 00 00 	mov    0xe8(%rsp),%r15
    50b1:	00 
    50b2:	f3 0f 11 ac 24 04 01 	movss  %xmm5,0x104(%rsp)
    50b9:	00 00 
    50bb:	48 89 84 24 20 01 00 	mov    %rax,0x120(%rsp)
    50c2:	00 
    50c3:	41 8d 45 ff          	lea    -0x1(%r13),%eax
    50c7:	48 c1 e2 04          	shl    $0x4,%rdx
    50cb:	48 89 94 24 18 01 00 	mov    %rdx,0x118(%rsp)
    50d2:	00 
    50d3:	c7 84 24 a8 00 00 00 	movl   $0x0,0xa8(%rsp)
    50da:	00 00 00 00 
    50de:	c7 84 24 d8 00 00 00 	movl   $0x0,0xd8(%rsp)
    50e5:	00 00 00 00 
    50e9:	89 84 24 f4 00 00 00 	mov    %eax,0xf4(%rsp)
    50f0:	44 89 6c 24 18       	mov    %r13d,0x18(%rsp)
    50f5:	83 bc 24 dc 00 00 00 	cmpl   $0x1,0xdc(%rsp)
    50fc:	01 
    50fd:	f3 0f 10 84 24 40 01 	movss  0x140(%rsp),%xmm0
    5104:	00 00 
    5106:	0f 84 4d 0e 00 00    	je     5f59 <try_place+0x25e9>
    510c:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    5110:	66 0f ef d2          	pxor   %xmm2,%xmm2
    5114:	66 0f ef c9          	pxor   %xmm1,%xmm1
    5118:	f2 0f 59 05 00 00 00 	mulsd  0x0(%rip),%xmm0        # 5120 <try_place+0x17b0>
    511f:	00 
    5120:	f2 0f 2a 15 00 00 00 	cvtsi2sdl 0x0(%rip),%xmm2        # 5128 <try_place+0x17b8>
    5127:	00 
    5128:	f3 0f 5a 4c 24 08    	cvtss2sd 0x8(%rsp),%xmm1
    512e:	f2 0f 5e c2          	divsd  %xmm2,%xmm0
    5132:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
    5136:	0f 87 31 0e 00 00    	ja     5f6d <try_place+0x25fd>
    513c:	45 84 e4             	test   %r12b,%r12b
    513f:	0f 85 47 19 00 00    	jne    6a8c <try_place+0x311c>
    5145:	f2 0f 10 b4 24 a0 00 	movsd  0xa0(%rsp),%xmm6
    514c:	00 00 
    514e:	c7 84 24 98 00 00 00 	movl   $0x1,0x98(%rsp)
    5155:	01 00 00 00 
    5159:	45 31 ed             	xor    %r13d,%r13d
    515c:	c7 84 24 b0 00 00 00 	movl   $0x0,0xb0(%rsp)
    5163:	00 00 00 00 
    5167:	f2 0f 11 74 24 70    	movsd  %xmm6,0x70(%rsp)
    516d:	f2 0f 11 b4 24 90 00 	movsd  %xmm6,0x90(%rsp)
    5174:	00 00 
    5176:	f2 0f 11 b4 24 88 00 	movsd  %xmm6,0x88(%rsp)
    517d:	00 00 
    517f:	f2 0f 11 b4 24 80 00 	movsd  %xmm6,0x80(%rsp)
    5186:	00 00 
    5188:	f2 0f 11 74 24 78    	movsd  %xmm6,0x78(%rsp)
    518e:	eb 18                	jmp    51a8 <try_place+0x1838>
    5190:	45 84 e4             	test   %r12b,%r12b
    5193:	0f 85 0e 01 00 00    	jne    52a7 <try_place+0x1937>
    5199:	41 83 c5 01          	add    $0x1,%r13d
    519d:	44 3b 6c 24 18       	cmp    0x18(%rsp),%r13d
    51a2:	0f 84 47 02 00 00    	je     53ef <try_place+0x1a7f>
    51a8:	48 83 ec 08          	sub    $0x8,%rsp
    51ac:	ff 74 24 68          	pushq  0x68(%rsp)
    51b0:	41 57                	push   %r15
    51b2:	55                   	push   %rbp
    51b3:	41 56                	push   %r14
    51b5:	53                   	push   %rbx
    51b6:	4c 8b 4c 24 78       	mov    0x78(%rsp),%r9
    51bb:	4c 8b 84 24 80 00 00 	mov    0x80(%rsp),%r8
    51c2:	00 
    51c3:	8b 4c 24 5c          	mov    0x5c(%rsp),%ecx
    51c7:	48 8b 54 24 60       	mov    0x60(%rsp),%rdx
    51cc:	48 8b b4 24 98 00 00 	mov    0x98(%rsp),%rsi
    51d3:	00 
    51d4:	48 8b bc 24 88 00 00 	mov    0x88(%rsp),%rdi
    51db:	00 
    51dc:	f3 0f 10 64 24 70    	movss  0x70(%rsp),%xmm4
    51e2:	f3 0f 10 5c 24 68    	movss  0x68(%rsp),%xmm3
    51e8:	f3 0f 10 54 24 50    	movss  0x50(%rsp),%xmm2
    51ee:	f3 0f 10 4c 24 40    	movss  0x40(%rsp),%xmm1
    51f4:	f3 0f 10 44 24 38    	movss  0x38(%rsp),%xmm0
    51fa:	e8 b1 b8 ff ff       	callq  ab0 <try_swap>
    51ff:	48 83 c4 30          	add    $0x30,%rsp
    5203:	83 f8 01             	cmp    $0x1,%eax
    5206:	75 88                	jne    5190 <try_place+0x1820>
    5208:	66 0f ef c9          	pxor   %xmm1,%xmm1
    520c:	f3 0f 10 84 24 40 01 	movss  0x140(%rsp),%xmm0
    5213:	00 00 
    5215:	83 84 24 b0 00 00 00 	addl   $0x1,0xb0(%rsp)
    521c:	01 
    521d:	45 84 e4             	test   %r12b,%r12b
    5220:	f3 0f 5a c8          	cvtss2sd %xmm0,%xmm1
    5224:	f3 0f 59 c0          	mulss  %xmm0,%xmm0
    5228:	f2 0f 58 4c 24 78    	addsd  0x78(%rsp),%xmm1
    522e:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    5232:	f2 0f 58 44 24 70    	addsd  0x70(%rsp),%xmm0
    5238:	f2 0f 11 4c 24 78    	movsd  %xmm1,0x78(%rsp)
    523e:	66 0f ef c9          	pxor   %xmm1,%xmm1
    5242:	f3 0f 5a 8c 24 48 01 	cvtss2sd 0x148(%rsp),%xmm1
    5249:	00 00 
    524b:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
    5251:	f2 0f 58 8c 24 80 00 	addsd  0x80(%rsp),%xmm1
    5258:	00 00 
    525a:	f2 0f 11 8c 24 80 00 	movsd  %xmm1,0x80(%rsp)
    5261:	00 00 
    5263:	66 0f ef c9          	pxor   %xmm1,%xmm1
    5267:	f3 0f 5a 8c 24 44 01 	cvtss2sd 0x144(%rsp),%xmm1
    526e:	00 00 
    5270:	f2 0f 58 8c 24 88 00 	addsd  0x88(%rsp),%xmm1
    5277:	00 00 
    5279:	f2 0f 11 8c 24 88 00 	movsd  %xmm1,0x88(%rsp)
    5280:	00 00 
    5282:	66 0f ef c9          	pxor   %xmm1,%xmm1
    5286:	f3 0f 5a 8c 24 50 01 	cvtss2sd 0x150(%rsp),%xmm1
    528d:	00 00 
    528f:	f2 0f 58 8c 24 90 00 	addsd  0x90(%rsp),%xmm1
    5296:	00 00 
    5298:	f2 0f 11 8c 24 90 00 	movsd  %xmm1,0x90(%rsp)
    529f:	00 00 
    52a1:	0f 84 f2 fe ff ff    	je     5199 <try_place+0x1829>
    52a7:	8b bc 24 98 00 00 00 	mov    0x98(%rsp),%edi
    52ae:	39 bc 24 c0 00 00 00 	cmp    %edi,0xc0(%rsp)
    52b5:	0f 8f ad 0a 00 00    	jg     5d68 <try_place+0x23f8>
    52bb:	44 39 ac 24 f4 00 00 	cmp    %r13d,0xf4(%rsp)
    52c2:	00 
    52c3:	0f 84 9f 0a 00 00    	je     5d68 <try_place+0x23f8>
    52c9:	83 fd 01             	cmp    $0x1,%ebp
    52cc:	0f 84 24 18 00 00    	je     6af6 <try_place+0x3186>
    52d2:	48 8b bc 24 68 01 00 	mov    0x168(%rsp),%rdi
    52d9:	00 
    52da:	41 83 c5 01          	add    $0x1,%r13d
    52de:	e8 00 00 00 00       	callq  52e3 <try_place+0x1973>
    52e3:	48 8b bc 24 60 01 00 	mov    0x160(%rsp),%rdi
    52ea:	00 
    52eb:	66 0f ef c0          	pxor   %xmm0,%xmm0
    52ef:	e8 00 00 00 00       	callq  52f4 <try_place+0x1984>
    52f4:	8b 44 24 2c          	mov    0x2c(%rsp),%eax
    52f8:	f3 0f 10 7c 24 20    	movss  0x20(%rsp),%xmm7
    52fe:	f3 0f 10 b4 24 cc 00 	movss  0xcc(%rsp),%xmm6
    5305:	00 00 
    5307:	89 ac 24 e0 02 00 00 	mov    %ebp,0x2e0(%rsp)
    530e:	f3 0f 11 84 24 b4 00 	movss  %xmm0,0xb4(%rsp)
    5315:	00 00 
    5317:	89 9c 24 0c 03 00 00 	mov    %ebx,0x30c(%rsp)
    531e:	48 83 ec 08          	sub    $0x8,%rsp
    5322:	89 84 24 f4 02 00 00 	mov    %eax,0x2f4(%rsp)
    5329:	8b 84 24 d8 00 00 00 	mov    0xd8(%rsp),%eax
    5330:	f3 0f 11 bc 24 ec 02 	movss  %xmm7,0x2ec(%rsp)
    5337:	00 00 
    5339:	f3 0f 11 b4 24 24 03 	movss  %xmm6,0x324(%rsp)
    5340:	00 00 
    5342:	89 84 24 00 03 00 00 	mov    %eax,0x300(%rsp)
    5349:	8b 84 24 dc 00 00 00 	mov    0xdc(%rsp),%eax
    5350:	89 84 24 18 03 00 00 	mov    %eax,0x318(%rsp)
    5357:	8b 84 24 e8 00 00 00 	mov    0xe8(%rsp),%eax
    535e:	89 84 24 1c 03 00 00 	mov    %eax,0x31c(%rsp)
    5365:	8b 84 24 cc 00 00 00 	mov    0xcc(%rsp),%eax
    536c:	89 84 24 20 03 00 00 	mov    %eax,0x320(%rsp)
    5373:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    537a:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    5381:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    5388:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    538f:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    5396:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    539d:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    53a4:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    53ab:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    53b2:	48 8b bc 24 b0 01 00 	mov    0x1b0(%rsp),%rdi
    53b9:	00 
    53ba:	f3 0f 10 8c 24 08 01 	movss  0x108(%rsp),%xmm1
    53c1:	00 00 
    53c3:	e8 00 00 00 00       	callq  53c8 <try_place+0x1a58>
    53c8:	48 83 c4 50          	add    $0x50,%rsp
    53cc:	48 8b 7c 24 30       	mov    0x30(%rsp),%rdi
    53d1:	4c 89 fe             	mov    %r15,%rsi
    53d4:	e8 97 dd ff ff       	callq  3170 <comp_td_costs>
    53d9:	44 3b 6c 24 18       	cmp    0x18(%rsp),%r13d
    53de:	c7 84 24 98 00 00 00 	movl   $0x1,0x98(%rsp)
    53e5:	01 00 00 00 
    53e9:	0f 85 b9 fd ff ff    	jne    51a8 <try_place+0x1838>
    53ef:	8b 7c 24 18          	mov    0x18(%rsp),%edi
    53f3:	01 bc 24 a8 00 00 00 	add    %edi,0xa8(%rsp)
    53fa:	8b 84 24 a8 00 00 00 	mov    0xa8(%rsp),%eax
    5401:	3d 50 c3 00 00       	cmp    $0xc350,%eax
    5406:	0f 8f 70 0a 00 00    	jg     5e7c <try_place+0x250c>
    540c:	8b 84 24 b0 00 00 00 	mov    0xb0(%rsp),%eax
    5413:	66 45 0f ef c0       	pxor   %xmm8,%xmm8
    5418:	66 0f ef c0          	pxor   %xmm0,%xmm0
    541c:	01 bc 24 d8 00 00 00 	add    %edi,0xd8(%rsp)
    5423:	f3 44 0f 2a c0       	cvtsi2ss %eax,%xmm8
    5428:	85 c0                	test   %eax,%eax
    542a:	f3 0f 2a c7          	cvtsi2ss %edi,%xmm0
    542e:	f3 44 0f 5e c0       	divss  %xmm0,%xmm8
    5433:	0f 85 3c 09 00 00    	jne    5d75 <try_place+0x2405>
    5439:	66 0f ef c9          	pxor   %xmm1,%xmm1
    543d:	66 0f ef d2          	pxor   %xmm2,%xmm2
    5441:	66 0f ef db          	pxor   %xmm3,%xmm3
    5445:	66 0f ef e4          	pxor   %xmm4,%xmm4
    5449:	f3 0f 5a 8c 24 40 01 	cvtss2sd 0x140(%rsp),%xmm1
    5450:	00 00 
    5452:	66 0f ef ed          	pxor   %xmm5,%xmm5
    5456:	f3 0f 5a 94 24 48 01 	cvtss2sd 0x148(%rsp),%xmm2
    545d:	00 00 
    545f:	f3 0f 5a 9c 24 44 01 	cvtss2sd 0x144(%rsp),%xmm3
    5466:	00 00 
    5468:	f3 0f 5a a4 24 50 01 	cvtss2sd 0x150(%rsp),%xmm4
    546f:	00 00 
    5471:	66 0f ef ff          	pxor   %xmm7,%xmm7
    5475:	48 83 ec 20          	sub    $0x20,%rsp
    5479:	f3 45 0f 5a c0       	cvtss2sd %xmm8,%xmm8
    547e:	66 0f ef f6          	pxor   %xmm6,%xmm6
    5482:	bf 00 00 00 00       	mov    $0x0,%edi
    5487:	66 45 0f ef c9       	pxor   %xmm9,%xmm9
    548c:	b8 08 00 00 00       	mov    $0x8,%eax
    5491:	f3 0f 5a 7c 24 30    	cvtss2sd 0x30(%rsp),%xmm7
    5497:	66 0f ef c0          	pxor   %xmm0,%xmm0
    549b:	f3 0f 5a b4 24 d4 00 	cvtss2sd 0xd4(%rsp),%xmm6
    54a2:	00 00 
    54a4:	f2 0f 11 bc 24 98 00 	movsd  %xmm7,0x98(%rsp)
    54ab:	00 00 
    54ad:	f3 44 0f 5a 4c 24 28 	cvtss2sd 0x28(%rsp),%xmm9
    54b4:	f2 0f 11 b4 24 a0 00 	movsd  %xmm6,0xa0(%rsp)
    54bb:	00 00 
    54bd:	8b b4 24 f8 00 00 00 	mov    0xf8(%rsp),%esi
    54c4:	f2 0f 11 2c 24       	movsd  %xmm5,(%rsp)
    54c9:	66 0f ef ed          	pxor   %xmm5,%xmm5
    54cd:	f3 0f 5a 84 24 d8 00 	cvtss2sd 0xd8(%rsp),%xmm0
    54d4:	00 00 
    54d6:	f2 0f 11 7c 24 08    	movsd  %xmm7,0x8(%rsp)
    54dc:	66 41 0f 28 f8       	movapd %xmm8,%xmm7
    54e1:	f2 0f 11 44 24 10    	movsd  %xmm0,0x10(%rsp)
    54e7:	66 41 0f 28 c1       	movapd %xmm9,%xmm0
    54ec:	f3 0f 5a ac 24 e8 00 	cvtss2sd 0xe8(%rsp),%xmm5
    54f3:	00 00 
    54f5:	f2 44 0f 11 84 24 a8 	movsd  %xmm8,0xa8(%rsp)
    54fc:	00 00 00 
    54ff:	f2 44 0f 11 8c 24 90 	movsd  %xmm9,0x90(%rsp)
    5506:	00 00 00 
    5509:	e8 00 00 00 00       	callq  550e <try_place+0x1b9e>
    550e:	f3 0f 10 84 24 54 03 	movss  0x354(%rsp),%xmm0
    5515:	00 00 
    5517:	48 83 c4 20          	add    $0x20,%rsp
    551b:	83 bc 24 dc 00 00 00 	cmpl   $0x1,0xdc(%rsp)
    5522:	01 
    5523:	f2 44 0f 10 4c 24 70 	movsd  0x70(%rsp),%xmm9
    552a:	f2 44 0f 10 84 24 88 	movsd  0x88(%rsp),%xmm8
    5531:	00 00 00 
    5534:	0f 84 53 17 00 00    	je     6c8d <try_place+0x331d>
    553a:	66 44 0f 2e 05 00 00 	ucomisd 0x0(%rip),%xmm8        # 5543 <try_place+0x1bd3>
    5541:	00 00 
    5543:	0f 87 17 09 00 00    	ja     5e60 <try_place+0x24f0>
    5549:	f2 0f 10 05 00 00 00 	movsd  0x0(%rip),%xmm0        # 5551 <try_place+0x1be1>
    5550:	00 
    5551:	66 44 0f 2e c0       	ucomisd %xmm0,%xmm8
    5556:	0f 87 11 17 00 00    	ja     6c6d <try_place+0x32fd>
    555c:	66 44 0f 2e 05 00 00 	ucomisd 0x0(%rip),%xmm8        # 5565 <try_place+0x1bf5>
    5563:	00 00 
    5565:	77 14                	ja     557b <try_place+0x1c0b>
    5567:	f3 0f 10 7c 24 10    	movss  0x10(%rsp),%xmm7
    556d:	0f 2e bc 24 bc 00 00 	ucomiss 0xbc(%rsp),%xmm7
    5574:	00 
    5575:	0f 86 d7 18 00 00    	jbe    6e52 <try_place+0x34e2>
    557b:	f2 44 0f 59 0d 00 00 	mulsd  0x0(%rip),%xmm9        # 5584 <try_place+0x1c14>
    5582:	00 00 
    5584:	66 0f ef f6          	pxor   %xmm6,%xmm6
    5588:	f2 41 0f 5a f1       	cvtsd2ss %xmm9,%xmm6
    558d:	f3 0f 11 74 24 70    	movss  %xmm6,0x70(%rsp)
    5593:	0f 28 c6             	movaps %xmm6,%xmm0
    5596:	f3 0f 5e 44 24 08    	divss  0x8(%rsp),%xmm0
    559c:	bf 00 00 00 00       	mov    $0x0,%edi
    55a1:	b8 01 00 00 00       	mov    $0x1,%eax
    55a6:	f2 44 0f 11 44 24 10 	movsd  %xmm8,0x10(%rsp)
    55ad:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    55b1:	e8 00 00 00 00       	callq  55b6 <try_place+0x1c46>
    55b6:	66 0f ef c0          	pxor   %xmm0,%xmm0
    55ba:	48 8d bc 24 70 01 00 	lea    0x170(%rsp),%rdi
    55c1:	00 
    55c2:	66 0f ef db          	pxor   %xmm3,%xmm3
    55c6:	be 00 00 00 00       	mov    $0x0,%esi
    55cb:	66 0f ef d2          	pxor   %xmm2,%xmm2
    55cf:	b8 05 00 00 00       	mov    $0x5,%eax
    55d4:	66 0f ef c9          	pxor   %xmm1,%xmm1
    55d8:	f3 0f 5a 84 24 40 01 	cvtss2sd 0x140(%rsp),%xmm0
    55df:	00 00 
    55e1:	f2 0f 10 a4 24 80 00 	movsd  0x80(%rsp),%xmm4
    55e8:	00 00 
    55ea:	f3 0f 5a 5c 24 70    	cvtss2sd 0x70(%rsp),%xmm3
    55f0:	f3 0f 5a 94 24 44 01 	cvtss2sd 0x144(%rsp),%xmm2
    55f7:	00 00 
    55f9:	f3 0f 5a 8c 24 48 01 	cvtss2sd 0x148(%rsp),%xmm1
    5600:	00 00 
    5602:	e8 00 00 00 00       	callq  5607 <try_place+0x1c97>
    5607:	48 8d b4 24 70 01 00 	lea    0x170(%rsp),%rsi
    560e:	00 
    560f:	31 c9                	xor    %ecx,%ecx
    5611:	31 ff                	xor    %edi,%edi
    5613:	ba 01 00 00 00       	mov    $0x1,%edx
    5618:	e8 00 00 00 00       	callq  561d <try_place+0x1cad>
    561d:	f2 44 0f 10 44 24 10 	movsd  0x10(%rsp),%xmm8
    5624:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 562a <try_place+0x1cba>
    562a:	39 05 00 00 00 00    	cmp    %eax,0x0(%rip)        # 5630 <try_place+0x1cc0>
    5630:	66 0f ef ed          	pxor   %xmm5,%xmm5
    5634:	f2 44 0f 58 05 00 00 	addsd  0x0(%rip),%xmm8        # 563d <try_place+0x1ccd>
    563b:	00 00 
    563d:	0f 4d 05 00 00 00 00 	cmovge 0x0(%rip),%eax        # 5644 <try_place+0x1cd4>
    5644:	45 84 e4             	test   %r12b,%r12b
    5647:	66 0f ef c0          	pxor   %xmm0,%xmm0
    564b:	f3 0f 2a e8          	cvtsi2ss %eax,%xmm5
    564f:	f2 44 0f 59 44 24 78 	mulsd  0x78(%rsp),%xmm8
    5656:	f2 41 0f 5a c0       	cvtsd2ss %xmm8,%xmm0
    565b:	f3 0f 5d e8          	minss  %xmm0,%xmm5
    565f:	f3 0f 5f ac 24 bc 00 	maxss  0xbc(%rsp),%xmm5
    5666:	00 00 
    5668:	f3 0f 11 6c 24 10    	movss  %xmm5,0x10(%rsp)
    566e:	0f 85 cc 13 00 00    	jne    6a40 <try_place+0x30d0>
    5674:	f3 0f 10 6c 24 70    	movss  0x70(%rsp),%xmm5
    567a:	f3 0f 11 6c 24 08    	movss  %xmm5,0x8(%rsp)
    5680:	e9 70 fa ff ff       	jmpq   50f5 <try_place+0x1785>
    5685:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 568c <try_place+0x1d1c>
    568c:	be 08 00 00 00       	mov    $0x8,%esi
    5691:	e8 00 00 00 00       	callq  5696 <try_place+0x1d26>
    5696:	4c 89 e7             	mov    %r12,%rdi
    5699:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 56a0 <try_place+0x1d30>
    56a0:	48 03 3d 00 00 00 00 	add    0x0(%rip),%rdi        # 56a7 <try_place+0x1d37>
    56a7:	49 89 c6             	mov    %rax,%r14
    56aa:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%rsp)
    56b1:	00 
    56b2:	e9 cf ea ff ff       	jmpq   4186 <try_place+0x816>
    56b7:	85 c0                	test   %eax,%eax
    56b9:	0f 88 4f eb ff ff    	js     420e <try_place+0x89e>
    56bf:	31 c0                	xor    %eax,%eax
    56c1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    56c8:	49 63 11             	movslq (%r9),%rdx
    56cb:	83 c0 01             	add    $0x1,%eax
    56ce:	49 83 c1 04          	add    $0x4,%r9
    56d2:	41 c7 44 95 00 00 00 	movl   $0x0,0x0(%r13,%rdx,4)
    56d9:	00 00 
    56db:	3b 47 08             	cmp    0x8(%rdi),%eax
    56de:	7e e8                	jle    56c8 <try_place+0x1d58>
    56e0:	83 c3 01             	add    $0x1,%ebx
    56e3:	49 83 c7 04          	add    $0x4,%r15
    56e7:	3b 1d 00 00 00 00    	cmp    0x0(%rip),%ebx        # 56ed <try_place+0x1d7d>
    56ed:	0f 8c 1e ea ff ff    	jl     4111 <try_place+0x7a1>
    56f3:	e9 29 eb ff ff       	jmpq   4221 <try_place+0x8b1>
    56f8:	b9 00 00 00 00       	mov    $0x0,%ecx
    56fd:	ba 5d 0e 00 00       	mov    $0xe5d,%edx
    5702:	be 00 00 00 00       	mov    $0x0,%esi
    5707:	bf 00 00 00 00       	mov    $0x0,%edi
    570c:	e8 00 00 00 00       	callq  5711 <try_place+0x1da1>
    5711:	31 f6                	xor    %esi,%esi
    5713:	85 d2                	test   %edx,%edx
    5715:	0f 84 fd e8 ff ff    	je     4018 <try_place+0x6a8>
    571b:	83 fa 01             	cmp    $0x1,%edx
    571e:	c7 00 00 00 80 bf    	movl   $0xbf800000,(%rax)
    5724:	0f 85 9e e8 ff ff    	jne    3fc8 <try_place+0x658>
    572a:	be 01 00 00 00       	mov    $0x1,%esi
    572f:	e9 e0 e8 ff ff       	jmpq   4014 <try_place+0x6a4>
    5734:	0f 1f 40 00          	nopl   0x0(%rax)
    5738:	66 0f ef ff          	pxor   %xmm7,%xmm7
    573c:	f3 0f 2a fa          	cvtsi2ss %edx,%xmm7
    5740:	f3 0f 11 7c 24 10    	movss  %xmm7,0x10(%rsp)
    5746:	0f 28 c7             	movaps %xmm7,%xmm0
    5749:	e9 cf f5 ff ff       	jmpq   4d1d <try_place+0x13ad>
    574e:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
    5753:	e8 00 00 00 00       	callq  5758 <try_place+0x1de8>
    5758:	e9 5d f3 ff ff       	jmpq   4aba <try_place+0x114a>
    575d:	8d 6b ff             	lea    -0x1(%rbx),%ebp
    5760:	44 8d 63 01          	lea    0x1(%rbx),%r12d
    5764:	31 d2                	xor    %edx,%edx
    5766:	31 ff                	xor    %edi,%edi
    5768:	41 b8 10 00 00 00    	mov    $0x10,%r8d
    576e:	89 e9                	mov    %ebp,%ecx
    5770:	89 ee                	mov    %ebp,%esi
    5772:	4d 63 e4             	movslq %r12d,%r12
    5775:	e8 00 00 00 00       	callq  577a <try_place+0x1e0a>
    577a:	49 c1 e4 02          	shl    $0x2,%r12
    577e:	41 b8 10 00 00 00    	mov    $0x10,%r8d
    5784:	31 d2                	xor    %edx,%edx
    5786:	89 e9                	mov    %ebp,%ecx
    5788:	89 ee                	mov    %ebp,%esi
    578a:	31 ff                	xor    %edi,%edi
    578c:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 5793 <try_place+0x1e23>
    5793:	e8 00 00 00 00       	callq  5798 <try_place+0x1e28>
    5798:	4c 89 e7             	mov    %r12,%rdi
    579b:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 57a2 <try_place+0x1e32>
    57a2:	e8 00 00 00 00       	callq  57a7 <try_place+0x1e37>
    57a7:	4c 89 e7             	mov    %r12,%rdi
    57aa:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 57b1 <try_place+0x1e41>
    57b1:	e8 00 00 00 00       	callq  57b6 <try_place+0x1e46>
    57b6:	85 db                	test   %ebx,%ebx
    57b8:	49 89 c0             	mov    %rax,%r8
    57bb:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 57c2 <try_place+0x1e52>
    57c2:	0f 8e cc 18 00 00    	jle    7094 <try_place+0x3724>
    57c8:	48 63 05 00 00 00 00 	movslq 0x0(%rip),%rax        # 57cf <try_place+0x1e5f>
    57cf:	66 0f ef f6          	pxor   %xmm6,%xmm6
    57d3:	66 0f ef e4          	pxor   %xmm4,%xmm4
    57d7:	4c 8b 35 00 00 00 00 	mov    0x0(%rip),%r14        # 57de <try_place+0x1e6e>
    57de:	4c 8b 1d 00 00 00 00 	mov    0x0(%rip),%r11        # 57e5 <try_place+0x1e75>
    57e5:	41 89 ea             	mov    %ebp,%r10d
    57e8:	45 31 ff             	xor    %r15d,%r15d
    57eb:	4e 8d 2c d5 08 00 00 	lea    0x8(,%r10,8),%r13
    57f2:	00 
    57f3:	f3 0f 10 3d 00 00 00 	movss  0x0(%rip),%xmm7        # 57fb <try_place+0x1e8b>
    57fa:	00 
    57fb:	f3 0f 2a f0          	cvtsi2ss %eax,%xmm6
    57ff:	49 89 c1             	mov    %rax,%r9
    5802:	49 8d 04 86          	lea    (%r14,%rax,4),%rax
    5806:	4d 01 dd             	add    %r11,%r13
    5809:	f3 0f 2a e3          	cvtsi2ss %ebx,%xmm4
    580d:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    5812:	45 89 cc             	mov    %r9d,%r12d
    5815:	f3 0f 11 bc 24 bc 00 	movss  %xmm7,0xbc(%rsp)
    581c:	00 00 
    581e:	f2 0f 10 1d 00 00 00 	movsd  0x0(%rip),%xmm3        # 5826 <try_place+0x1eb6>
    5825:	00 
    5826:	f3 0f 11 74 24 10    	movss  %xmm6,0x10(%rsp)
    582c:	66 0f ef d2          	pxor   %xmm2,%xmm2
    5830:	41 8d 47 01          	lea    0x1(%r15),%eax
    5834:	4c 89 5c 24 68       	mov    %r11,0x68(%rsp)
    5839:	66 0f ef c0          	pxor   %xmm0,%xmm0
    583d:	4c 89 54 24 58       	mov    %r10,0x58(%rsp)
    5842:	f3 0f 10 6c 24 10    	movss  0x10(%rsp),%xmm5
    5848:	4c 89 44 24 50       	mov    %r8,0x50(%rsp)
    584d:	f3 41 0f 2a d7       	cvtsi2ss %r15d,%xmm2
    5852:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    5856:	f2 0f 11 5c 24 48    	movsd  %xmm3,0x48(%rsp)
    585c:	f3 0f 11 64 24 40    	movss  %xmm4,0x40(%rsp)
    5862:	f3 0f 5e d4          	divss  %xmm4,%xmm2
    5866:	f3 0f 5e c4          	divss  %xmm4,%xmm0
    586a:	f3 0f 59 d5          	mulss  %xmm5,%xmm2
    586e:	f3 0f 59 c5          	mulss  %xmm5,%xmm0
    5872:	f3 0f 58 94 24 bc 00 	addss  0xbc(%rsp),%xmm2
    5879:	00 00 
    587b:	f3 0f 11 44 24 08    	movss  %xmm0,0x8(%rsp)
    5881:	0f 28 c2             	movaps %xmm2,%xmm0
    5884:	f3 0f 11 54 24 38    	movss  %xmm2,0x38(%rsp)
    588a:	e8 00 00 00 00       	callq  588f <try_place+0x1f1f>
    588f:	f3 0f 2c f8          	cvttss2si %xmm0,%edi
    5893:	b8 01 00 00 00       	mov    $0x1,%eax
    5898:	f3 0f 10 44 24 08    	movss  0x8(%rsp),%xmm0
    589e:	85 ff                	test   %edi,%edi
    58a0:	0f 4e f8             	cmovle %eax,%edi
    58a3:	89 7c 24 30          	mov    %edi,0x30(%rsp)
    58a7:	e8 00 00 00 00       	callq  58ac <try_place+0x1f3c>
    58ac:	f3 0f 2c c8          	cvttss2si %xmm0,%ecx
    58b0:	48 63 44 24 30       	movslq 0x30(%rsp),%rax
    58b5:	66 0f ef c9          	pxor   %xmm1,%xmm1
    58b9:	4c 8b 44 24 50       	mov    0x50(%rsp),%r8
    58be:	f2 0f 10 5c 24 48    	movsd  0x48(%rsp),%xmm3
    58c4:	4c 8b 54 24 58       	mov    0x58(%rsp),%r10
    58c9:	f3 0f 10 54 24 38    	movss  0x38(%rsp),%xmm2
    58cf:	4c 8b 5c 24 68       	mov    0x68(%rsp),%r11
    58d4:	48 8d 34 85 00 00 00 	lea    0x0(,%rax,4),%rsi
    58db:	00 
    58dc:	48 89 c7             	mov    %rax,%rdi
    58df:	41 8b 04 86          	mov    (%r14,%rax,4),%eax
    58e3:	f3 0f 10 64 24 40    	movss  0x40(%rsp),%xmm4
    58e9:	41 8b 54 36 fc       	mov    -0x4(%r14,%rsi,1),%edx
    58ee:	44 39 e1             	cmp    %r12d,%ecx
    58f1:	41 0f 4f cc          	cmovg  %r12d,%ecx
    58f5:	01 c2                	add    %eax,%edx
    58f7:	83 ff 01             	cmp    $0x1,%edi
    58fa:	f2 0f 2a ca          	cvtsi2sd %edx,%xmm1
    58fe:	f2 0f 59 cb          	mulsd  %xmm3,%xmm1
    5902:	f2 0f 5a c9          	cvtsd2ss %xmm1,%xmm1
    5906:	0f 84 11 04 00 00    	je     5d1d <try_place+0x23ad>
    590c:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5910:	8d 57 01             	lea    0x1(%rdi),%edx
    5913:	66 0f ef ed          	pxor   %xmm5,%xmm5
    5917:	39 d1                	cmp    %edx,%ecx
    5919:	f3 0f 2a c7          	cvtsi2ss %edi,%xmm0
    591d:	f3 0f 5c d0          	subss  %xmm0,%xmm2
    5921:	f3 0f 10 84 24 bc 00 	movss  0xbc(%rsp),%xmm0
    5928:	00 00 
    592a:	f3 0f 5c c2          	subss  %xmm2,%xmm0
    592e:	f3 0f 59 c8          	mulss  %xmm0,%xmm1
    5932:	f3 0f 58 cd          	addss  %xmm5,%xmm1
    5936:	7e 4a                	jle    5982 <try_place+0x2012>
    5938:	44 8d 49 fe          	lea    -0x2(%rcx),%r9d
    593c:	48 63 d2             	movslq %edx,%rdx
    593f:	49 8d 74 36 04       	lea    0x4(%r14,%rsi,1),%rsi
    5944:	48 89 54 24 30       	mov    %rdx,0x30(%rsp)
    5949:	44 89 ca             	mov    %r9d,%edx
    594c:	29 fa                	sub    %edi,%edx
    594e:	48 89 d7             	mov    %rdx,%rdi
    5951:	48 8b 54 24 30       	mov    0x30(%rsp),%rdx
    5956:	48 8d 54 3a 01       	lea    0x1(%rdx,%rdi,1),%rdx
    595b:	49 8d 3c 96          	lea    (%r14,%rdx,4),%rdi
    595f:	8b 16                	mov    (%rsi),%edx
    5961:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5965:	48 83 c6 04          	add    $0x4,%rsi
    5969:	01 d0                	add    %edx,%eax
    596b:	48 39 fe             	cmp    %rdi,%rsi
    596e:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    5972:	89 d0                	mov    %edx,%eax
    5974:	f2 0f 59 c3          	mulsd  %xmm3,%xmm0
    5978:	f2 0f 5a c0          	cvtsd2ss %xmm0,%xmm0
    597c:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    5980:	75 dd                	jne    595f <try_place+0x1fef>
    5982:	48 63 d1             	movslq %ecx,%rdx
    5985:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5989:	41 8b 04 96          	mov    (%r14,%rdx,4),%eax
    598d:	41 03 44 96 fc       	add    -0x4(%r14,%rdx,4),%eax
    5992:	44 39 e1             	cmp    %r12d,%ecx
    5995:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    5999:	f2 0f 59 c3          	mulsd  %xmm3,%xmm0
    599d:	f2 0f 5a c0          	cvtsd2ss %xmm0,%xmm0
    59a1:	0f 84 54 03 00 00    	je     5cfb <try_place+0x238b>
    59a7:	66 0f ef d2          	pxor   %xmm2,%xmm2
    59ab:	f3 0f 10 b4 24 bc 00 	movss  0xbc(%rsp),%xmm6
    59b2:	00 00 
    59b4:	0f 28 ee             	movaps %xmm6,%xmm5
    59b7:	4c 89 da             	mov    %r11,%rdx
    59ba:	f3 0f 2a d1          	cvtsi2ss %ecx,%xmm2
    59be:	4c 89 f9             	mov    %r15,%rcx
    59c1:	48 c1 e1 04          	shl    $0x4,%rcx
    59c5:	f3 0f 5c 54 24 08    	subss  0x8(%rsp),%xmm2
    59cb:	f3 0f 5c ea          	subss  %xmm2,%xmm5
    59cf:	f3 0f 59 c5          	mulss  %xmm5,%xmm0
    59d3:	0f 28 ee             	movaps %xmm6,%xmm5
    59d6:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    59da:	f3 0f 5e e9          	divss  %xmm1,%xmm5
    59de:	0f 28 c5             	movaps %xmm5,%xmm0
    59e1:	48 89 c8             	mov    %rcx,%rax
    59e4:	48 03 02             	add    (%rdx),%rax
    59e7:	48 83 c2 08          	add    $0x8,%rdx
    59eb:	4c 39 ea             	cmp    %r13,%rdx
    59ee:	f3 0f 11 08          	movss  %xmm1,(%rax)
    59f2:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%rax)
    59f9:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%rax)
    5a00:	f3 0f 11 40 04       	movss  %xmm0,0x4(%rax)
    5a05:	75 da                	jne    59e1 <try_place+0x2071>
    5a07:	49 83 c7 01          	add    $0x1,%r15
    5a0b:	44 39 fb             	cmp    %r15d,%ebx
    5a0e:	0f 8f 18 fe ff ff    	jg     582c <try_place+0x1ebc>
    5a14:	66 0f ef ed          	pxor   %xmm5,%xmm5
    5a18:	45 31 f6             	xor    %r14d,%r14d
    5a1b:	48 63 05 00 00 00 00 	movslq 0x0(%rip),%rax        # 5a22 <try_place+0x20b2>
    5a22:	66 0f ef f6          	pxor   %xmm6,%xmm6
    5a26:	4c 8b 2d 00 00 00 00 	mov    0x0(%rip),%r13        # 5a2d <try_place+0x20bd>
    5a2d:	4c 8b 0d 00 00 00 00 	mov    0x0(%rip),%r9        # 5a34 <try_place+0x20c4>
    5a34:	49 c1 e2 04          	shl    $0x4,%r10
    5a38:	f3 41 0f 2a ee       	cvtsi2ss %r14d,%xmm5
    5a3d:	49 89 c7             	mov    %rax,%r15
    5a40:	4d 8d 5c 85 00       	lea    0x0(%r13,%rax,4),%r11
    5a45:	4d 89 cc             	mov    %r9,%r12
    5a48:	f3 0f 2a f0          	cvtsi2ss %eax,%xmm6
    5a4c:	49 8d 42 14          	lea    0x14(%r10),%rax
    5a50:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    5a55:	f3 0f 5e ec          	divss  %xmm4,%xmm5
    5a59:	41 83 c6 01          	add    $0x1,%r14d
    5a5d:	4c 89 5c 24 70       	mov    %r11,0x70(%rsp)
    5a62:	4c 89 44 24 68       	mov    %r8,0x68(%rsp)
    5a67:	f2 0f 11 5c 24 58    	movsd  %xmm3,0x58(%rsp)
    5a6d:	f3 0f 11 64 24 48    	movss  %xmm4,0x48(%rsp)
    5a73:	f3 0f 11 74 24 40    	movss  %xmm6,0x40(%rsp)
    5a79:	0f 28 d5             	movaps %xmm5,%xmm2
    5a7c:	66 0f ef ed          	pxor   %xmm5,%xmm5
    5a80:	f3 0f 59 d6          	mulss  %xmm6,%xmm2
    5a84:	f3 41 0f 2a ee       	cvtsi2ss %r14d,%xmm5
    5a89:	f3 0f 58 94 24 bc 00 	addss  0xbc(%rsp),%xmm2
    5a90:	00 00 
    5a92:	f3 0f 11 54 24 38    	movss  %xmm2,0x38(%rsp)
    5a98:	0f 28 c5             	movaps %xmm5,%xmm0
    5a9b:	f3 0f 11 6c 24 50    	movss  %xmm5,0x50(%rsp)
    5aa1:	f3 0f 5e c4          	divss  %xmm4,%xmm0
    5aa5:	f3 0f 59 c6          	mulss  %xmm6,%xmm0
    5aa9:	f3 0f 11 44 24 08    	movss  %xmm0,0x8(%rsp)
    5aaf:	0f 28 c2             	movaps %xmm2,%xmm0
    5ab2:	e8 00 00 00 00       	callq  5ab7 <try_place+0x2147>
    5ab7:	f3 0f 2c c8          	cvttss2si %xmm0,%ecx
    5abb:	b8 01 00 00 00       	mov    $0x1,%eax
    5ac0:	f3 0f 10 44 24 08    	movss  0x8(%rsp),%xmm0
    5ac6:	85 c9                	test   %ecx,%ecx
    5ac8:	0f 4e c8             	cmovle %eax,%ecx
    5acb:	89 4c 24 30          	mov    %ecx,0x30(%rsp)
    5acf:	e8 00 00 00 00       	callq  5ad4 <try_place+0x2164>
    5ad4:	f3 0f 2c f0          	cvttss2si %xmm0,%esi
    5ad8:	48 63 44 24 30       	movslq 0x30(%rsp),%rax
    5add:	66 0f ef c9          	pxor   %xmm1,%xmm1
    5ae1:	4c 8b 44 24 68       	mov    0x68(%rsp),%r8
    5ae6:	f2 0f 10 5c 24 58    	movsd  0x58(%rsp),%xmm3
    5aec:	4c 8b 5c 24 70       	mov    0x70(%rsp),%r11
    5af1:	f3 0f 10 54 24 38    	movss  0x38(%rsp),%xmm2
    5af7:	4c 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%r9
    5afe:	00 
    5aff:	48 89 c1             	mov    %rax,%rcx
    5b02:	41 8b 44 85 00       	mov    0x0(%r13,%rax,4),%eax
    5b07:	f3 0f 10 74 24 40    	movss  0x40(%rsp),%xmm6
    5b0d:	43 8b 54 0d fc       	mov    -0x4(%r13,%r9,1),%edx
    5b12:	f3 0f 10 64 24 48    	movss  0x48(%rsp),%xmm4
    5b18:	f3 0f 10 6c 24 50    	movss  0x50(%rsp),%xmm5
    5b1e:	44 39 fe             	cmp    %r15d,%esi
    5b21:	41 0f 4f f7          	cmovg  %r15d,%esi
    5b25:	01 c2                	add    %eax,%edx
    5b27:	83 f9 01             	cmp    $0x1,%ecx
    5b2a:	f2 0f 2a ca          	cvtsi2sd %edx,%xmm1
    5b2e:	f2 0f 59 cb          	mulsd  %xmm3,%xmm1
    5b32:	f2 0f 5a c9          	cvtsd2ss %xmm1,%xmm1
    5b36:	0f 84 a0 01 00 00    	je     5cdc <try_place+0x236c>
    5b3c:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5b40:	8d 79 01             	lea    0x1(%rcx),%edi
    5b43:	66 0f ef ff          	pxor   %xmm7,%xmm7
    5b47:	39 fe                	cmp    %edi,%esi
    5b49:	f3 0f 2a c1          	cvtsi2ss %ecx,%xmm0
    5b4d:	f3 0f 5c d0          	subss  %xmm0,%xmm2
    5b51:	f3 0f 10 84 24 bc 00 	movss  0xbc(%rsp),%xmm0
    5b58:	00 00 
    5b5a:	f3 0f 5c c2          	subss  %xmm2,%xmm0
    5b5e:	f3 0f 59 c8          	mulss  %xmm0,%xmm1
    5b62:	f3 0f 58 cf          	addss  %xmm7,%xmm1
    5b66:	7e 3f                	jle    5ba7 <try_place+0x2237>
    5b68:	4b 8d 54 0d 04       	lea    0x4(%r13,%r9,1),%rdx
    5b6d:	44 8d 4e fe          	lea    -0x2(%rsi),%r9d
    5b71:	48 63 ff             	movslq %edi,%rdi
    5b74:	45 89 ca             	mov    %r9d,%r10d
    5b77:	41 29 ca             	sub    %ecx,%r10d
    5b7a:	4a 8d 4c 17 01       	lea    0x1(%rdi,%r10,1),%rcx
    5b7f:	49 8d 7c 8d 00       	lea    0x0(%r13,%rcx,4),%rdi
    5b84:	8b 0a                	mov    (%rdx),%ecx
    5b86:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5b8a:	48 83 c2 04          	add    $0x4,%rdx
    5b8e:	01 c8                	add    %ecx,%eax
    5b90:	48 39 fa             	cmp    %rdi,%rdx
    5b93:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    5b97:	89 c8                	mov    %ecx,%eax
    5b99:	f2 0f 59 c3          	mulsd  %xmm3,%xmm0
    5b9d:	f2 0f 5a c0          	cvtsd2ss %xmm0,%xmm0
    5ba1:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    5ba5:	75 dd                	jne    5b84 <try_place+0x2214>
    5ba7:	48 63 d6             	movslq %esi,%rdx
    5baa:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5bae:	41 8b 44 95 00       	mov    0x0(%r13,%rdx,4),%eax
    5bb3:	41 03 44 95 fc       	add    -0x4(%r13,%rdx,4),%eax
    5bb8:	44 39 fe             	cmp    %r15d,%esi
    5bbb:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    5bbf:	f2 0f 59 c3          	mulsd  %xmm3,%xmm0
    5bc3:	f2 0f 5a c0          	cvtsd2ss %xmm0,%xmm0
    5bc7:	0f 84 f1 00 00 00    	je     5cbe <try_place+0x234e>
    5bcd:	66 0f ef d2          	pxor   %xmm2,%xmm2
    5bd1:	f3 44 0f 10 94 24 bc 	movss  0xbc(%rsp),%xmm10
    5bd8:	00 00 00 
    5bdb:	41 0f 28 fa          	movaps %xmm10,%xmm7
    5bdf:	49 8b 14 24          	mov    (%r12),%rdx
    5be3:	f3 0f 2a d6          	cvtsi2ss %esi,%xmm2
    5be7:	48 8d 42 04          	lea    0x4(%rdx),%rax
    5beb:	48 03 54 24 18       	add    0x18(%rsp),%rdx
    5bf0:	f3 0f 5c 54 24 08    	subss  0x8(%rsp),%xmm2
    5bf6:	f3 0f 5c fa          	subss  %xmm2,%xmm7
    5bfa:	f3 0f 59 c7          	mulss  %xmm7,%xmm0
    5bfe:	41 0f 28 fa          	movaps %xmm10,%xmm7
    5c02:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    5c06:	f3 0f 5e f9          	divss  %xmm1,%xmm7
    5c0a:	0f 28 c7             	movaps %xmm7,%xmm0
    5c0d:	f3 0f 11 48 fc       	movss  %xmm1,-0x4(%rax)
    5c12:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%rax)
    5c19:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%rax)
    5c20:	f3 0f 11 00          	movss  %xmm0,(%rax)
    5c24:	48 83 c0 10          	add    $0x10,%rax
    5c28:	48 39 d0             	cmp    %rdx,%rax
    5c2b:	75 e0                	jne    5c0d <try_place+0x229d>
    5c2d:	49 83 c4 08          	add    $0x8,%r12
    5c31:	41 39 de             	cmp    %ebx,%r14d
    5c34:	0f 85 1b fe ff ff    	jne    5a55 <try_place+0x20e5>
    5c3a:	f3 0f 10 44 24 10    	movss  0x10(%rsp),%xmm0
    5c40:	f3 0f 5e f4          	divss  %xmm4,%xmm6
    5c44:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 5c4b <try_place+0x22db>
    5c4b:	31 c0                	xor    %eax,%eax
    5c4d:	c7 02 00 00 00 3f    	movl   $0x3f000000,(%rdx)
    5c53:	41 c7 00 00 00 00 3f 	movl   $0x3f000000,(%r8)
    5c5a:	f3 0f 5e c4          	divss  %xmm4,%xmm0
    5c5e:	f3 0f 10 0c 82       	movss  (%rdx,%rax,4),%xmm1
    5c63:	f3 0f 58 ce          	addss  %xmm6,%xmm1
    5c67:	f3 0f 11 4c 82 04    	movss  %xmm1,0x4(%rdx,%rax,4)
    5c6d:	f3 41 0f 10 0c 80    	movss  (%r8,%rax,4),%xmm1
    5c73:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    5c77:	f3 41 0f 11 4c 80 04 	movss  %xmm1,0x4(%r8,%rax,4)
    5c7e:	48 83 c0 01          	add    $0x1,%rax
    5c82:	8d 48 01             	lea    0x1(%rax),%ecx
    5c85:	39 cb                	cmp    %ecx,%ebx
    5c87:	7d d5                	jge    5c5e <try_place+0x22ee>
    5c89:	41 b8 04 00 00 00    	mov    $0x4,%r8d
    5c8f:	89 e9                	mov    %ebp,%ecx
    5c91:	31 d2                	xor    %edx,%edx
    5c93:	89 ee                	mov    %ebp,%esi
    5c95:	31 ff                	xor    %edi,%edi
    5c97:	e8 00 00 00 00       	callq  5c9c <try_place+0x232c>
    5c9c:	41 b8 04 00 00 00    	mov    $0x4,%r8d
    5ca2:	89 e9                	mov    %ebp,%ecx
    5ca4:	31 d2                	xor    %edx,%edx
    5ca6:	89 ee                	mov    %ebp,%esi
    5ca8:	31 ff                	xor    %edi,%edi
    5caa:	48 89 44 24 50       	mov    %rax,0x50(%rsp)
    5caf:	e8 00 00 00 00       	callq  5cb4 <try_place+0x2344>
    5cb4:	48 89 44 24 48       	mov    %rax,0x48(%rsp)
    5cb9:	e9 25 eb ff ff       	jmpq   47e3 <try_place+0xe73>
    5cbe:	66 0f ef d2          	pxor   %xmm2,%xmm2
    5cc2:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    5cc6:	f2 41 0f 2a 13       	cvtsi2sdl (%r11),%xmm2
    5ccb:	f2 0f 59 d3          	mulsd  %xmm3,%xmm2
    5ccf:	f2 0f 58 c2          	addsd  %xmm2,%xmm0
    5cd3:	f2 0f 5a c0          	cvtsd2ss %xmm0,%xmm0
    5cd7:	e9 f1 fe ff ff       	jmpq   5bcd <try_place+0x225d>
    5cdc:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5ce0:	f3 0f 5a c9          	cvtss2sd %xmm1,%xmm1
    5ce4:	f2 41 0f 2a 45 00    	cvtsi2sdl 0x0(%r13),%xmm0
    5cea:	f2 0f 59 c3          	mulsd  %xmm3,%xmm0
    5cee:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
    5cf2:	f2 0f 5a c9          	cvtsd2ss %xmm1,%xmm1
    5cf6:	e9 41 fe ff ff       	jmpq   5b3c <try_place+0x21cc>
    5cfb:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
    5d00:	66 0f ef d2          	pxor   %xmm2,%xmm2
    5d04:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    5d08:	f2 0f 2a 10          	cvtsi2sdl (%rax),%xmm2
    5d0c:	f2 0f 59 d3          	mulsd  %xmm3,%xmm2
    5d10:	f2 0f 58 c2          	addsd  %xmm2,%xmm0
    5d14:	f2 0f 5a c0          	cvtsd2ss %xmm0,%xmm0
    5d18:	e9 8a fc ff ff       	jmpq   59a7 <try_place+0x2037>
    5d1d:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5d21:	f3 0f 5a c9          	cvtss2sd %xmm1,%xmm1
    5d25:	f2 41 0f 2a 06       	cvtsi2sdl (%r14),%xmm0
    5d2a:	f2 0f 59 c3          	mulsd  %xmm3,%xmm0
    5d2e:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
    5d32:	f2 0f 5a c9          	cvtsd2ss %xmm1,%xmm1
    5d36:	e9 d1 fb ff ff       	jmpq   590c <try_place+0x1f9c>
    5d3b:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5d3f:	44 89 e2             	mov    %r12d,%edx
    5d42:	89 ee                	mov    %ebp,%esi
    5d44:	bf 00 00 00 00       	mov    $0x0,%edi
    5d49:	31 c0                	xor    %eax,%eax
    5d4b:	f2 0f 11 44 24 08    	movsd  %xmm0,0x8(%rsp)
    5d51:	e8 00 00 00 00       	callq  5d56 <try_place+0x23e6>
    5d56:	f2 0f 10 44 24 08    	movsd  0x8(%rsp),%xmm0
    5d5c:	e9 8a f1 ff ff       	jmpq   4eeb <try_place+0x157b>
    5d61:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    5d68:	83 84 24 98 00 00 00 	addl   $0x1,0x98(%rsp)
    5d6f:	01 
    5d70:	e9 24 f4 ff ff       	jmpq   5199 <try_place+0x1829>
    5d75:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5d79:	83 f8 01             	cmp    $0x1,%eax
    5d7c:	f2 0f 10 4c 24 78    	movsd  0x78(%rsp),%xmm1
    5d82:	f2 0f 10 94 24 80 00 	movsd  0x80(%rsp),%xmm2
    5d89:	00 00 
    5d8b:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    5d8f:	f2 0f 10 9c 24 88 00 	movsd  0x88(%rsp),%xmm3
    5d96:	00 00 
    5d98:	f2 0f 10 a4 24 90 00 	movsd  0x90(%rsp),%xmm4
    5d9f:	00 00 
    5da1:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
    5da5:	f2 0f 5e d0          	divsd  %xmm0,%xmm2
    5da9:	f2 0f 5e d8          	divsd  %xmm0,%xmm3
    5dad:	f2 0f 5e e0          	divsd  %xmm0,%xmm4
    5db1:	0f 84 44 16 00 00    	je     73fb <try_place+0x3a8b>
    5db7:	83 e8 01             	sub    $0x1,%eax
    5dba:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    5dbe:	66 0f ef ed          	pxor   %xmm5,%xmm5
    5dc2:	f2 0f 10 74 24 70    	movsd  0x70(%rsp),%xmm6
    5dc8:	f2 0f 2a e8          	cvtsi2sd %eax,%xmm5
    5dcc:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    5dd0:	f2 0f 5c f0          	subsd  %xmm0,%xmm6
    5dd4:	66 0f 28 c6          	movapd %xmm6,%xmm0
    5dd8:	f2 0f 5e c5          	divsd  %xmm5,%xmm0
    5ddc:	66 0f 2e 84 24 a0 00 	ucomisd 0xa0(%rsp),%xmm0
    5de3:	00 00 
    5de5:	0f 86 10 16 00 00    	jbe    73fb <try_place+0x3a8b>
    5deb:	f2 0f 51 e8          	sqrtsd %xmm0,%xmm5
    5def:	66 0f 2e ed          	ucomisd %xmm5,%xmm5
    5df3:	0f 8b 78 f6 ff ff    	jnp    5471 <try_place+0x1b01>
    5df9:	f2 0f 11 a4 24 90 00 	movsd  %xmm4,0x90(%rsp)
    5e00:	00 00 
    5e02:	f2 0f 11 9c 24 88 00 	movsd  %xmm3,0x88(%rsp)
    5e09:	00 00 
    5e0b:	f2 0f 11 94 24 80 00 	movsd  %xmm2,0x80(%rsp)
    5e12:	00 00 
    5e14:	f2 0f 11 4c 24 78    	movsd  %xmm1,0x78(%rsp)
    5e1a:	f3 44 0f 11 44 24 70 	movss  %xmm8,0x70(%rsp)
    5e21:	e8 00 00 00 00       	callq  5e26 <try_place+0x24b6>
    5e26:	f2 0f 10 a4 24 90 00 	movsd  0x90(%rsp),%xmm4
    5e2d:	00 00 
    5e2f:	66 0f 28 e8          	movapd %xmm0,%xmm5
    5e33:	f2 0f 10 9c 24 88 00 	movsd  0x88(%rsp),%xmm3
    5e3a:	00 00 
    5e3c:	f2 0f 10 94 24 80 00 	movsd  0x80(%rsp),%xmm2
    5e43:	00 00 
    5e45:	f2 0f 10 4c 24 78    	movsd  0x78(%rsp),%xmm1
    5e4b:	f3 44 0f 10 44 24 70 	movss  0x70(%rsp),%xmm8
    5e52:	e9 1a f6 ff ff       	jmpq   5471 <try_place+0x1b01>
    5e57:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    5e5e:	00 00 
    5e60:	f3 0f 10 74 24 08    	movss  0x8(%rsp),%xmm6
    5e66:	f3 0f 59 35 00 00 00 	mulss  0x0(%rip),%xmm6        # 5e6e <try_place+0x24fe>
    5e6d:	00 
    5e6e:	f3 0f 11 74 24 70    	movss  %xmm6,0x70(%rsp)
    5e74:	0f 28 c6             	movaps %xmm6,%xmm0
    5e77:	e9 1a f7 ff ff       	jmpq   5596 <try_place+0x1c26>
    5e7c:	83 7c 24 2c 01       	cmpl   $0x1,0x2c(%rsp)
    5e81:	0f 84 3d 0e 00 00    	je     6cc4 <try_place+0x3354>
    5e87:	8b 0d 00 00 00 00    	mov    0x0(%rip),%ecx        # 5e8d <try_place+0x251d>
    5e8d:	85 c9                	test   %ecx,%ecx
    5e8f:	0f 8e b4 10 00 00    	jle    6f49 <try_place+0x35d9>
    5e95:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5e9c <try_place+0x252c>
    5e9c:	8b 35 00 00 00 00    	mov    0x0(%rip),%esi        # 5ea2 <try_place+0x2532>
    5ea2:	31 c9                	xor    %ecx,%ecx
    5ea4:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 5eab <try_place+0x253b>
    5eab:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5eaf:	31 d2                	xor    %edx,%edx
    5eb1:	48 83 c0 20          	add    $0x20,%rax
    5eb5:	0f 1f 00             	nopl   (%rax)
    5eb8:	44 8b 00             	mov    (%rax),%r8d
    5ebb:	45 85 c0             	test   %r8d,%r8d
    5ebe:	75 05                	jne    5ec5 <try_place+0x2555>
    5ec0:	f3 0f 58 04 0f       	addss  (%rdi,%rcx,1),%xmm0
    5ec5:	83 c2 01             	add    $0x1,%edx
    5ec8:	48 83 c0 28          	add    $0x28,%rax
    5ecc:	48 83 c1 04          	add    $0x4,%rcx
    5ed0:	39 f2                	cmp    %esi,%edx
    5ed2:	7c e4                	jl     5eb8 <try_place+0x2548>
    5ed4:	0f 28 f8             	movaps %xmm0,%xmm7
    5ed7:	f3 0f 10 94 24 48 01 	movss  0x148(%rsp),%xmm2
    5ede:	00 00 
    5ee0:	66 0f ef c9          	pxor   %xmm1,%xmm1
    5ee4:	f3 0f 5c fa          	subss  %xmm2,%xmm7
    5ee8:	f2 0f 10 1d 00 00 00 	movsd  0x0(%rip),%xmm3        # 5ef0 <try_place+0x2580>
    5eef:	00 
    5ef0:	f3 0f 5a ca          	cvtss2sd %xmm2,%xmm1
    5ef4:	0f 28 d7             	movaps %xmm7,%xmm2
    5ef7:	f2 0f 59 d9          	mulsd  %xmm1,%xmm3
    5efb:	0f 54 15 00 00 00 00 	andps  0x0(%rip),%xmm2        # 5f02 <try_place+0x2592>
    5f02:	f3 0f 5a d2          	cvtss2sd %xmm2,%xmm2
    5f06:	66 0f 2e d3          	ucomisd %xmm3,%xmm2
    5f0a:	0f 87 ce 14 00 00    	ja     73de <try_place+0x3a6e>
    5f10:	45 84 e4             	test   %r12b,%r12b
    5f13:	f3 0f 11 84 24 48 01 	movss  %xmm0,0x148(%rsp)
    5f1a:	00 00 
    5f1c:	0f 85 4b 0f 00 00    	jne    6e6d <try_place+0x34fd>
    5f22:	85 ed                	test   %ebp,%ebp
    5f24:	0f 85 74 0d 00 00    	jne    6c9e <try_place+0x332e>
    5f2a:	f3 0f 10 bc 24 38 03 	movss  0x338(%rsp),%xmm7
    5f31:	00 00 
    5f33:	c7 84 24 a8 00 00 00 	movl   $0x0,0xa8(%rsp)
    5f3a:	00 00 00 00 
    5f3e:	f3 0f 11 84 24 40 01 	movss  %xmm0,0x140(%rsp)
    5f45:	00 00 
    5f47:	8b 7c 24 18          	mov    0x18(%rsp),%edi
    5f4b:	f3 0f 11 bc 24 04 01 	movss  %xmm7,0x104(%rsp)
    5f52:	00 00 
    5f54:	e9 b3 f4 ff ff       	jmpq   540c <try_place+0x1a9c>
    5f59:	f3 0f 10 b4 24 04 01 	movss  0x104(%rsp),%xmm6
    5f60:	00 00 
    5f62:	0f 2e 74 24 08       	ucomiss 0x8(%rsp),%xmm6
    5f67:	0f 86 cf f1 ff ff    	jbe    513c <try_place+0x17cc>
    5f6d:	80 bc 24 15 01 00 00 	cmpb   $0x0,0x115(%rsp)
    5f74:	00 
    5f75:	44 8b 6c 24 18       	mov    0x18(%rsp),%r13d
    5f7a:	4c 8b 7c 24 68       	mov    0x68(%rsp),%r15
    5f7f:	0f 85 97 11 00 00    	jne    711c <try_place+0x37ac>
    5f85:	f2 0f 10 bc 24 a0 00 	movsd  0xa0(%rsp),%xmm7
    5f8c:	00 00 
    5f8e:	41 8d 45 ff          	lea    -0x1(%r13),%eax
    5f92:	41 bb 01 00 00 00    	mov    $0x1,%r11d
    5f98:	45 31 e4             	xor    %r12d,%r12d
    5f9b:	31 ed                	xor    %ebp,%ebp
    5f9d:	f2 0f 11 7c 24 78    	movsd  %xmm7,0x78(%rsp)
    5fa3:	89 84 24 80 00 00 00 	mov    %eax,0x80(%rsp)
    5faa:	f2 0f 11 7c 24 70    	movsd  %xmm7,0x70(%rsp)
    5fb0:	f2 0f 11 7c 24 68    	movsd  %xmm7,0x68(%rsp)
    5fb6:	f2 0f 11 7c 24 18    	movsd  %xmm7,0x18(%rsp)
    5fbc:	f2 0f 11 7c 24 08    	movsd  %xmm7,0x8(%rsp)
    5fc2:	eb 10                	jmp    5fd4 <try_place+0x2664>
    5fc4:	0f 1f 40 00          	nopl   0x0(%rax)
    5fc8:	83 c5 01             	add    $0x1,%ebp
    5fcb:	44 39 ed             	cmp    %r13d,%ebp
    5fce:	0f 84 7b 02 00 00    	je     624f <try_place+0x28df>
    5fd4:	44 89 9c 24 88 00 00 	mov    %r11d,0x88(%rsp)
    5fdb:	00 
    5fdc:	48 83 ec 08          	sub    $0x8,%rsp
    5fe0:	4c 89 fe             	mov    %r15,%rsi
    5fe3:	ff 74 24 68          	pushq  0x68(%rsp)
    5fe7:	ff b4 24 f8 00 00 00 	pushq  0xf8(%rsp)
    5fee:	8b 84 24 fc 00 00 00 	mov    0xfc(%rsp),%eax
    5ff5:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5ff9:	50                   	push   %rax
    5ffa:	41 56                	push   %r14
    5ffc:	53                   	push   %rbx
    5ffd:	4c 8b 4c 24 78       	mov    0x78(%rsp),%r9
    6002:	4c 8b 84 24 80 00 00 	mov    0x80(%rsp),%r8
    6009:	00 
    600a:	8b 4c 24 5c          	mov    0x5c(%rsp),%ecx
    600e:	48 8b 54 24 60       	mov    0x60(%rsp),%rdx
    6013:	48 8b bc 24 88 00 00 	mov    0x88(%rsp),%rdi
    601a:	00 
    601b:	f3 0f 10 64 24 70    	movss  0x70(%rsp),%xmm4
    6021:	f3 0f 10 5c 24 68    	movss  0x68(%rsp),%xmm3
    6027:	f3 0f 10 54 24 50    	movss  0x50(%rsp),%xmm2
    602d:	f3 0f 10 4c 24 40    	movss  0x40(%rsp),%xmm1
    6033:	e8 78 aa ff ff       	callq  ab0 <try_swap>
    6038:	48 83 c4 30          	add    $0x30,%rsp
    603c:	83 f8 01             	cmp    $0x1,%eax
    603f:	44 8b 9c 24 88 00 00 	mov    0x88(%rsp),%r11d
    6046:	00 
    6047:	0f 85 7b ff ff ff    	jne    5fc8 <try_place+0x2658>
    604d:	66 0f ef c9          	pxor   %xmm1,%xmm1
    6051:	f3 0f 10 84 24 40 01 	movss  0x140(%rsp),%xmm0
    6058:	00 00 
    605a:	66 0f ef d2          	pxor   %xmm2,%xmm2
    605e:	41 83 c4 01          	add    $0x1,%r12d
    6062:	80 bc 24 15 01 00 00 	cmpb   $0x0,0x115(%rsp)
    6069:	00 
    606a:	f3 0f 5a c8          	cvtss2sd %xmm0,%xmm1
    606e:	f3 0f 59 c0          	mulss  %xmm0,%xmm0
    6072:	f2 0f 58 4c 24 08    	addsd  0x8(%rsp),%xmm1
    6078:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    607c:	f2 0f 58 44 24 78    	addsd  0x78(%rsp),%xmm0
    6082:	f2 0f 11 4c 24 08    	movsd  %xmm1,0x8(%rsp)
    6088:	66 0f ef c9          	pxor   %xmm1,%xmm1
    608c:	f3 0f 5a 8c 24 48 01 	cvtss2sd 0x148(%rsp),%xmm1
    6093:	00 00 
    6095:	f2 0f 11 44 24 78    	movsd  %xmm0,0x78(%rsp)
    609b:	f2 0f 58 4c 24 18    	addsd  0x18(%rsp),%xmm1
    60a1:	f2 0f 11 4c 24 18    	movsd  %xmm1,0x18(%rsp)
    60a7:	f3 0f 10 8c 24 50 01 	movss  0x150(%rsp),%xmm1
    60ae:	00 00 
    60b0:	f3 0f 5a d1          	cvtss2sd %xmm1,%xmm2
    60b4:	f2 0f 58 54 24 70    	addsd  0x70(%rsp),%xmm2
    60ba:	f2 0f 11 54 24 70    	movsd  %xmm2,0x70(%rsp)
    60c0:	66 0f ef d2          	pxor   %xmm2,%xmm2
    60c4:	f3 0f 5a 94 24 44 01 	cvtss2sd 0x144(%rsp),%xmm2
    60cb:	00 00 
    60cd:	f2 0f 58 54 24 68    	addsd  0x68(%rsp),%xmm2
    60d3:	f2 0f 11 54 24 68    	movsd  %xmm2,0x68(%rsp)
    60d9:	0f 84 e9 fe ff ff    	je     5fc8 <try_place+0x2658>
    60df:	44 39 9c 24 c0 00 00 	cmp    %r11d,0xc0(%rsp)
    60e6:	00 
    60e7:	0f 8f 90 0f 00 00    	jg     707d <try_place+0x370d>
    60ed:	39 ac 24 80 00 00 00 	cmp    %ebp,0x80(%rsp)
    60f4:	0f 84 83 0f 00 00    	je     707d <try_place+0x370d>
    60fa:	83 bc 24 e4 00 00 00 	cmpl   $0x1,0xe4(%rsp)
    6101:	01 
    6102:	75 2a                	jne    612e <try_place+0x27be>
    6104:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6108:	48 8b bc 24 68 01 00 	mov    0x168(%rsp),%rdi
    610f:	00 
    6110:	f3 0f 2a 84 24 f0 00 	cvtsi2ssl 0xf0(%rsp),%xmm0
    6117:	00 00 
    6119:	f3 0f 5e c8          	divss  %xmm0,%xmm1
    611d:	0f 28 c1             	movaps %xmm1,%xmm0
    6120:	f3 0f 11 8c 24 c8 00 	movss  %xmm1,0xc8(%rsp)
    6127:	00 00 
    6129:	e8 00 00 00 00       	callq  612e <try_place+0x27be>
    612e:	48 8b bc 24 68 01 00 	mov    0x168(%rsp),%rdi
    6135:	00 
    6136:	83 c5 01             	add    $0x1,%ebp
    6139:	e8 00 00 00 00       	callq  613e <try_place+0x27ce>
    613e:	48 8b bc 24 60 01 00 	mov    0x160(%rsp),%rdi
    6145:	00 
    6146:	66 0f ef c0          	pxor   %xmm0,%xmm0
    614a:	e8 00 00 00 00       	callq  614f <try_place+0x27df>
    614f:	8b 84 24 e4 00 00 00 	mov    0xe4(%rsp),%eax
    6156:	f3 0f 10 64 24 20    	movss  0x20(%rsp),%xmm4
    615c:	f3 0f 10 ac 24 cc 00 	movss  0xcc(%rsp),%xmm5
    6163:	00 00 
    6165:	89 9c 24 0c 03 00 00 	mov    %ebx,0x30c(%rsp)
    616c:	f3 0f 11 84 24 b4 00 	movss  %xmm0,0xb4(%rsp)
    6173:	00 00 
    6175:	48 83 ec 08          	sub    $0x8,%rsp
    6179:	89 84 24 e8 02 00 00 	mov    %eax,0x2e8(%rsp)
    6180:	8b 44 24 34          	mov    0x34(%rsp),%eax
    6184:	f3 0f 11 a4 24 ec 02 	movss  %xmm4,0x2ec(%rsp)
    618b:	00 00 
    618d:	f3 0f 11 ac 24 24 03 	movss  %xmm5,0x324(%rsp)
    6194:	00 00 
    6196:	89 84 24 f4 02 00 00 	mov    %eax,0x2f4(%rsp)
    619d:	8b 84 24 d8 00 00 00 	mov    0xd8(%rsp),%eax
    61a4:	89 84 24 00 03 00 00 	mov    %eax,0x300(%rsp)
    61ab:	8b 84 24 dc 00 00 00 	mov    0xdc(%rsp),%eax
    61b2:	89 84 24 18 03 00 00 	mov    %eax,0x318(%rsp)
    61b9:	8b 84 24 e8 00 00 00 	mov    0xe8(%rsp),%eax
    61c0:	89 84 24 1c 03 00 00 	mov    %eax,0x31c(%rsp)
    61c7:	8b 84 24 cc 00 00 00 	mov    0xcc(%rsp),%eax
    61ce:	89 84 24 20 03 00 00 	mov    %eax,0x320(%rsp)
    61d5:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    61dc:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    61e3:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    61ea:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    61f1:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    61f8:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    61ff:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    6206:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    620d:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    6214:	48 8b bc 24 b0 01 00 	mov    0x1b0(%rsp),%rdi
    621b:	00 
    621c:	f3 0f 10 8c 24 08 01 	movss  0x108(%rsp),%xmm1
    6223:	00 00 
    6225:	e8 00 00 00 00       	callq  622a <try_place+0x28ba>
    622a:	48 83 c4 50          	add    $0x50,%rsp
    622e:	48 8b b4 24 e8 00 00 	mov    0xe8(%rsp),%rsi
    6235:	00 
    6236:	48 8b 7c 24 30       	mov    0x30(%rsp),%rdi
    623b:	e8 30 cf ff ff       	callq  3170 <comp_td_costs>
    6240:	44 39 ed             	cmp    %r13d,%ebp
    6243:	41 bb 01 00 00 00    	mov    $0x1,%r11d
    6249:	0f 85 85 fd ff ff    	jne    5fd4 <try_place+0x2664>
    624f:	66 0f ef ff          	pxor   %xmm7,%xmm7
    6253:	44 8b ac 24 d8 00 00 	mov    0xd8(%rsp),%r13d
    625a:	00 
    625b:	66 0f ef c0          	pxor   %xmm0,%xmm0
    625f:	f3 41 0f 2a fc       	cvtsi2ss %r12d,%xmm7
    6264:	41 01 ed             	add    %ebp,%r13d
    6267:	45 85 e4             	test   %r12d,%r12d
    626a:	f3 0f 2a c5          	cvtsi2ss %ebp,%xmm0
    626e:	f3 0f 5e f8          	divss  %xmm0,%xmm7
    6272:	0f 85 22 0d 00 00    	jne    6f9a <try_place+0x362a>
    6278:	66 0f ef c9          	pxor   %xmm1,%xmm1
    627c:	66 0f ef d2          	pxor   %xmm2,%xmm2
    6280:	66 0f ef e4          	pxor   %xmm4,%xmm4
    6284:	66 0f ef db          	pxor   %xmm3,%xmm3
    6288:	f3 0f 5a 8c 24 40 01 	cvtss2sd 0x140(%rsp),%xmm1
    628f:	00 00 
    6291:	66 0f ef ed          	pxor   %xmm5,%xmm5
    6295:	f3 0f 5a 94 24 48 01 	cvtss2sd 0x148(%rsp),%xmm2
    629c:	00 00 
    629e:	f3 0f 5a a4 24 50 01 	cvtss2sd 0x150(%rsp),%xmm4
    62a5:	00 00 
    62a7:	f3 0f 5a 9c 24 44 01 	cvtss2sd 0x144(%rsp),%xmm3
    62ae:	00 00 
    62b0:	66 0f ef f6          	pxor   %xmm6,%xmm6
    62b4:	48 83 ec 20          	sub    $0x20,%rsp
    62b8:	f3 0f 5a ff          	cvtss2sd %xmm7,%xmm7
    62bc:	66 0f ef c0          	pxor   %xmm0,%xmm0
    62c0:	44 89 ee             	mov    %r13d,%esi
    62c3:	bf 00 00 00 00       	mov    $0x0,%edi
    62c8:	b8 08 00 00 00       	mov    $0x8,%eax
    62cd:	bd 01 00 00 00       	mov    $0x1,%ebp
    62d2:	f3 0f 5a b4 24 d4 00 	cvtss2sd 0xd4(%rsp),%xmm6
    62d9:	00 00 
    62db:	f2 0f 11 74 24 58    	movsd  %xmm6,0x58(%rsp)
    62e1:	f3 0f 5a 84 24 d8 00 	cvtss2sd 0xd8(%rsp),%xmm0
    62e8:	00 00 
    62ea:	f2 0f 11 2c 24       	movsd  %xmm5,(%rsp)
    62ef:	66 0f ef ed          	pxor   %xmm5,%xmm5
    62f3:	f2 0f 11 44 24 10    	movsd  %xmm0,0x10(%rsp)
    62f9:	66 0f ef c0          	pxor   %xmm0,%xmm0
    62fd:	f3 0f 5a ac 24 e8 00 	cvtss2sd 0xe8(%rsp),%xmm5
    6304:	00 00 
    6306:	f3 0f 5a 44 24 30    	cvtss2sd 0x30(%rsp),%xmm0
    630c:	f2 0f 11 44 24 08    	movsd  %xmm0,0x8(%rsp)
    6312:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6316:	e8 00 00 00 00       	callq  631b <try_place+0x29ab>
    631b:	f3 0f 10 a4 24 64 01 	movss  0x164(%rsp),%xmm4
    6322:	00 00 
    6324:	89 da                	mov    %ebx,%edx
    6326:	f3 0f 10 bc 24 70 01 	movss  0x170(%rsp),%xmm7
    632d:	00 00 
    632f:	bf 01 00 00 00       	mov    $0x1,%edi
    6334:	f3 0f 11 64 24 30    	movss  %xmm4,0x30(%rsp)
    633a:	31 db                	xor    %ebx,%ebx
    633c:	f3 0f 10 a4 24 68 01 	movss  0x168(%rsp),%xmm4
    6343:	00 00 
    6345:	f3 0f 11 7c 24 28    	movss  %xmm7,0x28(%rsp)
    634b:	f3 0f 11 64 24 60    	movss  %xmm4,0x60(%rsp)
    6351:	48 83 c4 20          	add    $0x20,%rsp
    6355:	8b 74 24 2c          	mov    0x2c(%rsp),%esi
    6359:	e8 f2 d0 ff ff       	callq  3450 <comp_bb_cost>
    635e:	66 0f ef db          	pxor   %xmm3,%xmm3
    6362:	f3 0f 11 44 24 20    	movss  %xmm0,0x20(%rsp)
    6368:	0f 28 d0             	movaps %xmm0,%xmm2
    636b:	bf 00 00 00 00       	mov    $0x0,%edi
    6370:	b8 01 00 00 00       	mov    $0x1,%eax
    6375:	f3 0f 5a da          	cvtss2sd %xmm2,%xmm3
    6379:	66 0f 28 c3          	movapd %xmm3,%xmm0
    637d:	f2 0f 11 5c 24 18    	movsd  %xmm3,0x18(%rsp)
    6383:	e8 00 00 00 00       	callq  6388 <try_place+0x2a18>
    6388:	f3 0f 10 64 24 40    	movss  0x40(%rsp),%xmm4
    638e:	f3 0f 10 54 24 20    	movss  0x20(%rsp),%xmm2
    6394:	66 0f ef c9          	pxor   %xmm1,%xmm1
    6398:	f3 0f 5c d4          	subss  %xmm4,%xmm2
    639c:	f2 0f 10 05 00 00 00 	movsd  0x0(%rip),%xmm0        # 63a4 <try_place+0x2a34>
    63a3:	00 
    63a4:	f2 0f 10 5c 24 18    	movsd  0x18(%rsp),%xmm3
    63aa:	f3 0f 5a cc          	cvtss2sd %xmm4,%xmm1
    63ae:	0f 54 15 00 00 00 00 	andps  0x0(%rip),%xmm2        # 63b5 <try_place+0x2a45>
    63b5:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    63b9:	f3 0f 5a d2          	cvtss2sd %xmm2,%xmm2
    63bd:	66 0f 2e d0          	ucomisd %xmm0,%xmm2
    63c1:	0f 87 3d 14 00 00    	ja     7804 <try_place+0x3e94>
    63c7:	80 bc 24 15 01 00 00 	cmpb   $0x0,0x115(%rsp)
    63ce:	00 
    63cf:	0f 85 5a 14 00 00    	jne    782f <try_place+0x3ebf>
    63d5:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 63dc <try_place+0x2a6c>
    63dc:	48 c1 e7 02          	shl    $0x2,%rdi
    63e0:	e8 00 00 00 00       	callq  63e5 <try_place+0x2a75>
    63e5:	44 8b 3d 00 00 00 00 	mov    0x0(%rip),%r15d        # 63ec <try_place+0x2a7c>
    63ec:	48 89 c7             	mov    %rax,%rdi
    63ef:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 63f6 <try_place+0x2a86>
    63f6:	45 85 ff             	test   %r15d,%r15d
    63f9:	0f 8e 6d 15 00 00    	jle    796c <try_place+0x3ffc>
    63ff:	48 89 c1             	mov    %rax,%rcx
    6402:	31 d2                	xor    %edx,%edx
    6404:	c7 01 00 00 00 00    	movl   $0x0,(%rcx)
    640a:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6410 <try_place+0x2aa0>
    6410:	83 c2 01             	add    $0x1,%edx
    6413:	48 83 c1 04          	add    $0x4,%rcx
    6417:	39 c2                	cmp    %eax,%edx
    6419:	7c e9                	jl     6404 <try_place+0x2a94>
    641b:	83 3d 00 00 00 00 ff 	cmpl   $0xffffffff,0x0(%rip)        # 6422 <try_place+0x2ab2>
    6422:	0f 8c 89 01 00 00    	jl     65b1 <try_place+0x2c41>
    6428:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 642e <try_place+0x2abe>
    642e:	48 c7 44 24 20 00 00 	movq   $0x0,0x20(%rsp)
    6435:	00 00 
    6437:	31 ed                	xor    %ebp,%ebp
    6439:	45 31 e4             	xor    %r12d,%r12d
    643c:	83 f8 ff             	cmp    $0xffffffff,%eax
    643f:	48 c7 44 24 18 00 00 	movq   $0x0,0x18(%rsp)
    6446:	00 00 
    6448:	0f 8c 3c 01 00 00    	jl     658a <try_place+0x2c1a>
    644e:	66 90                	xchg   %ax,%ax
    6450:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6457 <try_place+0x2ae7>
    6457:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
    645c:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
    6461:	48 03 3c 08          	add    (%rax,%rcx,1),%rdi
    6465:	48 8b 17             	mov    (%rdi),%rdx
    6468:	8b 4f 0c             	mov    0xc(%rdi),%ecx
    646b:	48 89 f8             	mov    %rdi,%rax
    646e:	8b 72 0c             	mov    0xc(%rdx),%esi
    6471:	39 f1                	cmp    %esi,%ecx
    6473:	0f 8f df 0a 00 00    	jg     6f58 <try_place+0x35e8>
    6479:	85 f6                	test   %esi,%esi
    647b:	0f 8e 11 0b 00 00    	jle    6f92 <try_place+0x3622>
    6481:	45 31 ff             	xor    %r15d,%r15d
    6484:	45 31 ed             	xor    %r13d,%r13d
    6487:	4d 89 fe             	mov    %r15,%r14
    648a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    6490:	48 8b 48 10          	mov    0x10(%rax),%rcx
    6494:	46 8b 0c b1          	mov    (%rcx,%r14,4),%r9d
    6498:	41 83 f9 ff          	cmp    $0xffffffff,%r9d
    649c:	0f 84 a0 00 00 00    	je     6542 <try_place+0x2bd2>
    64a2:	4d 63 f9             	movslq %r9d,%r15
    64a5:	4f 8d 1c bf          	lea    (%r15,%r15,4),%r11
    64a9:	49 c1 e3 03          	shl    $0x3,%r11
    64ad:	4c 89 d8             	mov    %r11,%rax
    64b0:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 64b7 <try_place+0x2b47>
    64b7:	4c 89 5c 24 08       	mov    %r11,0x8(%rsp)
    64bc:	48 39 50 08          	cmp    %rdx,0x8(%rax)
    64c0:	74 30                	je     64f2 <try_place+0x2b82>
    64c2:	44 89 ce             	mov    %r9d,%esi
    64c5:	44 89 e1             	mov    %r12d,%ecx
    64c8:	89 ea                	mov    %ebp,%edx
    64ca:	bf 00 00 00 00       	mov    $0x0,%edi
    64cf:	31 c0                	xor    %eax,%eax
    64d1:	44 89 4c 24 10       	mov    %r9d,0x10(%rsp)
    64d6:	e8 00 00 00 00       	callq  64db <try_place+0x2b6b>
    64db:	4c 8b 5c 24 08       	mov    0x8(%rsp),%r11
    64e0:	44 8b 4c 24 10       	mov    0x10(%rsp),%r9d
    64e5:	83 c3 01             	add    $0x1,%ebx
    64e8:	4c 89 d8             	mov    %r11,%rax
    64eb:	48 03 05 00 00 00 00 	add    0x0(%rip),%rax        # 64f2 <try_place+0x2b82>
    64f2:	3b 68 18             	cmp    0x18(%rax),%ebp
    64f5:	75 06                	jne    64fd <try_place+0x2b8d>
    64f7:	44 3b 60 1c          	cmp    0x1c(%rax),%r12d
    64fb:	74 17                	je     6514 <try_place+0x2ba4>
    64fd:	44 89 e1             	mov    %r12d,%ecx
    6500:	89 ea                	mov    %ebp,%edx
    6502:	44 89 ce             	mov    %r9d,%esi
    6505:	bf 00 00 00 00       	mov    $0x0,%edi
    650a:	31 c0                	xor    %eax,%eax
    650c:	83 c3 01             	add    $0x1,%ebx
    650f:	e8 00 00 00 00       	callq  6514 <try_place+0x2ba4>
    6514:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 651b <try_place+0x2bab>
    651b:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
    6520:	41 83 c5 01          	add    $0x1,%r13d
    6524:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
    6529:	42 83 04 b8 01       	addl   $0x1,(%rax,%r15,4)
    652e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6535 <try_place+0x2bc5>
    6535:	48 03 3c 08          	add    (%rax,%rcx,1),%rdi
    6539:	48 8b 17             	mov    (%rdi),%rdx
    653c:	48 89 f8             	mov    %rdi,%rax
    653f:	8b 72 0c             	mov    0xc(%rdx),%esi
    6542:	41 8d 4e 01          	lea    0x1(%r14),%ecx
    6546:	49 83 c6 01          	add    $0x1,%r14
    654a:	39 f1                	cmp    %esi,%ecx
    654c:	0f 8c 3e ff ff ff    	jl     6490 <try_place+0x2b20>
    6552:	8b 48 0c             	mov    0xc(%rax),%ecx
    6555:	41 39 cd             	cmp    %ecx,%r13d
    6558:	74 14                	je     656e <try_place+0x2bfe>
    655a:	45 89 e8             	mov    %r13d,%r8d
    655d:	44 89 e2             	mov    %r12d,%edx
    6560:	89 ee                	mov    %ebp,%esi
    6562:	bf 00 00 00 00       	mov    $0x0,%edi
    6567:	31 c0                	xor    %eax,%eax
    6569:	e8 00 00 00 00       	callq  656e <try_place+0x2bfe>
    656e:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6574 <try_place+0x2c04>
    6574:	41 83 c4 01          	add    $0x1,%r12d
    6578:	48 83 44 24 18 18    	addq   $0x18,0x18(%rsp)
    657e:	8d 50 01             	lea    0x1(%rax),%edx
    6581:	41 39 d4             	cmp    %edx,%r12d
    6584:	0f 8e c6 fe ff ff    	jle    6450 <try_place+0x2ae0>
    658a:	8b 3d 00 00 00 00    	mov    0x0(%rip),%edi        # 6590 <try_place+0x2c20>
    6590:	83 c5 01             	add    $0x1,%ebp
    6593:	48 83 44 24 20 08    	addq   $0x8,0x20(%rsp)
    6599:	8d 57 01             	lea    0x1(%rdi),%edx
    659c:	39 d5                	cmp    %edx,%ebp
    659e:	0f 8e 95 fe ff ff    	jle    6439 <try_place+0x2ac9>
    65a4:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 65aa <try_place+0x2c3a>
    65aa:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 65b1 <try_place+0x2c41>
    65b1:	85 c0                	test   %eax,%eax
    65b3:	7e 33                	jle    65e8 <try_place+0x2c78>
    65b5:	31 ed                	xor    %ebp,%ebp
    65b7:	8b 14 af             	mov    (%rdi,%rbp,4),%edx
    65ba:	83 fa 01             	cmp    $0x1,%edx
    65bd:	74 1e                	je     65dd <try_place+0x2c6d>
    65bf:	bf 00 00 00 00       	mov    $0x0,%edi
    65c4:	89 ee                	mov    %ebp,%esi
    65c6:	31 c0                	xor    %eax,%eax
    65c8:	e8 00 00 00 00       	callq  65cd <try_place+0x2c5d>
    65cd:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 65d4 <try_place+0x2c64>
    65d4:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 65da <try_place+0x2c6a>
    65da:	83 c3 01             	add    $0x1,%ebx
    65dd:	8d 55 01             	lea    0x1(%rbp),%edx
    65e0:	48 83 c5 01          	add    $0x1,%rbp
    65e4:	39 c2                	cmp    %eax,%edx
    65e6:	7c cf                	jl     65b7 <try_place+0x2c47>
    65e8:	e8 00 00 00 00       	callq  65ed <try_place+0x2c7d>
    65ed:	85 db                	test   %ebx,%ebx
    65ef:	0f 85 91 13 00 00    	jne    7986 <try_place+0x4016>
    65f5:	bf 00 00 00 00       	mov    $0x0,%edi
    65fa:	e8 00 00 00 00       	callq  65ff <try_place+0x2c8f>
    65ff:	44 8b b4 24 e4 00 00 	mov    0xe4(%rsp),%r14d
    6606:	00 
    6607:	45 85 f6             	test   %r14d,%r14d
    660a:	75 78                	jne    6684 <try_place+0x2d14>
    660c:	80 bc 24 16 01 00 00 	cmpb   $0x0,0x116(%rsp)
    6613:	00 
    6614:	74 6e                	je     6684 <try_place+0x2d14>
    6616:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 661c <try_place+0x2cac>
    661c:	85 c0                	test   %eax,%eax
    661e:	7e 52                	jle    6672 <try_place+0x2d02>
    6620:	83 e8 01             	sub    $0x1,%eax
    6623:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 662a <try_place+0x2cba>
    662a:	4c 8b 25 00 00 00 00 	mov    0x0(%rip),%r12        # 6631 <try_place+0x2cc1>
    6631:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    6635:	48 8d 1c c5 30 00 00 	lea    0x30(,%rax,8),%rbx
    663c:	00 
    663d:	48 8d 6a 08          	lea    0x8(%rdx),%rbp
    6641:	48 01 d3             	add    %rdx,%rbx
    6644:	8b 45 00             	mov    0x0(%rbp),%eax
    6647:	85 c0                	test   %eax,%eax
    6649:	7e 1a                	jle    6665 <try_place+0x2cf5>
    664b:	83 e8 01             	sub    $0x1,%eax
    664e:	31 f6                	xor    %esi,%esi
    6650:	48 8d 14 85 04 00 00 	lea    0x4(,%rax,4),%rdx
    6657:	00 
    6658:	49 8b 04 24          	mov    (%r12),%rax
    665c:	48 8d 78 04          	lea    0x4(%rax),%rdi
    6660:	e8 00 00 00 00       	callq  6665 <try_place+0x2cf5>
    6665:	48 83 c5 28          	add    $0x28,%rbp
    6669:	49 83 c4 08          	add    $0x8,%r12
    666d:	48 39 dd             	cmp    %rbx,%rbp
    6670:	75 d2                	jne    6644 <try_place+0x2cd4>
    6672:	48 8b b4 24 e8 00 00 	mov    0xe8(%rsp),%rsi
    6679:	00 
    667a:	48 8b 7c 24 30       	mov    0x30(%rsp),%rdi
    667f:	e8 ec ca ff ff       	callq  3170 <comp_td_costs>
    6684:	80 bc 24 17 01 00 00 	cmpb   $0x0,0x117(%rsp)
    668b:	00 
    668c:	74 38                	je     66c6 <try_place+0x2d56>
    668e:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 6695 <try_place+0x2d25>
    6695:	48 89 bc 24 68 01 00 	mov    %rdi,0x168(%rsp)
    669c:	00 
    669d:	e8 00 00 00 00       	callq  66a2 <try_place+0x2d32>
    66a2:	48 8b bc 24 60 01 00 	mov    0x160(%rsp),%rdi
    66a9:	00 
    66aa:	66 0f ef c0          	pxor   %xmm0,%xmm0
    66ae:	e8 00 00 00 00       	callq  66b3 <try_place+0x2d43>
    66b3:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    66b7:	bf 00 00 00 00       	mov    $0x0,%edi
    66bc:	b8 01 00 00 00       	mov    $0x1,%eax
    66c1:	e8 00 00 00 00       	callq  66c6 <try_place+0x2d56>
    66c6:	66 0f ef c0          	pxor   %xmm0,%xmm0
    66ca:	8b 94 24 10 01 00 00 	mov    0x110(%rsp),%edx
    66d1:	66 0f ef d2          	pxor   %xmm2,%xmm2
    66d5:	48 8d bc 24 70 01 00 	lea    0x170(%rsp),%rdi
    66dc:	00 
    66dd:	66 0f ef c9          	pxor   %xmm1,%xmm1
    66e1:	be 00 00 00 00       	mov    $0x0,%esi
    66e6:	f3 0f 5a 84 24 40 01 	cvtss2sd 0x140(%rsp),%xmm0
    66ed:	00 00 
    66ef:	b8 04 00 00 00       	mov    $0x4,%eax
    66f4:	f2 0f 10 5c 24 38    	movsd  0x38(%rsp),%xmm3
    66fa:	f3 0f 5a 94 24 44 01 	cvtss2sd 0x144(%rsp),%xmm2
    6701:	00 00 
    6703:	f3 0f 5a 8c 24 48 01 	cvtss2sd 0x148(%rsp),%xmm1
    670a:	00 00 
    670c:	e8 00 00 00 00       	callq  6711 <try_place+0x2da1>
    6711:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6715:	bf 00 00 00 00       	mov    $0x0,%edi
    671a:	66 0f ef db          	pxor   %xmm3,%xmm3
    671e:	b8 04 00 00 00       	mov    $0x4,%eax
    6723:	66 0f ef d2          	pxor   %xmm2,%xmm2
    6727:	66 0f ef c9          	pxor   %xmm1,%xmm1
    672b:	f3 0f 5a 84 24 40 01 	cvtss2sd 0x140(%rsp),%xmm0
    6732:	00 00 
    6734:	f3 0f 5a 9c 24 50 01 	cvtss2sd 0x150(%rsp),%xmm3
    673b:	00 00 
    673d:	f3 0f 5a 94 24 44 01 	cvtss2sd 0x144(%rsp),%xmm2
    6744:	00 00 
    6746:	f3 0f 5a 8c 24 48 01 	cvtss2sd 0x148(%rsp),%xmm1
    674d:	00 00 
    674f:	e8 00 00 00 00       	callq  6754 <try_place+0x2de4>
    6754:	48 8d b4 24 70 01 00 	lea    0x170(%rsp),%rsi
    675b:	00 
    675c:	31 c9                	xor    %ecx,%ecx
    675e:	ba 01 00 00 00       	mov    $0x1,%edx
    6763:	bf 01 00 00 00       	mov    $0x1,%edi
    6768:	e8 00 00 00 00       	callq  676d <try_place+0x2dfd>
    676d:	80 bc 24 15 01 00 00 	cmpb   $0x0,0x115(%rsp)
    6774:	00 
    6775:	75 0e                	jne    6785 <try_place+0x2e15>
    6777:	80 bc 24 16 01 00 00 	cmpb   $0x0,0x116(%rsp)
    677e:	00 
    677f:	0f 84 cb 01 00 00    	je     6950 <try_place+0x2fe0>
    6785:	44 8b 2d 00 00 00 00 	mov    0x0(%rip),%r13d        # 678c <try_place+0x2e1c>
    678c:	48 8b 84 24 08 01 00 	mov    0x108(%rsp),%rax
    6793:	00 
    6794:	4c 8b 35 00 00 00 00 	mov    0x0(%rip),%r14        # 679b <try_place+0x2e2b>
    679b:	48 8b 2d 00 00 00 00 	mov    0x0(%rip),%rbp        # 67a2 <try_place+0x2e32>
    67a2:	4c 8b 25 00 00 00 00 	mov    0x0(%rip),%r12        # 67a9 <try_place+0x2e39>
    67a9:	48 8b 1d 00 00 00 00 	mov    0x0(%rip),%rbx        # 67b0 <try_place+0x2e40>
    67b0:	45 85 ed             	test   %r13d,%r13d
    67b3:	48 89 84 24 68 01 00 	mov    %rax,0x168(%rsp)
    67ba:	00 
    67bb:	7e 59                	jle    6816 <try_place+0x2ea6>
    67bd:	45 31 ed             	xor    %r13d,%r13d
    67c0:	4b 8b 04 ee          	mov    (%r14,%r13,8),%rax
    67c4:	48 8d 78 04          	lea    0x4(%rax),%rdi
    67c8:	4b 89 3c ee          	mov    %rdi,(%r14,%r13,8)
    67cc:	e8 00 00 00 00       	callq  67d1 <try_place+0x2e61>
    67d1:	4a 8b 44 ed 00       	mov    0x0(%rbp,%r13,8),%rax
    67d6:	48 8d 78 04          	lea    0x4(%rax),%rdi
    67da:	4a 89 7c ed 00       	mov    %rdi,0x0(%rbp,%r13,8)
    67df:	e8 00 00 00 00       	callq  67e4 <try_place+0x2e74>
    67e4:	4b 8b 04 ec          	mov    (%r12,%r13,8),%rax
    67e8:	48 8d 78 04          	lea    0x4(%rax),%rdi
    67ec:	4b 89 3c ec          	mov    %rdi,(%r12,%r13,8)
    67f0:	e8 00 00 00 00       	callq  67f5 <try_place+0x2e85>
    67f5:	4a 8b 04 eb          	mov    (%rbx,%r13,8),%rax
    67f9:	48 8d 78 04          	lea    0x4(%rax),%rdi
    67fd:	4a 89 3c eb          	mov    %rdi,(%rbx,%r13,8)
    6801:	e8 00 00 00 00       	callq  6806 <try_place+0x2e96>
    6806:	41 8d 45 01          	lea    0x1(%r13),%eax
    680a:	49 83 c5 01          	add    $0x1,%r13
    680e:	39 05 00 00 00 00    	cmp    %eax,0x0(%rip)        # 6814 <try_place+0x2ea4>
    6814:	7f aa                	jg     67c0 <try_place+0x2e50>
    6816:	4c 89 f7             	mov    %r14,%rdi
    6819:	e8 00 00 00 00       	callq  681e <try_place+0x2eae>
    681e:	4c 89 e7             	mov    %r12,%rdi
    6821:	e8 00 00 00 00       	callq  6826 <try_place+0x2eb6>
    6826:	48 89 ef             	mov    %rbp,%rdi
    6829:	31 ed                	xor    %ebp,%ebp
    682b:	e8 00 00 00 00       	callq  6830 <try_place+0x2ec0>
    6830:	48 89 df             	mov    %rbx,%rdi
    6833:	e8 00 00 00 00       	callq  6838 <try_place+0x2ec8>
    6838:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 683e <try_place+0x2ece>
    683e:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 6845 <try_place+0x2ed5>
    6845:	31 c9                	xor    %ecx,%ecx
    6847:	31 f6                	xor    %esi,%esi
    6849:	41 b8 04 00 00 00    	mov    $0x4,%r8d
    684f:	8d 50 ff             	lea    -0x1(%rax),%edx
    6852:	e8 00 00 00 00       	callq  6857 <try_place+0x2ee7>
    6857:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 685e <try_place+0x2eee>
    685e:	e8 00 00 00 00       	callq  6863 <try_place+0x2ef3>
    6863:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 686a <try_place+0x2efa>
    686a:	e8 00 00 00 00       	callq  686f <try_place+0x2eff>
    686f:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 6876 <try_place+0x2f06>
    6876:	e8 00 00 00 00       	callq  687b <try_place+0x2f0b>
    687b:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 6882 <try_place+0x2f12>
    6882:	e8 00 00 00 00       	callq  6887 <try_place+0x2f17>
    6887:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 688d <try_place+0x2f1d>
    688d:	31 d2                	xor    %edx,%edx
    688f:	48 c7 05 00 00 00 00 	movq   $0x0,0x0(%rip)        # 689a <try_place+0x2f2a>
    6896:	00 00 00 00 
    689a:	48 c7 05 00 00 00 00 	movq   $0x0,0x0(%rip)        # 68a5 <try_place+0x2f35>
    68a1:	00 00 00 00 
    68a5:	48 c7 05 00 00 00 00 	movq   $0x0,0x0(%rip)        # 68b0 <try_place+0x2f40>
    68ac:	00 00 00 00 
    68b0:	48 c7 05 00 00 00 00 	movq   $0x0,0x0(%rip)        # 68bb <try_place+0x2f4b>
    68b7:	00 00 00 00 
    68bb:	48 8b 1d 00 00 00 00 	mov    0x0(%rip),%rbx        # 68c2 <try_place+0x2f52>
    68c2:	85 c0                	test   %eax,%eax
    68c4:	0f 8f 11 00 00 00    	jg     68db <try_place+0x2f6b>
    68ca:	eb 4e                	jmp    691a <try_place+0x2faa>
    68cc:	0f 1f 40 00          	nopl   0x0(%rax)
    68d0:	8d 4d 01             	lea    0x1(%rbp),%ecx
    68d3:	48 83 c5 01          	add    $0x1,%rbp
    68d7:	39 c1                	cmp    %eax,%ecx
    68d9:	7d 2f                	jge    690a <try_place+0x2f9a>
    68db:	44 8b 24 ab          	mov    (%rbx,%rbp,4),%r12d
    68df:	45 85 e4             	test   %r12d,%r12d
    68e2:	74 ec                	je     68d0 <try_place+0x2f60>
    68e4:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 68eb <try_place+0x2f7b>
    68eb:	48 8b 3c e8          	mov    (%rax,%rbp,8),%rdi
    68ef:	e8 00 00 00 00       	callq  68f4 <try_place+0x2f84>
    68f4:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 68fa <try_place+0x2f8a>
    68fa:	8d 4d 01             	lea    0x1(%rbp),%ecx
    68fd:	48 83 c5 01          	add    $0x1,%rbp
    6901:	ba 01 00 00 00       	mov    $0x1,%edx
    6906:	39 c1                	cmp    %eax,%ecx
    6908:	7c d1                	jl     68db <try_place+0x2f6b>
    690a:	85 d2                	test   %edx,%edx
    690c:	74 0c                	je     691a <try_place+0x2faa>
    690e:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 6915 <try_place+0x2fa5>
    6915:	e8 00 00 00 00       	callq  691a <try_place+0x2faa>
    691a:	48 89 df             	mov    %rbx,%rdi
    691d:	e8 00 00 00 00       	callq  6922 <try_place+0x2fb2>
    6922:	83 7c 24 2c 01       	cmpl   $0x1,0x2c(%rsp)
    6927:	0f 84 31 0a 00 00    	je     735e <try_place+0x39ee>
    692d:	44 8b 5c 24 2c       	mov    0x2c(%rsp),%r11d
    6932:	45 85 db             	test   %r11d,%r11d
    6935:	0f 84 a5 09 00 00    	je     72e0 <try_place+0x3970>
    693b:	48 8d b4 24 60 01 00 	lea    0x160(%rsp),%rsi
    6942:	00 
    6943:	48 8d bc 24 68 01 00 	lea    0x168(%rsp),%rdi
    694a:	00 
    694b:	e8 00 00 00 00       	callq  6950 <try_place+0x2fe0>
    6950:	48 8b 84 24 f8 00 00 	mov    0xf8(%rsp),%rax
    6957:	00 
    6958:	48 8b 38             	mov    (%rax),%rdi
    695b:	48 85 ff             	test   %rdi,%rdi
    695e:	74 65                	je     69c5 <try_place+0x3055>
    6960:	44 8b 05 00 00 00 00 	mov    0x0(%rip),%r8d        # 6967 <try_place+0x2ff7>
    6967:	45 85 c0             	test   %r8d,%r8d
    696a:	7e 54                	jle    69c0 <try_place+0x3050>
    696c:	48 8b 3f             	mov    (%rdi),%rdi
    696f:	48 85 ff             	test   %rdi,%rdi
    6972:	0f 84 fb 07 00 00    	je     7173 <try_place+0x3803>
    6978:	bd 08 00 00 00       	mov    $0x8,%ebp
    697d:	31 db                	xor    %ebx,%ebx
    697f:	4c 8b a4 24 f8 00 00 	mov    0xf8(%rsp),%r12
    6986:	00 
    6987:	eb 1c                	jmp    69a5 <try_place+0x3035>
    6989:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    6990:	49 8b 04 24          	mov    (%r12),%rax
    6994:	48 8b 3c 28          	mov    (%rax,%rbp,1),%rdi
    6998:	48 83 c5 08          	add    $0x8,%rbp
    699c:	48 85 ff             	test   %rdi,%rdi
    699f:	0f 84 ce 07 00 00    	je     7173 <try_place+0x3803>
    69a5:	e8 00 00 00 00       	callq  69aa <try_place+0x303a>
    69aa:	83 c3 01             	add    $0x1,%ebx
    69ad:	39 1d 00 00 00 00    	cmp    %ebx,0x0(%rip)        # 69b3 <try_place+0x3043>
    69b3:	7f db                	jg     6990 <try_place+0x3020>
    69b5:	48 8b 84 24 f8 00 00 	mov    0xf8(%rsp),%rax
    69bc:	00 
    69bd:	48 8b 38             	mov    (%rax),%rdi
    69c0:	e8 00 00 00 00       	callq  69c5 <try_place+0x3055>
    69c5:	48 63 3d 00 00 00 00 	movslq 0x0(%rip),%rdi        # 69cc <try_place+0x305c>
    69cc:	48 c1 e7 03          	shl    $0x3,%rdi
    69d0:	e8 00 00 00 00       	callq  69d5 <try_place+0x3065>
    69d5:	8b 3d 00 00 00 00    	mov    0x0(%rip),%edi        # 69db <try_place+0x306b>
    69db:	48 8b 9c 24 f8 00 00 	mov    0xf8(%rsp),%rbx
    69e2:	00 
    69e3:	85 ff                	test   %edi,%edi
    69e5:	48 89 03             	mov    %rax,(%rbx)
    69e8:	7e 36                	jle    6a20 <try_place+0x30b0>
    69ea:	45 31 e4             	xor    %r12d,%r12d
    69ed:	31 ed                	xor    %ebp,%ebp
    69ef:	eb 12                	jmp    6a03 <try_place+0x3093>
    69f1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    69f8:	48 8b 84 24 f8 00 00 	mov    0xf8(%rsp),%rax
    69ff:	00 
    6a00:	48 8b 00             	mov    (%rax),%rax
    6a03:	89 ef                	mov    %ebp,%edi
    6a05:	4a 8d 1c 20          	lea    (%rax,%r12,1),%rbx
    6a09:	83 c5 01             	add    $0x1,%ebp
    6a0c:	e8 00 00 00 00       	callq  6a11 <try_place+0x30a1>
    6a11:	49 83 c4 08          	add    $0x8,%r12
    6a15:	39 2d 00 00 00 00    	cmp    %ebp,0x0(%rip)        # 6a1b <try_place+0x30ab>
    6a1b:	48 89 03             	mov    %rax,(%rbx)
    6a1e:	7f d8                	jg     69f8 <try_place+0x3088>
    6a20:	48 8b 7c 24 60       	mov    0x60(%rsp),%rdi
    6a25:	e8 00 00 00 00       	callq  6a2a <try_place+0x30ba>
    6a2a:	48 81 c4 a8 02 00 00 	add    $0x2a8,%rsp
    6a31:	5b                   	pop    %rbx
    6a32:	5d                   	pop    %rbp
    6a33:	41 5c                	pop    %r12
    6a35:	41 5d                	pop    %r13
    6a37:	41 5e                	pop    %r14
    6a39:	41 5f                	pop    %r15
    6a3b:	c3                   	retq   
    6a3c:	0f 1f 40 00          	nopl   0x0(%rax)
    6a40:	0f 28 c5             	movaps %xmm5,%xmm0
    6a43:	f3 0f 10 bc 24 bc 00 	movss  0xbc(%rsp),%xmm7
    6a4a:	00 00 
    6a4c:	f3 0f 5c c7          	subss  %xmm7,%xmm0
    6a50:	f3 0f 59 84 24 28 01 	mulss  0x128(%rsp),%xmm0
    6a57:	00 00 
    6a59:	f3 0f 5c f8          	subss  %xmm0,%xmm7
    6a5d:	f3 0f 10 84 24 24 03 	movss  0x324(%rsp),%xmm0
    6a64:	00 00 
    6a66:	0f 28 cf             	movaps %xmm7,%xmm1
    6a69:	f3 0f 10 bc 24 cc 00 	movss  0xcc(%rsp),%xmm7
    6a70:	00 00 
    6a72:	f3 0f 5c c7          	subss  %xmm7,%xmm0
    6a76:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
    6a7a:	f3 0f 58 c7          	addss  %xmm7,%xmm0
    6a7e:	f3 0f 11 84 24 b8 00 	movss  %xmm0,0xb8(%rsp)
    6a85:	00 00 
    6a87:	e9 e8 eb ff ff       	jmpq   5674 <try_place+0x1d04>
    6a8c:	8b 84 24 00 01 00 00 	mov    0x100(%rsp),%eax
    6a93:	8b bc 24 d4 00 00 00 	mov    0xd4(%rsp),%edi
    6a9a:	c7 84 24 40 01 00 00 	movl   $0x3f800000,0x140(%rsp)
    6aa1:	00 00 80 3f 
    6aa5:	39 f8                	cmp    %edi,%eax
    6aa7:	0f 8d 81 00 00 00    	jge    6b2e <try_place+0x31be>
    6aad:	44 8b 94 24 c4 00 00 	mov    0xc4(%rsp),%r10d
    6ab4:	00 
    6ab5:	45 85 d2             	test   %r10d,%r10d
    6ab8:	75 74                	jne    6b2e <try_place+0x31be>
    6aba:	83 c0 01             	add    $0x1,%eax
    6abd:	89 84 24 00 01 00 00 	mov    %eax,0x100(%rsp)
    6ac4:	f3 0f 10 b4 24 bc 00 	movss  0xbc(%rsp),%xmm6
    6acb:	00 00 
    6acd:	0f 28 ee             	movaps %xmm6,%xmm5
    6ad0:	f3 0f 5e ac 24 48 01 	divss  0x148(%rsp),%xmm5
    6ad7:	00 00 
    6ad9:	f3 0f 11 6c 24 38    	movss  %xmm5,0x38(%rsp)
    6adf:	0f 28 ee             	movaps %xmm6,%xmm5
    6ae2:	f3 0f 5e ac 24 44 01 	divss  0x144(%rsp),%xmm5
    6ae9:	00 00 
    6aeb:	f3 0f 11 6c 24 40    	movss  %xmm5,0x40(%rsp)
    6af1:	e9 4f e6 ff ff       	jmpq   5145 <try_place+0x17d5>
    6af6:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6afa:	48 8b bc 24 68 01 00 	mov    0x168(%rsp),%rdi
    6b01:	00 
    6b02:	f3 0f 10 8c 24 50 01 	movss  0x150(%rsp),%xmm1
    6b09:	00 00 
    6b0b:	f3 0f 2a 84 24 f0 00 	cvtsi2ssl 0xf0(%rsp),%xmm0
    6b12:	00 00 
    6b14:	f3 0f 5e c8          	divss  %xmm0,%xmm1
    6b18:	0f 28 c1             	movaps %xmm1,%xmm0
    6b1b:	f3 0f 11 8c 24 c8 00 	movss  %xmm1,0xc8(%rsp)
    6b22:	00 00 
    6b24:	e8 00 00 00 00       	callq  6b29 <try_place+0x31b9>
    6b29:	e9 a4 e7 ff ff       	jmpq   52d2 <try_place+0x1962>
    6b2e:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6b32:	83 fd 01             	cmp    $0x1,%ebp
    6b35:	f3 0f 10 8c 24 50 01 	movss  0x150(%rsp),%xmm1
    6b3c:	00 00 
    6b3e:	f3 0f 2a 84 24 f0 00 	cvtsi2ssl 0xf0(%rsp),%xmm0
    6b45:	00 00 
    6b47:	f3 0f 5e c8          	divss  %xmm0,%xmm1
    6b4b:	f3 0f 11 8c 24 c8 00 	movss  %xmm1,0xc8(%rsp)
    6b52:	00 00 
    6b54:	0f 84 0e 05 00 00    	je     7068 <try_place+0x36f8>
    6b5a:	48 8b bc 24 68 01 00 	mov    0x168(%rsp),%rdi
    6b61:	00 
    6b62:	e8 00 00 00 00       	callq  6b67 <try_place+0x31f7>
    6b67:	48 8b bc 24 60 01 00 	mov    0x160(%rsp),%rdi
    6b6e:	00 
    6b6f:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6b73:	e8 00 00 00 00       	callq  6b78 <try_place+0x3208>
    6b78:	8b 44 24 2c          	mov    0x2c(%rsp),%eax
    6b7c:	f3 0f 10 74 24 20    	movss  0x20(%rsp),%xmm6
    6b82:	f3 0f 10 bc 24 cc 00 	movss  0xcc(%rsp),%xmm7
    6b89:	00 00 
    6b8b:	89 ac 24 e0 02 00 00 	mov    %ebp,0x2e0(%rsp)
    6b92:	f3 0f 11 84 24 b4 00 	movss  %xmm0,0xb4(%rsp)
    6b99:	00 00 
    6b9b:	89 9c 24 0c 03 00 00 	mov    %ebx,0x30c(%rsp)
    6ba2:	48 83 ec 08          	sub    $0x8,%rsp
    6ba6:	89 84 24 f4 02 00 00 	mov    %eax,0x2f4(%rsp)
    6bad:	8b 84 24 d8 00 00 00 	mov    0xd8(%rsp),%eax
    6bb4:	f3 0f 11 b4 24 ec 02 	movss  %xmm6,0x2ec(%rsp)
    6bbb:	00 00 
    6bbd:	f3 0f 11 bc 24 24 03 	movss  %xmm7,0x324(%rsp)
    6bc4:	00 00 
    6bc6:	89 84 24 00 03 00 00 	mov    %eax,0x300(%rsp)
    6bcd:	8b 84 24 dc 00 00 00 	mov    0xdc(%rsp),%eax
    6bd4:	89 84 24 18 03 00 00 	mov    %eax,0x318(%rsp)
    6bdb:	8b 84 24 e8 00 00 00 	mov    0xe8(%rsp),%eax
    6be2:	89 84 24 1c 03 00 00 	mov    %eax,0x31c(%rsp)
    6be9:	8b 84 24 cc 00 00 00 	mov    0xcc(%rsp),%eax
    6bf0:	89 84 24 20 03 00 00 	mov    %eax,0x320(%rsp)
    6bf7:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    6bfe:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    6c05:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    6c0c:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    6c13:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    6c1a:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    6c21:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    6c28:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    6c2f:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    6c36:	48 8b bc 24 b0 01 00 	mov    0x1b0(%rsp),%rdi
    6c3d:	00 
    6c3e:	f3 0f 10 8c 24 08 01 	movss  0x108(%rsp),%xmm1
    6c45:	00 00 
    6c47:	e8 00 00 00 00       	callq  6c4c <try_place+0x32dc>
    6c4c:	48 83 c4 50          	add    $0x50,%rsp
    6c50:	48 8b 7c 24 30       	mov    0x30(%rsp),%rdi
    6c55:	4c 89 fe             	mov    %r15,%rsi
    6c58:	e8 13 c5 ff ff       	callq  3170 <comp_td_costs>
    6c5d:	c7 84 24 00 01 00 00 	movl   $0x1,0x100(%rsp)
    6c64:	01 00 00 00 
    6c68:	e9 57 fe ff ff       	jmpq   6ac4 <try_place+0x3154>
    6c6d:	f2 44 0f 59 0d 00 00 	mulsd  0x0(%rip),%xmm9        # 6c76 <try_place+0x3306>
    6c74:	00 00 
    6c76:	66 0f ef f6          	pxor   %xmm6,%xmm6
    6c7a:	f2 41 0f 5a f1       	cvtsd2ss %xmm9,%xmm6
    6c7f:	f3 0f 11 74 24 70    	movss  %xmm6,0x70(%rsp)
    6c85:	0f 28 c6             	movaps %xmm6,%xmm0
    6c88:	e9 09 e9 ff ff       	jmpq   5596 <try_place+0x1c26>
    6c8d:	f3 0f 59 44 24 08    	mulss  0x8(%rsp),%xmm0
    6c93:	f3 0f 11 44 24 70    	movss  %xmm0,0x70(%rsp)
    6c99:	e9 f8 e8 ff ff       	jmpq   5596 <try_place+0x1c26>
    6c9e:	f3 0f 10 b4 24 38 03 	movss  0x338(%rsp),%xmm6
    6ca5:	00 00 
    6ca7:	c7 84 24 a8 00 00 00 	movl   $0x0,0xa8(%rsp)
    6cae:	00 00 00 00 
    6cb2:	f3 0f 11 b4 24 04 01 	movss  %xmm6,0x104(%rsp)
    6cb9:	00 00 
    6cbb:	8b 7c 24 18          	mov    0x18(%rsp),%edi
    6cbf:	e9 48 e7 ff ff       	jmpq   540c <try_place+0x1a9c>
    6cc4:	45 31 c0             	xor    %r8d,%r8d
    6cc7:	85 db                	test   %ebx,%ebx
    6cc9:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 6cd0 <try_place+0x3360>
    6cd0:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 6cd7 <try_place+0x3367>
    6cd7:	4c 8b 8c 24 18 01 00 	mov    0x118(%rsp),%r9
    6cde:	00 
    6cdf:	0f 8e 56 02 00 00    	jle    6f3b <try_place+0x35cb>
    6ce5:	4a 8b 0c c6          	mov    (%rsi,%r8,8),%rcx
    6ce9:	4a 8b 14 c7          	mov    (%rdi,%r8,8),%rdx
    6ced:	31 c0                	xor    %eax,%eax
    6cef:	90                   	nop
    6cf0:	c7 44 01 08 00 00 00 	movl   $0x0,0x8(%rcx,%rax,1)
    6cf7:	00 
    6cf8:	c7 44 02 08 00 00 00 	movl   $0x0,0x8(%rdx,%rax,1)
    6cff:	00 
    6d00:	48 83 c0 10          	add    $0x10,%rax
    6d04:	4c 39 c8             	cmp    %r9,%rax
    6d07:	75 e7                	jne    6cf0 <try_place+0x3380>
    6d09:	49 83 c0 01          	add    $0x1,%r8
    6d0d:	44 39 c3             	cmp    %r8d,%ebx
    6d10:	7f d3                	jg     6ce5 <try_place+0x3375>
    6d12:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 6d18 <try_place+0x33a8>
    6d18:	85 d2                	test   %edx,%edx
    6d1a:	7e 7a                	jle    6d96 <try_place+0x3426>
    6d1c:	31 c0                	xor    %eax,%eax
    6d1e:	45 31 c0             	xor    %r8d,%r8d
    6d21:	31 c9                	xor    %ecx,%ecx
    6d23:	41 89 c5             	mov    %eax,%r13d
    6d26:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6d2d <try_place+0x33bd>
    6d2d:	44 8b 4c 08 20       	mov    0x20(%rax,%rcx,1),%r9d
    6d32:	45 85 c9             	test   %r9d,%r9d
    6d35:	75 34                	jne    6d6b <try_place+0x33fb>
    6d37:	4c 89 c6             	mov    %r8,%rsi
    6d3a:	48 03 35 00 00 00 00 	add    0x0(%rip),%rsi        # 6d41 <try_place+0x33d1>
    6d41:	89 da                	mov    %ebx,%edx
    6d43:	44 89 ef             	mov    %r13d,%edi
    6d46:	48 89 8c 24 a8 00 00 	mov    %rcx,0xa8(%rsp)
    6d4d:	00 
    6d4e:	4c 89 84 24 98 00 00 	mov    %r8,0x98(%rsp)
    6d55:	00 
    6d56:	e8 35 99 ff ff       	callq  690 <update_region_occ.constprop.5>
    6d5b:	48 8b 8c 24 a8 00 00 	mov    0xa8(%rsp),%rcx
    6d62:	00 
    6d63:	4c 8b 84 24 98 00 00 	mov    0x98(%rsp),%r8
    6d6a:	00 
    6d6b:	41 83 c5 01          	add    $0x1,%r13d
    6d6f:	48 83 c1 28          	add    $0x28,%rcx
    6d73:	49 83 c0 10          	add    $0x10,%r8
    6d77:	44 3b 2d 00 00 00 00 	cmp    0x0(%rip),%r13d        # 6d7e <try_place+0x340e>
    6d7e:	7c a6                	jl     6d26 <try_place+0x33b6>
    6d80:	85 db                	test   %ebx,%ebx
    6d82:	0f 8e c1 01 00 00    	jle    6f49 <try_place+0x35d9>
    6d88:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 6d8f <try_place+0x341f>
    6d8f:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 6d96 <try_place+0x3426>
    6d96:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6d9a:	4c 8b 8c 24 20 01 00 	mov    0x120(%rsp),%r9
    6da1:	00 
    6da2:	45 31 c0             	xor    %r8d,%r8d
    6da5:	0f 28 c8             	movaps %xmm0,%xmm1
    6da8:	4a 8b 0c c7          	mov    (%rdi,%r8,8),%rcx
    6dac:	4a 8b 14 c6          	mov    (%rsi,%r8,8),%rdx
    6db0:	0f 28 c1             	movaps %xmm1,%xmm0
    6db3:	48 8d 41 04          	lea    0x4(%rcx),%rax
    6db7:	48 83 c2 04          	add    $0x4,%rdx
    6dbb:	4c 01 c9             	add    %r9,%rcx
    6dbe:	eb 3a                	jmp    6dfa <try_place+0x348a>
    6dc0:	f3 0f 10 22          	movss  (%rdx),%xmm4
    6dc4:	f3 0f 59 e3          	mulss  %xmm3,%xmm4
    6dc8:	f3 0f 10 48 fc       	movss  -0x4(%rax),%xmm1
    6dcd:	f3 0f 58 e0          	addss  %xmm0,%xmm4
    6dd1:	f3 0f 10 40 04       	movss  0x4(%rax),%xmm0
    6dd6:	0f 2e c8             	ucomiss %xmm0,%xmm1
    6dd9:	0f 28 dc             	movaps %xmm4,%xmm3
    6ddc:	76 46                	jbe    6e24 <try_place+0x34b4>
    6dde:	f3 0f 10 10          	movss  (%rax),%xmm2
    6de2:	48 83 c0 10          	add    $0x10,%rax
    6de6:	48 83 c2 10          	add    $0x10,%rdx
    6dea:	f3 0f 59 d0          	mulss  %xmm0,%xmm2
    6dee:	48 39 c8             	cmp    %rcx,%rax
    6df1:	f3 0f 58 d3          	addss  %xmm3,%xmm2
    6df5:	0f 28 c2             	movaps %xmm2,%xmm0
    6df8:	74 43                	je     6e3d <try_place+0x34cd>
    6dfa:	f3 0f 10 5a 04       	movss  0x4(%rdx),%xmm3
    6dff:	f3 0f 10 4a fc       	movss  -0x4(%rdx),%xmm1
    6e04:	0f 2e cb             	ucomiss %xmm3,%xmm1
    6e07:	77 b7                	ja     6dc0 <try_place+0x3450>
    6e09:	f3 0f 59 1a          	mulss  (%rdx),%xmm3
    6e0d:	f3 0f 10 48 fc       	movss  -0x4(%rax),%xmm1
    6e12:	f3 0f 59 db          	mulss  %xmm3,%xmm3
    6e16:	f3 0f 58 d8          	addss  %xmm0,%xmm3
    6e1a:	f3 0f 10 40 04       	movss  0x4(%rax),%xmm0
    6e1f:	0f 2e c8             	ucomiss %xmm0,%xmm1
    6e22:	77 ba                	ja     6dde <try_place+0x346e>
    6e24:	f3 0f 59 00          	mulss  (%rax),%xmm0
    6e28:	48 83 c0 10          	add    $0x10,%rax
    6e2c:	48 83 c2 10          	add    $0x10,%rdx
    6e30:	48 39 c8             	cmp    %rcx,%rax
    6e33:	f3 0f 59 c0          	mulss  %xmm0,%xmm0
    6e37:	f3 0f 58 c3          	addss  %xmm3,%xmm0
    6e3b:	75 bd                	jne    6dfa <try_place+0x348a>
    6e3d:	49 83 c0 01          	add    $0x1,%r8
    6e41:	0f 28 c8             	movaps %xmm0,%xmm1
    6e44:	44 39 c3             	cmp    %r8d,%ebx
    6e47:	0f 8f 5b ff ff ff    	jg     6da8 <try_place+0x3438>
    6e4d:	e9 82 f0 ff ff       	jmpq   5ed4 <try_place+0x2564>
    6e52:	f2 41 0f 59 c1       	mulsd  %xmm9,%xmm0
    6e57:	66 0f ef ff          	pxor   %xmm7,%xmm7
    6e5b:	f2 0f 5a f8          	cvtsd2ss %xmm0,%xmm7
    6e5f:	f3 0f 11 7c 24 70    	movss  %xmm7,0x70(%rsp)
    6e65:	0f 28 c7             	movaps %xmm7,%xmm0
    6e68:	e9 29 e7 ff ff       	jmpq   5596 <try_place+0x1c26>
    6e6d:	48 8d b4 24 54 01 00 	lea    0x154(%rsp),%rsi
    6e74:	00 
    6e75:	48 8d bc 24 4c 01 00 	lea    0x14c(%rsp),%rdi
    6e7c:	00 
    6e7d:	e8 ee c2 ff ff       	callq  3170 <comp_td_costs>
    6e82:	f3 0f 10 84 24 4c 01 	movss  0x14c(%rsp),%xmm0
    6e89:	00 00 
    6e8b:	0f 28 f0             	movaps %xmm0,%xmm6
    6e8e:	f3 0f 10 94 24 44 01 	movss  0x144(%rsp),%xmm2
    6e95:	00 00 
    6e97:	66 0f ef c9          	pxor   %xmm1,%xmm1
    6e9b:	f3 0f 5c f2          	subss  %xmm2,%xmm6
    6e9f:	f2 0f 10 1d 00 00 00 	movsd  0x0(%rip),%xmm3        # 6ea7 <try_place+0x3537>
    6ea6:	00 
    6ea7:	f3 0f 5a ca          	cvtss2sd %xmm2,%xmm1
    6eab:	0f 28 d6             	movaps %xmm6,%xmm2
    6eae:	f2 0f 59 d9          	mulsd  %xmm1,%xmm3
    6eb2:	0f 54 15 00 00 00 00 	andps  0x0(%rip),%xmm2        # 6eb9 <try_place+0x3549>
    6eb9:	f3 0f 5a d2          	cvtss2sd %xmm2,%xmm2
    6ebd:	66 0f 2e d3          	ucomisd %xmm3,%xmm2
    6ec1:	0f 87 88 0a 00 00    	ja     794f <try_place+0x3fdf>
    6ec7:	f3 0f 10 9c 24 54 01 	movss  0x154(%rsp),%xmm3
    6ece:	00 00 
    6ed0:	66 0f ef c9          	pxor   %xmm1,%xmm1
    6ed4:	0f 28 fb             	movaps %xmm3,%xmm7
    6ed7:	f3 0f 10 94 24 50 01 	movss  0x150(%rsp),%xmm2
    6ede:	00 00 
    6ee0:	f3 0f 5c fa          	subss  %xmm2,%xmm7
    6ee4:	f3 0f 5a ca          	cvtss2sd %xmm2,%xmm1
    6ee8:	f2 0f 10 25 00 00 00 	movsd  0x0(%rip),%xmm4        # 6ef0 <try_place+0x3580>
    6eef:	00 
    6ef0:	f2 0f 59 e1          	mulsd  %xmm1,%xmm4
    6ef4:	0f 28 d7             	movaps %xmm7,%xmm2
    6ef7:	0f 54 15 00 00 00 00 	andps  0x0(%rip),%xmm2        # 6efe <try_place+0x358e>
    6efe:	f3 0f 5a d2          	cvtss2sd %xmm2,%xmm2
    6f02:	66 0f 2e d4          	ucomisd %xmm4,%xmm2
    6f06:	0f 87 22 0a 00 00    	ja     792e <try_place+0x3fbe>
    6f0c:	f3 0f 10 ac 24 38 03 	movss  0x338(%rsp),%xmm5
    6f13:	00 00 
    6f15:	c7 84 24 a8 00 00 00 	movl   $0x0,0xa8(%rsp)
    6f1c:	00 00 00 00 
    6f20:	f3 0f 11 84 24 44 01 	movss  %xmm0,0x144(%rsp)
    6f27:	00 00 
    6f29:	8b 7c 24 18          	mov    0x18(%rsp),%edi
    6f2d:	f3 0f 11 ac 24 04 01 	movss  %xmm5,0x104(%rsp)
    6f34:	00 00 
    6f36:	e9 d1 e4 ff ff       	jmpq   540c <try_place+0x1a9c>
    6f3b:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6f41 <try_place+0x35d1>
    6f41:	85 c0                	test   %eax,%eax
    6f43:	0f 8f d3 fd ff ff    	jg     6d1c <try_place+0x33ac>
    6f49:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6f4d:	e9 82 ef ff ff       	jmpq   5ed4 <try_place+0x2564>
    6f52:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    6f58:	44 89 e2             	mov    %r12d,%edx
    6f5b:	89 ee                	mov    %ebp,%esi
    6f5d:	bf 00 00 00 00       	mov    $0x0,%edi
    6f62:	31 c0                	xor    %eax,%eax
    6f64:	83 c3 01             	add    $0x1,%ebx
    6f67:	e8 00 00 00 00       	callq  6f6c <try_place+0x35fc>
    6f6c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6f73 <try_place+0x3603>
    6f73:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
    6f78:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
    6f7d:	48 03 3c 08          	add    (%rax,%rcx,1),%rdi
    6f81:	48 8b 17             	mov    (%rdi),%rdx
    6f84:	48 89 f8             	mov    %rdi,%rax
    6f87:	8b 72 0c             	mov    0xc(%rdx),%esi
    6f8a:	85 f6                	test   %esi,%esi
    6f8c:	0f 8f ef f4 ff ff    	jg     6481 <try_place+0x2b11>
    6f92:	45 31 ed             	xor    %r13d,%r13d
    6f95:	e9 b8 f5 ff ff       	jmpq   6552 <try_place+0x2be2>
    6f9a:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6f9e:	41 83 fc 01          	cmp    $0x1,%r12d
    6fa2:	f2 0f 10 4c 24 08    	movsd  0x8(%rsp),%xmm1
    6fa8:	f2 0f 10 54 24 18    	movsd  0x18(%rsp),%xmm2
    6fae:	f2 41 0f 2a c4       	cvtsi2sd %r12d,%xmm0
    6fb3:	f2 0f 10 64 24 70    	movsd  0x70(%rsp),%xmm4
    6fb9:	f2 0f 10 5c 24 68    	movsd  0x68(%rsp),%xmm3
    6fbf:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
    6fc3:	f2 0f 5e d0          	divsd  %xmm0,%xmm2
    6fc7:	f2 0f 5e e0          	divsd  %xmm0,%xmm4
    6fcb:	f2 0f 5e d8          	divsd  %xmm0,%xmm3
    6fcf:	0f 84 80 03 00 00    	je     7355 <try_place+0x39e5>
    6fd5:	45 8d 54 24 ff       	lea    -0x1(%r12),%r10d
    6fda:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    6fde:	f2 0f 10 6c 24 78    	movsd  0x78(%rsp),%xmm5
    6fe4:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    6fe8:	f2 0f 5c e8          	subsd  %xmm0,%xmm5
    6fec:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6ff0:	f2 41 0f 2a c2       	cvtsi2sd %r10d,%xmm0
    6ff5:	f2 0f 5e e8          	divsd  %xmm0,%xmm5
    6ff9:	66 0f 2e ac 24 a0 00 	ucomisd 0xa0(%rsp),%xmm5
    7000:	00 00 
    7002:	66 0f 28 c5          	movapd %xmm5,%xmm0
    7006:	0f 86 49 03 00 00    	jbe    7355 <try_place+0x39e5>
    700c:	f2 0f 51 ed          	sqrtsd %xmm5,%xmm5
    7010:	66 0f 2e ed          	ucomisd %xmm5,%xmm5
    7014:	0f 8b 96 f2 ff ff    	jnp    62b0 <try_place+0x2940>
    701a:	f2 0f 11 5c 24 40    	movsd  %xmm3,0x40(%rsp)
    7020:	f2 0f 11 64 24 38    	movsd  %xmm4,0x38(%rsp)
    7026:	f2 0f 11 54 24 20    	movsd  %xmm2,0x20(%rsp)
    702c:	f2 0f 11 4c 24 18    	movsd  %xmm1,0x18(%rsp)
    7032:	f3 0f 11 7c 24 08    	movss  %xmm7,0x8(%rsp)
    7038:	e8 00 00 00 00       	callq  703d <try_place+0x36cd>
    703d:	f2 0f 10 5c 24 40    	movsd  0x40(%rsp),%xmm3
    7043:	66 0f 28 e8          	movapd %xmm0,%xmm5
    7047:	f2 0f 10 64 24 38    	movsd  0x38(%rsp),%xmm4
    704d:	f2 0f 10 54 24 20    	movsd  0x20(%rsp),%xmm2
    7053:	f2 0f 10 4c 24 18    	movsd  0x18(%rsp),%xmm1
    7059:	f3 0f 10 7c 24 08    	movss  0x8(%rsp),%xmm7
    705f:	e9 4c f2 ff ff       	jmpq   62b0 <try_place+0x2940>
    7064:	0f 1f 40 00          	nopl   0x0(%rax)
    7068:	48 8b bc 24 68 01 00 	mov    0x168(%rsp),%rdi
    706f:	00 
    7070:	0f 28 c1             	movaps %xmm1,%xmm0
    7073:	e8 00 00 00 00       	callq  7078 <try_place+0x3708>
    7078:	e9 dd fa ff ff       	jmpq   6b5a <try_place+0x31ea>
    707d:	41 83 c3 01          	add    $0x1,%r11d
    7081:	e9 42 ef ff ff       	jmpq   5fc8 <try_place+0x2658>
    7086:	66 0f 28 c1          	movapd %xmm1,%xmm0
    708a:	e8 00 00 00 00       	callq  708f <try_place+0x371f>
    708f:	e9 4e de ff ff       	jmpq   4ee2 <try_place+0x1572>
    7094:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 709b <try_place+0x372b>
    709b:	c7 00 00 00 00 3f    	movl   $0x3f000000,(%rax)
    70a1:	41 c7 00 00 00 00 3f 	movl   $0x3f000000,(%r8)
    70a8:	e9 dc eb ff ff       	jmpq   5c89 <try_place+0x2319>
    70ad:	0f 85 1e d7 ff ff    	jne    47d1 <try_place+0xe61>
    70b3:	e9 72 d6 ff ff       	jmpq   472a <try_place+0xdba>
    70b8:	31 ed                	xor    %ebp,%ebp
    70ba:	e9 7a cb ff ff       	jmpq   3c39 <try_place+0x2c9>
    70bf:	be 02 00 00 00       	mov    $0x2,%esi
    70c4:	e9 4b cf ff ff       	jmpq   4014 <try_place+0x6a4>
    70c9:	49 89 c7             	mov    %rax,%r15
    70cc:	e9 36 d2 ff ff       	jmpq   4307 <try_place+0x997>
    70d1:	0f 85 a1 d4 ff ff    	jne    4578 <try_place+0xc08>
    70d7:	e9 f3 d3 ff ff       	jmpq   44cf <try_place+0xb5f>
    70dc:	8b 35 00 00 00 00    	mov    0x0(%rip),%esi        # 70e2 <try_place+0x3772>
    70e2:	85 f6                	test   %esi,%esi
    70e4:	0f 8f f7 d7 ff ff    	jg     48e1 <try_place+0xf71>
    70ea:	e9 d0 d8 ff ff       	jmpq   49bf <try_place+0x104f>
    70ef:	b9 00 00 00 00       	mov    $0x0,%ecx
    70f4:	ba 41 0e 00 00       	mov    $0xe41,%edx
    70f9:	be 00 00 00 00       	mov    $0x0,%esi
    70fe:	bf 00 00 00 00       	mov    $0x0,%edi
    7103:	e8 00 00 00 00       	callq  7108 <try_place+0x3798>
    7108:	be 03 00 00 00       	mov    $0x3,%esi
    710d:	e9 02 cf ff ff       	jmpq   4014 <try_place+0x6a4>
    7112:	be 04 00 00 00       	mov    $0x4,%esi
    7117:	e9 f8 ce ff ff       	jmpq   4014 <try_place+0x6a4>
    711c:	8b bc 24 d4 00 00 00 	mov    0xd4(%rsp),%edi
    7123:	39 bc 24 00 01 00 00 	cmp    %edi,0x100(%rsp)
    712a:	7d 60                	jge    718c <try_place+0x381c>
    712c:	8b 84 24 c4 00 00 00 	mov    0xc4(%rsp),%eax
    7133:	85 c0                	test   %eax,%eax
    7135:	75 55                	jne    718c <try_place+0x381c>
    7137:	f3 0f 10 ac 24 bc 00 	movss  0xbc(%rsp),%xmm5
    713e:	00 00 
    7140:	0f 28 f5             	movaps %xmm5,%xmm6
    7143:	f3 0f 5e b4 24 48 01 	divss  0x148(%rsp),%xmm6
    714a:	00 00 
    714c:	f3 0f 11 74 24 38    	movss  %xmm6,0x38(%rsp)
    7152:	0f 28 f5             	movaps %xmm5,%xmm6
    7155:	f3 0f 5e b4 24 44 01 	divss  0x144(%rsp),%xmm6
    715c:	00 00 
    715e:	f3 0f 11 74 24 40    	movss  %xmm6,0x40(%rsp)
    7164:	e9 1c ee ff ff       	jmpq   5f85 <try_place+0x2615>
    7169:	be 05 00 00 00       	mov    $0x5,%esi
    716e:	e9 a1 ce ff ff       	jmpq   4014 <try_place+0x6a4>
    7173:	b9 00 00 00 00       	mov    $0x0,%ecx
    7178:	ba c2 03 00 00       	mov    $0x3c2,%edx
    717d:	be 00 00 00 00       	mov    $0x0,%esi
    7182:	bf 00 00 00 00       	mov    $0x0,%edi
    7187:	e8 00 00 00 00       	callq  718c <try_place+0x381c>
    718c:	66 0f ef c0          	pxor   %xmm0,%xmm0
    7190:	83 bc 24 e4 00 00 00 	cmpl   $0x1,0xe4(%rsp)
    7197:	01 
    7198:	f3 0f 10 8c 24 50 01 	movss  0x150(%rsp),%xmm1
    719f:	00 00 
    71a1:	f3 0f 2a 84 24 f0 00 	cvtsi2ssl 0xf0(%rsp),%xmm0
    71a8:	00 00 
    71aa:	f3 0f 5e c8          	divss  %xmm0,%xmm1
    71ae:	f3 0f 11 8c 24 c8 00 	movss  %xmm1,0xc8(%rsp)
    71b5:	00 00 
    71b7:	75 10                	jne    71c9 <try_place+0x3859>
    71b9:	48 8b bc 24 68 01 00 	mov    0x168(%rsp),%rdi
    71c0:	00 
    71c1:	0f 28 c1             	movaps %xmm1,%xmm0
    71c4:	e8 00 00 00 00       	callq  71c9 <try_place+0x3859>
    71c9:	48 8b bc 24 68 01 00 	mov    0x168(%rsp),%rdi
    71d0:	00 
    71d1:	e8 00 00 00 00       	callq  71d6 <try_place+0x3866>
    71d6:	48 8b bc 24 60 01 00 	mov    0x160(%rsp),%rdi
    71dd:	00 
    71de:	66 0f ef c0          	pxor   %xmm0,%xmm0
    71e2:	e8 00 00 00 00       	callq  71e7 <try_place+0x3877>
    71e7:	8b 84 24 e4 00 00 00 	mov    0xe4(%rsp),%eax
    71ee:	f3 0f 10 6c 24 20    	movss  0x20(%rsp),%xmm5
    71f4:	f3 0f 10 b4 24 cc 00 	movss  0xcc(%rsp),%xmm6
    71fb:	00 00 
    71fd:	89 9c 24 0c 03 00 00 	mov    %ebx,0x30c(%rsp)
    7204:	f3 0f 11 84 24 b4 00 	movss  %xmm0,0xb4(%rsp)
    720b:	00 00 
    720d:	48 83 ec 08          	sub    $0x8,%rsp
    7211:	89 84 24 e8 02 00 00 	mov    %eax,0x2e8(%rsp)
    7218:	8b 44 24 34          	mov    0x34(%rsp),%eax
    721c:	f3 0f 11 ac 24 ec 02 	movss  %xmm5,0x2ec(%rsp)
    7223:	00 00 
    7225:	f3 0f 11 b4 24 24 03 	movss  %xmm6,0x324(%rsp)
    722c:	00 00 
    722e:	89 84 24 f4 02 00 00 	mov    %eax,0x2f4(%rsp)
    7235:	8b 84 24 d8 00 00 00 	mov    0xd8(%rsp),%eax
    723c:	89 84 24 00 03 00 00 	mov    %eax,0x300(%rsp)
    7243:	8b 84 24 dc 00 00 00 	mov    0xdc(%rsp),%eax
    724a:	89 84 24 18 03 00 00 	mov    %eax,0x318(%rsp)
    7251:	8b 84 24 e8 00 00 00 	mov    0xe8(%rsp),%eax
    7258:	89 84 24 1c 03 00 00 	mov    %eax,0x31c(%rsp)
    725f:	8b 84 24 cc 00 00 00 	mov    0xcc(%rsp),%eax
    7266:	89 84 24 20 03 00 00 	mov    %eax,0x320(%rsp)
    726d:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    7274:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    727b:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    7282:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    7289:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    7290:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    7297:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    729e:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    72a5:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    72ac:	48 8b bc 24 b0 01 00 	mov    0x1b0(%rsp),%rdi
    72b3:	00 
    72b4:	f3 0f 10 8c 24 08 01 	movss  0x108(%rsp),%xmm1
    72bb:	00 00 
    72bd:	e8 00 00 00 00       	callq  72c2 <try_place+0x3952>
    72c2:	48 83 c4 50          	add    $0x50,%rsp
    72c6:	48 8b b4 24 e8 00 00 	mov    0xe8(%rsp),%rsi
    72cd:	00 
    72ce:	48 8b 7c 24 30       	mov    0x30(%rsp),%rdi
    72d3:	e8 98 be ff ff       	callq  3170 <comp_td_costs>
    72d8:	e9 5a fe ff ff       	jmpq   7137 <try_place+0x37c7>
    72dd:	0f 1f 00             	nopl   (%rax)
    72e0:	44 8b 15 00 00 00 00 	mov    0x0(%rip),%r10d        # 72e7 <try_place+0x3977>
    72e7:	4c 8b 25 00 00 00 00 	mov    0x0(%rip),%r12        # 72ee <try_place+0x397e>
    72ee:	31 db                	xor    %ebx,%ebx
    72f0:	45 85 d2             	test   %r10d,%r10d
    72f3:	4c 89 e5             	mov    %r12,%rbp
    72f6:	78 18                	js     7310 <try_place+0x39a0>
    72f8:	48 8b 7d 00          	mov    0x0(%rbp),%rdi
    72fc:	83 c3 01             	add    $0x1,%ebx
    72ff:	48 83 c5 08          	add    $0x8,%rbp
    7303:	e8 00 00 00 00       	callq  7308 <try_place+0x3998>
    7308:	3b 1d 00 00 00 00    	cmp    0x0(%rip),%ebx        # 730e <try_place+0x399e>
    730e:	7e e8                	jle    72f8 <try_place+0x3988>
    7310:	4c 89 e7             	mov    %r12,%rdi
    7313:	31 db                	xor    %ebx,%ebx
    7315:	e8 00 00 00 00       	callq  731a <try_place+0x39aa>
    731a:	44 8b 0d 00 00 00 00 	mov    0x0(%rip),%r9d        # 7321 <try_place+0x39b1>
    7321:	4c 8b 25 00 00 00 00 	mov    0x0(%rip),%r12        # 7328 <try_place+0x39b8>
    7328:	45 85 c9             	test   %r9d,%r9d
    732b:	4c 89 e5             	mov    %r12,%rbp
    732e:	78 18                	js     7348 <try_place+0x39d8>
    7330:	48 8b 7d 00          	mov    0x0(%rbp),%rdi
    7334:	83 c3 01             	add    $0x1,%ebx
    7337:	48 83 c5 08          	add    $0x8,%rbp
    733b:	e8 00 00 00 00       	callq  7340 <try_place+0x39d0>
    7340:	3b 1d 00 00 00 00    	cmp    0x0(%rip),%ebx        # 7346 <try_place+0x39d6>
    7346:	7e e8                	jle    7330 <try_place+0x39c0>
    7348:	4c 89 e7             	mov    %r12,%rdi
    734b:	e8 00 00 00 00       	callq  7350 <try_place+0x39e0>
    7350:	e9 e6 f5 ff ff       	jmpq   693b <try_place+0x2fcb>
    7355:	66 0f ef ed          	pxor   %xmm5,%xmm5
    7359:	e9 52 ef ff ff       	jmpq   62b0 <try_place+0x2940>
    735e:	8b 9c 24 2c 01 00 00 	mov    0x12c(%rsp),%ebx
    7365:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 736c <try_place+0x39fc>
    736c:	31 c9                	xor    %ecx,%ecx
    736e:	31 f6                	xor    %esi,%esi
    7370:	41 b8 10 00 00 00    	mov    $0x10,%r8d
    7376:	89 da                	mov    %ebx,%edx
    7378:	e8 00 00 00 00       	callq  737d <try_place+0x3a0d>
    737d:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 7384 <try_place+0x3a14>
    7384:	31 c9                	xor    %ecx,%ecx
    7386:	89 da                	mov    %ebx,%edx
    7388:	31 f6                	xor    %esi,%esi
    738a:	41 b8 10 00 00 00    	mov    $0x10,%r8d
    7390:	e8 00 00 00 00       	callq  7395 <try_place+0x3a25>
    7395:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 739c <try_place+0x3a2c>
    739c:	e8 00 00 00 00       	callq  73a1 <try_place+0x3a31>
    73a1:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 73a8 <try_place+0x3a38>
    73a8:	e8 00 00 00 00       	callq  73ad <try_place+0x3a3d>
    73ad:	48 8b 7c 24 50       	mov    0x50(%rsp),%rdi
    73b2:	31 c9                	xor    %ecx,%ecx
    73b4:	89 da                	mov    %ebx,%edx
    73b6:	31 f6                	xor    %esi,%esi
    73b8:	41 b8 04 00 00 00    	mov    $0x4,%r8d
    73be:	e8 00 00 00 00       	callq  73c3 <try_place+0x3a53>
    73c3:	48 8b 7c 24 48       	mov    0x48(%rsp),%rdi
    73c8:	41 b8 04 00 00 00    	mov    $0x4,%r8d
    73ce:	31 c9                	xor    %ecx,%ecx
    73d0:	89 da                	mov    %ebx,%edx
    73d2:	31 f6                	xor    %esi,%esi
    73d4:	e8 00 00 00 00       	callq  73d9 <try_place+0x3a69>
    73d9:	e9 5d f5 ff ff       	jmpq   693b <try_place+0x2fcb>
    73de:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    73e2:	bf 00 00 00 00       	mov    $0x0,%edi
    73e7:	b8 02 00 00 00       	mov    $0x2,%eax
    73ec:	e8 00 00 00 00       	callq  73f1 <try_place+0x3a81>
    73f1:	bf 01 00 00 00       	mov    $0x1,%edi
    73f6:	e8 00 00 00 00       	callq  73fb <try_place+0x3a8b>
    73fb:	66 0f ef ed          	pxor   %xmm5,%xmm5
    73ff:	e9 6d e0 ff ff       	jmpq   5471 <try_place+0x1b01>
    7404:	66 0f ef c0          	pxor   %xmm0,%xmm0
    7408:	e9 d5 da ff ff       	jmpq   4ee2 <try_place+0x1572>
    740d:	66 0f ef f6          	pxor   %xmm6,%xmm6
    7411:	48 8d 84 24 40 01 00 	lea    0x140(%rsp),%rax
    7418:	00 
    7419:	31 ed                	xor    %ebp,%ebp
    741b:	4c 8d bc 24 48 01 00 	lea    0x148(%rsp),%r15
    7422:	00 
    7423:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
    7428:	f2 0f 11 b4 24 a0 00 	movsd  %xmm6,0xa0(%rsp)
    742f:	00 00 
    7431:	66 0f 28 c6          	movapd %xmm6,%xmm0
    7435:	e9 a8 da ff ff       	jmpq   4ee2 <try_place+0x1572>
    743a:	66 0f ef ff          	pxor   %xmm7,%xmm7
    743e:	48 8d 84 24 40 01 00 	lea    0x140(%rsp),%rax
    7445:	00 
    7446:	4c 8d bc 24 48 01 00 	lea    0x148(%rsp),%r15
    744d:	00 
    744e:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
    7453:	f2 0f 11 bc 24 a0 00 	movsd  %xmm7,0xa0(%rsp)
    745a:	00 00 
    745c:	e9 b6 da ff ff       	jmpq   4f17 <try_place+0x15a7>
    7461:	8b 74 24 2c          	mov    0x2c(%rsp),%esi
    7465:	31 ff                	xor    %edi,%edi
    7467:	89 da                	mov    %ebx,%edx
    7469:	e8 e2 bf ff ff       	callq  3450 <comp_bb_cost>
    746e:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 7474 <try_place+0x3b04>
    7474:	f3 0f 11 84 24 48 01 	movss  %xmm0,0x148(%rsp)
    747b:	00 00 
    747d:	85 c0                	test   %eax,%eax
    747f:	7e 4c                	jle    74cd <try_place+0x3b5d>
    7481:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 7488 <try_place+0x3b18>
    7488:	4c 8b 05 00 00 00 00 	mov    0x0(%rip),%r8        # 748f <try_place+0x3b1f>
    748f:	48 8d 4f 08          	lea    0x8(%rdi),%rcx
    7493:	31 ff                	xor    %edi,%edi
    7495:	48 8b 31             	mov    (%rcx),%rsi
    7498:	44 8b 7e 08          	mov    0x8(%rsi),%r15d
    749c:	45 85 ff             	test   %r15d,%r15d
    749f:	7e 1d                	jle    74be <try_place+0x3b4e>
    74a1:	49 8b 10             	mov    (%r8),%rdx
    74a4:	31 c0                	xor    %eax,%eax
    74a6:	c7 02 ff ff ff ff    	movl   $0xffffffff,(%rdx)
    74ac:	83 c0 01             	add    $0x1,%eax
    74af:	48 83 c2 04          	add    $0x4,%rdx
    74b3:	3b 46 08             	cmp    0x8(%rsi),%eax
    74b6:	7c ee                	jl     74a6 <try_place+0x3b36>
    74b8:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 74be <try_place+0x3b4e>
    74be:	83 c7 01             	add    $0x1,%edi
    74c1:	48 83 c1 28          	add    $0x28,%rcx
    74c5:	49 83 c0 08          	add    $0x8,%r8
    74c9:	39 c7                	cmp    %eax,%edi
    74cb:	7c c8                	jl     7495 <try_place+0x3b25>
    74cd:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 74d3 <try_place+0x3b63>
    74d3:	85 c0                	test   %eax,%eax
    74d5:	0f 8e 98 00 00 00    	jle    7573 <try_place+0x3c03>
    74db:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 74e2 <try_place+0x3b72>
    74e2:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 74e9 <try_place+0x3b79>
    74e9:	31 c9                	xor    %ecx,%ecx
    74eb:	48 8d 56 08          	lea    0x8(%rsi),%rdx
    74ef:	44 8b 72 18          	mov    0x18(%rdx),%r14d
    74f3:	45 85 f6             	test   %r14d,%r14d
    74f6:	75 35                	jne    752d <try_place+0x3bbd>
    74f8:	44 8b 2a             	mov    (%rdx),%r13d
    74fb:	45 85 ed             	test   %r13d,%r13d
    74fe:	78 2d                	js     752d <try_place+0x3bbd>
    7500:	4c 8b 4a 08          	mov    0x8(%rdx),%r9
    7504:	4c 8b 42 10          	mov    0x10(%rdx),%r8
    7508:	31 c0                	xor    %eax,%eax
    750a:	4d 63 14 81          	movslq (%r9,%rax,4),%r10
    750e:	4d 63 1c 80          	movslq (%r8,%rax,4),%r11
    7512:	4e 8b 14 d7          	mov    (%rdi,%r10,8),%r10
    7516:	43 89 04 9a          	mov    %eax,(%r10,%r11,4)
    751a:	44 8d 50 01          	lea    0x1(%rax),%r10d
    751e:	48 83 c0 01          	add    $0x1,%rax
    7522:	44 3b 12             	cmp    (%rdx),%r10d
    7525:	7e e3                	jle    750a <try_place+0x3b9a>
    7527:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 752d <try_place+0x3bbd>
    752d:	83 c1 01             	add    $0x1,%ecx
    7530:	48 83 c2 28          	add    $0x28,%rdx
    7534:	39 c1                	cmp    %eax,%ecx
    7536:	7c b7                	jl     74ef <try_place+0x3b7f>
    7538:	85 c0                	test   %eax,%eax
    753a:	7e 37                	jle    7573 <try_place+0x3c03>
    753c:	83 e8 01             	sub    $0x1,%eax
    753f:	48 8d 56 20          	lea    0x20(%rsi),%rdx
    7543:	31 c9                	xor    %ecx,%ecx
    7545:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    7549:	48 8d 04 c5 48 00 00 	lea    0x48(,%rax,8),%rax
    7550:	00 
    7551:	48 01 f0             	add    %rsi,%rax
    7554:	44 8b 22             	mov    (%rdx),%r12d
    7557:	45 85 e4             	test   %r12d,%r12d
    755a:	75 03                	jne    755f <try_place+0x3bef>
    755c:	03 4a e8             	add    -0x18(%rdx),%ecx
    755f:	48 83 c2 28          	add    $0x28,%rdx
    7563:	48 39 c2             	cmp    %rax,%rdx
    7566:	75 ec                	jne    7554 <try_place+0x3be4>
    7568:	89 8c 24 f0 00 00 00 	mov    %ecx,0xf0(%rsp)
    756f:	89 ce                	mov    %ecx,%esi
    7571:	eb 12                	jmp    7585 <try_place+0x3c15>
    7573:	c7 84 24 f0 00 00 00 	movl   $0x0,0xf0(%rsp)
    757a:	00 00 00 00 
    757e:	8b b4 24 f0 00 00 00 	mov    0xf0(%rsp),%esi
    7585:	31 c0                	xor    %eax,%eax
    7587:	bf 00 00 00 00       	mov    $0x0,%edi
    758c:	e8 00 00 00 00       	callq  7591 <try_place+0x3c21>
    7591:	83 bc 24 e4 00 00 00 	cmpl   $0x1,0xe4(%rsp)
    7598:	01 
    7599:	0f 84 a3 01 00 00    	je     7742 <try_place+0x3dd2>
    759f:	48 8d 84 24 50 01 00 	lea    0x150(%rsp),%rax
    75a6:	00 
    75a7:	66 0f ef ff          	pxor   %xmm7,%xmm7
    75ab:	48 8b 3d 00 00 00 00 	mov    0x0(%rip),%rdi        # 75b2 <try_place+0x3c42>
    75b2:	48 89 84 24 e8 00 00 	mov    %rax,0xe8(%rsp)
    75b9:	00 
    75ba:	48 8d 84 24 44 01 00 	lea    0x144(%rsp),%rax
    75c1:	00 
    75c2:	f3 0f 11 bc 24 c8 00 	movss  %xmm7,0xc8(%rsp)
    75c9:	00 00 
    75cb:	48 89 bc 24 68 01 00 	mov    %rdi,0x168(%rsp)
    75d2:	00 
    75d3:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
    75d8:	e8 00 00 00 00       	callq  75dd <try_place+0x3c6d>
    75dd:	48 8b bc 24 60 01 00 	mov    0x160(%rsp),%rdi
    75e4:	00 
    75e5:	66 0f ef c0          	pxor   %xmm0,%xmm0
    75e9:	e8 00 00 00 00       	callq  75ee <try_place+0x3c7e>
    75ee:	8b 84 24 e4 00 00 00 	mov    0xe4(%rsp),%eax
    75f5:	f3 0f 10 ac 24 cc 00 	movss  0xcc(%rsp),%xmm5
    75fc:	00 00 
    75fe:	f3 0f 10 74 24 20    	movss  0x20(%rsp),%xmm6
    7604:	89 9c 24 0c 03 00 00 	mov    %ebx,0x30c(%rsp)
    760b:	f3 0f 11 ac 24 1c 03 	movss  %xmm5,0x31c(%rsp)
    7612:	00 00 
    7614:	48 83 ec 08          	sub    $0x8,%rsp
    7618:	89 84 24 e8 02 00 00 	mov    %eax,0x2e8(%rsp)
    761f:	8b 44 24 34          	mov    0x34(%rsp),%eax
    7623:	f3 0f 11 84 24 bc 00 	movss  %xmm0,0xbc(%rsp)
    762a:	00 00 
    762c:	f3 0f 11 b4 24 ec 02 	movss  %xmm6,0x2ec(%rsp)
    7633:	00 00 
    7635:	0f 28 cd             	movaps %xmm5,%xmm1
    7638:	89 84 24 f4 02 00 00 	mov    %eax,0x2f4(%rsp)
    763f:	8b 84 24 d8 00 00 00 	mov    0xd8(%rsp),%eax
    7646:	89 84 24 00 03 00 00 	mov    %eax,0x300(%rsp)
    764d:	8b 84 24 dc 00 00 00 	mov    0xdc(%rsp),%eax
    7654:	89 84 24 18 03 00 00 	mov    %eax,0x318(%rsp)
    765b:	8b 84 24 e8 00 00 00 	mov    0xe8(%rsp),%eax
    7662:	89 84 24 1c 03 00 00 	mov    %eax,0x31c(%rsp)
    7669:	8b 84 24 cc 00 00 00 	mov    0xcc(%rsp),%eax
    7670:	89 84 24 20 03 00 00 	mov    %eax,0x320(%rsp)
    7677:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    767e:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    7685:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    768c:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    7693:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    769a:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    76a1:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    76a8:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    76af:	ff b4 24 28 03 00 00 	pushq  0x328(%rsp)
    76b6:	48 8b bc 24 b0 01 00 	mov    0x1b0(%rsp),%rdi
    76bd:	00 
    76be:	f3 0f 11 ac 24 1c 01 	movss  %xmm5,0x11c(%rsp)
    76c5:	00 00 
    76c7:	e8 00 00 00 00       	callq  76cc <try_place+0x3d5c>
    76cc:	48 83 c4 50          	add    $0x50,%rsp
    76d0:	48 8b b4 24 e8 00 00 	mov    0xe8(%rsp),%rsi
    76d7:	00 
    76d8:	48 8b 7c 24 30       	mov    0x30(%rsp),%rdi
    76dd:	e8 8e ba ff ff       	callq  3170 <comp_td_costs>
    76e2:	f3 0f 10 3d 00 00 00 	movss  0x0(%rip),%xmm7        # 76ea <try_place+0x3d7a>
    76e9:	00 
    76ea:	c7 84 24 00 01 00 00 	movl   $0x1,0x100(%rsp)
    76f1:	01 00 00 00 
    76f5:	0f 28 ef             	movaps %xmm7,%xmm5
    76f8:	f3 0f 11 bc 24 bc 00 	movss  %xmm7,0xbc(%rsp)
    76ff:	00 00 
    7701:	f3 0f 5e ac 24 44 01 	divss  0x144(%rsp),%xmm5
    7708:	00 00 
    770a:	f3 0f 11 6c 24 40    	movss  %xmm5,0x40(%rsp)
    7710:	0f 28 ef             	movaps %xmm7,%xmm5
    7713:	f3 0f 5e bc 24 48 01 	divss  0x148(%rsp),%xmm7
    771a:	00 00 
    771c:	f3 0f 11 ac 24 40 01 	movss  %xmm5,0x140(%rsp)
    7723:	00 00 
    7725:	f3 0f 10 ac 24 cc 00 	movss  0xcc(%rsp),%xmm5
    772c:	00 00 
    772e:	f3 0f 11 ac 24 b8 00 	movss  %xmm5,0xb8(%rsp)
    7735:	00 00 
    7737:	f3 0f 11 7c 24 38    	movss  %xmm7,0x38(%rsp)
    773d:	e9 2b d5 ff ff       	jmpq   4c6d <try_place+0x12fd>
    7742:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 7748 <try_place+0x3dd8>
    7748:	85 c0                	test   %eax,%eax
    774a:	7e 53                	jle    779f <try_place+0x3e2f>
    774c:	83 e8 01             	sub    $0x1,%eax
    774f:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 7756 <try_place+0x3de6>
    7756:	4c 8b 2d 00 00 00 00 	mov    0x0(%rip),%r13        # 775d <try_place+0x3ded>
    775d:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    7761:	48 8d 2c c5 30 00 00 	lea    0x30(,%rax,8),%rbp
    7768:	00 
    7769:	4c 8d 62 08          	lea    0x8(%rdx),%r12
    776d:	48 01 d5             	add    %rdx,%rbp
    7770:	41 8b 04 24          	mov    (%r12),%eax
    7774:	85 c0                	test   %eax,%eax
    7776:	7e 1a                	jle    7792 <try_place+0x3e22>
    7778:	83 e8 01             	sub    $0x1,%eax
    777b:	31 f6                	xor    %esi,%esi
    777d:	48 8d 14 85 04 00 00 	lea    0x4(,%rax,4),%rdx
    7784:	00 
    7785:	49 8b 45 00          	mov    0x0(%r13),%rax
    7789:	48 8d 78 04          	lea    0x4(%rax),%rdi
    778d:	e8 00 00 00 00       	callq  7792 <try_place+0x3e22>
    7792:	49 83 c4 28          	add    $0x28,%r12
    7796:	49 83 c5 08          	add    $0x8,%r13
    779a:	49 39 ec             	cmp    %rbp,%r12
    779d:	75 d1                	jne    7770 <try_place+0x3e00>
    779f:	48 8d 84 24 50 01 00 	lea    0x150(%rsp),%rax
    77a6:	00 
    77a7:	48 8d bc 24 44 01 00 	lea    0x144(%rsp),%rdi
    77ae:	00 
    77af:	48 89 c6             	mov    %rax,%rsi
    77b2:	48 89 84 24 e8 00 00 	mov    %rax,0xe8(%rsp)
    77b9:	00 
    77ba:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
    77bf:	e8 ac b9 ff ff       	callq  3170 <comp_td_costs>
    77c4:	66 0f ef c0          	pxor   %xmm0,%xmm0
    77c8:	48 8b bc 24 68 01 00 	mov    0x168(%rsp),%rdi
    77cf:	00 
    77d0:	f3 0f 10 8c 24 50 01 	movss  0x150(%rsp),%xmm1
    77d7:	00 00 
    77d9:	f3 0f 2a 84 24 f0 00 	cvtsi2ssl 0xf0(%rsp),%xmm0
    77e0:	00 00 
    77e2:	f3 0f 5e c8          	divss  %xmm0,%xmm1
    77e6:	0f 28 c1             	movaps %xmm1,%xmm0
    77e9:	f3 0f 11 8c 24 c8 00 	movss  %xmm1,0xc8(%rsp)
    77f0:	00 00 
    77f2:	e8 00 00 00 00       	callq  77f7 <try_place+0x3e87>
    77f7:	48 8b bc 24 68 01 00 	mov    0x168(%rsp),%rdi
    77fe:	00 
    77ff:	e9 d4 fd ff ff       	jmpq   75d8 <try_place+0x3c68>
    7804:	66 0f 28 c3          	movapd %xmm3,%xmm0
    7808:	bf 00 00 00 00       	mov    $0x0,%edi
    780d:	b8 02 00 00 00       	mov    $0x2,%eax
    7812:	bd 02 00 00 00       	mov    $0x2,%ebp
    7817:	bb 01 00 00 00       	mov    $0x1,%ebx
    781c:	e8 00 00 00 00       	callq  7821 <try_place+0x3eb1>
    7821:	80 bc 24 15 01 00 00 	cmpb   $0x0,0x115(%rsp)
    7828:	00 
    7829:	0f 84 a6 eb ff ff    	je     63d5 <try_place+0x2a65>
    782f:	48 8d b4 24 5c 01 00 	lea    0x15c(%rsp),%rsi
    7836:	00 
    7837:	48 8d bc 24 58 01 00 	lea    0x158(%rsp),%rdi
    783e:	00 
    783f:	e8 2c b9 ff ff       	callq  3170 <comp_td_costs>
    7844:	66 0f ef c0          	pxor   %xmm0,%xmm0
    7848:	bf 00 00 00 00       	mov    $0x0,%edi
    784d:	b8 01 00 00 00       	mov    $0x1,%eax
    7852:	f3 0f 5a 84 24 58 01 	cvtss2sd 0x158(%rsp),%xmm0
    7859:	00 00 
    785b:	e8 00 00 00 00       	callq  7860 <try_place+0x3ef0>
    7860:	f3 0f 10 94 24 58 01 	movss  0x158(%rsp),%xmm2
    7867:	00 00 
    7869:	0f 28 c2             	movaps %xmm2,%xmm0
    786c:	f3 0f 10 74 24 10    	movss  0x10(%rsp),%xmm6
    7872:	66 0f ef c9          	pxor   %xmm1,%xmm1
    7876:	f3 0f 5c c6          	subss  %xmm6,%xmm0
    787a:	f2 0f 10 1d 00 00 00 	movsd  0x0(%rip),%xmm3        # 7882 <try_place+0x3f12>
    7881:	00 
    7882:	f3 0f 5a ce          	cvtss2sd %xmm6,%xmm1
    7886:	0f 54 05 00 00 00 00 	andps  0x0(%rip),%xmm0        # 788d <try_place+0x3f1d>
    788d:	f2 0f 59 d9          	mulsd  %xmm1,%xmm3
    7891:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    7895:	66 0f 2e c3          	ucomisd %xmm3,%xmm0
    7899:	76 19                	jbe    78b4 <try_place+0x3f44>
    789b:	66 0f ef c0          	pxor   %xmm0,%xmm0
    789f:	bf 00 00 00 00       	mov    $0x0,%edi
    78a4:	b8 02 00 00 00       	mov    $0x2,%eax
    78a9:	89 eb                	mov    %ebp,%ebx
    78ab:	f3 0f 5a c2          	cvtss2sd %xmm2,%xmm0
    78af:	e8 00 00 00 00       	callq  78b4 <try_place+0x3f44>
    78b4:	66 0f ef c0          	pxor   %xmm0,%xmm0
    78b8:	bf 00 00 00 00       	mov    $0x0,%edi
    78bd:	b8 01 00 00 00       	mov    $0x1,%eax
    78c2:	f3 0f 5a 84 24 5c 01 	cvtss2sd 0x15c(%rsp),%xmm0
    78c9:	00 00 
    78cb:	e8 00 00 00 00       	callq  78d0 <try_place+0x3f60>
    78d0:	f3 0f 10 94 24 5c 01 	movss  0x15c(%rsp),%xmm2
    78d7:	00 00 
    78d9:	0f 28 c2             	movaps %xmm2,%xmm0
    78dc:	f3 0f 10 7c 24 08    	movss  0x8(%rsp),%xmm7
    78e2:	66 0f ef c9          	pxor   %xmm1,%xmm1
    78e6:	f3 0f 5c c7          	subss  %xmm7,%xmm0
    78ea:	f2 0f 10 1d 00 00 00 	movsd  0x0(%rip),%xmm3        # 78f2 <try_place+0x3f82>
    78f1:	00 
    78f2:	f3 0f 5a cf          	cvtss2sd %xmm7,%xmm1
    78f6:	0f 54 05 00 00 00 00 	andps  0x0(%rip),%xmm0        # 78fd <try_place+0x3f8d>
    78fd:	f2 0f 59 d9          	mulsd  %xmm1,%xmm3
    7901:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    7905:	66 0f 2e c3          	ucomisd %xmm3,%xmm0
    7909:	0f 86 c6 ea ff ff    	jbe    63d5 <try_place+0x2a65>
    790f:	66 0f ef c0          	pxor   %xmm0,%xmm0
    7913:	bf 00 00 00 00       	mov    $0x0,%edi
    7918:	b8 02 00 00 00       	mov    $0x2,%eax
    791d:	83 c3 01             	add    $0x1,%ebx
    7920:	f3 0f 5a c2          	cvtss2sd %xmm2,%xmm0
    7924:	e8 00 00 00 00       	callq  7929 <try_place+0x3fb9>
    7929:	e9 a7 ea ff ff       	jmpq   63d5 <try_place+0x2a65>
    792e:	66 0f ef c0          	pxor   %xmm0,%xmm0
    7932:	bf 00 00 00 00       	mov    $0x0,%edi
    7937:	b8 02 00 00 00       	mov    $0x2,%eax
    793c:	f3 0f 5a c3          	cvtss2sd %xmm3,%xmm0
    7940:	e8 00 00 00 00       	callq  7945 <try_place+0x3fd5>
    7945:	bf 01 00 00 00       	mov    $0x1,%edi
    794a:	e8 00 00 00 00       	callq  794f <try_place+0x3fdf>
    794f:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    7953:	bf 00 00 00 00       	mov    $0x0,%edi
    7958:	b8 02 00 00 00       	mov    $0x2,%eax
    795d:	e8 00 00 00 00       	callq  7962 <try_place+0x3ff2>
    7962:	bf 01 00 00 00       	mov    $0x1,%edi
    7967:	e8 00 00 00 00       	callq  796c <try_place+0x3ffc>
    796c:	83 3d 00 00 00 00 ff 	cmpl   $0xffffffff,0x0(%rip)        # 7973 <try_place+0x4003>
    7973:	0f 8d af ea ff ff    	jge    6428 <try_place+0x2ab8>
    7979:	e8 00 00 00 00       	callq  797e <try_place+0x400e>
    797e:	85 db                	test   %ebx,%ebx
    7980:	0f 84 6f ec ff ff    	je     65f5 <try_place+0x2c85>
    7986:	89 de                	mov    %ebx,%esi
    7988:	bf 00 00 00 00       	mov    $0x0,%edi
    798d:	31 c0                	xor    %eax,%eax
    798f:	e8 00 00 00 00       	callq  7994 <try_place+0x4024>
    7994:	bf 00 00 00 00       	mov    $0x0,%edi
    7999:	e8 00 00 00 00       	callq  799e <try_place+0x402e>
    799e:	bf 01 00 00 00       	mov    $0x1,%edi
    79a3:	e8 00 00 00 00       	callq  79a8 <try_place+0x4038>
