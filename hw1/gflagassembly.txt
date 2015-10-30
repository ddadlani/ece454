
OBJ/place.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <try_place>:
       0:	55                   	push   %rbp
       1:	48 89 e5             	mov    %rsp,%rbp
       4:	41 57                	push   %r15
       6:	41 56                	push   %r14
       8:	41 55                	push   %r13
       a:	41 54                	push   %r12
       c:	53                   	push   %rbx
       d:	48 81 ec 68 02 00 00 	sub    $0x268,%rsp
      14:	48 89 bd a8 fd ff ff 	mov    %rdi,-0x258(%rbp)
      1b:	66 0f 7e c0          	movd   %xmm0,%eax
      1f:	48 89 95 90 fd ff ff 	mov    %rdx,-0x270(%rbp)
      26:	48 89 8d 88 fd ff ff 	mov    %rcx,-0x278(%rbp)
      2d:	48 89 b5 98 fd ff ff 	mov    %rsi,-0x268(%rbp)
      34:	89 85 a0 fd ff ff    	mov    %eax,-0x260(%rbp)
      3a:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 40 <try_place+0x40>
      40:	48 98                	cltq   
      42:	48 c1 e0 02          	shl    $0x2,%rax
      46:	48 89 c7             	mov    %rax,%rdi
      49:	e8 00 00 00 00       	callq  4e <try_place+0x4e>
      4e:	48 89 85 50 ff ff ff 	mov    %rax,-0xb0(%rbp)
      55:	48 c7 85 58 ff ff ff 	movq   $0x0,-0xa8(%rbp)
      5c:	00 00 00 00 
      60:	8b 45 10             	mov    0x10(%rbp),%eax
      63:	83 f8 01             	cmp    $0x1,%eax
      66:	74 13                	je     7b <try_place+0x7b>
      68:	8b 45 10             	mov    0x10(%rbp),%eax
      6b:	83 f8 02             	cmp    $0x2,%eax
      6e:	74 0b                	je     7b <try_place+0x7b>
      70:	8b 45 44             	mov    0x44(%rbp),%eax
      73:	85 c0                	test   %eax,%eax
      75:	0f 84 e9 00 00 00    	je     164 <try_place+0x164>
      7b:	48 83 ec 08          	sub    $0x8,%rsp
      7f:	48 8d 8d b8 fd ff ff 	lea    -0x248(%rbp),%rcx
      86:	48 8d 95 b0 fd ff ff 	lea    -0x250(%rbp),%rdx
      8d:	48 8b b5 98 fd ff ff 	mov    -0x268(%rbp),%rsi
      94:	44 8b 85 a0 fd ff ff 	mov    -0x260(%rbp),%r8d
      9b:	48 8b bd a8 fd ff ff 	mov    -0x258(%rbp),%rdi
      a2:	48 8b 85 90 fd ff ff 	mov    -0x270(%rbp),%rax
      a9:	ff 70 10             	pushq  0x10(%rax)
      ac:	ff 70 08             	pushq  0x8(%rax)
      af:	ff 30                	pushq  (%rax)
      b1:	ff b5 f8 00 00 00    	pushq  0xf8(%rbp)
      b7:	ff b5 f0 00 00 00    	pushq  0xf0(%rbp)
      bd:	ff b5 e8 00 00 00    	pushq  0xe8(%rbp)
      c3:	ff b5 e0 00 00 00    	pushq  0xe0(%rbp)
      c9:	ff b5 d8 00 00 00    	pushq  0xd8(%rbp)
      cf:	ff b5 d0 00 00 00    	pushq  0xd0(%rbp)
      d5:	ff b5 c8 00 00 00    	pushq  0xc8(%rbp)
      db:	ff b5 c0 00 00 00    	pushq  0xc0(%rbp)
      e1:	ff b5 b8 00 00 00    	pushq  0xb8(%rbp)
      e7:	ff b5 b0 00 00 00    	pushq  0xb0(%rbp)
      ed:	ff b5 a8 00 00 00    	pushq  0xa8(%rbp)
      f3:	ff b5 a0 00 00 00    	pushq  0xa0(%rbp)
      f9:	48 83 ec 30          	sub    $0x30,%rsp
      fd:	48 89 e0             	mov    %rsp,%rax
     100:	4c 8b 4d 70          	mov    0x70(%rbp),%r9
     104:	4c 89 08             	mov    %r9,(%rax)
     107:	4c 8b 4d 78          	mov    0x78(%rbp),%r9
     10b:	4c 89 48 08          	mov    %r9,0x8(%rax)
     10f:	4c 8b 8d 80 00 00 00 	mov    0x80(%rbp),%r9
     116:	4c 89 48 10          	mov    %r9,0x10(%rax)
     11a:	4c 8b 8d 88 00 00 00 	mov    0x88(%rbp),%r9
     121:	4c 89 48 18          	mov    %r9,0x18(%rax)
     125:	4c 8b 8d 90 00 00 00 	mov    0x90(%rbp),%r9
     12c:	4c 89 48 20          	mov    %r9,0x20(%rax)
     130:	44 8b 8d 98 00 00 00 	mov    0x98(%rbp),%r9d
     137:	44 89 48 28          	mov    %r9d,0x28(%rax)
     13b:	44 89 85 80 fd ff ff 	mov    %r8d,-0x280(%rbp)
     142:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
     149:	ff 
     14a:	e8 00 00 00 00       	callq  14f <try_place+0x14f>
     14f:	48 81 c4 b0 00 00 00 	add    $0xb0,%rsp
     156:	48 8b 85 b0 fd ff ff 	mov    -0x250(%rbp),%rax
     15d:	48 89 85 58 ff ff ff 	mov    %rax,-0xa8(%rbp)
     164:	8b 45 24             	mov    0x24(%rbp),%eax
     167:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%rbp)
     16d:	8b 45 28             	mov    0x28(%rbp),%eax
     170:	85 c0                	test   %eax,%eax
     172:	75 0c                	jne    180 <try_place+0x180>
     174:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%rbp)
     17b:	00 00 00 
     17e:	eb 0a                	jmp    18a <try_place+0x18a>
     180:	c7 85 7c ff ff ff 01 	movl   $0x1,-0x84(%rbp)
     187:	00 00 00 
     18a:	8b 95 4c ff ff ff    	mov    -0xb4(%rbp),%edx
     190:	48 83 ec 30          	sub    $0x30,%rsp
     194:	48 89 e0             	mov    %rsp,%rax
     197:	48 8b 4d 70          	mov    0x70(%rbp),%rcx
     19b:	48 89 08             	mov    %rcx,(%rax)
     19e:	48 8b 4d 78          	mov    0x78(%rbp),%rcx
     1a2:	48 89 48 08          	mov    %rcx,0x8(%rax)
     1a6:	48 8b 8d 80 00 00 00 	mov    0x80(%rbp),%rcx
     1ad:	48 89 48 10          	mov    %rcx,0x10(%rax)
     1b1:	48 8b 8d 88 00 00 00 	mov    0x88(%rbp),%rcx
     1b8:	48 89 48 18          	mov    %rcx,0x18(%rax)
     1bc:	48 8b 8d 90 00 00 00 	mov    0x90(%rbp),%rcx
     1c3:	48 89 48 20          	mov    %rcx,0x20(%rax)
     1c7:	8b 8d 98 00 00 00    	mov    0x98(%rbp),%ecx
     1cd:	89 48 28             	mov    %ecx,0x28(%rax)
     1d0:	89 d7                	mov    %edx,%edi
     1d2:	e8 00 00 00 00       	callq  1d7 <try_place+0x1d7>
     1d7:	48 83 c4 30          	add    $0x30,%rsp
     1db:	8b 75 20             	mov    0x20(%rbp),%esi
     1de:	8b 45 3c             	mov    0x3c(%rbp),%eax
     1e1:	8b 55 1c             	mov    0x1c(%rbp),%edx
     1e4:	89 d7                	mov    %edx,%edi
     1e6:	48 83 ec 08          	sub    $0x8,%rsp
     1ea:	48 8d 8d f8 fe ff ff 	lea    -0x108(%rbp),%rcx
     1f1:	48 8d 95 00 ff ff ff 	lea    -0x100(%rbp),%rdx
     1f8:	ff 75 50             	pushq  0x50(%rbp)
     1fb:	ff 75 48             	pushq  0x48(%rbp)
     1fe:	ff 75 40             	pushq  0x40(%rbp)
     201:	ff 75 38             	pushq  0x38(%rbp)
     204:	ff 75 30             	pushq  0x30(%rbp)
     207:	ff 75 28             	pushq  0x28(%rbp)
     20a:	ff 75 20             	pushq  0x20(%rbp)
     20d:	ff 75 18             	pushq  0x18(%rbp)
     210:	ff 75 10             	pushq  0x10(%rbp)
     213:	89 b5 80 fd ff ff    	mov    %esi,-0x280(%rbp)
     219:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
     220:	ff 
     221:	89 c6                	mov    %eax,%esi
     223:	e8 fb 5c 00 00       	callq  5f23 <alloc_and_load_placement_structs>
     228:	48 83 c4 50          	add    $0x50,%rsp
     22c:	48 8b 55 30          	mov    0x30(%rbp),%rdx
     230:	8b 45 28             	mov    0x28(%rbp),%eax
     233:	48 89 d6             	mov    %rdx,%rsi
     236:	89 c7                	mov    %eax,%edi
     238:	e8 68 7f 00 00       	callq  81a5 <initial_placement>
     23d:	66 0f ef c0          	pxor   %xmm0,%xmm0
     241:	f3 0f 2a 85 4c ff ff 	cvtsi2ssl -0xb4(%rbp),%xmm0
     248:	ff 
     249:	e8 00 00 00 00       	callq  24e <try_place+0x24e>
     24e:	8b 45 10             	mov    0x10(%rbp),%eax
     251:	83 f8 01             	cmp    $0x1,%eax
     254:	74 0c                	je     262 <try_place+0x262>
     256:	8b 45 10             	mov    0x10(%rbp),%eax
     259:	83 f8 02             	cmp    $0x2,%eax
     25c:	0f 85 55 02 00 00    	jne    4b7 <try_place+0x4b7>
     262:	8b 45 3c             	mov    0x3c(%rbp),%eax
     265:	8b 55 1c             	mov    0x1c(%rbp),%edx
     268:	89 d1                	mov    %edx,%ecx
     26a:	89 c2                	mov    %eax,%edx
     26c:	89 ce                	mov    %ecx,%esi
     26e:	bf 00 00 00 00       	mov    $0x0,%edi
     273:	e8 18 4f 00 00       	callq  5190 <comp_bb_cost>
     278:	66 0f 7e c0          	movd   %xmm0,%eax
     27c:	89 85 14 ff ff ff    	mov    %eax,-0xec(%rbp)
     282:	8b 45 4c             	mov    0x4c(%rbp),%eax
     285:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%rbp)
     28b:	e8 4d 1a 00 00       	callq  1cdd <compute_net_pin_index_values>
     290:	e8 d5 19 00 00       	callq  1c6a <count_connections>
     295:	89 85 78 ff ff ff    	mov    %eax,-0x88(%rbp)
     29b:	8b 85 78 ff ff ff    	mov    -0x88(%rbp),%eax
     2a1:	89 c6                	mov    %eax,%esi
     2a3:	bf 00 00 00 00       	mov    $0x0,%edi
     2a8:	b8 00 00 00 00       	mov    $0x0,%eax
     2ad:	e8 00 00 00 00       	callq  2b2 <try_place+0x2b2>
     2b2:	8b 45 10             	mov    0x10(%rbp),%eax
     2b5:	83 f8 01             	cmp    $0x1,%eax
     2b8:	0f 85 f0 00 00 00    	jne    3ae <try_place+0x3ae>
     2be:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%rbp)
     2c5:	00 00 00 
     2c8:	eb 78                	jmp    342 <try_place+0x342>
     2ca:	c7 85 70 ff ff ff 01 	movl   $0x1,-0x90(%rbp)
     2d1:	00 00 00 
     2d4:	eb 39                	jmp    30f <try_place+0x30f>
     2d6:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2dd <try_place+0x2dd>
     2dd:	8b 95 74 ff ff ff    	mov    -0x8c(%rbp),%edx
     2e3:	48 63 d2             	movslq %edx,%rdx
     2e6:	48 c1 e2 03          	shl    $0x3,%rdx
     2ea:	48 01 d0             	add    %rdx,%rax
     2ed:	48 8b 00             	mov    (%rax),%rax
     2f0:	8b 95 70 ff ff ff    	mov    -0x90(%rbp),%edx
     2f6:	48 63 d2             	movslq %edx,%rdx
     2f9:	48 c1 e2 02          	shl    $0x2,%rdx
     2fd:	48 01 c2             	add    %rax,%rdx
     300:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 306 <try_place+0x306>
     306:	89 02                	mov    %eax,(%rdx)
     308:	83 85 70 ff ff ff 01 	addl   $0x1,-0x90(%rbp)
     30f:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 316 <try_place+0x316>
     316:	8b 85 74 ff ff ff    	mov    -0x8c(%rbp),%eax
     31c:	48 63 d0             	movslq %eax,%rdx
     31f:	48 89 d0             	mov    %rdx,%rax
     322:	48 c1 e0 02          	shl    $0x2,%rax
     326:	48 01 d0             	add    %rdx,%rax
     329:	48 c1 e0 03          	shl    $0x3,%rax
     32d:	48 01 c8             	add    %rcx,%rax
     330:	8b 40 08             	mov    0x8(%rax),%eax
     333:	3b 85 70 ff ff ff    	cmp    -0x90(%rbp),%eax
     339:	7d 9b                	jge    2d6 <try_place+0x2d6>
     33b:	83 85 74 ff ff ff 01 	addl   $0x1,-0x8c(%rbp)
     342:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 348 <try_place+0x348>
     348:	39 85 74 ff ff ff    	cmp    %eax,-0x8c(%rbp)
     34e:	0f 8c 76 ff ff ff    	jl     2ca <try_place+0x2ca>
     354:	48 8d 95 0c ff ff ff 	lea    -0xf4(%rbp),%rdx
     35b:	48 8d 85 18 ff ff ff 	lea    -0xe8(%rbp),%rax
     362:	48 89 d6             	mov    %rdx,%rsi
     365:	48 89 c7             	mov    %rax,%rdi
     368:	e8 55 4c 00 00       	callq  4fc2 <comp_td_costs>
     36d:	f3 0f 10 8d 0c ff ff 	movss  -0xf4(%rbp),%xmm1
     374:	ff 
     375:	66 0f ef c0          	pxor   %xmm0,%xmm0
     379:	f3 0f 2a 85 78 ff ff 	cvtsi2ssl -0x88(%rbp),%xmm0
     380:	ff 
     381:	f3 0f 5e c8          	divss  %xmm0,%xmm1
     385:	66 0f 7e c8          	movd   %xmm1,%eax
     389:	89 45 b4             	mov    %eax,-0x4c(%rbp)
     38c:	48 8b 85 b0 fd ff ff 	mov    -0x250(%rbp),%rax
     393:	8b 55 b4             	mov    -0x4c(%rbp),%edx
     396:	89 95 80 fd ff ff    	mov    %edx,-0x280(%rbp)
     39c:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
     3a3:	ff 
     3a4:	48 89 c7             	mov    %rax,%rdi
     3a7:	e8 00 00 00 00       	callq  3ac <try_place+0x3ac>
     3ac:	eb 09                	jmp    3b7 <try_place+0x3b7>
     3ae:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3b4 <try_place+0x3b4>
     3b4:	89 45 b4             	mov    %eax,-0x4c(%rbp)
     3b7:	8b 45 10             	mov    0x10(%rbp),%eax
     3ba:	83 f8 02             	cmp    $0x2,%eax
     3bd:	75 0e                	jne    3cd <try_place+0x3cd>
     3bf:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3c6 <try_place+0x3c6>
     3c6:	48 89 85 b0 fd ff ff 	mov    %rax,-0x250(%rbp)
     3cd:	48 8b 85 b0 fd ff ff 	mov    -0x250(%rbp),%rax
     3d4:	48 89 c7             	mov    %rax,%rdi
     3d7:	e8 00 00 00 00       	callq  3dc <try_place+0x3dc>
     3dc:	48 8b 85 b8 fd ff ff 	mov    -0x248(%rbp),%rax
     3e3:	66 0f ef c0          	pxor   %xmm0,%xmm0
     3e7:	48 89 c7             	mov    %rax,%rdi
     3ea:	e8 00 00 00 00       	callq  3ef <try_place+0x3ef>
     3ef:	66 0f 7e c0          	movd   %xmm0,%eax
     3f3:	89 45 b8             	mov    %eax,-0x48(%rbp)
     3f6:	48 8b 85 b8 fd ff ff 	mov    -0x248(%rbp),%rax
     3fd:	48 83 ec 08          	sub    $0x8,%rsp
     401:	8b 8d 60 ff ff ff    	mov    -0xa0(%rbp),%ecx
     407:	8b 55 b8             	mov    -0x48(%rbp),%edx
     40a:	ff 75 50             	pushq  0x50(%rbp)
     40d:	ff 75 48             	pushq  0x48(%rbp)
     410:	ff 75 40             	pushq  0x40(%rbp)
     413:	ff 75 38             	pushq  0x38(%rbp)
     416:	ff 75 30             	pushq  0x30(%rbp)
     419:	ff 75 28             	pushq  0x28(%rbp)
     41c:	ff 75 20             	pushq  0x20(%rbp)
     41f:	ff 75 18             	pushq  0x18(%rbp)
     422:	ff 75 10             	pushq  0x10(%rbp)
     425:	89 8d 80 fd ff ff    	mov    %ecx,-0x280(%rbp)
     42b:	f3 0f 10 8d 80 fd ff 	movss  -0x280(%rbp),%xmm1
     432:	ff 
     433:	89 95 80 fd ff ff    	mov    %edx,-0x280(%rbp)
     439:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
     440:	ff 
     441:	48 89 c7             	mov    %rax,%rdi
     444:	e8 00 00 00 00       	callq  449 <try_place+0x449>
     449:	48 83 c4 50          	add    $0x50,%rsp
     44d:	c7 85 6c ff ff ff 01 	movl   $0x1,-0x94(%rbp)
     454:	00 00 00 
     457:	48 8d 95 0c ff ff ff 	lea    -0xf4(%rbp),%rdx
     45e:	48 8d 85 18 ff ff ff 	lea    -0xe8(%rbp),%rax
     465:	48 89 d6             	mov    %rdx,%rsi
     468:	48 89 c7             	mov    %rax,%rdi
     46b:	e8 52 4b 00 00       	callq  4fc2 <comp_td_costs>
     470:	f3 0f 10 8d 18 ff ff 	movss  -0xe8(%rbp),%xmm1
     477:	ff 
     478:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 480 <try_place+0x480>
     47f:	00 
     480:	f3 0f 5e c1          	divss  %xmm1,%xmm0
     484:	66 0f 7e c0          	movd   %xmm0,%eax
     488:	89 45 ac             	mov    %eax,-0x54(%rbp)
     48b:	f3 0f 10 8d 14 ff ff 	movss  -0xec(%rbp),%xmm1
     492:	ff 
     493:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 49b <try_place+0x49b>
     49a:	00 
     49b:	f3 0f 5e c1          	divss  %xmm1,%xmm0
     49f:	66 0f 7e c0          	movd   %xmm0,%eax
     4a3:	89 45 b0             	mov    %eax,-0x50(%rbp)
     4a6:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 4ac <try_place+0x4ac>
     4ac:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%rbp)
     4b2:	e9 88 00 00 00       	jmpq   53f <try_place+0x53f>
     4b7:	8b 45 3c             	mov    0x3c(%rbp),%eax
     4ba:	8b 55 1c             	mov    0x1c(%rbp),%edx
     4bd:	89 d1                	mov    %edx,%ecx
     4bf:	89 c2                	mov    %eax,%edx
     4c1:	89 ce                	mov    %ecx,%esi
     4c3:	bf 00 00 00 00       	mov    $0x0,%edi
     4c8:	e8 c3 4c 00 00       	callq  5190 <comp_bb_cost>
     4cd:	66 0f 7e c0          	movd   %xmm0,%eax
     4d1:	89 85 14 ff ff ff    	mov    %eax,-0xec(%rbp)
     4d7:	8b 85 14 ff ff ff    	mov    -0xec(%rbp),%eax
     4dd:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%rbp)
     4e3:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 4e9 <try_place+0x4e9>
     4e9:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%rbp)
     4ef:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 4f5 <try_place+0x4f5>
     4f5:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%rbp)
     4fb:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 501 <try_place+0x501>
     501:	89 45 b4             	mov    %eax,-0x4c(%rbp)
     504:	c7 85 6c ff ff ff 00 	movl   $0x0,-0x94(%rbp)
     50b:	00 00 00 
     50e:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%rbp)
     515:	00 00 00 
     518:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 51e <try_place+0x51e>
     51e:	89 45 b8             	mov    %eax,-0x48(%rbp)
     521:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 527 <try_place+0x527>
     527:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%rbp)
     52d:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 533 <try_place+0x533>
     533:	89 45 ac             	mov    %eax,-0x54(%rbp)
     536:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 53c <try_place+0x53c>
     53c:	89 45 b0             	mov    %eax,-0x50(%rbp)
     53f:	f3 0f 10 45 5c       	movss  0x5c(%rbp),%xmm0
     544:	f3 0f 5a e8          	cvtss2sd %xmm0,%xmm5
     548:	f2 0f 11 ad 80 fd ff 	movsd  %xmm5,-0x280(%rbp)
     54f:	ff 
     550:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 556 <try_place+0x556>
     556:	66 0f ef c0          	pxor   %xmm0,%xmm0
     55a:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
     55e:	48 b8 da 1b 7c 61 32 	movabs $0x3ff55532617c1bda,%rax
     565:	55 f5 3f 
     568:	48 89 85 78 fd ff ff 	mov    %rax,-0x288(%rbp)
     56f:	f2 0f 10 8d 78 fd ff 	movsd  -0x288(%rbp),%xmm1
     576:	ff 
     577:	e8 00 00 00 00       	callq  57c <try_place+0x57c>
     57c:	f2 0f 59 85 80 fd ff 	mulsd  -0x280(%rbp),%xmm0
     583:	ff 
     584:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
     588:	89 45 c0             	mov    %eax,-0x40(%rbp)
     58b:	8b 45 48             	mov    0x48(%rbp),%eax
     58e:	85 c0                	test   %eax,%eax
     590:	74 34                	je     5c6 <try_place+0x5c6>
     592:	66 0f ef c0          	pxor   %xmm0,%xmm0
     596:	f3 0f 2a 45 c0       	cvtsi2ssl -0x40(%rbp),%xmm0
     59b:	8b 45 48             	mov    0x48(%rbp),%eax
     59e:	66 0f ef c9          	pxor   %xmm1,%xmm1
     5a2:	f3 0f 2a c8          	cvtsi2ss %eax,%xmm1
     5a6:	f3 0f 5e c1          	divss  %xmm1,%xmm0
     5aa:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     5ae:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 5b6 <try_place+0x5b6>
     5b5:	00 
     5b6:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
     5ba:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
     5be:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%rbp)
     5c4:	eb 0c                	jmp    5d2 <try_place+0x5d2>
     5c6:	8b 45 c0             	mov    -0x40(%rbp),%eax
     5c9:	83 c0 01             	add    $0x1,%eax
     5cc:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%rbp)
     5d2:	83 7d c0 00          	cmpl   $0x0,-0x40(%rbp)
     5d6:	7f 07                	jg     5df <try_place+0x5df>
     5d8:	c7 45 c0 01 00 00 00 	movl   $0x1,-0x40(%rbp)
     5df:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 5e5 <try_place+0x5e5>
     5e5:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5eb <try_place+0x5eb>
     5eb:	39 c2                	cmp    %eax,%edx
     5ed:	7e 14                	jle    603 <try_place+0x603>
     5ef:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5f5 <try_place+0x5f5>
     5f5:	66 0f ef f6          	pxor   %xmm6,%xmm6
     5f9:	f3 0f 2a f0          	cvtsi2ss %eax,%xmm6
     5fd:	66 0f 7e f0          	movd   %xmm6,%eax
     601:	eb 12                	jmp    615 <try_place+0x615>
     603:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 609 <try_place+0x609>
     609:	66 0f ef ff          	pxor   %xmm7,%xmm7
     60d:	f3 0f 2a f8          	cvtsi2ss %eax,%xmm7
     611:	66 0f 7e f8          	movd   %xmm7,%eax
     615:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%rbp)
     61b:	8b 85 20 ff ff ff    	mov    -0xe0(%rbp),%eax
     621:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%rbp)
     627:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 62d <try_place+0x62d>
     62d:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%rbp)
     633:	f3 0f 10 85 48 ff ff 	movss  -0xb8(%rbp),%xmm0
     63a:	ff 
     63b:	f3 0f 5c 85 44 ff ff 	subss  -0xbc(%rbp),%xmm0
     642:	ff 
     643:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 64b <try_place+0x64b>
     64a:	00 
     64b:	f3 0f 5e c8          	divss  %xmm0,%xmm1
     64f:	66 0f 7e c8          	movd   %xmm1,%eax
     653:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%rbp)
     659:	8b 5d 14             	mov    0x14(%rbp),%ebx
     65c:	8b 45 10             	mov    0x10(%rbp),%eax
     65f:	8b 8d 20 ff ff ff    	mov    -0xe0(%rbp),%ecx
     665:	44 8b 45 3c          	mov    0x3c(%rbp),%r8d
     669:	4c 8b 9d f8 fe ff ff 	mov    -0x108(%rbp),%r11
     670:	4c 8b 95 00 ff ff ff 	mov    -0x100(%rbp),%r10
     677:	8b 55 1c             	mov    0x1c(%rbp),%edx
     67a:	41 89 d6             	mov    %edx,%r14d
     67d:	44 8b 6d ac          	mov    -0x54(%rbp),%r13d
     681:	44 8b 65 b0          	mov    -0x50(%rbp),%r12d
     685:	48 8d 95 18 ff ff ff 	lea    -0xe8(%rbp),%rdx
     68c:	48 8d b5 14 ff ff ff 	lea    -0xec(%rbp),%rsi
     693:	48 8d bd 1c ff ff ff 	lea    -0xe4(%rbp),%rdi
     69a:	4c 8d 8d 0c ff ff ff 	lea    -0xf4(%rbp),%r9
     6a1:	41 51                	push   %r9
     6a3:	50                   	push   %rax
     6a4:	8b 45 c0             	mov    -0x40(%rbp),%eax
     6a7:	50                   	push   %rax
     6a8:	48 83 ec 18          	sub    $0x18,%rsp
     6ac:	48 89 e0             	mov    %rsp,%rax
     6af:	4c 8b 4d 58          	mov    0x58(%rbp),%r9
     6b3:	4c 89 08             	mov    %r9,(%rax)
     6b6:	4c 8b 4d 60          	mov    0x60(%rbp),%r9
     6ba:	4c 89 48 08          	mov    %r9,0x8(%rax)
     6be:	44 8b 4d 68          	mov    0x68(%rbp),%r9d
     6c2:	44 89 48 10          	mov    %r9d,0x10(%rax)
     6c6:	8b 85 7c ff ff ff    	mov    -0x84(%rbp),%eax
     6cc:	50                   	push   %rax
     6cd:	41 50                	push   %r8
     6cf:	44 89 ad 80 fd ff ff 	mov    %r13d,-0x280(%rbp)
     6d6:	f3 0f 10 9d 80 fd ff 	movss  -0x280(%rbp),%xmm3
     6dd:	ff 
     6de:	44 89 a5 80 fd ff ff 	mov    %r12d,-0x280(%rbp)
     6e5:	f3 0f 10 95 80 fd ff 	movss  -0x280(%rbp),%xmm2
     6ec:	ff 
     6ed:	89 9d 80 fd ff ff    	mov    %ebx,-0x280(%rbp)
     6f3:	f3 0f 10 8d 80 fd ff 	movss  -0x280(%rbp),%xmm1
     6fa:	ff 
     6fb:	89 8d 80 fd ff ff    	mov    %ecx,-0x280(%rbp)
     701:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
     708:	ff 
     709:	4d 89 d9             	mov    %r11,%r9
     70c:	4d 89 d0             	mov    %r10,%r8
     70f:	44 89 f1             	mov    %r14d,%ecx
     712:	e8 2a 1a 00 00       	callq  2141 <starting_t>
     717:	48 83 c4 40          	add    $0x40,%rsp
     71b:	66 0f 7e c0          	movd   %xmm0,%eax
     71f:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%rbp)
     725:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%rbp)
     72c:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%rbp)
     733:	f3 0f 10 85 0c ff ff 	movss  -0xf4(%rbp),%xmm0
     73a:	ff 
     73b:	f3 0f 5a d8          	cvtss2sd %xmm0,%xmm3
     73f:	f3 0f 10 85 18 ff ff 	movss  -0xe8(%rbp),%xmm0
     746:	ff 
     747:	f3 0f 5a d0          	cvtss2sd %xmm0,%xmm2
     74b:	f3 0f 10 85 14 ff ff 	movss  -0xec(%rbp),%xmm0
     752:	ff 
     753:	f3 0f 5a c8          	cvtss2sd %xmm0,%xmm1
     757:	f3 0f 10 85 1c ff ff 	movss  -0xe4(%rbp),%xmm0
     75e:	ff 
     75f:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     763:	bf 00 00 00 00       	mov    $0x0,%edi
     768:	b8 04 00 00 00       	mov    $0x4,%eax
     76d:	e8 00 00 00 00       	callq  772 <try_place+0x772>
     772:	68 00 00 00 00       	pushq  $0x0
     777:	68 00 00 00 00       	pushq  $0x0
     77c:	68 00 00 00 00       	pushq  $0x0
     781:	68 00 00 00 00       	pushq  $0x0
     786:	68 00 00 00 00       	pushq  $0x0
     78b:	68 00 00 00 00       	pushq  $0x0
     790:	68 00 00 00 00       	pushq  $0x0
     795:	68 00 00 00 00       	pushq  $0x0
     79a:	41 b9 00 00 00 00    	mov    $0x0,%r9d
     7a0:	41 b8 00 00 00 00    	mov    $0x0,%r8d
     7a6:	b9 00 00 00 00       	mov    $0x0,%ecx
     7ab:	ba 00 00 00 00       	mov    $0x0,%edx
     7b0:	be 00 00 00 00       	mov    $0x0,%esi
     7b5:	bf 00 00 00 00       	mov    $0x0,%edi
     7ba:	b8 00 00 00 00       	mov    $0x0,%eax
     7bf:	e8 00 00 00 00       	callq  7c4 <try_place+0x7c4>
     7c4:	48 83 c4 40          	add    $0x40,%rsp
     7c8:	68 00 00 00 00       	pushq  $0x0
     7cd:	68 00 00 00 00       	pushq  $0x0
     7d2:	68 00 00 00 00       	pushq  $0x0
     7d7:	68 00 00 00 00       	pushq  $0x0
     7dc:	68 00 00 00 00       	pushq  $0x0
     7e1:	68 00 00 00 00       	pushq  $0x0
     7e6:	68 00 00 00 00       	pushq  $0x0
     7eb:	68 00 00 00 00       	pushq  $0x0
     7f0:	41 b9 00 00 00 00    	mov    $0x0,%r9d
     7f6:	41 b8 00 00 00 00    	mov    $0x0,%r8d
     7fc:	b9 00 00 00 00       	mov    $0x0,%ecx
     801:	ba 00 00 00 00       	mov    $0x0,%edx
     806:	be 00 00 00 00       	mov    $0x0,%esi
     80b:	bf 00 00 00 00       	mov    $0x0,%edi
     810:	b8 00 00 00 00       	mov    $0x0,%eax
     815:	e8 00 00 00 00       	callq  81a <try_place+0x81a>
     81a:	48 83 c4 40          	add    $0x40,%rsp
     81e:	f3 0f 5a 65 b8       	cvtss2sd -0x48(%rbp),%xmm4
     823:	f3 0f 10 85 0c ff ff 	movss  -0xf4(%rbp),%xmm0
     82a:	ff 
     82b:	f3 0f 5a d8          	cvtss2sd %xmm0,%xmm3
     82f:	f3 0f 10 85 18 ff ff 	movss  -0xe8(%rbp),%xmm0
     836:	ff 
     837:	f3 0f 5a d0          	cvtss2sd %xmm0,%xmm2
     83b:	f3 0f 10 85 14 ff ff 	movss  -0xec(%rbp),%xmm0
     842:	ff 
     843:	f3 0f 5a c8          	cvtss2sd %xmm0,%xmm1
     847:	f3 0f 10 85 1c ff ff 	movss  -0xe4(%rbp),%xmm0
     84e:	ff 
     84f:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     853:	8b 95 4c ff ff ff    	mov    -0xb4(%rbp),%edx
     859:	48 8d 85 c0 fd ff ff 	lea    -0x240(%rbp),%rax
     860:	be 00 00 00 00       	mov    $0x0,%esi
     865:	48 89 c7             	mov    %rax,%rdi
     868:	b8 05 00 00 00       	mov    $0x5,%eax
     86d:	e8 00 00 00 00       	callq  872 <try_place+0x872>
     872:	48 8d 85 c0 fd ff ff 	lea    -0x240(%rbp),%rax
     879:	b9 00 00 00 00       	mov    $0x0,%ecx
     87e:	ba 01 00 00 00       	mov    $0x1,%edx
     883:	48 89 c6             	mov    %rax,%rsi
     886:	bf 01 00 00 00       	mov    $0x1,%edi
     88b:	e8 00 00 00 00       	callq  890 <try_place+0x890>
     890:	e9 89 09 00 00       	jmpq   121e <try_place+0x121e>
     895:	8b 45 10             	mov    0x10(%rbp),%eax
     898:	83 f8 01             	cmp    $0x1,%eax
     89b:	74 08                	je     8a5 <try_place+0x8a5>
     89d:	8b 45 10             	mov    0x10(%rbp),%eax
     8a0:	83 f8 02             	cmp    $0x2,%eax
     8a3:	75 0c                	jne    8b1 <try_place+0x8b1>
     8a5:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8ab <try_place+0x8ab>
     8ab:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%rbp)
     8b1:	b8 00 00 00 00       	mov    $0x0,%eax
     8b6:	48 89 45 a0          	mov    %rax,-0x60(%rbp)
     8ba:	b8 00 00 00 00       	mov    $0x0,%eax
     8bf:	48 89 45 98          	mov    %rax,-0x68(%rbp)
     8c3:	b8 00 00 00 00       	mov    $0x0,%eax
     8c8:	48 89 45 88          	mov    %rax,-0x78(%rbp)
     8cc:	b8 00 00 00 00       	mov    $0x0,%eax
     8d1:	48 89 45 90          	mov    %rax,-0x70(%rbp)
     8d5:	b8 00 00 00 00       	mov    $0x0,%eax
     8da:	48 89 45 80          	mov    %rax,-0x80(%rbp)
     8de:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%rbp)
     8e5:	8b 45 10             	mov    0x10(%rbp),%eax
     8e8:	83 f8 01             	cmp    $0x1,%eax
     8eb:	74 0c                	je     8f9 <try_place+0x8f9>
     8ed:	8b 45 10             	mov    0x10(%rbp),%eax
     8f0:	83 f8 02             	cmp    $0x2,%eax
     8f3:	0f 85 3d 01 00 00    	jne    a36 <try_place+0xa36>
     8f9:	8b 45 40             	mov    0x40(%rbp),%eax
     8fc:	3b 85 6c ff ff ff    	cmp    -0x94(%rbp),%eax
     902:	7e 0b                	jle    90f <try_place+0x90f>
     904:	8b 45 48             	mov    0x48(%rbp),%eax
     907:	85 c0                	test   %eax,%eax
     909:	0f 84 ea 00 00 00    	je     9f9 <try_place+0x9f9>
     90f:	f3 0f 10 8d 0c ff ff 	movss  -0xf4(%rbp),%xmm1
     916:	ff 
     917:	66 0f ef c0          	pxor   %xmm0,%xmm0
     91b:	f3 0f 2a 85 78 ff ff 	cvtsi2ssl -0x88(%rbp),%xmm0
     922:	ff 
     923:	f3 0f 5e c8          	divss  %xmm0,%xmm1
     927:	66 0f 7e c8          	movd   %xmm1,%eax
     92b:	89 45 b4             	mov    %eax,-0x4c(%rbp)
     92e:	8b 45 10             	mov    0x10(%rbp),%eax
     931:	83 f8 01             	cmp    $0x1,%eax
     934:	75 20                	jne    956 <try_place+0x956>
     936:	48 8b 85 b0 fd ff ff 	mov    -0x250(%rbp),%rax
     93d:	8b 55 b4             	mov    -0x4c(%rbp),%edx
     940:	89 95 80 fd ff ff    	mov    %edx,-0x280(%rbp)
     946:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
     94d:	ff 
     94e:	48 89 c7             	mov    %rax,%rdi
     951:	e8 00 00 00 00       	callq  956 <try_place+0x956>
     956:	48 8b 85 b0 fd ff ff 	mov    -0x250(%rbp),%rax
     95d:	48 89 c7             	mov    %rax,%rdi
     960:	e8 00 00 00 00       	callq  965 <try_place+0x965>
     965:	48 8b 85 b8 fd ff ff 	mov    -0x248(%rbp),%rax
     96c:	66 0f ef c0          	pxor   %xmm0,%xmm0
     970:	48 89 c7             	mov    %rax,%rdi
     973:	e8 00 00 00 00       	callq  978 <try_place+0x978>
     978:	66 0f 7e c0          	movd   %xmm0,%eax
     97c:	89 45 b8             	mov    %eax,-0x48(%rbp)
     97f:	48 8b 85 b8 fd ff ff 	mov    -0x248(%rbp),%rax
     986:	48 83 ec 08          	sub    $0x8,%rsp
     98a:	8b 8d 60 ff ff ff    	mov    -0xa0(%rbp),%ecx
     990:	8b 55 b8             	mov    -0x48(%rbp),%edx
     993:	ff 75 50             	pushq  0x50(%rbp)
     996:	ff 75 48             	pushq  0x48(%rbp)
     999:	ff 75 40             	pushq  0x40(%rbp)
     99c:	ff 75 38             	pushq  0x38(%rbp)
     99f:	ff 75 30             	pushq  0x30(%rbp)
     9a2:	ff 75 28             	pushq  0x28(%rbp)
     9a5:	ff 75 20             	pushq  0x20(%rbp)
     9a8:	ff 75 18             	pushq  0x18(%rbp)
     9ab:	ff 75 10             	pushq  0x10(%rbp)
     9ae:	89 8d 80 fd ff ff    	mov    %ecx,-0x280(%rbp)
     9b4:	f3 0f 10 8d 80 fd ff 	movss  -0x280(%rbp),%xmm1
     9bb:	ff 
     9bc:	89 95 80 fd ff ff    	mov    %edx,-0x280(%rbp)
     9c2:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
     9c9:	ff 
     9ca:	48 89 c7             	mov    %rax,%rdi
     9cd:	e8 00 00 00 00       	callq  9d2 <try_place+0x9d2>
     9d2:	48 83 c4 50          	add    $0x50,%rsp
     9d6:	48 8d 95 0c ff ff ff 	lea    -0xf4(%rbp),%rdx
     9dd:	48 8d 85 18 ff ff ff 	lea    -0xe8(%rbp),%rax
     9e4:	48 89 d6             	mov    %rdx,%rsi
     9e7:	48 89 c7             	mov    %rax,%rdi
     9ea:	e8 d3 45 00 00       	callq  4fc2 <comp_td_costs>
     9ef:	c7 85 6c ff ff ff 00 	movl   $0x0,-0x94(%rbp)
     9f6:	00 00 00 
     9f9:	83 85 6c ff ff ff 01 	addl   $0x1,-0x94(%rbp)
     a00:	f3 0f 10 8d 14 ff ff 	movss  -0xec(%rbp),%xmm1
     a07:	ff 
     a08:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # a10 <try_place+0xa10>
     a0f:	00 
     a10:	f3 0f 5e c1          	divss  %xmm1,%xmm0
     a14:	66 0f 7e c0          	movd   %xmm0,%eax
     a18:	89 45 b0             	mov    %eax,-0x50(%rbp)
     a1b:	f3 0f 10 8d 18 ff ff 	movss  -0xe8(%rbp),%xmm1
     a22:	ff 
     a23:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # a2b <try_place+0xa2b>
     a2a:	00 
     a2b:	f3 0f 5e c1          	divss  %xmm1,%xmm0
     a2f:	66 0f 7e c0          	movd   %xmm0,%eax
     a33:	89 45 ac             	mov    %eax,-0x54(%rbp)
     a36:	c7 85 68 ff ff ff 01 	movl   $0x1,-0x98(%rbp)
     a3d:	00 00 00 
     a40:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%rbp)
     a47:	e9 9d 02 00 00       	jmpq   ce9 <try_place+0xce9>
     a4c:	44 8b 65 14          	mov    0x14(%rbp),%r12d
     a50:	44 8b 45 10          	mov    0x10(%rbp),%r8d
     a54:	8b 4d 3c             	mov    0x3c(%rbp),%ecx
     a57:	48 8b 9d f8 fe ff ff 	mov    -0x108(%rbp),%rbx
     a5e:	4c 8b 9d 00 ff ff ff 	mov    -0x100(%rbp),%r11
     a65:	8b 45 1c             	mov    0x1c(%rbp),%eax
     a68:	41 89 c7             	mov    %eax,%r15d
     a6b:	44 8b 95 20 ff ff ff 	mov    -0xe0(%rbp),%r10d
     a72:	8b 85 24 ff ff ff    	mov    -0xdc(%rbp),%eax
     a78:	48 83 ec 08          	sub    $0x8,%rsp
     a7c:	44 8b 75 ac          	mov    -0x54(%rbp),%r14d
     a80:	44 8b 6d b0          	mov    -0x50(%rbp),%r13d
     a84:	48 8d 95 18 ff ff ff 	lea    -0xe8(%rbp),%rdx
     a8b:	48 8d b5 14 ff ff ff 	lea    -0xec(%rbp),%rsi
     a92:	48 8d bd 1c ff ff ff 	lea    -0xe4(%rbp),%rdi
     a99:	ff b5 50 ff ff ff    	pushq  -0xb0(%rbp)
     a9f:	4c 8d 8d 0c ff ff ff 	lea    -0xf4(%rbp),%r9
     aa6:	41 51                	push   %r9
     aa8:	41 50                	push   %r8
     aaa:	44 8b 85 7c ff ff ff 	mov    -0x84(%rbp),%r8d
     ab1:	41 50                	push   %r8
     ab3:	51                   	push   %rcx
     ab4:	44 89 b5 80 fd ff ff 	mov    %r14d,-0x280(%rbp)
     abb:	f3 0f 10 a5 80 fd ff 	movss  -0x280(%rbp),%xmm4
     ac2:	ff 
     ac3:	44 89 ad 80 fd ff ff 	mov    %r13d,-0x280(%rbp)
     aca:	f3 0f 10 9d 80 fd ff 	movss  -0x280(%rbp),%xmm3
     ad1:	ff 
     ad2:	44 89 a5 80 fd ff ff 	mov    %r12d,-0x280(%rbp)
     ad9:	f3 0f 10 95 80 fd ff 	movss  -0x280(%rbp),%xmm2
     ae0:	ff 
     ae1:	49 89 d9             	mov    %rbx,%r9
     ae4:	4d 89 d8             	mov    %r11,%r8
     ae7:	44 89 f9             	mov    %r15d,%ecx
     aea:	44 89 95 80 fd ff ff 	mov    %r10d,-0x280(%rbp)
     af1:	f3 0f 10 8d 80 fd ff 	movss  -0x280(%rbp),%xmm1
     af8:	ff 
     af9:	89 85 80 fd ff ff    	mov    %eax,-0x280(%rbp)
     aff:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
     b06:	ff 
     b07:	e8 74 18 00 00       	callq  2380 <try_swap>
     b0c:	48 83 c4 30          	add    $0x30,%rsp
     b10:	83 f8 01             	cmp    $0x1,%eax
     b13:	0f 85 a6 00 00 00    	jne    bbf <try_place+0xbbf>
     b19:	83 45 c4 01          	addl   $0x1,-0x3c(%rbp)
     b1d:	f3 0f 10 85 1c ff ff 	movss  -0xe4(%rbp),%xmm0
     b24:	ff 
     b25:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     b29:	f2 0f 10 4d a0       	movsd  -0x60(%rbp),%xmm1
     b2e:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
     b32:	66 48 0f 7e c8       	movq   %xmm1,%rax
     b37:	48 89 45 a0          	mov    %rax,-0x60(%rbp)
     b3b:	f3 0f 10 85 14 ff ff 	movss  -0xec(%rbp),%xmm0
     b42:	ff 
     b43:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     b47:	f2 0f 10 4d 98       	movsd  -0x68(%rbp),%xmm1
     b4c:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
     b50:	66 48 0f 7e c8       	movq   %xmm1,%rax
     b55:	48 89 45 98          	mov    %rax,-0x68(%rbp)
     b59:	f3 0f 10 85 18 ff ff 	movss  -0xe8(%rbp),%xmm0
     b60:	ff 
     b61:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     b65:	f2 0f 10 4d 90       	movsd  -0x70(%rbp),%xmm1
     b6a:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
     b6e:	66 48 0f 7e c8       	movq   %xmm1,%rax
     b73:	48 89 45 90          	mov    %rax,-0x70(%rbp)
     b77:	f3 0f 10 85 0c ff ff 	movss  -0xf4(%rbp),%xmm0
     b7e:	ff 
     b7f:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     b83:	f2 0f 10 4d 88       	movsd  -0x78(%rbp),%xmm1
     b88:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
     b8c:	66 48 0f 7e c8       	movq   %xmm1,%rax
     b91:	48 89 45 88          	mov    %rax,-0x78(%rbp)
     b95:	f3 0f 10 8d 1c ff ff 	movss  -0xe4(%rbp),%xmm1
     b9c:	ff 
     b9d:	f3 0f 10 85 1c ff ff 	movss  -0xe4(%rbp),%xmm0
     ba4:	ff 
     ba5:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
     ba9:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     bad:	f2 0f 10 4d 80       	movsd  -0x80(%rbp),%xmm1
     bb2:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
     bb6:	66 48 0f 7e c8       	movq   %xmm1,%rax
     bbb:	48 89 45 80          	mov    %rax,-0x80(%rbp)
     bbf:	8b 45 10             	mov    0x10(%rbp),%eax
     bc2:	83 f8 01             	cmp    $0x1,%eax
     bc5:	74 0c                	je     bd3 <try_place+0xbd3>
     bc7:	8b 45 10             	mov    0x10(%rbp),%eax
     bca:	83 f8 02             	cmp    $0x2,%eax
     bcd:	0f 85 12 01 00 00    	jne    ce5 <try_place+0xce5>
     bd3:	8b 85 68 ff ff ff    	mov    -0x98(%rbp),%eax
     bd9:	3b 85 64 ff ff ff    	cmp    -0x9c(%rbp),%eax
     bdf:	0f 8c f9 00 00 00    	jl     cde <try_place+0xcde>
     be5:	8b 45 c0             	mov    -0x40(%rbp),%eax
     be8:	83 e8 01             	sub    $0x1,%eax
     beb:	3b 45 c8             	cmp    -0x38(%rbp),%eax
     bee:	0f 84 ea 00 00 00    	je     cde <try_place+0xcde>
     bf4:	c7 85 68 ff ff ff 00 	movl   $0x0,-0x98(%rbp)
     bfb:	00 00 00 
     bfe:	8b 45 10             	mov    0x10(%rbp),%eax
     c01:	83 f8 01             	cmp    $0x1,%eax
     c04:	75 3f                	jne    c45 <try_place+0xc45>
     c06:	f3 0f 10 8d 0c ff ff 	movss  -0xf4(%rbp),%xmm1
     c0d:	ff 
     c0e:	66 0f ef c0          	pxor   %xmm0,%xmm0
     c12:	f3 0f 2a 85 78 ff ff 	cvtsi2ssl -0x88(%rbp),%xmm0
     c19:	ff 
     c1a:	f3 0f 5e c8          	divss  %xmm0,%xmm1
     c1e:	66 0f 7e c8          	movd   %xmm1,%eax
     c22:	89 45 b4             	mov    %eax,-0x4c(%rbp)
     c25:	48 8b 85 b0 fd ff ff 	mov    -0x250(%rbp),%rax
     c2c:	8b 55 b4             	mov    -0x4c(%rbp),%edx
     c2f:	89 95 80 fd ff ff    	mov    %edx,-0x280(%rbp)
     c35:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
     c3c:	ff 
     c3d:	48 89 c7             	mov    %rax,%rdi
     c40:	e8 00 00 00 00       	callq  c45 <try_place+0xc45>
     c45:	48 8b 85 b0 fd ff ff 	mov    -0x250(%rbp),%rax
     c4c:	48 89 c7             	mov    %rax,%rdi
     c4f:	e8 00 00 00 00       	callq  c54 <try_place+0xc54>
     c54:	48 8b 85 b8 fd ff ff 	mov    -0x248(%rbp),%rax
     c5b:	66 0f ef c0          	pxor   %xmm0,%xmm0
     c5f:	48 89 c7             	mov    %rax,%rdi
     c62:	e8 00 00 00 00       	callq  c67 <try_place+0xc67>
     c67:	66 0f 7e c0          	movd   %xmm0,%eax
     c6b:	89 45 b8             	mov    %eax,-0x48(%rbp)
     c6e:	48 8b 85 b8 fd ff ff 	mov    -0x248(%rbp),%rax
     c75:	48 83 ec 08          	sub    $0x8,%rsp
     c79:	8b 8d 60 ff ff ff    	mov    -0xa0(%rbp),%ecx
     c7f:	8b 55 b8             	mov    -0x48(%rbp),%edx
     c82:	ff 75 50             	pushq  0x50(%rbp)
     c85:	ff 75 48             	pushq  0x48(%rbp)
     c88:	ff 75 40             	pushq  0x40(%rbp)
     c8b:	ff 75 38             	pushq  0x38(%rbp)
     c8e:	ff 75 30             	pushq  0x30(%rbp)
     c91:	ff 75 28             	pushq  0x28(%rbp)
     c94:	ff 75 20             	pushq  0x20(%rbp)
     c97:	ff 75 18             	pushq  0x18(%rbp)
     c9a:	ff 75 10             	pushq  0x10(%rbp)
     c9d:	89 8d 80 fd ff ff    	mov    %ecx,-0x280(%rbp)
     ca3:	f3 0f 10 8d 80 fd ff 	movss  -0x280(%rbp),%xmm1
     caa:	ff 
     cab:	89 95 80 fd ff ff    	mov    %edx,-0x280(%rbp)
     cb1:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
     cb8:	ff 
     cb9:	48 89 c7             	mov    %rax,%rdi
     cbc:	e8 00 00 00 00       	callq  cc1 <try_place+0xcc1>
     cc1:	48 83 c4 50          	add    $0x50,%rsp
     cc5:	48 8d 95 0c ff ff ff 	lea    -0xf4(%rbp),%rdx
     ccc:	48 8d 85 18 ff ff ff 	lea    -0xe8(%rbp),%rax
     cd3:	48 89 d6             	mov    %rdx,%rsi
     cd6:	48 89 c7             	mov    %rax,%rdi
     cd9:	e8 e4 42 00 00       	callq  4fc2 <comp_td_costs>
     cde:	83 85 68 ff ff ff 01 	addl   $0x1,-0x98(%rbp)
     ce5:	83 45 c8 01          	addl   $0x1,-0x38(%rbp)
     ce9:	8b 45 c8             	mov    -0x38(%rbp),%eax
     cec:	3b 45 c0             	cmp    -0x40(%rbp),%eax
     cef:	0f 8c 57 fd ff ff    	jl     a4c <try_place+0xa4c>
     cf5:	8b 45 c0             	mov    -0x40(%rbp),%eax
     cf8:	01 45 bc             	add    %eax,-0x44(%rbp)
     cfb:	81 7d bc 50 c3 00 00 	cmpl   $0xc350,-0x44(%rbp)
     d02:	0f 8e ca 01 00 00    	jle    ed2 <try_place+0xed2>
     d08:	8b 45 3c             	mov    0x3c(%rbp),%eax
     d0b:	8b 55 1c             	mov    0x1c(%rbp),%edx
     d0e:	89 c6                	mov    %eax,%esi
     d10:	89 d7                	mov    %edx,%edi
     d12:	e8 a6 2f 00 00       	callq  3cbd <recompute_bb_cost>
     d17:	66 0f 7e c0          	movd   %xmm0,%eax
     d1b:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%rbp)
     d21:	f3 0f 10 8d 14 ff ff 	movss  -0xec(%rbp),%xmm1
     d28:	ff 
     d29:	f3 0f 10 85 3c ff ff 	movss  -0xc4(%rbp),%xmm0
     d30:	ff 
     d31:	f3 0f 5c c1          	subss  %xmm1,%xmm0
     d35:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # d3d <try_place+0xd3d>
     d3c:	00 
     d3d:	0f 54 c1             	andps  %xmm1,%xmm0
     d40:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     d44:	f3 0f 10 8d 14 ff ff 	movss  -0xec(%rbp),%xmm1
     d4b:	ff 
     d4c:	f3 0f 5a c9          	cvtss2sd %xmm1,%xmm1
     d50:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # d58 <try_place+0xd58>
     d57:	00 
     d58:	f2 0f 59 ca          	mulsd  %xmm2,%xmm1
     d5c:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
     d60:	76 2d                	jbe    d8f <try_place+0xd8f>
     d62:	f3 0f 10 85 14 ff ff 	movss  -0xec(%rbp),%xmm0
     d69:	ff 
     d6a:	f3 0f 5a c8          	cvtss2sd %xmm0,%xmm1
     d6e:	f3 0f 5a 85 3c ff ff 	cvtss2sd -0xc4(%rbp),%xmm0
     d75:	ff 
     d76:	bf 00 00 00 00       	mov    $0x0,%edi
     d7b:	b8 02 00 00 00       	mov    $0x2,%eax
     d80:	e8 00 00 00 00       	callq  d85 <try_place+0xd85>
     d85:	bf 01 00 00 00       	mov    $0x1,%edi
     d8a:	e8 00 00 00 00       	callq  d8f <try_place+0xd8f>
     d8f:	8b 85 3c ff ff ff    	mov    -0xc4(%rbp),%eax
     d95:	89 85 14 ff ff ff    	mov    %eax,-0xec(%rbp)
     d9b:	8b 45 10             	mov    0x10(%rbp),%eax
     d9e:	83 f8 01             	cmp    $0x1,%eax
     da1:	74 0c                	je     daf <try_place+0xdaf>
     da3:	8b 45 10             	mov    0x10(%rbp),%eax
     da6:	83 f8 02             	cmp    $0x2,%eax
     da9:	0f 85 09 01 00 00    	jne    eb8 <try_place+0xeb8>
     daf:	48 8d 95 08 ff ff ff 	lea    -0xf8(%rbp),%rdx
     db6:	48 8d 85 10 ff ff ff 	lea    -0xf0(%rbp),%rax
     dbd:	48 89 d6             	mov    %rdx,%rsi
     dc0:	48 89 c7             	mov    %rax,%rdi
     dc3:	e8 fa 41 00 00       	callq  4fc2 <comp_td_costs>
     dc8:	f3 0f 10 85 10 ff ff 	movss  -0xf0(%rbp),%xmm0
     dcf:	ff 
     dd0:	f3 0f 10 8d 18 ff ff 	movss  -0xe8(%rbp),%xmm1
     dd7:	ff 
     dd8:	f3 0f 5c c1          	subss  %xmm1,%xmm0
     ddc:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # de4 <try_place+0xde4>
     de3:	00 
     de4:	0f 54 c1             	andps  %xmm1,%xmm0
     de7:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     deb:	f3 0f 10 8d 18 ff ff 	movss  -0xe8(%rbp),%xmm1
     df2:	ff 
     df3:	f3 0f 5a c9          	cvtss2sd %xmm1,%xmm1
     df7:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # dff <try_place+0xdff>
     dfe:	00 
     dff:	f2 0f 59 ca          	mulsd  %xmm2,%xmm1
     e03:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
     e07:	76 31                	jbe    e3a <try_place+0xe3a>
     e09:	f3 0f 10 85 18 ff ff 	movss  -0xe8(%rbp),%xmm0
     e10:	ff 
     e11:	f3 0f 5a c8          	cvtss2sd %xmm0,%xmm1
     e15:	f3 0f 10 85 10 ff ff 	movss  -0xf0(%rbp),%xmm0
     e1c:	ff 
     e1d:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     e21:	bf 00 00 00 00       	mov    $0x0,%edi
     e26:	b8 02 00 00 00       	mov    $0x2,%eax
     e2b:	e8 00 00 00 00       	callq  e30 <try_place+0xe30>
     e30:	bf 01 00 00 00       	mov    $0x1,%edi
     e35:	e8 00 00 00 00       	callq  e3a <try_place+0xe3a>
     e3a:	f3 0f 10 85 08 ff ff 	movss  -0xf8(%rbp),%xmm0
     e41:	ff 
     e42:	f3 0f 10 8d 0c ff ff 	movss  -0xf4(%rbp),%xmm1
     e49:	ff 
     e4a:	f3 0f 5c c1          	subss  %xmm1,%xmm0
     e4e:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # e56 <try_place+0xe56>
     e55:	00 
     e56:	0f 54 c1             	andps  %xmm1,%xmm0
     e59:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     e5d:	f3 0f 10 8d 0c ff ff 	movss  -0xf4(%rbp),%xmm1
     e64:	ff 
     e65:	f3 0f 5a c9          	cvtss2sd %xmm1,%xmm1
     e69:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # e71 <try_place+0xe71>
     e70:	00 
     e71:	f2 0f 59 ca          	mulsd  %xmm2,%xmm1
     e75:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
     e79:	76 31                	jbe    eac <try_place+0xeac>
     e7b:	f3 0f 10 85 0c ff ff 	movss  -0xf4(%rbp),%xmm0
     e82:	ff 
     e83:	f3 0f 5a c8          	cvtss2sd %xmm0,%xmm1
     e87:	f3 0f 10 85 08 ff ff 	movss  -0xf8(%rbp),%xmm0
     e8e:	ff 
     e8f:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
     e93:	bf 00 00 00 00       	mov    $0x0,%edi
     e98:	b8 02 00 00 00       	mov    $0x2,%eax
     e9d:	e8 00 00 00 00       	callq  ea2 <try_place+0xea2>
     ea2:	bf 01 00 00 00       	mov    $0x1,%edi
     ea7:	e8 00 00 00 00       	callq  eac <try_place+0xeac>
     eac:	8b 85 10 ff ff ff    	mov    -0xf0(%rbp),%eax
     eb2:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%rbp)
     eb8:	8b 45 10             	mov    0x10(%rbp),%eax
     ebb:	85 c0                	test   %eax,%eax
     ebd:	75 0c                	jne    ecb <try_place+0xecb>
     ebf:	8b 85 3c ff ff ff    	mov    -0xc4(%rbp),%eax
     ec5:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%rbp)
     ecb:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%rbp)
     ed2:	8b 45 c0             	mov    -0x40(%rbp),%eax
     ed5:	01 45 cc             	add    %eax,-0x34(%rbp)
     ed8:	66 0f ef c0          	pxor   %xmm0,%xmm0
     edc:	f3 0f 2a 45 c4       	cvtsi2ssl -0x3c(%rbp),%xmm0
     ee1:	66 0f ef c9          	pxor   %xmm1,%xmm1
     ee5:	f3 0f 2a 4d c0       	cvtsi2ssl -0x40(%rbp),%xmm1
     eea:	f3 0f 5e c1          	divss  %xmm1,%xmm0
     eee:	66 0f 7e c0          	movd   %xmm0,%eax
     ef2:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%rbp)
     ef8:	83 7d c4 00          	cmpl   $0x0,-0x3c(%rbp)
     efc:	75 46                	jne    f44 <try_place+0xf44>
     efe:	f3 0f 10 85 1c ff ff 	movss  -0xe4(%rbp),%xmm0
     f05:	ff 
     f06:	f3 0f 5a f0          	cvtss2sd %xmm0,%xmm6
     f0a:	f2 0f 11 75 a0       	movsd  %xmm6,-0x60(%rbp)
     f0f:	f3 0f 10 85 14 ff ff 	movss  -0xec(%rbp),%xmm0
     f16:	ff 
     f17:	f3 0f 5a f8          	cvtss2sd %xmm0,%xmm7
     f1b:	f2 0f 11 7d 98       	movsd  %xmm7,-0x68(%rbp)
     f20:	f3 0f 10 85 18 ff ff 	movss  -0xe8(%rbp),%xmm0
     f27:	ff 
     f28:	f3 0f 5a e8          	cvtss2sd %xmm0,%xmm5
     f2c:	f2 0f 11 6d 90       	movsd  %xmm5,-0x70(%rbp)
     f31:	f3 0f 10 85 0c ff ff 	movss  -0xf4(%rbp),%xmm0
     f38:	ff 
     f39:	f3 0f 5a f0          	cvtss2sd %xmm0,%xmm6
     f3d:	f2 0f 11 75 88       	movsd  %xmm6,-0x78(%rbp)
     f42:	eb 6c                	jmp    fb0 <try_place+0xfb0>
     f44:	66 0f ef c0          	pxor   %xmm0,%xmm0
     f48:	f2 0f 2a 45 c4       	cvtsi2sdl -0x3c(%rbp),%xmm0
     f4d:	f2 0f 10 4d a0       	movsd  -0x60(%rbp),%xmm1
     f52:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
     f56:	66 48 0f 7e c8       	movq   %xmm1,%rax
     f5b:	48 89 45 a0          	mov    %rax,-0x60(%rbp)
     f5f:	66 0f ef c0          	pxor   %xmm0,%xmm0
     f63:	f2 0f 2a 45 c4       	cvtsi2sdl -0x3c(%rbp),%xmm0
     f68:	f2 0f 10 4d 98       	movsd  -0x68(%rbp),%xmm1
     f6d:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
     f71:	66 48 0f 7e c8       	movq   %xmm1,%rax
     f76:	48 89 45 98          	mov    %rax,-0x68(%rbp)
     f7a:	66 0f ef c0          	pxor   %xmm0,%xmm0
     f7e:	f2 0f 2a 45 c4       	cvtsi2sdl -0x3c(%rbp),%xmm0
     f83:	f2 0f 10 4d 90       	movsd  -0x70(%rbp),%xmm1
     f88:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
     f8c:	66 48 0f 7e c8       	movq   %xmm1,%rax
     f91:	48 89 45 90          	mov    %rax,-0x70(%rbp)
     f95:	66 0f ef c0          	pxor   %xmm0,%xmm0
     f99:	f2 0f 2a 45 c4       	cvtsi2sdl -0x3c(%rbp),%xmm0
     f9e:	f2 0f 10 4d 88       	movsd  -0x78(%rbp),%xmm1
     fa3:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
     fa7:	66 48 0f 7e c8       	movq   %xmm1,%rax
     fac:	48 89 45 88          	mov    %rax,-0x78(%rbp)
     fb0:	48 8b 4d a0          	mov    -0x60(%rbp),%rcx
     fb4:	48 8b 55 80          	mov    -0x80(%rbp),%rdx
     fb8:	8b 45 c4             	mov    -0x3c(%rbp),%eax
     fbb:	48 89 8d 80 fd ff ff 	mov    %rcx,-0x280(%rbp)
     fc2:	f2 0f 10 8d 80 fd ff 	movsd  -0x280(%rbp),%xmm1
     fc9:	ff 
     fca:	48 89 95 80 fd ff ff 	mov    %rdx,-0x280(%rbp)
     fd1:	f2 0f 10 85 80 fd ff 	movsd  -0x280(%rbp),%xmm0
     fd8:	ff 
     fd9:	89 c7                	mov    %eax,%edi
     fdb:	e8 92 0e 00 00       	callq  1e72 <get_std_dev>
     fe0:	66 48 0f 7e c0       	movq   %xmm0,%rax
     fe5:	48 89 85 30 ff ff ff 	mov    %rax,-0xd0(%rbp)
     fec:	f3 0f 5a bd 60 ff ff 	cvtss2sd -0xa0(%rbp),%xmm7
     ff3:	ff 
     ff4:	66 48 0f 7e fa       	movq   %xmm7,%rdx
     ff9:	f3 0f 10 85 20 ff ff 	movss  -0xe0(%rbp),%xmm0
    1000:	ff 
    1001:	f3 0f 5a e8          	cvtss2sd %xmm0,%xmm5
    1005:	66 48 0f 7e e8       	movq   %xmm5,%rax
    100a:	f3 0f 5a 9d 38 ff ff 	cvtss2sd -0xc8(%rbp),%xmm3
    1011:	ff 
    1012:	f3 0f 5a 55 b8       	cvtss2sd -0x48(%rbp),%xmm2
    1017:	f3 0f 5a 4d b4       	cvtss2sd -0x4c(%rbp),%xmm1
    101c:	f3 0f 10 85 24 ff ff 	movss  -0xdc(%rbp),%xmm0
    1023:	ff 
    1024:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    1028:	48 83 ec 08          	sub    $0x8,%rsp
    102c:	8b 4d cc             	mov    -0x34(%rbp),%ecx
    102f:	4c 8b 55 88          	mov    -0x78(%rbp),%r10
    1033:	4c 8b 4d 90          	mov    -0x70(%rbp),%r9
    1037:	4c 8b 45 98          	mov    -0x68(%rbp),%r8
    103b:	48 8b 7d a0          	mov    -0x60(%rbp),%rdi
    103f:	52                   	push   %rdx
    1040:	50                   	push   %rax
    1041:	ff b5 30 ff ff ff    	pushq  -0xd0(%rbp)
    1047:	89 ce                	mov    %ecx,%esi
    1049:	66 0f 28 fb          	movapd %xmm3,%xmm7
    104d:	66 0f 28 f2          	movapd %xmm2,%xmm6
    1051:	66 0f 28 e9          	movapd %xmm1,%xmm5
    1055:	4c 89 95 80 fd ff ff 	mov    %r10,-0x280(%rbp)
    105c:	f2 0f 10 a5 80 fd ff 	movsd  -0x280(%rbp),%xmm4
    1063:	ff 
    1064:	4c 89 8d 80 fd ff ff 	mov    %r9,-0x280(%rbp)
    106b:	f2 0f 10 9d 80 fd ff 	movsd  -0x280(%rbp),%xmm3
    1072:	ff 
    1073:	4c 89 85 80 fd ff ff 	mov    %r8,-0x280(%rbp)
    107a:	f2 0f 10 95 80 fd ff 	movsd  -0x280(%rbp),%xmm2
    1081:	ff 
    1082:	48 89 bd 80 fd ff ff 	mov    %rdi,-0x280(%rbp)
    1089:	f2 0f 10 8d 80 fd ff 	movsd  -0x280(%rbp),%xmm1
    1090:	ff 
    1091:	bf 00 00 00 00       	mov    $0x0,%edi
    1096:	b8 08 00 00 00       	mov    $0x8,%eax
    109b:	e8 00 00 00 00       	callq  10a0 <try_place+0x10a0>
    10a0:	48 83 c4 20          	add    $0x20,%rsp
    10a4:	8b 85 24 ff ff ff    	mov    -0xdc(%rbp),%eax
    10aa:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%rbp)
    10b0:	8b b5 20 ff ff ff    	mov    -0xe0(%rbp),%esi
    10b6:	f2 0f 5a 85 30 ff ff 	cvtsd2ss -0xd0(%rbp),%xmm0
    10bd:	ff 
    10be:	48 83 ec 08          	sub    $0x8,%rsp
    10c2:	8b bd 38 ff ff ff    	mov    -0xc8(%rbp),%edi
    10c8:	48 8d 95 24 ff ff ff 	lea    -0xdc(%rbp),%rdx
    10cf:	48 83 ec 18          	sub    $0x18,%rsp
    10d3:	48 89 e0             	mov    %rsp,%rax
    10d6:	48 8b 4d 58          	mov    0x58(%rbp),%rcx
    10da:	48 89 08             	mov    %rcx,(%rax)
    10dd:	48 8b 4d 60          	mov    0x60(%rbp),%rcx
    10e1:	48 89 48 08          	mov    %rcx,0x8(%rax)
    10e5:	8b 4d 68             	mov    0x68(%rbp),%ecx
    10e8:	89 48 10             	mov    %ecx,0x10(%rax)
    10eb:	89 bd 80 fd ff ff    	mov    %edi,-0x280(%rbp)
    10f1:	f3 0f 10 95 80 fd ff 	movss  -0x280(%rbp),%xmm2
    10f8:	ff 
    10f9:	89 b5 80 fd ff ff    	mov    %esi,-0x280(%rbp)
    10ff:	f3 0f 10 8d 80 fd ff 	movss  -0x280(%rbp),%xmm1
    1106:	ff 
    1107:	48 89 d7             	mov    %rdx,%rdi
    110a:	e8 ae 0e 00 00       	callq  1fbd <update_t>
    110f:	48 83 c4 20          	add    $0x20,%rsp
    1113:	f3 0f 10 85 24 ff ff 	movss  -0xdc(%rbp),%xmm0
    111a:	ff 
    111b:	f3 0f 5e 85 2c ff ff 	divss  -0xd4(%rbp),%xmm0
    1122:	ff 
    1123:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    1127:	bf 00 00 00 00       	mov    $0x0,%edi
    112c:	b8 01 00 00 00       	mov    $0x1,%eax
    1131:	e8 00 00 00 00       	callq  1136 <try_place+0x1136>
    1136:	f3 0f 5a 65 b8       	cvtss2sd -0x48(%rbp),%xmm4
    113b:	f3 0f 10 85 24 ff ff 	movss  -0xdc(%rbp),%xmm0
    1142:	ff 
    1143:	f3 0f 5a d8          	cvtss2sd %xmm0,%xmm3
    1147:	f3 0f 10 85 18 ff ff 	movss  -0xe8(%rbp),%xmm0
    114e:	ff 
    114f:	f3 0f 5a d0          	cvtss2sd %xmm0,%xmm2
    1153:	f3 0f 10 85 14 ff ff 	movss  -0xec(%rbp),%xmm0
    115a:	ff 
    115b:	f3 0f 5a c8          	cvtss2sd %xmm0,%xmm1
    115f:	f3 0f 10 85 1c ff ff 	movss  -0xe4(%rbp),%xmm0
    1166:	ff 
    1167:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    116b:	48 8d 85 c0 fd ff ff 	lea    -0x240(%rbp),%rax
    1172:	be 00 00 00 00       	mov    $0x0,%esi
    1177:	48 89 c7             	mov    %rax,%rdi
    117a:	b8 05 00 00 00       	mov    $0x5,%eax
    117f:	e8 00 00 00 00       	callq  1184 <try_place+0x1184>
    1184:	48 8d 85 c0 fd ff ff 	lea    -0x240(%rbp),%rax
    118b:	b9 00 00 00 00       	mov    $0x0,%ecx
    1190:	ba 01 00 00 00       	mov    $0x1,%edx
    1195:	48 89 c6             	mov    %rax,%rsi
    1198:	bf 00 00 00 00       	mov    $0x0,%edi
    119d:	e8 00 00 00 00       	callq  11a2 <try_place+0x11a2>
    11a2:	8b 95 38 ff ff ff    	mov    -0xc8(%rbp),%edx
    11a8:	48 8d 85 20 ff ff ff 	lea    -0xe0(%rbp),%rax
    11af:	89 95 80 fd ff ff    	mov    %edx,-0x280(%rbp)
    11b5:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
    11bc:	ff 
    11bd:	48 89 c7             	mov    %rax,%rdi
    11c0:	e8 52 0d 00 00       	callq  1f17 <update_rlim>
    11c5:	8b 45 10             	mov    0x10(%rbp),%eax
    11c8:	83 f8 01             	cmp    $0x1,%eax
    11cb:	74 08                	je     11d5 <try_place+0x11d5>
    11cd:	8b 45 10             	mov    0x10(%rbp),%eax
    11d0:	83 f8 02             	cmp    $0x2,%eax
    11d3:	75 49                	jne    121e <try_place+0x121e>
    11d5:	f3 0f 10 85 20 ff ff 	movss  -0xe0(%rbp),%xmm0
    11dc:	ff 
    11dd:	f3 0f 5c 85 44 ff ff 	subss  -0xbc(%rbp),%xmm0
    11e4:	ff 
    11e5:	f3 0f 59 85 40 ff ff 	mulss  -0xc0(%rbp),%xmm0
    11ec:	ff 
    11ed:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 11f5 <try_place+0x11f5>
    11f4:	00 
    11f5:	f3 0f 5c c8          	subss  %xmm0,%xmm1
    11f9:	f3 0f 10 45 54       	movss  0x54(%rbp),%xmm0
    11fe:	f3 0f 10 55 4c       	movss  0x4c(%rbp),%xmm2
    1203:	f3 0f 5c c2          	subss  %xmm2,%xmm0
    1207:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
    120b:	f3 0f 10 4d 4c       	movss  0x4c(%rbp),%xmm1
    1210:	f3 0f 58 c1          	addss  %xmm1,%xmm0
    1214:	66 0f 7e c0          	movd   %xmm0,%eax
    1218:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%rbp)
    121e:	8b b5 1c ff ff ff    	mov    -0xe4(%rbp),%esi
    1224:	8b 95 24 ff ff ff    	mov    -0xdc(%rbp),%edx
    122a:	48 83 ec 08          	sub    $0x8,%rsp
    122e:	48 83 ec 18          	sub    $0x18,%rsp
    1232:	48 89 e0             	mov    %rsp,%rax
    1235:	48 8b 4d 58          	mov    0x58(%rbp),%rcx
    1239:	48 89 08             	mov    %rcx,(%rax)
    123c:	48 8b 4d 60          	mov    0x60(%rbp),%rcx
    1240:	48 89 48 08          	mov    %rcx,0x8(%rax)
    1244:	8b 4d 68             	mov    0x68(%rbp),%ecx
    1247:	89 48 10             	mov    %ecx,0x10(%rax)
    124a:	89 b5 80 fd ff ff    	mov    %esi,-0x280(%rbp)
    1250:	f3 0f 10 8d 80 fd ff 	movss  -0x280(%rbp),%xmm1
    1257:	ff 
    1258:	89 95 80 fd ff ff    	mov    %edx,-0x280(%rbp)
    125e:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
    1265:	ff 
    1266:	e8 6b 0e 00 00       	callq  20d6 <exit_crit>
    126b:	48 83 c4 20          	add    $0x20,%rsp
    126f:	85 c0                	test   %eax,%eax
    1271:	0f 84 1e f6 ff ff    	je     895 <try_place+0x895>
    1277:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 127d <try_place+0x127d>
    127d:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%rbp)
    1283:	b8 00 00 00 00       	mov    $0x0,%eax
    1288:	48 89 45 a0          	mov    %rax,-0x60(%rbp)
    128c:	b8 00 00 00 00       	mov    $0x0,%eax
    1291:	48 89 45 98          	mov    %rax,-0x68(%rbp)
    1295:	b8 00 00 00 00       	mov    $0x0,%eax
    129a:	48 89 45 90          	mov    %rax,-0x70(%rbp)
    129e:	b8 00 00 00 00       	mov    $0x0,%eax
    12a3:	48 89 45 80          	mov    %rax,-0x80(%rbp)
    12a7:	b8 00 00 00 00       	mov    $0x0,%eax
    12ac:	48 89 45 88          	mov    %rax,-0x78(%rbp)
    12b0:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%rbp)
    12b7:	8b 45 10             	mov    0x10(%rbp),%eax
    12ba:	83 f8 01             	cmp    $0x1,%eax
    12bd:	74 0c                	je     12cb <try_place+0x12cb>
    12bf:	8b 45 10             	mov    0x10(%rbp),%eax
    12c2:	83 f8 02             	cmp    $0x2,%eax
    12c5:	0f 85 3d 01 00 00    	jne    1408 <try_place+0x1408>
    12cb:	8b 45 40             	mov    0x40(%rbp),%eax
    12ce:	3b 85 6c ff ff ff    	cmp    -0x94(%rbp),%eax
    12d4:	7e 0b                	jle    12e1 <try_place+0x12e1>
    12d6:	8b 45 48             	mov    0x48(%rbp),%eax
    12d9:	85 c0                	test   %eax,%eax
    12db:	0f 84 ea 00 00 00    	je     13cb <try_place+0x13cb>
    12e1:	f3 0f 10 8d 0c ff ff 	movss  -0xf4(%rbp),%xmm1
    12e8:	ff 
    12e9:	66 0f ef c0          	pxor   %xmm0,%xmm0
    12ed:	f3 0f 2a 85 78 ff ff 	cvtsi2ssl -0x88(%rbp),%xmm0
    12f4:	ff 
    12f5:	f3 0f 5e c8          	divss  %xmm0,%xmm1
    12f9:	66 0f 7e c8          	movd   %xmm1,%eax
    12fd:	89 45 b4             	mov    %eax,-0x4c(%rbp)
    1300:	8b 45 10             	mov    0x10(%rbp),%eax
    1303:	83 f8 01             	cmp    $0x1,%eax
    1306:	75 20                	jne    1328 <try_place+0x1328>
    1308:	48 8b 85 b0 fd ff ff 	mov    -0x250(%rbp),%rax
    130f:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    1312:	89 95 80 fd ff ff    	mov    %edx,-0x280(%rbp)
    1318:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
    131f:	ff 
    1320:	48 89 c7             	mov    %rax,%rdi
    1323:	e8 00 00 00 00       	callq  1328 <try_place+0x1328>
    1328:	48 8b 85 b0 fd ff ff 	mov    -0x250(%rbp),%rax
    132f:	48 89 c7             	mov    %rax,%rdi
    1332:	e8 00 00 00 00       	callq  1337 <try_place+0x1337>
    1337:	48 8b 85 b8 fd ff ff 	mov    -0x248(%rbp),%rax
    133e:	66 0f ef c0          	pxor   %xmm0,%xmm0
    1342:	48 89 c7             	mov    %rax,%rdi
    1345:	e8 00 00 00 00       	callq  134a <try_place+0x134a>
    134a:	66 0f 7e c0          	movd   %xmm0,%eax
    134e:	89 45 b8             	mov    %eax,-0x48(%rbp)
    1351:	48 8b 85 b8 fd ff ff 	mov    -0x248(%rbp),%rax
    1358:	48 83 ec 08          	sub    $0x8,%rsp
    135c:	8b 8d 60 ff ff ff    	mov    -0xa0(%rbp),%ecx
    1362:	8b 55 b8             	mov    -0x48(%rbp),%edx
    1365:	ff 75 50             	pushq  0x50(%rbp)
    1368:	ff 75 48             	pushq  0x48(%rbp)
    136b:	ff 75 40             	pushq  0x40(%rbp)
    136e:	ff 75 38             	pushq  0x38(%rbp)
    1371:	ff 75 30             	pushq  0x30(%rbp)
    1374:	ff 75 28             	pushq  0x28(%rbp)
    1377:	ff 75 20             	pushq  0x20(%rbp)
    137a:	ff 75 18             	pushq  0x18(%rbp)
    137d:	ff 75 10             	pushq  0x10(%rbp)
    1380:	89 8d 80 fd ff ff    	mov    %ecx,-0x280(%rbp)
    1386:	f3 0f 10 8d 80 fd ff 	movss  -0x280(%rbp),%xmm1
    138d:	ff 
    138e:	89 95 80 fd ff ff    	mov    %edx,-0x280(%rbp)
    1394:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
    139b:	ff 
    139c:	48 89 c7             	mov    %rax,%rdi
    139f:	e8 00 00 00 00       	callq  13a4 <try_place+0x13a4>
    13a4:	48 83 c4 50          	add    $0x50,%rsp
    13a8:	48 8d 95 0c ff ff ff 	lea    -0xf4(%rbp),%rdx
    13af:	48 8d 85 18 ff ff ff 	lea    -0xe8(%rbp),%rax
    13b6:	48 89 d6             	mov    %rdx,%rsi
    13b9:	48 89 c7             	mov    %rax,%rdi
    13bc:	e8 01 3c 00 00       	callq  4fc2 <comp_td_costs>
    13c1:	c7 85 6c ff ff ff 00 	movl   $0x0,-0x94(%rbp)
    13c8:	00 00 00 
    13cb:	83 85 6c ff ff ff 01 	addl   $0x1,-0x94(%rbp)
    13d2:	f3 0f 10 8d 14 ff ff 	movss  -0xec(%rbp),%xmm1
    13d9:	ff 
    13da:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 13e2 <try_place+0x13e2>
    13e1:	00 
    13e2:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    13e6:	66 0f 7e c0          	movd   %xmm0,%eax
    13ea:	89 45 b0             	mov    %eax,-0x50(%rbp)
    13ed:	f3 0f 10 8d 18 ff ff 	movss  -0xe8(%rbp),%xmm1
    13f4:	ff 
    13f5:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 13fd <try_place+0x13fd>
    13fc:	00 
    13fd:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    1401:	66 0f 7e c0          	movd   %xmm0,%eax
    1405:	89 45 ac             	mov    %eax,-0x54(%rbp)
    1408:	c7 85 68 ff ff ff 01 	movl   $0x1,-0x98(%rbp)
    140f:	00 00 00 
    1412:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%rbp)
    1419:	e9 9d 02 00 00       	jmpq   16bb <try_place+0x16bb>
    141e:	44 8b 65 14          	mov    0x14(%rbp),%r12d
    1422:	44 8b 45 10          	mov    0x10(%rbp),%r8d
    1426:	8b 4d 3c             	mov    0x3c(%rbp),%ecx
    1429:	48 8b 9d f8 fe ff ff 	mov    -0x108(%rbp),%rbx
    1430:	4c 8b 9d 00 ff ff ff 	mov    -0x100(%rbp),%r11
    1437:	8b 45 1c             	mov    0x1c(%rbp),%eax
    143a:	41 89 c7             	mov    %eax,%r15d
    143d:	44 8b 95 20 ff ff ff 	mov    -0xe0(%rbp),%r10d
    1444:	8b 85 24 ff ff ff    	mov    -0xdc(%rbp),%eax
    144a:	48 83 ec 08          	sub    $0x8,%rsp
    144e:	44 8b 75 ac          	mov    -0x54(%rbp),%r14d
    1452:	44 8b 6d b0          	mov    -0x50(%rbp),%r13d
    1456:	48 8d 95 18 ff ff ff 	lea    -0xe8(%rbp),%rdx
    145d:	48 8d b5 14 ff ff ff 	lea    -0xec(%rbp),%rsi
    1464:	48 8d bd 1c ff ff ff 	lea    -0xe4(%rbp),%rdi
    146b:	ff b5 50 ff ff ff    	pushq  -0xb0(%rbp)
    1471:	4c 8d 8d 0c ff ff ff 	lea    -0xf4(%rbp),%r9
    1478:	41 51                	push   %r9
    147a:	41 50                	push   %r8
    147c:	44 8b 85 7c ff ff ff 	mov    -0x84(%rbp),%r8d
    1483:	41 50                	push   %r8
    1485:	51                   	push   %rcx
    1486:	44 89 b5 80 fd ff ff 	mov    %r14d,-0x280(%rbp)
    148d:	f3 0f 10 a5 80 fd ff 	movss  -0x280(%rbp),%xmm4
    1494:	ff 
    1495:	44 89 ad 80 fd ff ff 	mov    %r13d,-0x280(%rbp)
    149c:	f3 0f 10 9d 80 fd ff 	movss  -0x280(%rbp),%xmm3
    14a3:	ff 
    14a4:	44 89 a5 80 fd ff ff 	mov    %r12d,-0x280(%rbp)
    14ab:	f3 0f 10 95 80 fd ff 	movss  -0x280(%rbp),%xmm2
    14b2:	ff 
    14b3:	49 89 d9             	mov    %rbx,%r9
    14b6:	4d 89 d8             	mov    %r11,%r8
    14b9:	44 89 f9             	mov    %r15d,%ecx
    14bc:	44 89 95 80 fd ff ff 	mov    %r10d,-0x280(%rbp)
    14c3:	f3 0f 10 8d 80 fd ff 	movss  -0x280(%rbp),%xmm1
    14ca:	ff 
    14cb:	89 85 80 fd ff ff    	mov    %eax,-0x280(%rbp)
    14d1:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
    14d8:	ff 
    14d9:	e8 a2 0e 00 00       	callq  2380 <try_swap>
    14de:	48 83 c4 30          	add    $0x30,%rsp
    14e2:	83 f8 01             	cmp    $0x1,%eax
    14e5:	0f 85 cc 01 00 00    	jne    16b7 <try_place+0x16b7>
    14eb:	83 45 c4 01          	addl   $0x1,-0x3c(%rbp)
    14ef:	f3 0f 10 85 1c ff ff 	movss  -0xe4(%rbp),%xmm0
    14f6:	ff 
    14f7:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    14fb:	f2 0f 10 4d a0       	movsd  -0x60(%rbp),%xmm1
    1500:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
    1504:	66 48 0f 7e c8       	movq   %xmm1,%rax
    1509:	48 89 45 a0          	mov    %rax,-0x60(%rbp)
    150d:	f3 0f 10 85 14 ff ff 	movss  -0xec(%rbp),%xmm0
    1514:	ff 
    1515:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    1519:	f2 0f 10 4d 98       	movsd  -0x68(%rbp),%xmm1
    151e:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
    1522:	66 48 0f 7e c8       	movq   %xmm1,%rax
    1527:	48 89 45 98          	mov    %rax,-0x68(%rbp)
    152b:	f3 0f 10 85 0c ff ff 	movss  -0xf4(%rbp),%xmm0
    1532:	ff 
    1533:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    1537:	f2 0f 10 4d 88       	movsd  -0x78(%rbp),%xmm1
    153c:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
    1540:	66 48 0f 7e c8       	movq   %xmm1,%rax
    1545:	48 89 45 88          	mov    %rax,-0x78(%rbp)
    1549:	f3 0f 10 85 18 ff ff 	movss  -0xe8(%rbp),%xmm0
    1550:	ff 
    1551:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    1555:	f2 0f 10 4d 90       	movsd  -0x70(%rbp),%xmm1
    155a:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
    155e:	66 48 0f 7e c8       	movq   %xmm1,%rax
    1563:	48 89 45 90          	mov    %rax,-0x70(%rbp)
    1567:	f3 0f 10 8d 1c ff ff 	movss  -0xe4(%rbp),%xmm1
    156e:	ff 
    156f:	f3 0f 10 85 1c ff ff 	movss  -0xe4(%rbp),%xmm0
    1576:	ff 
    1577:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
    157b:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    157f:	f2 0f 10 4d 80       	movsd  -0x80(%rbp),%xmm1
    1584:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
    1588:	66 48 0f 7e c8       	movq   %xmm1,%rax
    158d:	48 89 45 80          	mov    %rax,-0x80(%rbp)
    1591:	8b 45 10             	mov    0x10(%rbp),%eax
    1594:	83 f8 01             	cmp    $0x1,%eax
    1597:	74 0c                	je     15a5 <try_place+0x15a5>
    1599:	8b 45 10             	mov    0x10(%rbp),%eax
    159c:	83 f8 02             	cmp    $0x2,%eax
    159f:	0f 85 12 01 00 00    	jne    16b7 <try_place+0x16b7>
    15a5:	8b 85 68 ff ff ff    	mov    -0x98(%rbp),%eax
    15ab:	3b 85 64 ff ff ff    	cmp    -0x9c(%rbp),%eax
    15b1:	0f 8c f9 00 00 00    	jl     16b0 <try_place+0x16b0>
    15b7:	8b 45 c0             	mov    -0x40(%rbp),%eax
    15ba:	83 e8 01             	sub    $0x1,%eax
    15bd:	3b 45 c8             	cmp    -0x38(%rbp),%eax
    15c0:	0f 84 ea 00 00 00    	je     16b0 <try_place+0x16b0>
    15c6:	c7 85 68 ff ff ff 00 	movl   $0x0,-0x98(%rbp)
    15cd:	00 00 00 
    15d0:	8b 45 10             	mov    0x10(%rbp),%eax
    15d3:	83 f8 01             	cmp    $0x1,%eax
    15d6:	75 3f                	jne    1617 <try_place+0x1617>
    15d8:	f3 0f 10 8d 0c ff ff 	movss  -0xf4(%rbp),%xmm1
    15df:	ff 
    15e0:	66 0f ef c0          	pxor   %xmm0,%xmm0
    15e4:	f3 0f 2a 85 78 ff ff 	cvtsi2ssl -0x88(%rbp),%xmm0
    15eb:	ff 
    15ec:	f3 0f 5e c8          	divss  %xmm0,%xmm1
    15f0:	66 0f 7e c8          	movd   %xmm1,%eax
    15f4:	89 45 b4             	mov    %eax,-0x4c(%rbp)
    15f7:	48 8b 85 b0 fd ff ff 	mov    -0x250(%rbp),%rax
    15fe:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    1601:	89 95 80 fd ff ff    	mov    %edx,-0x280(%rbp)
    1607:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
    160e:	ff 
    160f:	48 89 c7             	mov    %rax,%rdi
    1612:	e8 00 00 00 00       	callq  1617 <try_place+0x1617>
    1617:	48 8b 85 b0 fd ff ff 	mov    -0x250(%rbp),%rax
    161e:	48 89 c7             	mov    %rax,%rdi
    1621:	e8 00 00 00 00       	callq  1626 <try_place+0x1626>
    1626:	48 8b 85 b8 fd ff ff 	mov    -0x248(%rbp),%rax
    162d:	66 0f ef c0          	pxor   %xmm0,%xmm0
    1631:	48 89 c7             	mov    %rax,%rdi
    1634:	e8 00 00 00 00       	callq  1639 <try_place+0x1639>
    1639:	66 0f 7e c0          	movd   %xmm0,%eax
    163d:	89 45 b8             	mov    %eax,-0x48(%rbp)
    1640:	48 8b 85 b8 fd ff ff 	mov    -0x248(%rbp),%rax
    1647:	48 83 ec 08          	sub    $0x8,%rsp
    164b:	8b 8d 60 ff ff ff    	mov    -0xa0(%rbp),%ecx
    1651:	8b 55 b8             	mov    -0x48(%rbp),%edx
    1654:	ff 75 50             	pushq  0x50(%rbp)
    1657:	ff 75 48             	pushq  0x48(%rbp)
    165a:	ff 75 40             	pushq  0x40(%rbp)
    165d:	ff 75 38             	pushq  0x38(%rbp)
    1660:	ff 75 30             	pushq  0x30(%rbp)
    1663:	ff 75 28             	pushq  0x28(%rbp)
    1666:	ff 75 20             	pushq  0x20(%rbp)
    1669:	ff 75 18             	pushq  0x18(%rbp)
    166c:	ff 75 10             	pushq  0x10(%rbp)
    166f:	89 8d 80 fd ff ff    	mov    %ecx,-0x280(%rbp)
    1675:	f3 0f 10 8d 80 fd ff 	movss  -0x280(%rbp),%xmm1
    167c:	ff 
    167d:	89 95 80 fd ff ff    	mov    %edx,-0x280(%rbp)
    1683:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
    168a:	ff 
    168b:	48 89 c7             	mov    %rax,%rdi
    168e:	e8 00 00 00 00       	callq  1693 <try_place+0x1693>
    1693:	48 83 c4 50          	add    $0x50,%rsp
    1697:	48 8d 95 0c ff ff ff 	lea    -0xf4(%rbp),%rdx
    169e:	48 8d 85 18 ff ff ff 	lea    -0xe8(%rbp),%rax
    16a5:	48 89 d6             	mov    %rdx,%rsi
    16a8:	48 89 c7             	mov    %rax,%rdi
    16ab:	e8 12 39 00 00       	callq  4fc2 <comp_td_costs>
    16b0:	83 85 68 ff ff ff 01 	addl   $0x1,-0x98(%rbp)
    16b7:	83 45 c8 01          	addl   $0x1,-0x38(%rbp)
    16bb:	8b 45 c8             	mov    -0x38(%rbp),%eax
    16be:	3b 45 c0             	cmp    -0x40(%rbp),%eax
    16c1:	0f 8c 57 fd ff ff    	jl     141e <try_place+0x141e>
    16c7:	8b 45 c0             	mov    -0x40(%rbp),%eax
    16ca:	01 45 cc             	add    %eax,-0x34(%rbp)
    16cd:	66 0f ef c0          	pxor   %xmm0,%xmm0
    16d1:	f3 0f 2a 45 c4       	cvtsi2ssl -0x3c(%rbp),%xmm0
    16d6:	66 0f ef c9          	pxor   %xmm1,%xmm1
    16da:	f3 0f 2a 4d c0       	cvtsi2ssl -0x40(%rbp),%xmm1
    16df:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    16e3:	66 0f 7e c0          	movd   %xmm0,%eax
    16e7:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%rbp)
    16ed:	83 7d c4 00          	cmpl   $0x0,-0x3c(%rbp)
    16f1:	75 46                	jne    1739 <try_place+0x1739>
    16f3:	f3 0f 10 85 1c ff ff 	movss  -0xe4(%rbp),%xmm0
    16fa:	ff 
    16fb:	f3 0f 5a f0          	cvtss2sd %xmm0,%xmm6
    16ff:	f2 0f 11 75 a0       	movsd  %xmm6,-0x60(%rbp)
    1704:	f3 0f 10 85 14 ff ff 	movss  -0xec(%rbp),%xmm0
    170b:	ff 
    170c:	f3 0f 5a f8          	cvtss2sd %xmm0,%xmm7
    1710:	f2 0f 11 7d 98       	movsd  %xmm7,-0x68(%rbp)
    1715:	f3 0f 10 85 0c ff ff 	movss  -0xf4(%rbp),%xmm0
    171c:	ff 
    171d:	f3 0f 5a e0          	cvtss2sd %xmm0,%xmm4
    1721:	f2 0f 11 65 88       	movsd  %xmm4,-0x78(%rbp)
    1726:	f3 0f 10 85 18 ff ff 	movss  -0xe8(%rbp),%xmm0
    172d:	ff 
    172e:	f3 0f 5a e8          	cvtss2sd %xmm0,%xmm5
    1732:	f2 0f 11 6d 90       	movsd  %xmm5,-0x70(%rbp)
    1737:	eb 6c                	jmp    17a5 <try_place+0x17a5>
    1739:	66 0f ef c0          	pxor   %xmm0,%xmm0
    173d:	f2 0f 2a 45 c4       	cvtsi2sdl -0x3c(%rbp),%xmm0
    1742:	f2 0f 10 4d a0       	movsd  -0x60(%rbp),%xmm1
    1747:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
    174b:	66 48 0f 7e c8       	movq   %xmm1,%rax
    1750:	48 89 45 a0          	mov    %rax,-0x60(%rbp)
    1754:	66 0f ef c0          	pxor   %xmm0,%xmm0
    1758:	f2 0f 2a 45 c4       	cvtsi2sdl -0x3c(%rbp),%xmm0
    175d:	f2 0f 10 4d 98       	movsd  -0x68(%rbp),%xmm1
    1762:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
    1766:	66 48 0f 7e c8       	movq   %xmm1,%rax
    176b:	48 89 45 98          	mov    %rax,-0x68(%rbp)
    176f:	66 0f ef c0          	pxor   %xmm0,%xmm0
    1773:	f2 0f 2a 45 c4       	cvtsi2sdl -0x3c(%rbp),%xmm0
    1778:	f2 0f 10 4d 88       	movsd  -0x78(%rbp),%xmm1
    177d:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
    1781:	66 48 0f 7e c8       	movq   %xmm1,%rax
    1786:	48 89 45 88          	mov    %rax,-0x78(%rbp)
    178a:	66 0f ef c0          	pxor   %xmm0,%xmm0
    178e:	f2 0f 2a 45 c4       	cvtsi2sdl -0x3c(%rbp),%xmm0
    1793:	f2 0f 10 4d 90       	movsd  -0x70(%rbp),%xmm1
    1798:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
    179c:	66 48 0f 7e c8       	movq   %xmm1,%rax
    17a1:	48 89 45 90          	mov    %rax,-0x70(%rbp)
    17a5:	48 8b 4d a0          	mov    -0x60(%rbp),%rcx
    17a9:	48 8b 55 80          	mov    -0x80(%rbp),%rdx
    17ad:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    17b0:	48 89 8d 80 fd ff ff 	mov    %rcx,-0x280(%rbp)
    17b7:	f2 0f 10 8d 80 fd ff 	movsd  -0x280(%rbp),%xmm1
    17be:	ff 
    17bf:	48 89 95 80 fd ff ff 	mov    %rdx,-0x280(%rbp)
    17c6:	f2 0f 10 85 80 fd ff 	movsd  -0x280(%rbp),%xmm0
    17cd:	ff 
    17ce:	89 c7                	mov    %eax,%edi
    17d0:	e8 9d 06 00 00       	callq  1e72 <get_std_dev>
    17d5:	66 48 0f 7e c0       	movq   %xmm0,%rax
    17da:	48 89 85 30 ff ff ff 	mov    %rax,-0xd0(%rbp)
    17e1:	f3 0f 5a b5 60 ff ff 	cvtss2sd -0xa0(%rbp),%xmm6
    17e8:	ff 
    17e9:	66 48 0f 7e f2       	movq   %xmm6,%rdx
    17ee:	f3 0f 10 85 20 ff ff 	movss  -0xe0(%rbp),%xmm0
    17f5:	ff 
    17f6:	f3 0f 5a f8          	cvtss2sd %xmm0,%xmm7
    17fa:	66 48 0f 7e f8       	movq   %xmm7,%rax
    17ff:	f3 0f 5a 9d 38 ff ff 	cvtss2sd -0xc8(%rbp),%xmm3
    1806:	ff 
    1807:	f3 0f 5a 55 b8       	cvtss2sd -0x48(%rbp),%xmm2
    180c:	f3 0f 5a 4d b4       	cvtss2sd -0x4c(%rbp),%xmm1
    1811:	f3 0f 10 85 24 ff ff 	movss  -0xdc(%rbp),%xmm0
    1818:	ff 
    1819:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    181d:	48 83 ec 08          	sub    $0x8,%rsp
    1821:	8b 4d cc             	mov    -0x34(%rbp),%ecx
    1824:	4c 8b 55 88          	mov    -0x78(%rbp),%r10
    1828:	4c 8b 4d 90          	mov    -0x70(%rbp),%r9
    182c:	4c 8b 45 98          	mov    -0x68(%rbp),%r8
    1830:	48 8b 7d a0          	mov    -0x60(%rbp),%rdi
    1834:	52                   	push   %rdx
    1835:	50                   	push   %rax
    1836:	ff b5 30 ff ff ff    	pushq  -0xd0(%rbp)
    183c:	89 ce                	mov    %ecx,%esi
    183e:	66 0f 28 fb          	movapd %xmm3,%xmm7
    1842:	66 0f 28 f2          	movapd %xmm2,%xmm6
    1846:	66 0f 28 e9          	movapd %xmm1,%xmm5
    184a:	4c 89 95 80 fd ff ff 	mov    %r10,-0x280(%rbp)
    1851:	f2 0f 10 a5 80 fd ff 	movsd  -0x280(%rbp),%xmm4
    1858:	ff 
    1859:	4c 89 8d 80 fd ff ff 	mov    %r9,-0x280(%rbp)
    1860:	f2 0f 10 9d 80 fd ff 	movsd  -0x280(%rbp),%xmm3
    1867:	ff 
    1868:	4c 89 85 80 fd ff ff 	mov    %r8,-0x280(%rbp)
    186f:	f2 0f 10 95 80 fd ff 	movsd  -0x280(%rbp),%xmm2
    1876:	ff 
    1877:	48 89 bd 80 fd ff ff 	mov    %rdi,-0x280(%rbp)
    187e:	f2 0f 10 8d 80 fd ff 	movsd  -0x280(%rbp),%xmm1
    1885:	ff 
    1886:	bf 00 00 00 00       	mov    $0x0,%edi
    188b:	b8 08 00 00 00       	mov    $0x8,%eax
    1890:	e8 00 00 00 00       	callq  1895 <try_place+0x1895>
    1895:	48 83 c4 20          	add    $0x20,%rsp
    1899:	8b b5 0c ff ff ff    	mov    -0xf4(%rbp),%esi
    189f:	8b 55 10             	mov    0x10(%rbp),%edx
    18a2:	8b 4d 3c             	mov    0x3c(%rbp),%ecx
    18a5:	8b 45 1c             	mov    0x1c(%rbp),%eax
    18a8:	89 c7                	mov    %eax,%edi
    18aa:	44 8b 85 18 ff ff ff 	mov    -0xe8(%rbp),%r8d
    18b1:	8b 85 14 ff ff ff    	mov    -0xec(%rbp),%eax
    18b7:	89 b5 80 fd ff ff    	mov    %esi,-0x280(%rbp)
    18bd:	f3 0f 10 95 80 fd ff 	movss  -0x280(%rbp),%xmm2
    18c4:	ff 
    18c5:	89 ce                	mov    %ecx,%esi
    18c7:	44 89 85 80 fd ff ff 	mov    %r8d,-0x280(%rbp)
    18ce:	f3 0f 10 8d 80 fd ff 	movss  -0x280(%rbp),%xmm1
    18d5:	ff 
    18d6:	89 85 80 fd ff ff    	mov    %eax,-0x280(%rbp)
    18dc:	f3 0f 10 85 80 fd ff 	movss  -0x280(%rbp),%xmm0
    18e3:	ff 
    18e4:	e8 4c 77 00 00       	callq  9035 <check_place>
    18e9:	8b 45 44             	mov    0x44(%rbp),%eax
    18ec:	85 c0                	test   %eax,%eax
    18ee:	0f 84 ba 00 00 00    	je     19ae <try_place+0x19ae>
    18f4:	8b 45 10             	mov    0x10(%rbp),%eax
    18f7:	85 c0                	test   %eax,%eax
    18f9:	0f 85 af 00 00 00    	jne    19ae <try_place+0x19ae>
    18ff:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%rbp)
    1906:	00 00 00 
    1909:	eb 78                	jmp    1983 <try_place+0x1983>
    190b:	c7 85 70 ff ff ff 01 	movl   $0x1,-0x90(%rbp)
    1912:	00 00 00 
    1915:	eb 39                	jmp    1950 <try_place+0x1950>
    1917:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 191e <try_place+0x191e>
    191e:	8b 95 74 ff ff ff    	mov    -0x8c(%rbp),%edx
    1924:	48 63 d2             	movslq %edx,%rdx
    1927:	48 c1 e2 03          	shl    $0x3,%rdx
    192b:	48 01 d0             	add    %rdx,%rax
    192e:	48 8b 00             	mov    (%rax),%rax
    1931:	8b 95 70 ff ff ff    	mov    -0x90(%rbp),%edx
    1937:	48 63 d2             	movslq %edx,%rdx
    193a:	48 c1 e2 02          	shl    $0x2,%rdx
    193e:	48 01 c2             	add    %rax,%rdx
    1941:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1947 <try_place+0x1947>
    1947:	89 02                	mov    %eax,(%rdx)
    1949:	83 85 70 ff ff ff 01 	addl   $0x1,-0x90(%rbp)
    1950:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1957 <try_place+0x1957>
    1957:	8b 85 74 ff ff ff    	mov    -0x8c(%rbp),%eax
    195d:	48 63 d0             	movslq %eax,%rdx
    1960:	48 89 d0             	mov    %rdx,%rax
    1963:	48 c1 e0 02          	shl    $0x2,%rax
    1967:	48 01 d0             	add    %rdx,%rax
    196a:	48 c1 e0 03          	shl    $0x3,%rax
    196e:	48 01 c8             	add    %rcx,%rax
    1971:	8b 40 08             	mov    0x8(%rax),%eax
    1974:	3b 85 70 ff ff ff    	cmp    -0x90(%rbp),%eax
    197a:	7d 9b                	jge    1917 <try_place+0x1917>
    197c:	83 85 74 ff ff ff 01 	addl   $0x1,-0x8c(%rbp)
    1983:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1989 <try_place+0x1989>
    1989:	39 85 74 ff ff ff    	cmp    %eax,-0x8c(%rbp)
    198f:	0f 8c 76 ff ff ff    	jl     190b <try_place+0x190b>
    1995:	48 8d 95 0c ff ff ff 	lea    -0xf4(%rbp),%rdx
    199c:	48 8d 85 18 ff ff ff 	lea    -0xe8(%rbp),%rax
    19a3:	48 89 d6             	mov    %rdx,%rsi
    19a6:	48 89 c7             	mov    %rax,%rdi
    19a9:	e8 14 36 00 00       	callq  4fc2 <comp_td_costs>
    19ae:	8b 45 10             	mov    0x10(%rbp),%eax
    19b1:	83 f8 01             	cmp    $0x1,%eax
    19b4:	74 0f                	je     19c5 <try_place+0x19c5>
    19b6:	8b 45 10             	mov    0x10(%rbp),%eax
    19b9:	83 f8 02             	cmp    $0x2,%eax
    19bc:	74 07                	je     19c5 <try_place+0x19c5>
    19be:	8b 45 44             	mov    0x44(%rbp),%eax
    19c1:	85 c0                	test   %eax,%eax
    19c3:	74 51                	je     1a16 <try_place+0x1a16>
    19c5:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 19cc <try_place+0x19cc>
    19cc:	48 89 85 b0 fd ff ff 	mov    %rax,-0x250(%rbp)
    19d3:	48 8b 85 b0 fd ff ff 	mov    -0x250(%rbp),%rax
    19da:	48 89 c7             	mov    %rax,%rdi
    19dd:	e8 00 00 00 00       	callq  19e2 <try_place+0x19e2>
    19e2:	48 8b 85 b8 fd ff ff 	mov    -0x248(%rbp),%rax
    19e9:	66 0f ef c0          	pxor   %xmm0,%xmm0
    19ed:	48 89 c7             	mov    %rax,%rdi
    19f0:	e8 00 00 00 00       	callq  19f5 <try_place+0x19f5>
    19f5:	66 0f 7e c0          	movd   %xmm0,%eax
    19f9:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%rbp)
    19ff:	f3 0f 5a 85 28 ff ff 	cvtss2sd -0xd8(%rbp),%xmm0
    1a06:	ff 
    1a07:	bf 00 00 00 00       	mov    $0x0,%edi
    1a0c:	b8 01 00 00 00       	mov    $0x1,%eax
    1a11:	e8 00 00 00 00       	callq  1a16 <try_place+0x1a16>
    1a16:	f3 0f 5a 5d b8       	cvtss2sd -0x48(%rbp),%xmm3
    1a1b:	f3 0f 10 85 18 ff ff 	movss  -0xe8(%rbp),%xmm0
    1a22:	ff 
    1a23:	f3 0f 5a d0          	cvtss2sd %xmm0,%xmm2
    1a27:	f3 0f 10 85 14 ff ff 	movss  -0xec(%rbp),%xmm0
    1a2e:	ff 
    1a2f:	f3 0f 5a c8          	cvtss2sd %xmm0,%xmm1
    1a33:	f3 0f 10 85 1c ff ff 	movss  -0xe4(%rbp),%xmm0
    1a3a:	ff 
    1a3b:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    1a3f:	8b 95 4c ff ff ff    	mov    -0xb4(%rbp),%edx
    1a45:	48 8d 85 c0 fd ff ff 	lea    -0x240(%rbp),%rax
    1a4c:	be 00 00 00 00       	mov    $0x0,%esi
    1a51:	48 89 c7             	mov    %rax,%rdi
    1a54:	b8 04 00 00 00       	mov    $0x4,%eax
    1a59:	e8 00 00 00 00       	callq  1a5e <try_place+0x1a5e>
    1a5e:	f3 0f 10 85 0c ff ff 	movss  -0xf4(%rbp),%xmm0
    1a65:	ff 
    1a66:	f3 0f 5a d8          	cvtss2sd %xmm0,%xmm3
    1a6a:	f3 0f 10 85 18 ff ff 	movss  -0xe8(%rbp),%xmm0
    1a71:	ff 
    1a72:	f3 0f 5a d0          	cvtss2sd %xmm0,%xmm2
    1a76:	f3 0f 10 85 14 ff ff 	movss  -0xec(%rbp),%xmm0
    1a7d:	ff 
    1a7e:	f3 0f 5a c8          	cvtss2sd %xmm0,%xmm1
    1a82:	f3 0f 10 85 1c ff ff 	movss  -0xe4(%rbp),%xmm0
    1a89:	ff 
    1a8a:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    1a8e:	bf 00 00 00 00       	mov    $0x0,%edi
    1a93:	b8 04 00 00 00       	mov    $0x4,%eax
    1a98:	e8 00 00 00 00       	callq  1a9d <try_place+0x1a9d>
    1a9d:	48 8d 85 c0 fd ff ff 	lea    -0x240(%rbp),%rax
    1aa4:	b9 00 00 00 00       	mov    $0x0,%ecx
    1aa9:	ba 01 00 00 00       	mov    $0x1,%edx
    1aae:	48 89 c6             	mov    %rax,%rsi
    1ab1:	bf 01 00 00 00       	mov    $0x1,%edi
    1ab6:	e8 00 00 00 00       	callq  1abb <try_place+0x1abb>
    1abb:	8b 45 10             	mov    0x10(%rbp),%eax
    1abe:	83 f8 01             	cmp    $0x1,%eax
    1ac1:	74 0f                	je     1ad2 <try_place+0x1ad2>
    1ac3:	8b 45 10             	mov    0x10(%rbp),%eax
    1ac6:	83 f8 02             	cmp    $0x2,%eax
    1ac9:	74 07                	je     1ad2 <try_place+0x1ad2>
    1acb:	8b 45 44             	mov    0x44(%rbp),%eax
    1ace:	85 c0                	test   %eax,%eax
    1ad0:	74 67                	je     1b39 <try_place+0x1b39>
    1ad2:	48 8b 85 58 ff ff ff 	mov    -0xa8(%rbp),%rax
    1ad9:	48 89 85 b0 fd ff ff 	mov    %rax,-0x250(%rbp)
    1ae0:	48 8b 8d f8 fe ff ff 	mov    -0x108(%rbp),%rcx
    1ae7:	48 8b 95 00 ff ff ff 	mov    -0x100(%rbp),%rdx
    1aee:	8b 45 3c             	mov    0x3c(%rbp),%eax
    1af1:	8b 75 1c             	mov    0x1c(%rbp),%esi
    1af4:	89 f7                	mov    %esi,%edi
    1af6:	48 83 ec 08          	sub    $0x8,%rsp
    1afa:	ff 75 50             	pushq  0x50(%rbp)
    1afd:	ff 75 48             	pushq  0x48(%rbp)
    1b00:	ff 75 40             	pushq  0x40(%rbp)
    1b03:	ff 75 38             	pushq  0x38(%rbp)
    1b06:	ff 75 30             	pushq  0x30(%rbp)
    1b09:	ff 75 28             	pushq  0x28(%rbp)
    1b0c:	ff 75 20             	pushq  0x20(%rbp)
    1b0f:	ff 75 18             	pushq  0x18(%rbp)
    1b12:	ff 75 10             	pushq  0x10(%rbp)
    1b15:	89 c6                	mov    %eax,%esi
    1b17:	e8 8f 41 00 00       	callq  5cab <free_placement_structs>
    1b1c:	48 83 c4 50          	add    $0x50,%rsp
    1b20:	48 8d 95 b8 fd ff ff 	lea    -0x248(%rbp),%rdx
    1b27:	48 8d 85 b0 fd ff ff 	lea    -0x250(%rbp),%rax
    1b2e:	48 89 d6             	mov    %rdx,%rsi
    1b31:	48 89 c7             	mov    %rax,%rdi
    1b34:	e8 00 00 00 00       	callq  1b39 <try_place+0x1b39>
    1b39:	48 8b 85 88 fd ff ff 	mov    -0x278(%rbp),%rax
    1b40:	48 8b 00             	mov    (%rax),%rax
    1b43:	48 85 c0             	test   %rax,%rax
    1b46:	0f 84 93 00 00 00    	je     1bdf <try_place+0x1bdf>
    1b4c:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%rbp)
    1b53:	00 00 00 
    1b56:	eb 67                	jmp    1bbf <try_place+0x1bbf>
    1b58:	48 8b 85 88 fd ff ff 	mov    -0x278(%rbp),%rax
    1b5f:	48 8b 00             	mov    (%rax),%rax
    1b62:	8b 95 74 ff ff ff    	mov    -0x8c(%rbp),%edx
    1b68:	48 63 d2             	movslq %edx,%rdx
    1b6b:	48 c1 e2 03          	shl    $0x3,%rdx
    1b6f:	48 01 d0             	add    %rdx,%rax
    1b72:	48 8b 00             	mov    (%rax),%rax
    1b75:	48 85 c0             	test   %rax,%rax
    1b78:	75 19                	jne    1b93 <try_place+0x1b93>
    1b7a:	b9 00 00 00 00       	mov    $0x0,%ecx
    1b7f:	ba c2 03 00 00       	mov    $0x3c2,%edx
    1b84:	be 00 00 00 00       	mov    $0x0,%esi
    1b89:	bf 00 00 00 00       	mov    $0x0,%edi
    1b8e:	e8 00 00 00 00       	callq  1b93 <try_place+0x1b93>
    1b93:	48 8b 85 88 fd ff ff 	mov    -0x278(%rbp),%rax
    1b9a:	48 8b 00             	mov    (%rax),%rax
    1b9d:	8b 95 74 ff ff ff    	mov    -0x8c(%rbp),%edx
    1ba3:	48 63 d2             	movslq %edx,%rdx
    1ba6:	48 c1 e2 03          	shl    $0x3,%rdx
    1baa:	48 01 d0             	add    %rdx,%rax
    1bad:	48 8b 00             	mov    (%rax),%rax
    1bb0:	48 89 c7             	mov    %rax,%rdi
    1bb3:	e8 00 00 00 00       	callq  1bb8 <try_place+0x1bb8>
    1bb8:	83 85 74 ff ff ff 01 	addl   $0x1,-0x8c(%rbp)
    1bbf:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1bc5 <try_place+0x1bc5>
    1bc5:	39 85 74 ff ff ff    	cmp    %eax,-0x8c(%rbp)
    1bcb:	7c 8b                	jl     1b58 <try_place+0x1b58>
    1bcd:	48 8b 85 88 fd ff ff 	mov    -0x278(%rbp),%rax
    1bd4:	48 8b 00             	mov    (%rax),%rax
    1bd7:	48 89 c7             	mov    %rax,%rdi
    1bda:	e8 00 00 00 00       	callq  1bdf <try_place+0x1bdf>
    1bdf:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1be5 <try_place+0x1be5>
    1be5:	48 98                	cltq   
    1be7:	48 c1 e0 03          	shl    $0x3,%rax
    1beb:	48 89 c7             	mov    %rax,%rdi
    1bee:	e8 00 00 00 00       	callq  1bf3 <try_place+0x1bf3>
    1bf3:	48 89 c2             	mov    %rax,%rdx
    1bf6:	48 8b 85 88 fd ff ff 	mov    -0x278(%rbp),%rax
    1bfd:	48 89 10             	mov    %rdx,(%rax)
    1c00:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%rbp)
    1c07:	00 00 00 
    1c0a:	eb 32                	jmp    1c3e <try_place+0x1c3e>
    1c0c:	48 8b 85 88 fd ff ff 	mov    -0x278(%rbp),%rax
    1c13:	48 8b 00             	mov    (%rax),%rax
    1c16:	8b 95 74 ff ff ff    	mov    -0x8c(%rbp),%edx
    1c1c:	48 63 d2             	movslq %edx,%rdx
    1c1f:	48 c1 e2 03          	shl    $0x3,%rdx
    1c23:	48 8d 1c 10          	lea    (%rax,%rdx,1),%rbx
    1c27:	8b 85 74 ff ff ff    	mov    -0x8c(%rbp),%eax
    1c2d:	89 c7                	mov    %eax,%edi
    1c2f:	e8 00 00 00 00       	callq  1c34 <try_place+0x1c34>
    1c34:	48 89 03             	mov    %rax,(%rbx)
    1c37:	83 85 74 ff ff ff 01 	addl   $0x1,-0x8c(%rbp)
    1c3e:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1c44 <try_place+0x1c44>
    1c44:	39 85 74 ff ff ff    	cmp    %eax,-0x8c(%rbp)
    1c4a:	7c c0                	jl     1c0c <try_place+0x1c0c>
    1c4c:	48 8b 85 50 ff ff ff 	mov    -0xb0(%rbp),%rax
    1c53:	48 89 c7             	mov    %rax,%rdi
    1c56:	e8 00 00 00 00       	callq  1c5b <try_place+0x1c5b>
    1c5b:	48 8d 65 d8          	lea    -0x28(%rbp),%rsp
    1c5f:	5b                   	pop    %rbx
    1c60:	41 5c                	pop    %r12
    1c62:	41 5d                	pop    %r13
    1c64:	41 5e                	pop    %r14
    1c66:	41 5f                	pop    %r15
    1c68:	5d                   	pop    %rbp
    1c69:	c3                   	retq   

0000000000001c6a <count_connections>:
    1c6a:	55                   	push   %rbp
    1c6b:	48 89 e5             	mov    %rsp,%rbp
    1c6e:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    1c75:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    1c7c:	eb 4f                	jmp    1ccd <count_connections+0x63>
    1c7e:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1c85 <count_connections+0x1b>
    1c85:	8b 45 f8             	mov    -0x8(%rbp),%eax
    1c88:	48 63 d0             	movslq %eax,%rdx
    1c8b:	48 89 d0             	mov    %rdx,%rax
    1c8e:	48 c1 e0 02          	shl    $0x2,%rax
    1c92:	48 01 d0             	add    %rdx,%rax
    1c95:	48 c1 e0 03          	shl    $0x3,%rax
    1c99:	48 01 c8             	add    %rcx,%rax
    1c9c:	8b 40 20             	mov    0x20(%rax),%eax
    1c9f:	85 c0                	test   %eax,%eax
    1ca1:	74 02                	je     1ca5 <count_connections+0x3b>
    1ca3:	eb 24                	jmp    1cc9 <count_connections+0x5f>
    1ca5:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1cac <count_connections+0x42>
    1cac:	8b 45 f8             	mov    -0x8(%rbp),%eax
    1caf:	48 63 d0             	movslq %eax,%rdx
    1cb2:	48 89 d0             	mov    %rdx,%rax
    1cb5:	48 c1 e0 02          	shl    $0x2,%rax
    1cb9:	48 01 d0             	add    %rdx,%rax
    1cbc:	48 c1 e0 03          	shl    $0x3,%rax
    1cc0:	48 01 c8             	add    %rcx,%rax
    1cc3:	8b 40 08             	mov    0x8(%rax),%eax
    1cc6:	01 45 fc             	add    %eax,-0x4(%rbp)
    1cc9:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    1ccd:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1cd3 <count_connections+0x69>
    1cd3:	39 45 f8             	cmp    %eax,-0x8(%rbp)
    1cd6:	7c a6                	jl     1c7e <count_connections+0x14>
    1cd8:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1cdb:	5d                   	pop    %rbp
    1cdc:	c3                   	retq   

0000000000001cdd <compute_net_pin_index_values>:
    1cdd:	55                   	push   %rbp
    1cde:	48 89 e5             	mov    %rsp,%rbp
    1ce1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
    1ce8:	eb 6d                	jmp    1d57 <compute_net_pin_index_values+0x7a>
    1cea:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1cf1 <compute_net_pin_index_values+0x14>
    1cf1:	8b 45 f4             	mov    -0xc(%rbp),%eax
    1cf4:	48 63 d0             	movslq %eax,%rdx
    1cf7:	48 89 d0             	mov    %rdx,%rax
    1cfa:	48 c1 e0 02          	shl    $0x2,%rax
    1cfe:	48 01 d0             	add    %rdx,%rax
    1d01:	48 c1 e0 03          	shl    $0x3,%rax
    1d05:	48 01 c8             	add    %rcx,%rax
    1d08:	48 8b 40 08          	mov    0x8(%rax),%rax
    1d0c:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    1d10:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%rbp)
    1d17:	eb 2e                	jmp    1d47 <compute_net_pin_index_values+0x6a>
    1d19:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 1d20 <compute_net_pin_index_values+0x43>
    1d20:	8b 55 f4             	mov    -0xc(%rbp),%edx
    1d23:	48 63 d2             	movslq %edx,%rdx
    1d26:	48 c1 e2 03          	shl    $0x3,%rdx
    1d2a:	48 01 d0             	add    %rdx,%rax
    1d2d:	48 8b 00             	mov    (%rax),%rax
    1d30:	8b 55 f0             	mov    -0x10(%rbp),%edx
    1d33:	48 63 d2             	movslq %edx,%rdx
    1d36:	48 c1 e2 02          	shl    $0x2,%rdx
    1d3a:	48 01 d0             	add    %rdx,%rax
    1d3d:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%rax)
    1d43:	83 45 f0 01          	addl   $0x1,-0x10(%rbp)
    1d47:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1d4b:	8b 40 08             	mov    0x8(%rax),%eax
    1d4e:	3b 45 f0             	cmp    -0x10(%rbp),%eax
    1d51:	7f c6                	jg     1d19 <compute_net_pin_index_values+0x3c>
    1d53:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
    1d57:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1d5d <compute_net_pin_index_values+0x80>
    1d5d:	39 45 f4             	cmp    %eax,-0xc(%rbp)
    1d60:	7c 88                	jl     1cea <compute_net_pin_index_values+0xd>
    1d62:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    1d69:	e9 f3 00 00 00       	jmpq   1e61 <compute_net_pin_index_values+0x184>
    1d6e:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1d75 <compute_net_pin_index_values+0x98>
    1d75:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1d78:	48 63 d0             	movslq %eax,%rdx
    1d7b:	48 89 d0             	mov    %rdx,%rax
    1d7e:	48 c1 e0 02          	shl    $0x2,%rax
    1d82:	48 01 d0             	add    %rdx,%rax
    1d85:	48 c1 e0 03          	shl    $0x3,%rax
    1d89:	48 01 c8             	add    %rcx,%rax
    1d8c:	8b 40 20             	mov    0x20(%rax),%eax
    1d8f:	85 c0                	test   %eax,%eax
    1d91:	74 05                	je     1d98 <compute_net_pin_index_values+0xbb>
    1d93:	e9 c5 00 00 00       	jmpq   1e5d <compute_net_pin_index_values+0x180>
    1d98:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    1d9f:	e9 8f 00 00 00       	jmpq   1e33 <compute_net_pin_index_values+0x156>
    1da4:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1dab <compute_net_pin_index_values+0xce>
    1dab:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1dae:	48 63 d0             	movslq %eax,%rdx
    1db1:	48 89 d0             	mov    %rdx,%rax
    1db4:	48 c1 e0 02          	shl    $0x2,%rax
    1db8:	48 01 d0             	add    %rdx,%rax
    1dbb:	48 c1 e0 03          	shl    $0x3,%rax
    1dbf:	48 01 c8             	add    %rcx,%rax
    1dc2:	48 8b 40 10          	mov    0x10(%rax),%rax
    1dc6:	8b 55 f8             	mov    -0x8(%rbp),%edx
    1dc9:	48 63 d2             	movslq %edx,%rdx
    1dcc:	48 c1 e2 02          	shl    $0x2,%rdx
    1dd0:	48 01 d0             	add    %rdx,%rax
    1dd3:	8b 00                	mov    (%rax),%eax
    1dd5:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    1dd8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 1ddf <compute_net_pin_index_values+0x102>
    1ddf:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    1de2:	48 63 d2             	movslq %edx,%rdx
    1de5:	48 c1 e2 03          	shl    $0x3,%rdx
    1de9:	48 01 d0             	add    %rdx,%rax
    1dec:	48 8b 08             	mov    (%rax),%rcx
    1def:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 1df6 <compute_net_pin_index_values+0x119>
    1df6:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1df9:	48 63 d0             	movslq %eax,%rdx
    1dfc:	48 89 d0             	mov    %rdx,%rax
    1dff:	48 c1 e0 02          	shl    $0x2,%rax
    1e03:	48 01 d0             	add    %rdx,%rax
    1e06:	48 c1 e0 03          	shl    $0x3,%rax
    1e0a:	48 01 f0             	add    %rsi,%rax
    1e0d:	48 8b 40 18          	mov    0x18(%rax),%rax
    1e11:	8b 55 f8             	mov    -0x8(%rbp),%edx
    1e14:	48 63 d2             	movslq %edx,%rdx
    1e17:	48 c1 e2 02          	shl    $0x2,%rdx
    1e1b:	48 01 d0             	add    %rdx,%rax
    1e1e:	8b 00                	mov    (%rax),%eax
    1e20:	48 98                	cltq   
    1e22:	48 c1 e0 02          	shl    $0x2,%rax
    1e26:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    1e2a:	8b 45 f8             	mov    -0x8(%rbp),%eax
    1e2d:	89 02                	mov    %eax,(%rdx)
    1e2f:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    1e33:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1e3a <compute_net_pin_index_values+0x15d>
    1e3a:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1e3d:	48 63 d0             	movslq %eax,%rdx
    1e40:	48 89 d0             	mov    %rdx,%rax
    1e43:	48 c1 e0 02          	shl    $0x2,%rax
    1e47:	48 01 d0             	add    %rdx,%rax
    1e4a:	48 c1 e0 03          	shl    $0x3,%rax
    1e4e:	48 01 c8             	add    %rcx,%rax
    1e51:	8b 40 08             	mov    0x8(%rax),%eax
    1e54:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    1e57:	0f 8d 47 ff ff ff    	jge    1da4 <compute_net_pin_index_values+0xc7>
    1e5d:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    1e61:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1e67 <compute_net_pin_index_values+0x18a>
    1e67:	39 45 fc             	cmp    %eax,-0x4(%rbp)
    1e6a:	0f 8c fe fe ff ff    	jl     1d6e <compute_net_pin_index_values+0x91>
    1e70:	5d                   	pop    %rbp
    1e71:	c3                   	retq   

0000000000001e72 <get_std_dev>:
    1e72:	55                   	push   %rbp
    1e73:	48 89 e5             	mov    %rsp,%rbp
    1e76:	48 83 ec 30          	sub    $0x30,%rsp
    1e7a:	89 7d ec             	mov    %edi,-0x14(%rbp)
    1e7d:	f2 0f 11 45 e0       	movsd  %xmm0,-0x20(%rbp)
    1e82:	f2 0f 11 4d d8       	movsd  %xmm1,-0x28(%rbp)
    1e87:	83 7d ec 01          	cmpl   $0x1,-0x14(%rbp)
    1e8b:	7f 0b                	jg     1e98 <get_std_dev+0x26>
    1e8d:	b8 00 00 00 00       	mov    $0x0,%eax
    1e92:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1e96:	eb 3b                	jmp    1ed3 <get_std_dev+0x61>
    1e98:	66 0f ef c0          	pxor   %xmm0,%xmm0
    1e9c:	f2 0f 2a 45 ec       	cvtsi2sdl -0x14(%rbp),%xmm0
    1ea1:	f2 0f 59 45 d8       	mulsd  -0x28(%rbp),%xmm0
    1ea6:	f2 0f 59 45 d8       	mulsd  -0x28(%rbp),%xmm0
    1eab:	f2 0f 10 4d e0       	movsd  -0x20(%rbp),%xmm1
    1eb0:	f2 0f 5c c8          	subsd  %xmm0,%xmm1
    1eb4:	66 0f 28 c1          	movapd %xmm1,%xmm0
    1eb8:	8b 45 ec             	mov    -0x14(%rbp),%eax
    1ebb:	83 e8 01             	sub    $0x1,%eax
    1ebe:	66 0f ef c9          	pxor   %xmm1,%xmm1
    1ec2:	f2 0f 2a c8          	cvtsi2sd %eax,%xmm1
    1ec6:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
    1eca:	66 48 0f 7e c0       	movq   %xmm0,%rax
    1ecf:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1ed3:	f2 0f 10 45 f8       	movsd  -0x8(%rbp),%xmm0
    1ed8:	66 0f ef c9          	pxor   %xmm1,%xmm1
    1edc:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
    1ee0:	76 1d                	jbe    1eff <get_std_dev+0x8d>
    1ee2:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1ee6:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    1eea:	f2 0f 10 45 d0       	movsd  -0x30(%rbp),%xmm0
    1eef:	e8 00 00 00 00       	callq  1ef4 <get_std_dev+0x82>
    1ef4:	66 48 0f 7e c0       	movq   %xmm0,%rax
    1ef9:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1efd:	eb 09                	jmp    1f08 <get_std_dev+0x96>
    1eff:	b8 00 00 00 00       	mov    $0x0,%eax
    1f04:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1f08:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1f0c:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    1f10:	f2 0f 10 45 d0       	movsd  -0x30(%rbp),%xmm0
    1f15:	c9                   	leaveq 
    1f16:	c3                   	retq   

0000000000001f17 <update_rlim>:
    1f17:	55                   	push   %rbp
    1f18:	48 89 e5             	mov    %rsp,%rbp
    1f1b:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    1f1f:	f3 0f 11 45 e4       	movss  %xmm0,-0x1c(%rbp)
    1f24:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1f28:	f3 0f 10 00          	movss  (%rax),%xmm0
    1f2c:	f3 0f 5a c8          	cvtss2sd %xmm0,%xmm1
    1f30:	f3 0f 5a 45 e4       	cvtss2sd -0x1c(%rbp),%xmm0
    1f35:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # 1f3d <update_rlim+0x26>
    1f3c:	00 
    1f3d:	f2 0f 58 c2          	addsd  %xmm2,%xmm0
    1f41:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    1f45:	f2 0f 5a d8          	cvtsd2ss %xmm0,%xmm3
    1f49:	66 0f 7e d8          	movd   %xmm3,%eax
    1f4d:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    1f51:	89 02                	mov    %eax,(%rdx)
    1f53:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 1f59 <update_rlim+0x42>
    1f59:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1f5f <update_rlim+0x48>
    1f5f:	39 c2                	cmp    %eax,%edx
    1f61:	0f 4d c2             	cmovge %edx,%eax
    1f64:	66 0f ef e4          	pxor   %xmm4,%xmm4
    1f68:	f3 0f 2a e0          	cvtsi2ss %eax,%xmm4
    1f6c:	66 0f 7e e0          	movd   %xmm4,%eax
    1f70:	89 45 fc             	mov    %eax,-0x4(%rbp)
    1f73:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1f77:	f3 0f 10 00          	movss  (%rax),%xmm0
    1f7b:	0f 2e 45 fc          	ucomiss -0x4(%rbp),%xmm0
    1f7f:	76 05                	jbe    1f86 <update_rlim+0x6f>
    1f81:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1f84:	eb 06                	jmp    1f8c <update_rlim+0x75>
    1f86:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1f8a:	8b 00                	mov    (%rax),%eax
    1f8c:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    1f90:	89 02                	mov    %eax,(%rdx)
    1f92:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1f96:	f3 0f 10 00          	movss  (%rax),%xmm0
    1f9a:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 1fa2 <update_rlim+0x8b>
    1fa1:	00 
    1fa2:	0f 2e c1             	ucomiss %xmm1,%xmm0
    1fa5:	76 08                	jbe    1faf <update_rlim+0x98>
    1fa7:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1fab:	8b 00                	mov    (%rax),%eax
    1fad:	eb 06                	jmp    1fb5 <update_rlim+0x9e>
    1faf:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 1fb5 <update_rlim+0x9e>
    1fb5:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    1fb9:	89 02                	mov    %eax,(%rdx)
    1fbb:	5d                   	pop    %rbp
    1fbc:	c3                   	retq   

0000000000001fbd <update_t>:
    1fbd:	55                   	push   %rbp
    1fbe:	48 89 e5             	mov    %rsp,%rbp
    1fc1:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    1fc5:	f3 0f 11 45 f4       	movss  %xmm0,-0xc(%rbp)
    1fca:	f3 0f 11 4d f0       	movss  %xmm1,-0x10(%rbp)
    1fcf:	f3 0f 11 55 ec       	movss  %xmm2,-0x14(%rbp)
    1fd4:	8b 45 10             	mov    0x10(%rbp),%eax
    1fd7:	83 f8 01             	cmp    $0x1,%eax
    1fda:	75 20                	jne    1ffc <update_t+0x3f>
    1fdc:	f3 0f 10 4d 1c       	movss  0x1c(%rbp),%xmm1
    1fe1:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1fe5:	f3 0f 10 00          	movss  (%rax),%xmm0
    1fe9:	f3 0f 59 c8          	mulss  %xmm0,%xmm1
    1fed:	66 0f 7e c8          	movd   %xmm1,%eax
    1ff1:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
    1ff5:	89 02                	mov    %eax,(%rdx)
    1ff7:	e9 d8 00 00 00       	jmpq   20d4 <update_t+0x117>
    1ffc:	f3 0f 5a 45 ec       	cvtss2sd -0x14(%rbp),%xmm0
    2001:	66 0f 2e 05 00 00 00 	ucomisd 0x0(%rip),%xmm0        # 2009 <update_t+0x4c>
    2008:	00 
    2009:	76 23                	jbe    202e <update_t+0x71>
    200b:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    200f:	f3 0f 10 08          	movss  (%rax),%xmm1
    2013:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 201b <update_t+0x5e>
    201a:	00 
    201b:	f3 0f 59 c8          	mulss  %xmm0,%xmm1
    201f:	66 0f 7e c8          	movd   %xmm1,%eax
    2023:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
    2027:	89 02                	mov    %eax,(%rdx)
    2029:	e9 a6 00 00 00       	jmpq   20d4 <update_t+0x117>
    202e:	f3 0f 5a 45 ec       	cvtss2sd -0x14(%rbp),%xmm0
    2033:	66 0f 2e 05 00 00 00 	ucomisd 0x0(%rip),%xmm0        # 203b <update_t+0x7e>
    203a:	00 
    203b:	76 28                	jbe    2065 <update_t+0xa8>
    203d:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2041:	f3 0f 10 00          	movss  (%rax),%xmm0
    2045:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    2049:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 2051 <update_t+0x94>
    2050:	00 
    2051:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    2055:	f2 0f 5a d8          	cvtsd2ss %xmm0,%xmm3
    2059:	66 0f 7e d8          	movd   %xmm3,%eax
    205d:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
    2061:	89 02                	mov    %eax,(%rdx)
    2063:	eb 6f                	jmp    20d4 <update_t+0x117>
    2065:	f3 0f 5a 45 ec       	cvtss2sd -0x14(%rbp),%xmm0
    206a:	66 0f 2e 05 00 00 00 	ucomisd 0x0(%rip),%xmm0        # 2072 <update_t+0xb5>
    2071:	00 
    2072:	77 12                	ja     2086 <update_t+0xc9>
    2074:	f3 0f 10 45 f0       	movss  -0x10(%rbp),%xmm0
    2079:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 2081 <update_t+0xc4>
    2080:	00 
    2081:	0f 2e c1             	ucomiss %xmm1,%xmm0
    2084:	76 28                	jbe    20ae <update_t+0xf1>
    2086:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    208a:	f3 0f 10 00          	movss  (%rax),%xmm0
    208e:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    2092:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 209a <update_t+0xdd>
    2099:	00 
    209a:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    209e:	f2 0f 5a e0          	cvtsd2ss %xmm0,%xmm4
    20a2:	66 0f 7e e0          	movd   %xmm4,%eax
    20a6:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
    20aa:	89 02                	mov    %eax,(%rdx)
    20ac:	eb 26                	jmp    20d4 <update_t+0x117>
    20ae:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    20b2:	f3 0f 10 00          	movss  (%rax),%xmm0
    20b6:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    20ba:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 20c2 <update_t+0x105>
    20c1:	00 
    20c2:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    20c6:	f2 0f 5a e8          	cvtsd2ss %xmm0,%xmm5
    20ca:	66 0f 7e e8          	movd   %xmm5,%eax
    20ce:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
    20d2:	89 02                	mov    %eax,(%rdx)
    20d4:	5d                   	pop    %rbp
    20d5:	c3                   	retq   

00000000000020d6 <exit_crit>:
    20d6:	55                   	push   %rbp
    20d7:	48 89 e5             	mov    %rsp,%rbp
    20da:	f3 0f 11 45 fc       	movss  %xmm0,-0x4(%rbp)
    20df:	f3 0f 11 4d f8       	movss  %xmm1,-0x8(%rbp)
    20e4:	8b 45 10             	mov    0x10(%rbp),%eax
    20e7:	83 f8 01             	cmp    $0x1,%eax
    20ea:	75 19                	jne    2105 <exit_crit+0x2f>
    20ec:	f3 0f 10 45 20       	movss  0x20(%rbp),%xmm0
    20f1:	0f 2e 45 fc          	ucomiss -0x4(%rbp),%xmm0
    20f5:	76 07                	jbe    20fe <exit_crit+0x28>
    20f7:	b8 01 00 00 00       	mov    $0x1,%eax
    20fc:	eb 41                	jmp    213f <exit_crit+0x69>
    20fe:	b8 00 00 00 00       	mov    $0x0,%eax
    2103:	eb 3a                	jmp    213f <exit_crit+0x69>
    2105:	f3 0f 5a 4d fc       	cvtss2sd -0x4(%rbp),%xmm1
    210a:	f3 0f 5a 45 f8       	cvtss2sd -0x8(%rbp),%xmm0
    210f:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # 2117 <exit_crit+0x41>
    2116:	00 
    2117:	f2 0f 59 c2          	mulsd  %xmm2,%xmm0
    211b:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 2121 <exit_crit+0x4b>
    2121:	66 0f ef d2          	pxor   %xmm2,%xmm2
    2125:	f2 0f 2a d0          	cvtsi2sd %eax,%xmm2
    2129:	f2 0f 5e c2          	divsd  %xmm2,%xmm0
    212d:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
    2131:	76 07                	jbe    213a <exit_crit+0x64>
    2133:	b8 01 00 00 00       	mov    $0x1,%eax
    2138:	eb 05                	jmp    213f <exit_crit+0x69>
    213a:	b8 00 00 00 00       	mov    $0x0,%eax
    213f:	5d                   	pop    %rbp
    2140:	c3                   	retq   

0000000000002141 <starting_t>:
    2141:	55                   	push   %rbp
    2142:	48 89 e5             	mov    %rsp,%rbp
    2145:	41 54                	push   %r12
    2147:	53                   	push   %rbx
    2148:	48 83 c4 80          	add    $0xffffffffffffff80,%rsp
    214c:	48 89 7d b8          	mov    %rdi,-0x48(%rbp)
    2150:	48 89 75 b0          	mov    %rsi,-0x50(%rbp)
    2154:	48 89 55 a8          	mov    %rdx,-0x58(%rbp)
    2158:	89 4d a4             	mov    %ecx,-0x5c(%rbp)
    215b:	4c 89 45 98          	mov    %r8,-0x68(%rbp)
    215f:	4c 89 4d 90          	mov    %r9,-0x70(%rbp)
    2163:	f3 0f 11 45 a0       	movss  %xmm0,-0x60(%rbp)
    2168:	f3 0f 11 4d 8c       	movss  %xmm1,-0x74(%rbp)
    216d:	f3 0f 11 55 88       	movss  %xmm2,-0x78(%rbp)
    2172:	f3 0f 11 5d 84       	movss  %xmm3,-0x7c(%rbp)
    2177:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 217d <starting_t+0x3c>
    217d:	48 98                	cltq   
    217f:	48 c1 e0 02          	shl    $0x2,%rax
    2183:	48 89 c7             	mov    %rax,%rdi
    2186:	e8 00 00 00 00       	callq  218b <starting_t+0x4a>
    218b:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    218f:	8b 45 20             	mov    0x20(%rbp),%eax
    2192:	83 f8 01             	cmp    $0x1,%eax
    2195:	75 08                	jne    219f <starting_t+0x5e>
    2197:	8b 45 28             	mov    0x28(%rbp),%eax
    219a:	e9 ca 01 00 00       	jmpq   2369 <starting_t+0x228>
    219f:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 21a5 <starting_t+0x64>
    21a5:	39 45 38             	cmp    %eax,0x38(%rbp)
    21a8:	0f 4e 45 38          	cmovle 0x38(%rbp),%eax
    21ac:	89 45 cc             	mov    %eax,-0x34(%rbp)
    21af:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    21b6:	b8 00 00 00 00       	mov    $0x0,%eax
    21bb:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
    21bf:	b8 00 00 00 00       	mov    $0x0,%eax
    21c4:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    21c8:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    21cf:	e9 e0 00 00 00       	jmpq   22b4 <starting_t+0x173>
    21d4:	48 83 ec 08          	sub    $0x8,%rsp
    21d8:	44 8b 65 84          	mov    -0x7c(%rbp),%r12d
    21dc:	8b 5d 88             	mov    -0x78(%rbp),%ebx
    21df:	44 8b 5d 8c          	mov    -0x74(%rbp),%r11d
    21e3:	4c 8b 4d 90          	mov    -0x70(%rbp),%r9
    21e7:	4c 8b 45 98          	mov    -0x68(%rbp),%r8
    21eb:	8b 4d a4             	mov    -0x5c(%rbp),%ecx
    21ee:	44 8b 55 a0          	mov    -0x60(%rbp),%r10d
    21f2:	48 8b 55 a8          	mov    -0x58(%rbp),%rdx
    21f6:	48 8b 75 b0          	mov    -0x50(%rbp),%rsi
    21fa:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
    21fe:	ff 75 d0             	pushq  -0x30(%rbp)
    2201:	ff 75 48             	pushq  0x48(%rbp)
    2204:	8b 7d 40             	mov    0x40(%rbp),%edi
    2207:	57                   	push   %rdi
    2208:	8b 7d 18             	mov    0x18(%rbp),%edi
    220b:	57                   	push   %rdi
    220c:	8b 7d 10             	mov    0x10(%rbp),%edi
    220f:	57                   	push   %rdi
    2210:	44 89 a5 78 ff ff ff 	mov    %r12d,-0x88(%rbp)
    2217:	f3 0f 10 a5 78 ff ff 	movss  -0x88(%rbp),%xmm4
    221e:	ff 
    221f:	89 9d 78 ff ff ff    	mov    %ebx,-0x88(%rbp)
    2225:	f3 0f 10 9d 78 ff ff 	movss  -0x88(%rbp),%xmm3
    222c:	ff 
    222d:	44 89 9d 78 ff ff ff 	mov    %r11d,-0x88(%rbp)
    2234:	f3 0f 10 95 78 ff ff 	movss  -0x88(%rbp),%xmm2
    223b:	ff 
    223c:	44 89 95 78 ff ff ff 	mov    %r10d,-0x88(%rbp)
    2243:	f3 0f 10 8d 78 ff ff 	movss  -0x88(%rbp),%xmm1
    224a:	ff 
    224b:	48 89 c7             	mov    %rax,%rdi
    224e:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 2256 <starting_t+0x115>
    2255:	00 
    2256:	e8 25 01 00 00       	callq  2380 <try_swap>
    225b:	48 83 c4 30          	add    $0x30,%rsp
    225f:	83 f8 01             	cmp    $0x1,%eax
    2262:	75 4c                	jne    22b0 <starting_t+0x16f>
    2264:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    2268:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
    226c:	f3 0f 10 00          	movss  (%rax),%xmm0
    2270:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    2274:	f2 0f 10 4d e0       	movsd  -0x20(%rbp),%xmm1
    2279:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
    227d:	66 48 0f 7e c8       	movq   %xmm1,%rax
    2282:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
    2286:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
    228a:	f3 0f 10 08          	movss  (%rax),%xmm1
    228e:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
    2292:	f3 0f 10 00          	movss  (%rax),%xmm0
    2296:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
    229a:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    229e:	f2 0f 10 4d d8       	movsd  -0x28(%rbp),%xmm1
    22a3:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
    22a7:	66 48 0f 7e c8       	movq   %xmm1,%rax
    22ac:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    22b0:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    22b4:	8b 45 ec             	mov    -0x14(%rbp),%eax
    22b7:	3b 45 cc             	cmp    -0x34(%rbp),%eax
    22ba:	0f 8c 14 ff ff ff    	jl     21d4 <starting_t+0x93>
    22c0:	83 7d e8 00          	cmpl   $0x0,-0x18(%rbp)
    22c4:	74 1d                	je     22e3 <starting_t+0x1a2>
    22c6:	66 0f ef c0          	pxor   %xmm0,%xmm0
    22ca:	f2 0f 2a 45 e8       	cvtsi2sdl -0x18(%rbp),%xmm0
    22cf:	f2 0f 10 4d e0       	movsd  -0x20(%rbp),%xmm1
    22d4:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
    22d8:	66 48 0f 7e c8       	movq   %xmm1,%rax
    22dd:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
    22e1:	eb 09                	jmp    22ec <starting_t+0x1ab>
    22e3:	b8 00 00 00 00       	mov    $0x0,%eax
    22e8:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
    22ec:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
    22f0:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
    22f4:	8b 45 e8             	mov    -0x18(%rbp),%eax
    22f7:	48 89 8d 78 ff ff ff 	mov    %rcx,-0x88(%rbp)
    22fe:	f2 0f 10 8d 78 ff ff 	movsd  -0x88(%rbp),%xmm1
    2305:	ff 
    2306:	48 89 95 78 ff ff ff 	mov    %rdx,-0x88(%rbp)
    230d:	f2 0f 10 85 78 ff ff 	movsd  -0x88(%rbp),%xmm0
    2314:	ff 
    2315:	89 c7                	mov    %eax,%edi
    2317:	e8 56 fb ff ff       	callq  1e72 <get_std_dev>
    231c:	66 48 0f 7e c0       	movq   %xmm0,%rax
    2321:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
    2325:	8b 45 e8             	mov    -0x18(%rbp),%eax
    2328:	3b 45 cc             	cmp    -0x34(%rbp),%eax
    232b:	74 17                	je     2344 <starting_t+0x203>
    232d:	8b 55 cc             	mov    -0x34(%rbp),%edx
    2330:	8b 45 e8             	mov    -0x18(%rbp),%eax
    2333:	89 c6                	mov    %eax,%esi
    2335:	bf 00 00 00 00       	mov    $0x0,%edi
    233a:	b8 00 00 00 00       	mov    $0x0,%eax
    233f:	e8 00 00 00 00       	callq  2344 <starting_t+0x203>
    2344:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    2348:	48 89 c7             	mov    %rax,%rdi
    234b:	e8 00 00 00 00       	callq  2350 <starting_t+0x20f>
    2350:	f2 0f 10 4d c0       	movsd  -0x40(%rbp),%xmm1
    2355:	f2 0f 10 05 00 00 00 	movsd  0x0(%rip),%xmm0        # 235d <starting_t+0x21c>
    235c:	00 
    235d:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    2361:	f2 0f 5a e8          	cvtsd2ss %xmm0,%xmm5
    2365:	66 0f 7e e8          	movd   %xmm5,%eax
    2369:	89 85 78 ff ff ff    	mov    %eax,-0x88(%rbp)
    236f:	f3 0f 10 85 78 ff ff 	movss  -0x88(%rbp),%xmm0
    2376:	ff 
    2377:	48 8d 65 f0          	lea    -0x10(%rbp),%rsp
    237b:	5b                   	pop    %rbx
    237c:	41 5c                	pop    %r12
    237e:	5d                   	pop    %rbp
    237f:	c3                   	retq   

0000000000002380 <try_swap>:
    2380:	55                   	push   %rbp
    2381:	48 89 e5             	mov    %rsp,%rbp
    2384:	53                   	push   %rbx
    2385:	48 81 ec b8 00 00 00 	sub    $0xb8,%rsp
    238c:	f3 0f 11 45 8c       	movss  %xmm0,-0x74(%rbp)
    2391:	48 89 7d 80          	mov    %rdi,-0x80(%rbp)
    2395:	48 89 b5 78 ff ff ff 	mov    %rsi,-0x88(%rbp)
    239c:	48 89 95 70 ff ff ff 	mov    %rdx,-0x90(%rbp)
    23a3:	f3 0f 11 4d 88       	movss  %xmm1,-0x78(%rbp)
    23a8:	89 8d 6c ff ff ff    	mov    %ecx,-0x94(%rbp)
    23ae:	4c 89 85 60 ff ff ff 	mov    %r8,-0xa0(%rbp)
    23b5:	4c 89 8d 58 ff ff ff 	mov    %r9,-0xa8(%rbp)
    23bc:	f3 0f 11 95 68 ff ff 	movss  %xmm2,-0x98(%rbp)
    23c3:	ff 
    23c4:	f3 0f 11 9d 54 ff ff 	movss  %xmm3,-0xac(%rbp)
    23cb:	ff 
    23cc:	f3 0f 11 a5 50 ff ff 	movss  %xmm4,-0xb0(%rbp)
    23d3:	ff 
    23d4:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%rbp)
    23db:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%rbp)
    23e2:	eb 36                	jmp    241a <try_swap+0x9a>
    23e4:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 23eb <try_swap+0x6b>
    23eb:	8b 45 e0             	mov    -0x20(%rbp),%eax
    23ee:	48 63 d0             	movslq %eax,%rdx
    23f1:	48 89 d0             	mov    %rdx,%rax
    23f4:	48 c1 e0 03          	shl    $0x3,%rax
    23f8:	48 01 d0             	add    %rdx,%rax
    23fb:	48 01 c0             	add    %rax,%rax
    23fe:	48 01 d0             	add    %rdx,%rax
    2401:	48 c1 e0 03          	shl    $0x3,%rax
    2405:	48 01 c8             	add    %rcx,%rax
    2408:	8b 50 08             	mov    0x8(%rax),%edx
    240b:	8b 45 d8             	mov    -0x28(%rbp),%eax
    240e:	39 c2                	cmp    %eax,%edx
    2410:	0f 4d c2             	cmovge %edx,%eax
    2413:	89 45 d8             	mov    %eax,-0x28(%rbp)
    2416:	83 45 e0 01          	addl   $0x1,-0x20(%rbp)
    241a:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 2420 <try_swap+0xa0>
    2420:	39 45 e0             	cmp    %eax,-0x20(%rbp)
    2423:	7c bf                	jl     23e4 <try_swap+0x64>
    2425:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 242c <try_swap+0xac>
    242c:	48 85 c0             	test   %rax,%rax
    242f:	75 60                	jne    2491 <try_swap+0x111>
    2431:	8b 45 d8             	mov    -0x28(%rbp),%eax
    2434:	48 98                	cltq   
    2436:	48 c1 e0 05          	shl    $0x5,%rax
    243a:	48 89 c7             	mov    %rax,%rdi
    243d:	e8 00 00 00 00       	callq  2442 <try_swap+0xc2>
    2442:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 2449 <try_swap+0xc9>
    2449:	8b 45 d8             	mov    -0x28(%rbp),%eax
    244c:	48 98                	cltq   
    244e:	48 c1 e0 05          	shl    $0x5,%rax
    2452:	48 89 c7             	mov    %rax,%rdi
    2455:	e8 00 00 00 00       	callq  245a <try_swap+0xda>
    245a:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 2461 <try_swap+0xe1>
    2461:	8b 45 d8             	mov    -0x28(%rbp),%eax
    2464:	48 98                	cltq   
    2466:	48 c1 e0 03          	shl    $0x3,%rax
    246a:	48 89 c7             	mov    %rax,%rdi
    246d:	e8 00 00 00 00       	callq  2472 <try_swap+0xf2>
    2472:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 2479 <try_swap+0xf9>
    2479:	8b 45 d8             	mov    -0x28(%rbp),%eax
    247c:	48 98                	cltq   
    247e:	48 c1 e0 03          	shl    $0x3,%rax
    2482:	48 89 c7             	mov    %rax,%rdi
    2485:	e8 00 00 00 00       	callq  248a <try_swap+0x10a>
    248a:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 2491 <try_swap+0x111>
    2491:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 2497 <try_swap+0x117>
    2497:	89 45 9c             	mov    %eax,-0x64(%rbp)
    249a:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 24a0 <try_swap+0x120>
    24a0:	83 e8 01             	sub    $0x1,%eax
    24a3:	89 c7                	mov    %eax,%edi
    24a5:	e8 00 00 00 00       	callq  24aa <try_swap+0x12a>
    24aa:	89 45 ec             	mov    %eax,-0x14(%rbp)
    24ad:	83 7d 18 01          	cmpl   $0x1,0x18(%rbp)
    24b1:	75 43                	jne    24f6 <try_swap+0x176>
    24b3:	eb 13                	jmp    24c8 <try_swap+0x148>
    24b5:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 24bb <try_swap+0x13b>
    24bb:	83 e8 01             	sub    $0x1,%eax
    24be:	89 c7                	mov    %eax,%edi
    24c0:	e8 00 00 00 00       	callq  24c5 <try_swap+0x145>
    24c5:	89 45 ec             	mov    %eax,-0x14(%rbp)
    24c8:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 24cf <try_swap+0x14f>
    24cf:	8b 45 ec             	mov    -0x14(%rbp),%eax
    24d2:	48 63 d0             	movslq %eax,%rdx
    24d5:	48 89 d0             	mov    %rdx,%rax
    24d8:	48 c1 e0 02          	shl    $0x2,%rax
    24dc:	48 01 d0             	add    %rdx,%rax
    24df:	48 c1 e0 03          	shl    $0x3,%rax
    24e3:	48 01 c8             	add    %rcx,%rax
    24e6:	48 8b 50 08          	mov    0x8(%rax),%rdx
    24ea:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 24f1 <try_swap+0x171>
    24f1:	48 39 c2             	cmp    %rax,%rdx
    24f4:	74 bf                	je     24b5 <try_swap+0x135>
    24f6:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 24fd <try_swap+0x17d>
    24fd:	8b 45 ec             	mov    -0x14(%rbp),%eax
    2500:	48 63 d0             	movslq %eax,%rdx
    2503:	48 89 d0             	mov    %rdx,%rax
    2506:	48 c1 e0 02          	shl    $0x2,%rax
    250a:	48 01 d0             	add    %rdx,%rax
    250d:	48 c1 e0 03          	shl    $0x3,%rax
    2511:	48 01 c8             	add    %rcx,%rax
    2514:	8b 40 18             	mov    0x18(%rax),%eax
    2517:	89 45 c8             	mov    %eax,-0x38(%rbp)
    251a:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2521 <try_swap+0x1a1>
    2521:	8b 45 ec             	mov    -0x14(%rbp),%eax
    2524:	48 63 d0             	movslq %eax,%rdx
    2527:	48 89 d0             	mov    %rdx,%rax
    252a:	48 c1 e0 02          	shl    $0x2,%rax
    252e:	48 01 d0             	add    %rdx,%rax
    2531:	48 c1 e0 03          	shl    $0x3,%rax
    2535:	48 01 c8             	add    %rcx,%rax
    2538:	8b 40 1c             	mov    0x1c(%rax),%eax
    253b:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    253e:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2545 <try_swap+0x1c5>
    2545:	8b 45 ec             	mov    -0x14(%rbp),%eax
    2548:	48 63 d0             	movslq %eax,%rdx
    254b:	48 89 d0             	mov    %rdx,%rax
    254e:	48 c1 e0 02          	shl    $0x2,%rax
    2552:	48 01 d0             	add    %rdx,%rax
    2555:	48 c1 e0 03          	shl    $0x3,%rax
    2559:	48 01 c8             	add    %rcx,%rax
    255c:	8b 40 20             	mov    0x20(%rax),%eax
    255f:	89 45 c0             	mov    %eax,-0x40(%rbp)
    2562:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2569 <try_swap+0x1e9>
    2569:	8b 45 ec             	mov    -0x14(%rbp),%eax
    256c:	48 63 d0             	movslq %eax,%rdx
    256f:	48 89 d0             	mov    %rdx,%rax
    2572:	48 c1 e0 02          	shl    $0x2,%rax
    2576:	48 01 d0             	add    %rdx,%rax
    2579:	48 c1 e0 03          	shl    $0x3,%rax
    257d:	48 01 c8             	add    %rcx,%rax
    2580:	48 8b 50 08          	mov    0x8(%rax),%rdx
    2584:	4c 8d 4d a4          	lea    -0x5c(%rbp),%r9
    2588:	4c 8d 45 a8          	lea    -0x58(%rbp),%r8
    258c:	48 8b 4d 30          	mov    0x30(%rbp),%rcx
    2590:	8b 7d 88             	mov    -0x78(%rbp),%edi
    2593:	8b 75 c4             	mov    -0x3c(%rbp),%esi
    2596:	8b 45 c8             	mov    -0x38(%rbp),%eax
    2599:	89 bd 4c ff ff ff    	mov    %edi,-0xb4(%rbp)
    259f:	f3 0f 10 85 4c ff ff 	movss  -0xb4(%rbp),%xmm0
    25a6:	ff 
    25a7:	89 c7                	mov    %eax,%edi
    25a9:	e8 d5 0e 00 00       	callq  3483 <find_to>
    25ae:	85 c0                	test   %eax,%eax
    25b0:	75 0a                	jne    25bc <try_swap+0x23c>
    25b2:	b8 00 00 00 00       	mov    $0x0,%eax
    25b7:	e9 45 0a 00 00       	jmpq   3001 <try_swap+0xc81>
    25bc:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    25c3:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 25ca <try_swap+0x24a>
    25ca:	8b 55 a8             	mov    -0x58(%rbp),%edx
    25cd:	48 63 d2             	movslq %edx,%rdx
    25d0:	48 c1 e2 03          	shl    $0x3,%rdx
    25d4:	48 01 d0             	add    %rdx,%rax
    25d7:	48 8b 08             	mov    (%rax),%rcx
    25da:	8b 45 a4             	mov    -0x5c(%rbp),%eax
    25dd:	48 63 d0             	movslq %eax,%rdx
    25e0:	48 89 d0             	mov    %rdx,%rax
    25e3:	48 01 c0             	add    %rax,%rax
    25e6:	48 01 d0             	add    %rdx,%rax
    25e9:	48 c1 e0 03          	shl    $0x3,%rax
    25ed:	48 01 c8             	add    %rcx,%rax
    25f0:	48 8b 00             	mov    (%rax),%rax
    25f3:	8b 40 0c             	mov    0xc(%rax),%eax
    25f6:	83 f8 01             	cmp    $0x1,%eax
    25f9:	7e 40                	jle    263b <try_swap+0x2bb>
    25fb:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2602 <try_swap+0x282>
    2602:	8b 55 a8             	mov    -0x58(%rbp),%edx
    2605:	48 63 d2             	movslq %edx,%rdx
    2608:	48 c1 e2 03          	shl    $0x3,%rdx
    260c:	48 01 d0             	add    %rdx,%rax
    260f:	48 8b 08             	mov    (%rax),%rcx
    2612:	8b 45 a4             	mov    -0x5c(%rbp),%eax
    2615:	48 63 d0             	movslq %eax,%rdx
    2618:	48 89 d0             	mov    %rdx,%rax
    261b:	48 01 c0             	add    %rax,%rax
    261e:	48 01 d0             	add    %rdx,%rax
    2621:	48 c1 e0 03          	shl    $0x3,%rax
    2625:	48 01 c8             	add    %rcx,%rax
    2628:	48 8b 00             	mov    (%rax),%rax
    262b:	8b 40 0c             	mov    0xc(%rax),%eax
    262e:	83 e8 01             	sub    $0x1,%eax
    2631:	89 c7                	mov    %eax,%edi
    2633:	e8 00 00 00 00       	callq  2638 <try_swap+0x2b8>
    2638:	89 45 e8             	mov    %eax,-0x18(%rbp)
    263b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2642 <try_swap+0x2c2>
    2642:	8b 55 a8             	mov    -0x58(%rbp),%edx
    2645:	48 63 d2             	movslq %edx,%rdx
    2648:	48 c1 e2 03          	shl    $0x3,%rdx
    264c:	48 01 d0             	add    %rdx,%rax
    264f:	48 8b 08             	mov    (%rax),%rcx
    2652:	8b 45 a4             	mov    -0x5c(%rbp),%eax
    2655:	48 63 d0             	movslq %eax,%rdx
    2658:	48 89 d0             	mov    %rdx,%rax
    265b:	48 01 c0             	add    %rax,%rax
    265e:	48 01 d0             	add    %rdx,%rax
    2661:	48 c1 e0 03          	shl    $0x3,%rax
    2665:	48 01 c8             	add    %rcx,%rax
    2668:	48 8b 40 10          	mov    0x10(%rax),%rax
    266c:	8b 55 e8             	mov    -0x18(%rbp),%edx
    266f:	48 63 d2             	movslq %edx,%rdx
    2672:	48 c1 e2 02          	shl    $0x2,%rdx
    2676:	48 01 d0             	add    %rdx,%rax
    2679:	8b 00                	mov    (%rax),%eax
    267b:	83 f8 ff             	cmp    $0xffffffff,%eax
    267e:	75 7b                	jne    26fb <try_swap+0x37b>
    2680:	c7 45 e4 ff ff ff ff 	movl   $0xffffffff,-0x1c(%rbp)
    2687:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 268e <try_swap+0x30e>
    268e:	8b 45 ec             	mov    -0x14(%rbp),%eax
    2691:	48 63 d0             	movslq %eax,%rdx
    2694:	48 89 d0             	mov    %rdx,%rax
    2697:	48 c1 e0 02          	shl    $0x2,%rax
    269b:	48 01 d0             	add    %rdx,%rax
    269e:	48 c1 e0 03          	shl    $0x3,%rax
    26a2:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    26a6:	8b 45 a8             	mov    -0x58(%rbp),%eax
    26a9:	89 42 18             	mov    %eax,0x18(%rdx)
    26ac:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 26b3 <try_swap+0x333>
    26b3:	8b 45 ec             	mov    -0x14(%rbp),%eax
    26b6:	48 63 d0             	movslq %eax,%rdx
    26b9:	48 89 d0             	mov    %rdx,%rax
    26bc:	48 c1 e0 02          	shl    $0x2,%rax
    26c0:	48 01 d0             	add    %rdx,%rax
    26c3:	48 c1 e0 03          	shl    $0x3,%rax
    26c7:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    26cb:	8b 45 a4             	mov    -0x5c(%rbp),%eax
    26ce:	89 42 1c             	mov    %eax,0x1c(%rdx)
    26d1:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 26d8 <try_swap+0x358>
    26d8:	8b 45 ec             	mov    -0x14(%rbp),%eax
    26db:	48 63 d0             	movslq %eax,%rdx
    26de:	48 89 d0             	mov    %rdx,%rax
    26e1:	48 c1 e0 02          	shl    $0x2,%rax
    26e5:	48 01 d0             	add    %rdx,%rax
    26e8:	48 c1 e0 03          	shl    $0x3,%rax
    26ec:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    26f0:	8b 45 e8             	mov    -0x18(%rbp),%eax
    26f3:	89 42 20             	mov    %eax,0x20(%rdx)
    26f6:	e9 21 01 00 00       	jmpq   281c <try_swap+0x49c>
    26fb:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2702 <try_swap+0x382>
    2702:	8b 55 a8             	mov    -0x58(%rbp),%edx
    2705:	48 63 d2             	movslq %edx,%rdx
    2708:	48 c1 e2 03          	shl    $0x3,%rdx
    270c:	48 01 d0             	add    %rdx,%rax
    270f:	48 8b 08             	mov    (%rax),%rcx
    2712:	8b 45 a4             	mov    -0x5c(%rbp),%eax
    2715:	48 63 d0             	movslq %eax,%rdx
    2718:	48 89 d0             	mov    %rdx,%rax
    271b:	48 01 c0             	add    %rax,%rax
    271e:	48 01 d0             	add    %rdx,%rax
    2721:	48 c1 e0 03          	shl    $0x3,%rax
    2725:	48 01 c8             	add    %rcx,%rax
    2728:	48 8b 40 10          	mov    0x10(%rax),%rax
    272c:	8b 55 e8             	mov    -0x18(%rbp),%edx
    272f:	48 63 d2             	movslq %edx,%rdx
    2732:	48 c1 e2 02          	shl    $0x2,%rdx
    2736:	48 01 d0             	add    %rdx,%rax
    2739:	8b 00                	mov    (%rax),%eax
    273b:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    273e:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2745 <try_swap+0x3c5>
    2745:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    2748:	48 63 d0             	movslq %eax,%rdx
    274b:	48 89 d0             	mov    %rdx,%rax
    274e:	48 c1 e0 02          	shl    $0x2,%rax
    2752:	48 01 d0             	add    %rdx,%rax
    2755:	48 c1 e0 03          	shl    $0x3,%rax
    2759:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    275d:	8b 45 c8             	mov    -0x38(%rbp),%eax
    2760:	89 42 18             	mov    %eax,0x18(%rdx)
    2763:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 276a <try_swap+0x3ea>
    276a:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    276d:	48 63 d0             	movslq %eax,%rdx
    2770:	48 89 d0             	mov    %rdx,%rax
    2773:	48 c1 e0 02          	shl    $0x2,%rax
    2777:	48 01 d0             	add    %rdx,%rax
    277a:	48 c1 e0 03          	shl    $0x3,%rax
    277e:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    2782:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    2785:	89 42 1c             	mov    %eax,0x1c(%rdx)
    2788:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 278f <try_swap+0x40f>
    278f:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    2792:	48 63 d0             	movslq %eax,%rdx
    2795:	48 89 d0             	mov    %rdx,%rax
    2798:	48 c1 e0 02          	shl    $0x2,%rax
    279c:	48 01 d0             	add    %rdx,%rax
    279f:	48 c1 e0 03          	shl    $0x3,%rax
    27a3:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    27a7:	8b 45 c0             	mov    -0x40(%rbp),%eax
    27aa:	89 42 20             	mov    %eax,0x20(%rdx)
    27ad:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 27b4 <try_swap+0x434>
    27b4:	8b 45 ec             	mov    -0x14(%rbp),%eax
    27b7:	48 63 d0             	movslq %eax,%rdx
    27ba:	48 89 d0             	mov    %rdx,%rax
    27bd:	48 c1 e0 02          	shl    $0x2,%rax
    27c1:	48 01 d0             	add    %rdx,%rax
    27c4:	48 c1 e0 03          	shl    $0x3,%rax
    27c8:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    27cc:	8b 45 a8             	mov    -0x58(%rbp),%eax
    27cf:	89 42 18             	mov    %eax,0x18(%rdx)
    27d2:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 27d9 <try_swap+0x459>
    27d9:	8b 45 ec             	mov    -0x14(%rbp),%eax
    27dc:	48 63 d0             	movslq %eax,%rdx
    27df:	48 89 d0             	mov    %rdx,%rax
    27e2:	48 c1 e0 02          	shl    $0x2,%rax
    27e6:	48 01 d0             	add    %rdx,%rax
    27e9:	48 c1 e0 03          	shl    $0x3,%rax
    27ed:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    27f1:	8b 45 a4             	mov    -0x5c(%rbp),%eax
    27f4:	89 42 1c             	mov    %eax,0x1c(%rdx)
    27f7:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 27fe <try_swap+0x47e>
    27fe:	8b 45 ec             	mov    -0x14(%rbp),%eax
    2801:	48 63 d0             	movslq %eax,%rdx
    2804:	48 89 d0             	mov    %rdx,%rax
    2807:	48 c1 e0 02          	shl    $0x2,%rax
    280b:	48 01 d0             	add    %rdx,%rax
    280e:	48 c1 e0 03          	shl    $0x3,%rax
    2812:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    2816:	8b 45 e8             	mov    -0x18(%rbp),%eax
    2819:	89 42 20             	mov    %eax,0x20(%rdx)
    281c:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 2822 <try_swap+0x4a2>
    2822:	89 45 d0             	mov    %eax,-0x30(%rbp)
    2825:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 282b <try_swap+0x4ab>
    282b:	89 45 cc             	mov    %eax,-0x34(%rbp)
    282e:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 2834 <try_swap+0x4b4>
    2834:	89 45 a0             	mov    %eax,-0x60(%rbp)
    2837:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 283e <try_swap+0x4be>
    283e:	8b 45 ec             	mov    -0x14(%rbp),%eax
    2841:	48 63 d0             	movslq %eax,%rdx
    2844:	48 89 d0             	mov    %rdx,%rax
    2847:	48 c1 e0 02          	shl    $0x2,%rax
    284b:	48 01 d0             	add    %rdx,%rax
    284e:	48 c1 e0 03          	shl    $0x3,%rax
    2852:	48 01 c8             	add    %rcx,%rax
    2855:	48 8b 40 08          	mov    0x8(%rax),%rax
    2859:	8b 40 08             	mov    0x8(%rax),%eax
    285c:	89 45 bc             	mov    %eax,-0x44(%rbp)
    285f:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 2866 <try_swap+0x4e6>
    2866:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 286d <try_swap+0x4ed>
    286d:	8b 7d bc             	mov    -0x44(%rbp),%edi
    2870:	8b 4d e4             	mov    -0x1c(%rbp),%ecx
    2873:	8b 55 ec             	mov    -0x14(%rbp),%edx
    2876:	41 89 f8             	mov    %edi,%r8d
    2879:	48 89 c7             	mov    %rax,%rdi
    287c:	e8 4c 09 00 00       	callq  31cd <find_affected_nets>
    2881:	89 45 b8             	mov    %eax,-0x48(%rbp)
    2884:	83 bd 6c ff ff ff 01 	cmpl   $0x1,-0x94(%rbp)
    288b:	75 1c                	jne    28a9 <try_swap+0x529>
    288d:	48 8b 8d 58 ff ff ff 	mov    -0xa8(%rbp),%rcx
    2894:	48 8b 85 60 ff ff ff 	mov    -0xa0(%rbp),%rax
    289b:	8b 55 10             	mov    0x10(%rbp),%edx
    289e:	48 89 ce             	mov    %rcx,%rsi
    28a1:	48 89 c7             	mov    %rax,%rdi
    28a4:	e8 5e 07 00 00       	callq  3007 <save_region_occ>
    28a9:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%rbp)
    28b0:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%rbp)
    28b7:	e9 26 02 00 00       	jmpq   2ae2 <try_swap+0x762>
    28bc:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 28c3 <try_swap+0x543>
    28c3:	8b 55 dc             	mov    -0x24(%rbp),%edx
    28c6:	48 63 d2             	movslq %edx,%rdx
    28c9:	48 c1 e2 02          	shl    $0x2,%rdx
    28cd:	48 01 d0             	add    %rdx,%rax
    28d0:	8b 00                	mov    (%rax),%eax
    28d2:	89 45 b4             	mov    %eax,-0x4c(%rbp)
    28d5:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 28dc <try_swap+0x55c>
    28dc:	8b 55 dc             	mov    -0x24(%rbp),%edx
    28df:	48 63 d2             	movslq %edx,%rdx
    28e2:	48 c1 e2 02          	shl    $0x2,%rdx
    28e6:	48 01 d0             	add    %rdx,%rax
    28e9:	8b 00                	mov    (%rax),%eax
    28eb:	83 f8 02             	cmp    $0x2,%eax
    28ee:	75 05                	jne    28f5 <try_swap+0x575>
    28f0:	e9 e9 01 00 00       	jmpq   2ade <try_swap+0x75e>
    28f5:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 28fc <try_swap+0x57c>
    28fc:	8b 45 b4             	mov    -0x4c(%rbp),%eax
    28ff:	48 63 d0             	movslq %eax,%rdx
    2902:	48 89 d0             	mov    %rdx,%rax
    2905:	48 c1 e0 02          	shl    $0x2,%rax
    2909:	48 01 d0             	add    %rdx,%rax
    290c:	48 c1 e0 03          	shl    $0x3,%rax
    2910:	48 01 c8             	add    %rcx,%rax
    2913:	8b 40 08             	mov    0x8(%rax),%eax
    2916:	83 f8 03             	cmp    $0x3,%eax
    2919:	7f 26                	jg     2941 <try_swap+0x5c1>
    291b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2922 <try_swap+0x5a2>
    2922:	8b 55 d4             	mov    -0x2c(%rbp),%edx
    2925:	48 63 d2             	movslq %edx,%rdx
    2928:	48 c1 e2 04          	shl    $0x4,%rdx
    292c:	48 01 c2             	add    %rax,%rdx
    292f:	8b 45 b4             	mov    -0x4c(%rbp),%eax
    2932:	48 89 d6             	mov    %rdx,%rsi
    2935:	89 c7                	mov    %eax,%edi
    2937:	e8 55 4e 00 00       	callq  7791 <get_non_updateable_bb>
    293c:	e9 bc 00 00 00       	jmpq   29fd <try_swap+0x67d>
    2941:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2948 <try_swap+0x5c8>
    2948:	8b 55 dc             	mov    -0x24(%rbp),%edx
    294b:	48 63 d2             	movslq %edx,%rdx
    294e:	48 c1 e2 02          	shl    $0x2,%rdx
    2952:	48 01 d0             	add    %rdx,%rax
    2955:	8b 00                	mov    (%rax),%eax
    2957:	85 c0                	test   %eax,%eax
    2959:	75 52                	jne    29ad <try_swap+0x62d>
    295b:	8b 4d a4             	mov    -0x5c(%rbp),%ecx
    295e:	44 8b 4d a8          	mov    -0x58(%rbp),%r9d
    2962:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2969 <try_swap+0x5e9>
    2969:	8b 55 d4             	mov    -0x2c(%rbp),%edx
    296c:	48 63 d2             	movslq %edx,%rdx
    296f:	48 c1 e2 04          	shl    $0x4,%rdx
    2973:	48 8d 3c 10          	lea    (%rax,%rdx,1),%rdi
    2977:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 297e <try_swap+0x5fe>
    297e:	8b 55 d4             	mov    -0x2c(%rbp),%edx
    2981:	48 63 d2             	movslq %edx,%rdx
    2984:	48 c1 e2 04          	shl    $0x4,%rdx
    2988:	48 8d 34 10          	lea    (%rax,%rdx,1),%rsi
    298c:	48 83 ec 08          	sub    $0x8,%rsp
    2990:	44 8b 45 c4          	mov    -0x3c(%rbp),%r8d
    2994:	8b 55 c8             	mov    -0x38(%rbp),%edx
    2997:	8b 45 b4             	mov    -0x4c(%rbp),%eax
    299a:	51                   	push   %rcx
    299b:	89 d1                	mov    %edx,%ecx
    299d:	48 89 fa             	mov    %rdi,%rdx
    29a0:	89 c7                	mov    %eax,%edi
    29a2:	e8 2d 50 00 00       	callq  79d4 <update_bb>
    29a7:	48 83 c4 10          	add    $0x10,%rsp
    29ab:	eb 50                	jmp    29fd <try_swap+0x67d>
    29ad:	44 8b 45 a4          	mov    -0x5c(%rbp),%r8d
    29b1:	8b 55 a8             	mov    -0x58(%rbp),%edx
    29b4:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 29bb <try_swap+0x63b>
    29bb:	8b 4d d4             	mov    -0x2c(%rbp),%ecx
    29be:	48 63 c9             	movslq %ecx,%rcx
    29c1:	48 c1 e1 04          	shl    $0x4,%rcx
    29c5:	48 8d 3c 08          	lea    (%rax,%rcx,1),%rdi
    29c9:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 29d0 <try_swap+0x650>
    29d0:	8b 4d d4             	mov    -0x2c(%rbp),%ecx
    29d3:	48 63 c9             	movslq %ecx,%rcx
    29d6:	48 c1 e1 04          	shl    $0x4,%rcx
    29da:	48 8d 34 08          	lea    (%rax,%rcx,1),%rsi
    29de:	48 83 ec 08          	sub    $0x8,%rsp
    29e2:	44 8b 4d c8          	mov    -0x38(%rbp),%r9d
    29e6:	8b 45 b4             	mov    -0x4c(%rbp),%eax
    29e9:	8b 4d c4             	mov    -0x3c(%rbp),%ecx
    29ec:	51                   	push   %rcx
    29ed:	89 d1                	mov    %edx,%ecx
    29ef:	48 89 fa             	mov    %rdi,%rdx
    29f2:	89 c7                	mov    %eax,%edi
    29f4:	e8 db 4f 00 00       	callq  79d4 <update_bb>
    29f9:	48 83 c4 10          	add    $0x10,%rsp
    29fd:	83 bd 6c ff ff ff 01 	cmpl   $0x1,-0x94(%rbp)
    2a04:	0f 84 82 00 00 00    	je     2a8c <try_swap+0x70c>
    2a0a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2a11 <try_swap+0x691>
    2a11:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    2a14:	48 63 d2             	movslq %edx,%rdx
    2a17:	48 c1 e2 02          	shl    $0x2,%rdx
    2a1b:	48 8d 1c 10          	lea    (%rax,%rdx,1),%rbx
    2a1f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2a26 <try_swap+0x6a6>
    2a26:	8b 55 d4             	mov    -0x2c(%rbp),%edx
    2a29:	48 63 d2             	movslq %edx,%rdx
    2a2c:	48 c1 e2 04          	shl    $0x4,%rdx
    2a30:	48 01 c2             	add    %rax,%rdx
    2a33:	8b 45 b4             	mov    -0x4c(%rbp),%eax
    2a36:	48 89 d6             	mov    %rdx,%rsi
    2a39:	89 c7                	mov    %eax,%edi
    2a3b:	e8 cf 4b 00 00       	callq  760f <get_net_cost>
    2a40:	66 0f 7e c0          	movd   %xmm0,%eax
    2a44:	89 03                	mov    %eax,(%rbx)
    2a46:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2a4d <try_swap+0x6cd>
    2a4d:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    2a50:	48 63 d2             	movslq %edx,%rdx
    2a53:	48 c1 e2 02          	shl    $0x2,%rdx
    2a57:	48 01 d0             	add    %rdx,%rax
    2a5a:	f3 0f 10 00          	movss  (%rax),%xmm0
    2a5e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2a65 <try_swap+0x6e5>
    2a65:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    2a68:	48 63 d2             	movslq %edx,%rdx
    2a6b:	48 c1 e2 02          	shl    $0x2,%rdx
    2a6f:	48 01 d0             	add    %rdx,%rax
    2a72:	f3 0f 10 08          	movss  (%rax),%xmm1
    2a76:	f3 0f 5c c1          	subss  %xmm1,%xmm0
    2a7a:	f3 0f 10 4d cc       	movss  -0x34(%rbp),%xmm1
    2a7f:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    2a83:	66 0f 7e c8          	movd   %xmm1,%eax
    2a87:	89 45 cc             	mov    %eax,-0x34(%rbp)
    2a8a:	eb 4e                	jmp    2ada <try_swap+0x75a>
    2a8c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2a93 <try_swap+0x713>
    2a93:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    2a96:	48 63 d2             	movslq %edx,%rdx
    2a99:	48 c1 e2 04          	shl    $0x4,%rdx
    2a9d:	48 8d 34 10          	lea    (%rax,%rdx,1),%rsi
    2aa1:	8b 45 b4             	mov    -0x4c(%rbp),%eax
    2aa4:	8b 4d 10             	mov    0x10(%rbp),%ecx
    2aa7:	ba ff ff ff ff       	mov    $0xffffffff,%edx
    2aac:	89 c7                	mov    %eax,%edi
    2aae:	e8 3b 2c 00 00       	callq  56ee <update_region_occ>
    2ab3:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2aba <try_swap+0x73a>
    2aba:	8b 55 d4             	mov    -0x2c(%rbp),%edx
    2abd:	48 63 d2             	movslq %edx,%rdx
    2ac0:	48 c1 e2 04          	shl    $0x4,%rdx
    2ac4:	48 8d 34 10          	lea    (%rax,%rdx,1),%rsi
    2ac8:	8b 45 b4             	mov    -0x4c(%rbp),%eax
    2acb:	8b 4d 10             	mov    0x10(%rbp),%ecx
    2ace:	ba 01 00 00 00       	mov    $0x1,%edx
    2ad3:	89 c7                	mov    %eax,%edi
    2ad5:	e8 14 2c 00 00       	callq  56ee <update_region_occ>
    2ada:	83 45 d4 01          	addl   $0x1,-0x2c(%rbp)
    2ade:	83 45 dc 01          	addl   $0x1,-0x24(%rbp)
    2ae2:	8b 45 dc             	mov    -0x24(%rbp),%eax
    2ae5:	3b 45 b8             	cmp    -0x48(%rbp),%eax
    2ae8:	0f 8c ce fd ff ff    	jl     28bc <try_swap+0x53c>
    2aee:	83 bd 6c ff ff ff 01 	cmpl   $0x1,-0x94(%rbp)
    2af5:	75 2a                	jne    2b21 <try_swap+0x7a1>
    2af7:	8b 7d 10             	mov    0x10(%rbp),%edi
    2afa:	e8 30 29 00 00       	callq  542f <nonlinear_cong_cost>
    2aff:	66 0f 7e c0          	movd   %xmm0,%eax
    2b03:	89 45 b0             	mov    %eax,-0x50(%rbp)
    2b06:	48 8b 85 78 ff ff ff 	mov    -0x88(%rbp),%rax
    2b0d:	f3 0f 10 08          	movss  (%rax),%xmm1
    2b11:	f3 0f 10 45 b0       	movss  -0x50(%rbp),%xmm0
    2b16:	f3 0f 5c c1          	subss  %xmm1,%xmm0
    2b1a:	66 0f 7e c0          	movd   %xmm0,%eax
    2b1e:	89 45 cc             	mov    %eax,-0x34(%rbp)
    2b21:	83 7d 20 01          	cmpl   $0x1,0x20(%rbp)
    2b25:	74 06                	je     2b2d <try_swap+0x7ad>
    2b27:	83 7d 20 02          	cmpl   $0x2,0x20(%rbp)
    2b2b:	75 5d                	jne    2b8a <try_swap+0x80a>
    2b2d:	48 8d 7d 9c          	lea    -0x64(%rbp),%rdi
    2b31:	48 8d 4d a0          	lea    -0x60(%rbp),%rcx
    2b35:	8b 55 bc             	mov    -0x44(%rbp),%edx
    2b38:	8b 75 e4             	mov    -0x1c(%rbp),%esi
    2b3b:	8b 45 ec             	mov    -0x14(%rbp),%eax
    2b3e:	49 89 f8             	mov    %rdi,%r8
    2b41:	89 c7                	mov    %eax,%edi
    2b43:	e8 17 1c 00 00       	callq  475f <comp_delta_td_cost>
    2b48:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 2b50 <try_swap+0x7d0>
    2b4f:	00 
    2b50:	f3 0f 5c 85 68 ff ff 	subss  -0x98(%rbp),%xmm0
    2b57:	ff 
    2b58:	f3 0f 59 45 cc       	mulss  -0x34(%rbp),%xmm0
    2b5d:	0f 28 c8             	movaps %xmm0,%xmm1
    2b60:	f3 0f 59 8d 54 ff ff 	mulss  -0xac(%rbp),%xmm1
    2b67:	ff 
    2b68:	f3 0f 10 45 a0       	movss  -0x60(%rbp),%xmm0
    2b6d:	f3 0f 59 85 68 ff ff 	mulss  -0x98(%rbp),%xmm0
    2b74:	ff 
    2b75:	f3 0f 59 85 50 ff ff 	mulss  -0xb0(%rbp),%xmm0
    2b7c:	ff 
    2b7d:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    2b81:	66 0f 7e c8          	movd   %xmm1,%eax
    2b85:	89 45 d0             	mov    %eax,-0x30(%rbp)
    2b88:	eb 06                	jmp    2b90 <try_swap+0x810>
    2b8a:	8b 45 cc             	mov    -0x34(%rbp),%eax
    2b8d:	89 45 d0             	mov    %eax,-0x30(%rbp)
    2b90:	8b 55 8c             	mov    -0x74(%rbp),%edx
    2b93:	8b 45 d0             	mov    -0x30(%rbp),%eax
    2b96:	89 95 4c ff ff ff    	mov    %edx,-0xb4(%rbp)
    2b9c:	f3 0f 10 8d 4c ff ff 	movss  -0xb4(%rbp),%xmm1
    2ba3:	ff 
    2ba4:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%rbp)
    2baa:	f3 0f 10 85 4c ff ff 	movss  -0xb4(%rbp),%xmm0
    2bb1:	ff 
    2bb2:	e8 70 10 00 00       	callq  3c27 <assess_swap>
    2bb7:	89 45 ac             	mov    %eax,-0x54(%rbp)
    2bba:	83 7d ac 00          	cmpl   $0x0,-0x54(%rbp)
    2bbe:	0f 84 e7 02 00 00    	je     2eab <try_swap+0xb2b>
    2bc4:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    2bc8:	f3 0f 10 00          	movss  (%rax),%xmm0
    2bcc:	f3 0f 58 45 d0       	addss  -0x30(%rbp),%xmm0
    2bd1:	66 0f 7e c0          	movd   %xmm0,%eax
    2bd5:	48 8b 55 80          	mov    -0x80(%rbp),%rdx
    2bd9:	89 02                	mov    %eax,(%rdx)
    2bdb:	48 8b 85 78 ff ff ff 	mov    -0x88(%rbp),%rax
    2be2:	f3 0f 10 00          	movss  (%rax),%xmm0
    2be6:	f3 0f 58 45 cc       	addss  -0x34(%rbp),%xmm0
    2beb:	66 0f 7e c0          	movd   %xmm0,%eax
    2bef:	48 8b 95 78 ff ff ff 	mov    -0x88(%rbp),%rdx
    2bf6:	89 02                	mov    %eax,(%rdx)
    2bf8:	83 7d 20 01          	cmpl   $0x1,0x20(%rbp)
    2bfc:	74 06                	je     2c04 <try_swap+0x884>
    2bfe:	83 7d 20 02          	cmpl   $0x2,0x20(%rbp)
    2c02:	75 4e                	jne    2c52 <try_swap+0x8d2>
    2c04:	48 8b 85 70 ff ff ff 	mov    -0x90(%rbp),%rax
    2c0b:	f3 0f 10 08          	movss  (%rax),%xmm1
    2c0f:	f3 0f 10 45 a0       	movss  -0x60(%rbp),%xmm0
    2c14:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    2c18:	66 0f 7e c8          	movd   %xmm1,%eax
    2c1c:	48 8b 95 70 ff ff ff 	mov    -0x90(%rbp),%rdx
    2c23:	89 02                	mov    %eax,(%rdx)
    2c25:	48 8b 45 28          	mov    0x28(%rbp),%rax
    2c29:	f3 0f 10 08          	movss  (%rax),%xmm1
    2c2d:	f3 0f 10 45 9c       	movss  -0x64(%rbp),%xmm0
    2c32:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    2c36:	66 0f 7e c8          	movd   %xmm1,%eax
    2c3a:	48 8b 55 28          	mov    0x28(%rbp),%rdx
    2c3e:	89 02                	mov    %eax,(%rdx)
    2c40:	8b 55 bc             	mov    -0x44(%rbp),%edx
    2c43:	8b 4d e4             	mov    -0x1c(%rbp),%ecx
    2c46:	8b 45 ec             	mov    -0x14(%rbp),%eax
    2c49:	89 ce                	mov    %ecx,%esi
    2c4b:	89 c7                	mov    %eax,%edi
    2c4d:	e8 92 14 00 00       	callq  40e4 <update_td_cost>
    2c52:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%rbp)
    2c59:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%rbp)
    2c60:	e9 39 01 00 00       	jmpq   2d9e <try_swap+0xa1e>
    2c65:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2c6c <try_swap+0x8ec>
    2c6c:	8b 55 dc             	mov    -0x24(%rbp),%edx
    2c6f:	48 63 d2             	movslq %edx,%rdx
    2c72:	48 c1 e2 02          	shl    $0x2,%rdx
    2c76:	48 01 d0             	add    %rdx,%rax
    2c79:	8b 00                	mov    (%rax),%eax
    2c7b:	89 45 b4             	mov    %eax,-0x4c(%rbp)
    2c7e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2c85 <try_swap+0x905>
    2c85:	8b 55 dc             	mov    -0x24(%rbp),%edx
    2c88:	48 63 d2             	movslq %edx,%rdx
    2c8b:	48 c1 e2 02          	shl    $0x2,%rdx
    2c8f:	48 01 d0             	add    %rdx,%rax
    2c92:	8b 00                	mov    (%rax),%eax
    2c94:	83 f8 02             	cmp    $0x2,%eax
    2c97:	75 21                	jne    2cba <try_swap+0x93a>
    2c99:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2ca0 <try_swap+0x920>
    2ca0:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    2ca3:	48 63 d2             	movslq %edx,%rdx
    2ca6:	48 c1 e2 02          	shl    $0x2,%rdx
    2caa:	48 01 c2             	add    %rax,%rdx
    2cad:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 2cb3 <try_swap+0x933>
    2cb3:	89 02                	mov    %eax,(%rdx)
    2cb5:	e9 e0 00 00 00       	jmpq   2d9a <try_swap+0xa1a>
    2cba:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2cc1 <try_swap+0x941>
    2cc1:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    2cc4:	48 63 d2             	movslq %edx,%rdx
    2cc7:	48 c1 e2 04          	shl    $0x4,%rdx
    2ccb:	48 8d 0c 10          	lea    (%rax,%rdx,1),%rcx
    2ccf:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2cd6 <try_swap+0x956>
    2cd6:	8b 55 d4             	mov    -0x2c(%rbp),%edx
    2cd9:	48 63 d2             	movslq %edx,%rdx
    2cdc:	48 c1 e2 04          	shl    $0x4,%rdx
    2ce0:	48 01 d0             	add    %rdx,%rax
    2ce3:	48 8b 50 08          	mov    0x8(%rax),%rdx
    2ce7:	48 8b 00             	mov    (%rax),%rax
    2cea:	48 89 01             	mov    %rax,(%rcx)
    2ced:	48 89 51 08          	mov    %rdx,0x8(%rcx)
    2cf1:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2cf8 <try_swap+0x978>
    2cf8:	8b 45 b4             	mov    -0x4c(%rbp),%eax
    2cfb:	48 63 d0             	movslq %eax,%rdx
    2cfe:	48 89 d0             	mov    %rdx,%rax
    2d01:	48 c1 e0 02          	shl    $0x2,%rax
    2d05:	48 01 d0             	add    %rdx,%rax
    2d08:	48 c1 e0 03          	shl    $0x3,%rax
    2d0c:	48 01 c8             	add    %rcx,%rax
    2d0f:	8b 40 08             	mov    0x8(%rax),%eax
    2d12:	83 f8 03             	cmp    $0x3,%eax
    2d15:	7e 37                	jle    2d4e <try_swap+0x9ce>
    2d17:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2d1e <try_swap+0x99e>
    2d1e:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    2d21:	48 63 d2             	movslq %edx,%rdx
    2d24:	48 c1 e2 04          	shl    $0x4,%rdx
    2d28:	48 8d 0c 10          	lea    (%rax,%rdx,1),%rcx
    2d2c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2d33 <try_swap+0x9b3>
    2d33:	8b 55 d4             	mov    -0x2c(%rbp),%edx
    2d36:	48 63 d2             	movslq %edx,%rdx
    2d39:	48 c1 e2 04          	shl    $0x4,%rdx
    2d3d:	48 01 d0             	add    %rdx,%rax
    2d40:	48 8b 50 08          	mov    0x8(%rax),%rdx
    2d44:	48 8b 00             	mov    (%rax),%rax
    2d47:	48 89 01             	mov    %rax,(%rcx)
    2d4a:	48 89 51 08          	mov    %rdx,0x8(%rcx)
    2d4e:	83 45 d4 01          	addl   $0x1,-0x2c(%rbp)
    2d52:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2d59 <try_swap+0x9d9>
    2d59:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    2d5c:	48 63 d2             	movslq %edx,%rdx
    2d5f:	48 c1 e2 02          	shl    $0x2,%rdx
    2d63:	48 01 c2             	add    %rax,%rdx
    2d66:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2d6d <try_swap+0x9ed>
    2d6d:	8b 4d b4             	mov    -0x4c(%rbp),%ecx
    2d70:	48 63 c9             	movslq %ecx,%rcx
    2d73:	48 c1 e1 02          	shl    $0x2,%rcx
    2d77:	48 01 c8             	add    %rcx,%rax
    2d7a:	8b 00                	mov    (%rax),%eax
    2d7c:	89 02                	mov    %eax,(%rdx)
    2d7e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2d85 <try_swap+0xa05>
    2d85:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    2d88:	48 63 d2             	movslq %edx,%rdx
    2d8b:	48 c1 e2 02          	shl    $0x2,%rdx
    2d8f:	48 01 c2             	add    %rax,%rdx
    2d92:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 2d98 <try_swap+0xa18>
    2d98:	89 02                	mov    %eax,(%rdx)
    2d9a:	83 45 dc 01          	addl   $0x1,-0x24(%rbp)
    2d9e:	8b 45 dc             	mov    -0x24(%rbp),%eax
    2da1:	3b 45 b8             	cmp    -0x48(%rbp),%eax
    2da4:	0f 8c bb fe ff ff    	jl     2c65 <try_swap+0x8e5>
    2daa:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2db1 <try_swap+0xa31>
    2db1:	8b 55 a8             	mov    -0x58(%rbp),%edx
    2db4:	48 63 d2             	movslq %edx,%rdx
    2db7:	48 c1 e2 03          	shl    $0x3,%rdx
    2dbb:	48 01 d0             	add    %rdx,%rax
    2dbe:	48 8b 08             	mov    (%rax),%rcx
    2dc1:	8b 45 a4             	mov    -0x5c(%rbp),%eax
    2dc4:	48 63 d0             	movslq %eax,%rdx
    2dc7:	48 89 d0             	mov    %rdx,%rax
    2dca:	48 01 c0             	add    %rax,%rax
    2dcd:	48 01 d0             	add    %rdx,%rax
    2dd0:	48 c1 e0 03          	shl    $0x3,%rax
    2dd4:	48 01 c8             	add    %rcx,%rax
    2dd7:	48 8b 40 10          	mov    0x10(%rax),%rax
    2ddb:	8b 55 e8             	mov    -0x18(%rbp),%edx
    2dde:	48 63 d2             	movslq %edx,%rdx
    2de1:	48 c1 e2 02          	shl    $0x2,%rdx
    2de5:	48 01 c2             	add    %rax,%rdx
    2de8:	8b 45 ec             	mov    -0x14(%rbp),%eax
    2deb:	89 02                	mov    %eax,(%rdx)
    2ded:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2df4 <try_swap+0xa74>
    2df4:	8b 55 c8             	mov    -0x38(%rbp),%edx
    2df7:	48 63 d2             	movslq %edx,%rdx
    2dfa:	48 c1 e2 03          	shl    $0x3,%rdx
    2dfe:	48 01 d0             	add    %rdx,%rax
    2e01:	48 8b 08             	mov    (%rax),%rcx
    2e04:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    2e07:	48 63 d0             	movslq %eax,%rdx
    2e0a:	48 89 d0             	mov    %rdx,%rax
    2e0d:	48 01 c0             	add    %rax,%rax
    2e10:	48 01 d0             	add    %rdx,%rax
    2e13:	48 c1 e0 03          	shl    $0x3,%rax
    2e17:	48 01 c8             	add    %rcx,%rax
    2e1a:	48 8b 40 10          	mov    0x10(%rax),%rax
    2e1e:	8b 55 c0             	mov    -0x40(%rbp),%edx
    2e21:	48 63 d2             	movslq %edx,%rdx
    2e24:	48 c1 e2 02          	shl    $0x2,%rdx
    2e28:	48 01 c2             	add    %rax,%rdx
    2e2b:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    2e2e:	89 02                	mov    %eax,(%rdx)
    2e30:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%rbp)
    2e34:	0f 85 c4 01 00 00    	jne    2ffe <try_swap+0xc7e>
    2e3a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2e41 <try_swap+0xac1>
    2e41:	8b 55 a8             	mov    -0x58(%rbp),%edx
    2e44:	48 63 d2             	movslq %edx,%rdx
    2e47:	48 c1 e2 03          	shl    $0x3,%rdx
    2e4b:	48 01 d0             	add    %rdx,%rax
    2e4e:	48 8b 08             	mov    (%rax),%rcx
    2e51:	8b 45 a4             	mov    -0x5c(%rbp),%eax
    2e54:	48 63 d0             	movslq %eax,%rdx
    2e57:	48 89 d0             	mov    %rdx,%rax
    2e5a:	48 01 c0             	add    %rax,%rax
    2e5d:	48 01 d0             	add    %rdx,%rax
    2e60:	48 c1 e0 03          	shl    $0x3,%rax
    2e64:	48 01 c8             	add    %rcx,%rax
    2e67:	8b 50 0c             	mov    0xc(%rax),%edx
    2e6a:	83 c2 01             	add    $0x1,%edx
    2e6d:	89 50 0c             	mov    %edx,0xc(%rax)
    2e70:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2e77 <try_swap+0xaf7>
    2e77:	8b 55 c8             	mov    -0x38(%rbp),%edx
    2e7a:	48 63 d2             	movslq %edx,%rdx
    2e7d:	48 c1 e2 03          	shl    $0x3,%rdx
    2e81:	48 01 d0             	add    %rdx,%rax
    2e84:	48 8b 08             	mov    (%rax),%rcx
    2e87:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    2e8a:	48 63 d0             	movslq %eax,%rdx
    2e8d:	48 89 d0             	mov    %rdx,%rax
    2e90:	48 01 c0             	add    %rax,%rax
    2e93:	48 01 d0             	add    %rdx,%rax
    2e96:	48 c1 e0 03          	shl    $0x3,%rax
    2e9a:	48 01 c8             	add    %rcx,%rax
    2e9d:	8b 50 0c             	mov    0xc(%rax),%edx
    2ea0:	83 ea 01             	sub    $0x1,%edx
    2ea3:	89 50 0c             	mov    %edx,0xc(%rax)
    2ea6:	e9 53 01 00 00       	jmpq   2ffe <try_swap+0xc7e>
    2eab:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%rbp)
    2eb2:	eb 39                	jmp    2eed <try_swap+0xb6d>
    2eb4:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2ebb <try_swap+0xb3b>
    2ebb:	8b 55 dc             	mov    -0x24(%rbp),%edx
    2ebe:	48 63 d2             	movslq %edx,%rdx
    2ec1:	48 c1 e2 02          	shl    $0x2,%rdx
    2ec5:	48 01 d0             	add    %rdx,%rax
    2ec8:	8b 00                	mov    (%rax),%eax
    2eca:	89 45 b4             	mov    %eax,-0x4c(%rbp)
    2ecd:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 2ed4 <try_swap+0xb54>
    2ed4:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    2ed7:	48 63 d2             	movslq %edx,%rdx
    2eda:	48 c1 e2 02          	shl    $0x2,%rdx
    2ede:	48 01 c2             	add    %rax,%rdx
    2ee1:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 2ee7 <try_swap+0xb67>
    2ee7:	89 02                	mov    %eax,(%rdx)
    2ee9:	83 45 dc 01          	addl   $0x1,-0x24(%rbp)
    2eed:	8b 45 dc             	mov    -0x24(%rbp),%eax
    2ef0:	3b 45 b8             	cmp    -0x48(%rbp),%eax
    2ef3:	7c bf                	jl     2eb4 <try_swap+0xb34>
    2ef5:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2efc <try_swap+0xb7c>
    2efc:	8b 45 ec             	mov    -0x14(%rbp),%eax
    2eff:	48 63 d0             	movslq %eax,%rdx
    2f02:	48 89 d0             	mov    %rdx,%rax
    2f05:	48 c1 e0 02          	shl    $0x2,%rax
    2f09:	48 01 d0             	add    %rdx,%rax
    2f0c:	48 c1 e0 03          	shl    $0x3,%rax
    2f10:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    2f14:	8b 45 c8             	mov    -0x38(%rbp),%eax
    2f17:	89 42 18             	mov    %eax,0x18(%rdx)
    2f1a:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2f21 <try_swap+0xba1>
    2f21:	8b 45 ec             	mov    -0x14(%rbp),%eax
    2f24:	48 63 d0             	movslq %eax,%rdx
    2f27:	48 89 d0             	mov    %rdx,%rax
    2f2a:	48 c1 e0 02          	shl    $0x2,%rax
    2f2e:	48 01 d0             	add    %rdx,%rax
    2f31:	48 c1 e0 03          	shl    $0x3,%rax
    2f35:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    2f39:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    2f3c:	89 42 1c             	mov    %eax,0x1c(%rdx)
    2f3f:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2f46 <try_swap+0xbc6>
    2f46:	8b 45 ec             	mov    -0x14(%rbp),%eax
    2f49:	48 63 d0             	movslq %eax,%rdx
    2f4c:	48 89 d0             	mov    %rdx,%rax
    2f4f:	48 c1 e0 02          	shl    $0x2,%rax
    2f53:	48 01 d0             	add    %rdx,%rax
    2f56:	48 c1 e0 03          	shl    $0x3,%rax
    2f5a:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    2f5e:	8b 45 c0             	mov    -0x40(%rbp),%eax
    2f61:	89 42 20             	mov    %eax,0x20(%rdx)
    2f64:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%rbp)
    2f68:	74 6f                	je     2fd9 <try_swap+0xc59>
    2f6a:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2f71 <try_swap+0xbf1>
    2f71:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    2f74:	48 63 d0             	movslq %eax,%rdx
    2f77:	48 89 d0             	mov    %rdx,%rax
    2f7a:	48 c1 e0 02          	shl    $0x2,%rax
    2f7e:	48 01 d0             	add    %rdx,%rax
    2f81:	48 c1 e0 03          	shl    $0x3,%rax
    2f85:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    2f89:	8b 45 a8             	mov    -0x58(%rbp),%eax
    2f8c:	89 42 18             	mov    %eax,0x18(%rdx)
    2f8f:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2f96 <try_swap+0xc16>
    2f96:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    2f99:	48 63 d0             	movslq %eax,%rdx
    2f9c:	48 89 d0             	mov    %rdx,%rax
    2f9f:	48 c1 e0 02          	shl    $0x2,%rax
    2fa3:	48 01 d0             	add    %rdx,%rax
    2fa6:	48 c1 e0 03          	shl    $0x3,%rax
    2faa:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    2fae:	8b 45 a4             	mov    -0x5c(%rbp),%eax
    2fb1:	89 42 1c             	mov    %eax,0x1c(%rdx)
    2fb4:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 2fbb <try_swap+0xc3b>
    2fbb:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    2fbe:	48 63 d0             	movslq %eax,%rdx
    2fc1:	48 89 d0             	mov    %rdx,%rax
    2fc4:	48 c1 e0 02          	shl    $0x2,%rax
    2fc8:	48 01 d0             	add    %rdx,%rax
    2fcb:	48 c1 e0 03          	shl    $0x3,%rax
    2fcf:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    2fd3:	8b 45 e8             	mov    -0x18(%rbp),%eax
    2fd6:	89 42 20             	mov    %eax,0x20(%rdx)
    2fd9:	83 bd 6c ff ff ff 01 	cmpl   $0x1,-0x94(%rbp)
    2fe0:	75 1c                	jne    2ffe <try_swap+0xc7e>
    2fe2:	48 8b 8d 58 ff ff ff 	mov    -0xa8(%rbp),%rcx
    2fe9:	48 8b 85 60 ff ff ff 	mov    -0xa0(%rbp),%rax
    2ff0:	8b 55 10             	mov    0x10(%rbp),%edx
    2ff3:	48 89 ce             	mov    %rcx,%rsi
    2ff6:	48 89 c7             	mov    %rax,%rdi
    2ff9:	e8 ec 00 00 00       	callq  30ea <restore_region_occ>
    2ffe:	8b 45 ac             	mov    -0x54(%rbp),%eax
    3001:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
    3005:	c9                   	leaveq 
    3006:	c3                   	retq   

0000000000003007 <save_region_occ>:
    3007:	55                   	push   %rbp
    3008:	48 89 e5             	mov    %rsp,%rbp
    300b:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    300f:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    3013:	89 55 dc             	mov    %edx,-0x24(%rbp)
    3016:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    301d:	e9 ba 00 00 00       	jmpq   30dc <save_region_occ+0xd5>
    3022:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    3029:	e9 9e 00 00 00       	jmpq   30cc <save_region_occ+0xc5>
    302e:	8b 45 fc             	mov    -0x4(%rbp),%eax
    3031:	48 98                	cltq   
    3033:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
    303a:	00 
    303b:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    303f:	48 01 d0             	add    %rdx,%rax
    3042:	48 8b 00             	mov    (%rax),%rax
    3045:	8b 55 f8             	mov    -0x8(%rbp),%edx
    3048:	48 63 d2             	movslq %edx,%rdx
    304b:	48 c1 e2 02          	shl    $0x2,%rdx
    304f:	48 01 c2             	add    %rax,%rdx
    3052:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3059 <save_region_occ+0x52>
    3059:	8b 4d fc             	mov    -0x4(%rbp),%ecx
    305c:	48 63 c9             	movslq %ecx,%rcx
    305f:	48 c1 e1 03          	shl    $0x3,%rcx
    3063:	48 01 c8             	add    %rcx,%rax
    3066:	48 8b 00             	mov    (%rax),%rax
    3069:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    306c:	48 63 c9             	movslq %ecx,%rcx
    306f:	48 c1 e1 04          	shl    $0x4,%rcx
    3073:	48 01 c8             	add    %rcx,%rax
    3076:	8b 40 08             	mov    0x8(%rax),%eax
    3079:	89 02                	mov    %eax,(%rdx)
    307b:	8b 45 fc             	mov    -0x4(%rbp),%eax
    307e:	48 98                	cltq   
    3080:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
    3087:	00 
    3088:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    308c:	48 01 d0             	add    %rdx,%rax
    308f:	48 8b 00             	mov    (%rax),%rax
    3092:	8b 55 f8             	mov    -0x8(%rbp),%edx
    3095:	48 63 d2             	movslq %edx,%rdx
    3098:	48 c1 e2 02          	shl    $0x2,%rdx
    309c:	48 01 c2             	add    %rax,%rdx
    309f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 30a6 <save_region_occ+0x9f>
    30a6:	8b 4d fc             	mov    -0x4(%rbp),%ecx
    30a9:	48 63 c9             	movslq %ecx,%rcx
    30ac:	48 c1 e1 03          	shl    $0x3,%rcx
    30b0:	48 01 c8             	add    %rcx,%rax
    30b3:	48 8b 00             	mov    (%rax),%rax
    30b6:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    30b9:	48 63 c9             	movslq %ecx,%rcx
    30bc:	48 c1 e1 04          	shl    $0x4,%rcx
    30c0:	48 01 c8             	add    %rcx,%rax
    30c3:	8b 40 08             	mov    0x8(%rax),%eax
    30c6:	89 02                	mov    %eax,(%rdx)
    30c8:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    30cc:	8b 45 f8             	mov    -0x8(%rbp),%eax
    30cf:	3b 45 dc             	cmp    -0x24(%rbp),%eax
    30d2:	0f 8c 56 ff ff ff    	jl     302e <save_region_occ+0x27>
    30d8:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    30dc:	8b 45 fc             	mov    -0x4(%rbp),%eax
    30df:	3b 45 dc             	cmp    -0x24(%rbp),%eax
    30e2:	0f 8c 3a ff ff ff    	jl     3022 <save_region_occ+0x1b>
    30e8:	5d                   	pop    %rbp
    30e9:	c3                   	retq   

00000000000030ea <restore_region_occ>:
    30ea:	55                   	push   %rbp
    30eb:	48 89 e5             	mov    %rsp,%rbp
    30ee:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    30f2:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    30f6:	89 55 dc             	mov    %edx,-0x24(%rbp)
    30f9:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    3100:	e9 ba 00 00 00       	jmpq   31bf <restore_region_occ+0xd5>
    3105:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    310c:	e9 9e 00 00 00       	jmpq   31af <restore_region_occ+0xc5>
    3111:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3118 <restore_region_occ+0x2e>
    3118:	8b 55 fc             	mov    -0x4(%rbp),%edx
    311b:	48 63 d2             	movslq %edx,%rdx
    311e:	48 c1 e2 03          	shl    $0x3,%rdx
    3122:	48 01 d0             	add    %rdx,%rax
    3125:	48 8b 00             	mov    (%rax),%rax
    3128:	8b 55 f8             	mov    -0x8(%rbp),%edx
    312b:	48 63 d2             	movslq %edx,%rdx
    312e:	48 c1 e2 04          	shl    $0x4,%rdx
    3132:	48 01 c2             	add    %rax,%rdx
    3135:	8b 45 fc             	mov    -0x4(%rbp),%eax
    3138:	48 98                	cltq   
    313a:	48 8d 0c c5 00 00 00 	lea    0x0(,%rax,8),%rcx
    3141:	00 
    3142:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    3146:	48 01 c8             	add    %rcx,%rax
    3149:	48 8b 00             	mov    (%rax),%rax
    314c:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    314f:	48 63 c9             	movslq %ecx,%rcx
    3152:	48 c1 e1 02          	shl    $0x2,%rcx
    3156:	48 01 c8             	add    %rcx,%rax
    3159:	8b 00                	mov    (%rax),%eax
    315b:	89 42 08             	mov    %eax,0x8(%rdx)
    315e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3165 <restore_region_occ+0x7b>
    3165:	8b 55 fc             	mov    -0x4(%rbp),%edx
    3168:	48 63 d2             	movslq %edx,%rdx
    316b:	48 c1 e2 03          	shl    $0x3,%rdx
    316f:	48 01 d0             	add    %rdx,%rax
    3172:	48 8b 00             	mov    (%rax),%rax
    3175:	8b 55 f8             	mov    -0x8(%rbp),%edx
    3178:	48 63 d2             	movslq %edx,%rdx
    317b:	48 c1 e2 04          	shl    $0x4,%rdx
    317f:	48 01 c2             	add    %rax,%rdx
    3182:	8b 45 fc             	mov    -0x4(%rbp),%eax
    3185:	48 98                	cltq   
    3187:	48 8d 0c c5 00 00 00 	lea    0x0(,%rax,8),%rcx
    318e:	00 
    318f:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    3193:	48 01 c8             	add    %rcx,%rax
    3196:	48 8b 00             	mov    (%rax),%rax
    3199:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    319c:	48 63 c9             	movslq %ecx,%rcx
    319f:	48 c1 e1 02          	shl    $0x2,%rcx
    31a3:	48 01 c8             	add    %rcx,%rax
    31a6:	8b 00                	mov    (%rax),%eax
    31a8:	89 42 08             	mov    %eax,0x8(%rdx)
    31ab:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    31af:	8b 45 f8             	mov    -0x8(%rbp),%eax
    31b2:	3b 45 dc             	cmp    -0x24(%rbp),%eax
    31b5:	0f 8c 56 ff ff ff    	jl     3111 <restore_region_occ+0x27>
    31bb:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    31bf:	8b 45 fc             	mov    -0x4(%rbp),%eax
    31c2:	3b 45 dc             	cmp    -0x24(%rbp),%eax
    31c5:	0f 8c 3a ff ff ff    	jl     3105 <restore_region_occ+0x1b>
    31cb:	5d                   	pop    %rbp
    31cc:	c3                   	retq   

00000000000031cd <find_affected_nets>:
    31cd:	55                   	push   %rbp
    31ce:	48 89 e5             	mov    %rsp,%rbp
    31d1:	48 83 ec 30          	sub    $0x30,%rsp
    31d5:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    31d9:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    31dd:	89 55 dc             	mov    %edx,-0x24(%rbp)
    31e0:	89 4d d8             	mov    %ecx,-0x28(%rbp)
    31e3:	44 89 45 d4          	mov    %r8d,-0x2c(%rbp)
    31e7:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    31ee:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    31f5:	e9 e0 00 00 00       	jmpq   32da <find_affected_nets+0x10d>
    31fa:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 3201 <find_affected_nets+0x34>
    3201:	8b 45 dc             	mov    -0x24(%rbp),%eax
    3204:	48 63 d0             	movslq %eax,%rdx
    3207:	48 89 d0             	mov    %rdx,%rax
    320a:	48 c1 e0 02          	shl    $0x2,%rax
    320e:	48 01 d0             	add    %rdx,%rax
    3211:	48 c1 e0 03          	shl    $0x3,%rax
    3215:	48 01 c8             	add    %rcx,%rax
    3218:	48 8b 40 10          	mov    0x10(%rax),%rax
    321c:	8b 55 fc             	mov    -0x4(%rbp),%edx
    321f:	48 63 d2             	movslq %edx,%rdx
    3222:	48 c1 e2 02          	shl    $0x2,%rdx
    3226:	48 01 d0             	add    %rdx,%rax
    3229:	8b 00                	mov    (%rax),%eax
    322b:	89 45 f0             	mov    %eax,-0x10(%rbp)
    322e:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%rbp)
    3232:	75 05                	jne    3239 <find_affected_nets+0x6c>
    3234:	e9 9d 00 00 00       	jmpq   32d6 <find_affected_nets+0x109>
    3239:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 3240 <find_affected_nets+0x73>
    3240:	8b 45 f0             	mov    -0x10(%rbp),%eax
    3243:	48 63 d0             	movslq %eax,%rdx
    3246:	48 89 d0             	mov    %rdx,%rax
    3249:	48 c1 e0 02          	shl    $0x2,%rax
    324d:	48 01 d0             	add    %rdx,%rax
    3250:	48 c1 e0 03          	shl    $0x3,%rax
    3254:	48 01 c8             	add    %rcx,%rax
    3257:	8b 40 20             	mov    0x20(%rax),%eax
    325a:	85 c0                	test   %eax,%eax
    325c:	74 02                	je     3260 <find_affected_nets+0x93>
    325e:	eb 76                	jmp    32d6 <find_affected_nets+0x109>
    3260:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3267 <find_affected_nets+0x9a>
    3267:	8b 55 f0             	mov    -0x10(%rbp),%edx
    326a:	48 63 d2             	movslq %edx,%rdx
    326d:	48 c1 e2 02          	shl    $0x2,%rdx
    3271:	48 01 d0             	add    %rdx,%rax
    3274:	f3 0f 10 00          	movss  (%rax),%xmm0
    3278:	66 0f ef c9          	pxor   %xmm1,%xmm1
    327c:	0f 2e c1             	ucomiss %xmm1,%xmm0
    327f:	76 02                	jbe    3283 <find_affected_nets+0xb6>
    3281:	eb 53                	jmp    32d6 <find_affected_nets+0x109>
    3283:	8b 45 f8             	mov    -0x8(%rbp),%eax
    3286:	48 98                	cltq   
    3288:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    328f:	00 
    3290:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    3294:	48 01 c2             	add    %rax,%rdx
    3297:	8b 45 f0             	mov    -0x10(%rbp),%eax
    329a:	89 02                	mov    %eax,(%rdx)
    329c:	8b 45 f8             	mov    -0x8(%rbp),%eax
    329f:	48 98                	cltq   
    32a1:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    32a8:	00 
    32a9:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    32ad:	48 01 d0             	add    %rdx,%rax
    32b0:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
    32b6:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    32ba:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 32c1 <find_affected_nets+0xf4>
    32c1:	8b 55 f0             	mov    -0x10(%rbp),%edx
    32c4:	48 63 d2             	movslq %edx,%rdx
    32c7:	48 c1 e2 02          	shl    $0x2,%rdx
    32cb:	48 01 c2             	add    %rax,%rdx
    32ce:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 32d4 <find_affected_nets+0x107>
    32d4:	89 02                	mov    %eax,(%rdx)
    32d6:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    32da:	8b 45 fc             	mov    -0x4(%rbp),%eax
    32dd:	3b 45 d4             	cmp    -0x2c(%rbp),%eax
    32e0:	0f 8c 14 ff ff ff    	jl     31fa <find_affected_nets+0x2d>
    32e6:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%rbp)
    32ea:	0f 84 8e 01 00 00    	je     347e <find_affected_nets+0x2b1>
    32f0:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    32f7:	e9 76 01 00 00       	jmpq   3472 <find_affected_nets+0x2a5>
    32fc:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 3303 <find_affected_nets+0x136>
    3303:	8b 45 d8             	mov    -0x28(%rbp),%eax
    3306:	48 63 d0             	movslq %eax,%rdx
    3309:	48 89 d0             	mov    %rdx,%rax
    330c:	48 c1 e0 02          	shl    $0x2,%rax
    3310:	48 01 d0             	add    %rdx,%rax
    3313:	48 c1 e0 03          	shl    $0x3,%rax
    3317:	48 01 c8             	add    %rcx,%rax
    331a:	48 8b 40 10          	mov    0x10(%rax),%rax
    331e:	8b 55 fc             	mov    -0x4(%rbp),%edx
    3321:	48 63 d2             	movslq %edx,%rdx
    3324:	48 c1 e2 02          	shl    $0x2,%rdx
    3328:	48 01 d0             	add    %rdx,%rax
    332b:	8b 00                	mov    (%rax),%eax
    332d:	89 45 f0             	mov    %eax,-0x10(%rbp)
    3330:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%rbp)
    3334:	75 05                	jne    333b <find_affected_nets+0x16e>
    3336:	e9 33 01 00 00       	jmpq   346e <find_affected_nets+0x2a1>
    333b:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 3342 <find_affected_nets+0x175>
    3342:	8b 45 f0             	mov    -0x10(%rbp),%eax
    3345:	48 63 d0             	movslq %eax,%rdx
    3348:	48 89 d0             	mov    %rdx,%rax
    334b:	48 c1 e0 02          	shl    $0x2,%rax
    334f:	48 01 d0             	add    %rdx,%rax
    3352:	48 c1 e0 03          	shl    $0x3,%rax
    3356:	48 01 c8             	add    %rcx,%rax
    3359:	8b 40 20             	mov    0x20(%rax),%eax
    335c:	85 c0                	test   %eax,%eax
    335e:	74 05                	je     3365 <find_affected_nets+0x198>
    3360:	e9 09 01 00 00       	jmpq   346e <find_affected_nets+0x2a1>
    3365:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 336c <find_affected_nets+0x19f>
    336c:	8b 55 f0             	mov    -0x10(%rbp),%edx
    336f:	48 63 d2             	movslq %edx,%rdx
    3372:	48 c1 e2 02          	shl    $0x2,%rdx
    3376:	48 01 d0             	add    %rdx,%rax
    3379:	f3 0f 10 00          	movss  (%rax),%xmm0
    337d:	66 0f ef c9          	pxor   %xmm1,%xmm1
    3381:	0f 2e c1             	ucomiss %xmm1,%xmm0
    3384:	0f 86 91 00 00 00    	jbe    341b <find_affected_nets+0x24e>
    338a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
    3391:	eb 57                	jmp    33ea <find_affected_nets+0x21d>
    3393:	8b 45 f4             	mov    -0xc(%rbp),%eax
    3396:	48 98                	cltq   
    3398:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    339f:	00 
    33a0:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    33a4:	48 01 d0             	add    %rdx,%rax
    33a7:	8b 00                	mov    (%rax),%eax
    33a9:	3b 45 f0             	cmp    -0x10(%rbp),%eax
    33ac:	75 38                	jne    33e6 <find_affected_nets+0x219>
    33ae:	8b 45 f4             	mov    -0xc(%rbp),%eax
    33b1:	48 98                	cltq   
    33b3:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    33ba:	00 
    33bb:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    33bf:	48 01 d0             	add    %rdx,%rax
    33c2:	8b 00                	mov    (%rax),%eax
    33c4:	85 c0                	test   %eax,%eax
    33c6:	75 1c                	jne    33e4 <find_affected_nets+0x217>
    33c8:	8b 45 f4             	mov    -0xc(%rbp),%eax
    33cb:	48 98                	cltq   
    33cd:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    33d4:	00 
    33d5:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    33d9:	48 01 d0             	add    %rdx,%rax
    33dc:	c7 00 02 00 00 00    	movl   $0x2,(%rax)
    33e2:	eb 0e                	jmp    33f2 <find_affected_nets+0x225>
    33e4:	eb 0c                	jmp    33f2 <find_affected_nets+0x225>
    33e6:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
    33ea:	8b 45 f4             	mov    -0xc(%rbp),%eax
    33ed:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    33f0:	7c a1                	jl     3393 <find_affected_nets+0x1c6>
    33f2:	8b 45 f4             	mov    -0xc(%rbp),%eax
    33f5:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    33f8:	7e 74                	jle    346e <find_affected_nets+0x2a1>
    33fa:	8b 55 f8             	mov    -0x8(%rbp),%edx
    33fd:	8b 45 f4             	mov    -0xc(%rbp),%eax
    3400:	89 c6                	mov    %eax,%esi
    3402:	bf 00 00 00 00       	mov    $0x0,%edi
    3407:	b8 00 00 00 00       	mov    $0x0,%eax
    340c:	e8 00 00 00 00       	callq  3411 <find_affected_nets+0x244>
    3411:	bf 01 00 00 00       	mov    $0x1,%edi
    3416:	e8 00 00 00 00       	callq  341b <find_affected_nets+0x24e>
    341b:	8b 45 f8             	mov    -0x8(%rbp),%eax
    341e:	48 98                	cltq   
    3420:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    3427:	00 
    3428:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    342c:	48 01 c2             	add    %rax,%rdx
    342f:	8b 45 f0             	mov    -0x10(%rbp),%eax
    3432:	89 02                	mov    %eax,(%rdx)
    3434:	8b 45 f8             	mov    -0x8(%rbp),%eax
    3437:	48 98                	cltq   
    3439:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    3440:	00 
    3441:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    3445:	48 01 d0             	add    %rdx,%rax
    3448:	c7 00 01 00 00 00    	movl   $0x1,(%rax)
    344e:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    3452:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3459 <find_affected_nets+0x28c>
    3459:	8b 55 f0             	mov    -0x10(%rbp),%edx
    345c:	48 63 d2             	movslq %edx,%rdx
    345f:	48 c1 e2 02          	shl    $0x2,%rdx
    3463:	48 01 c2             	add    %rax,%rdx
    3466:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 346c <find_affected_nets+0x29f>
    346c:	89 02                	mov    %eax,(%rdx)
    346e:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    3472:	8b 45 fc             	mov    -0x4(%rbp),%eax
    3475:	3b 45 d4             	cmp    -0x2c(%rbp),%eax
    3478:	0f 8c 7e fe ff ff    	jl     32fc <find_affected_nets+0x12f>
    347e:	8b 45 f8             	mov    -0x8(%rbp),%eax
    3481:	c9                   	leaveq 
    3482:	c3                   	retq   

0000000000003483 <find_to>:
    3483:	55                   	push   %rbp
    3484:	48 89 e5             	mov    %rsp,%rbp
    3487:	53                   	push   %rbx
    3488:	48 83 ec 78          	sub    $0x78,%rsp
    348c:	89 7d ac             	mov    %edi,-0x54(%rbp)
    348f:	89 75 a8             	mov    %esi,-0x58(%rbp)
    3492:	48 89 55 a0          	mov    %rdx,-0x60(%rbp)
    3496:	f3 0f 11 45 9c       	movss  %xmm0,-0x64(%rbp)
    349b:	48 89 4d 90          	mov    %rcx,-0x70(%rbp)
    349f:	4c 89 45 88          	mov    %r8,-0x78(%rbp)
    34a3:	4c 89 4d 80          	mov    %r9,-0x80(%rbp)
    34a7:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 34ad <find_to+0x2a>
    34ad:	66 0f ef c0          	pxor   %xmm0,%xmm0
    34b1:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    34b5:	0f 2e 45 9c          	ucomiss -0x64(%rbp),%xmm0
    34b9:	76 0d                	jbe    34c8 <find_to+0x45>
    34bb:	8b 45 9c             	mov    -0x64(%rbp),%eax
    34be:	89 45 98             	mov    %eax,-0x68(%rbp)
    34c1:	f3 0f 2c 45 98       	cvttss2si -0x68(%rbp),%eax
    34c6:	eb 12                	jmp    34da <find_to+0x57>
    34c8:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 34ce <find_to+0x4b>
    34ce:	66 0f ef c0          	pxor   %xmm0,%xmm0
    34d2:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    34d6:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
    34da:	89 45 e0             	mov    %eax,-0x20(%rbp)
    34dd:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 34e3 <find_to+0x60>
    34e3:	66 0f ef c0          	pxor   %xmm0,%xmm0
    34e7:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    34eb:	0f 2e 45 9c          	ucomiss -0x64(%rbp),%xmm0
    34ef:	76 0d                	jbe    34fe <find_to+0x7b>
    34f1:	8b 45 9c             	mov    -0x64(%rbp),%eax
    34f4:	89 45 98             	mov    %eax,-0x68(%rbp)
    34f7:	f3 0f 2c 45 98       	cvttss2si -0x68(%rbp),%eax
    34fc:	eb 12                	jmp    3510 <find_to+0x8d>
    34fe:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3504 <find_to+0x81>
    3504:	66 0f ef c0          	pxor   %xmm0,%xmm0
    3508:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    350c:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
    3510:	89 45 dc             	mov    %eax,-0x24(%rbp)
    3513:	8b 45 ac             	mov    -0x54(%rbp),%eax
    3516:	2b 45 e0             	sub    -0x20(%rbp),%eax
    3519:	ba 01 00 00 00       	mov    $0x1,%edx
    351e:	85 c0                	test   %eax,%eax
    3520:	0f 4e c2             	cmovle %edx,%eax
    3523:	89 45 d8             	mov    %eax,-0x28(%rbp)
    3526:	8b 55 ac             	mov    -0x54(%rbp),%edx
    3529:	8b 45 e0             	mov    -0x20(%rbp),%eax
    352c:	01 c2                	add    %eax,%edx
    352e:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3534 <find_to+0xb1>
    3534:	39 c2                	cmp    %eax,%edx
    3536:	0f 4e c2             	cmovle %edx,%eax
    3539:	89 45 d4             	mov    %eax,-0x2c(%rbp)
    353c:	8b 45 a8             	mov    -0x58(%rbp),%eax
    353f:	2b 45 dc             	sub    -0x24(%rbp),%eax
    3542:	ba 01 00 00 00       	mov    $0x1,%edx
    3547:	85 c0                	test   %eax,%eax
    3549:	0f 4e c2             	cmovle %edx,%eax
    354c:	89 45 d0             	mov    %eax,-0x30(%rbp)
    354f:	8b 55 a8             	mov    -0x58(%rbp),%edx
    3552:	8b 45 dc             	mov    -0x24(%rbp),%eax
    3555:	01 c2                	add    %eax,%edx
    3557:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 355d <find_to+0xda>
    355d:	39 c2                	cmp    %eax,%edx
    355f:	0f 4e c2             	cmovle %edx,%eax
    3562:	89 45 cc             	mov    %eax,-0x34(%rbp)
    3565:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    356c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%rbp)
    3573:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 357a <find_to+0xf7>
    357a:	48 39 45 a0          	cmp    %rax,-0x60(%rbp)
    357e:	0f 84 b9 00 00 00    	je     363d <find_to+0x1ba>
    3584:	8b 45 d8             	mov    -0x28(%rbp),%eax
    3587:	89 45 e8             	mov    %eax,-0x18(%rbp)
    358a:	eb 49                	jmp    35d5 <find_to+0x152>
    358c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3593 <find_to+0x110>
    3593:	8b 55 e8             	mov    -0x18(%rbp),%edx
    3596:	48 63 d2             	movslq %edx,%rdx
    3599:	48 c1 e2 03          	shl    $0x3,%rdx
    359d:	48 01 d0             	add    %rdx,%rax
    35a0:	48 8b 00             	mov    (%rax),%rax
    35a3:	48 83 c0 18          	add    $0x18,%rax
    35a7:	48 8b 00             	mov    (%rax),%rax
    35aa:	48 3b 45 a0          	cmp    -0x60(%rbp),%rax
    35ae:	75 21                	jne    35d1 <find_to+0x14e>
    35b0:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    35b4:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    35b7:	48 98                	cltq   
    35b9:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    35c0:	00 
    35c1:	48 8b 45 90          	mov    -0x70(%rbp),%rax
    35c5:	48 01 c2             	add    %rax,%rdx
    35c8:	8b 45 e8             	mov    -0x18(%rbp),%eax
    35cb:	89 02                	mov    %eax,(%rdx)
    35cd:	83 45 e4 01          	addl   $0x1,-0x1c(%rbp)
    35d1:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    35d5:	8b 45 e8             	mov    -0x18(%rbp),%eax
    35d8:	3b 45 d4             	cmp    -0x2c(%rbp),%eax
    35db:	7e af                	jle    358c <find_to+0x109>
    35dd:	83 7d ec 00          	cmpl   $0x0,-0x14(%rbp)
    35e1:	75 19                	jne    35fc <find_to+0x179>
    35e3:	b9 00 00 00 00       	mov    $0x0,%ecx
    35e8:	ba b2 06 00 00       	mov    $0x6b2,%edx
    35ed:	be 00 00 00 00       	mov    $0x0,%esi
    35f2:	bf 00 00 00 00       	mov    $0x0,%edi
    35f7:	e8 00 00 00 00       	callq  35fc <find_to+0x179>
    35fc:	83 7d ec 01          	cmpl   $0x1,-0x14(%rbp)
    3600:	75 3b                	jne    363d <find_to+0x1ba>
    3602:	8b 45 cc             	mov    -0x34(%rbp),%eax
    3605:	2b 45 d0             	sub    -0x30(%rbp),%eax
    3608:	48 8b 55 a0          	mov    -0x60(%rbp),%rdx
    360c:	8b 72 10             	mov    0x10(%rdx),%esi
    360f:	99                   	cltd   
    3610:	f7 fe                	idiv   %esi
    3612:	83 e8 01             	sub    $0x1,%eax
    3615:	85 c0                	test   %eax,%eax
    3617:	7e 1a                	jle    3633 <find_to+0x1b0>
    3619:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
    361d:	8b 50 10             	mov    0x10(%rax),%edx
    3620:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3626 <find_to+0x1a3>
    3626:	89 c1                	mov    %eax,%ecx
    3628:	c1 e9 1f             	shr    $0x1f,%ecx
    362b:	01 c8                	add    %ecx,%eax
    362d:	d1 f8                	sar    %eax
    362f:	39 c2                	cmp    %eax,%edx
    3631:	7e 0a                	jle    363d <find_to+0x1ba>
    3633:	b8 00 00 00 00       	mov    $0x0,%eax
    3638:	e9 e3 05 00 00       	jmpq   3c20 <find_to+0x79d>
    363d:	83 7d e0 00          	cmpl   $0x0,-0x20(%rbp)
    3641:	7e 0b                	jle    364e <find_to+0x1cb>
    3643:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3649 <find_to+0x1c6>
    3649:	39 45 e0             	cmp    %eax,-0x20(%rbp)
    364c:	7e 1e                	jle    366c <find_to+0x1e9>
    364e:	8b 45 e0             	mov    -0x20(%rbp),%eax
    3651:	89 c6                	mov    %eax,%esi
    3653:	bf 00 00 00 00       	mov    $0x0,%edi
    3658:	b8 00 00 00 00       	mov    $0x0,%eax
    365d:	e8 00 00 00 00       	callq  3662 <find_to+0x1df>
    3662:	bf 01 00 00 00       	mov    $0x1,%edi
    3667:	e8 00 00 00 00       	callq  366c <find_to+0x1e9>
    366c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3673 <find_to+0x1f0>
    3673:	48 39 45 a0          	cmp    %rax,-0x60(%rbp)
    3677:	0f 85 b9 03 00 00    	jne    3a36 <find_to+0x5b3>
    367d:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3683 <find_to+0x200>
    3683:	39 45 e0             	cmp    %eax,-0x20(%rbp)
    3686:	0f 8c 08 01 00 00    	jl     3794 <find_to+0x311>
    368c:	bf 03 00 00 00       	mov    $0x3,%edi
    3691:	e8 00 00 00 00       	callq  3696 <find_to+0x213>
    3696:	89 45 c8             	mov    %eax,-0x38(%rbp)
    3699:	8b 45 c8             	mov    -0x38(%rbp),%eax
    369c:	83 f8 01             	cmp    $0x1,%eax
    369f:	74 4f                	je     36f0 <find_to+0x26d>
    36a1:	83 f8 01             	cmp    $0x1,%eax
    36a4:	7f 09                	jg     36af <find_to+0x22c>
    36a6:	85 c0                	test   %eax,%eax
    36a8:	74 18                	je     36c2 <find_to+0x23f>
    36aa:	e9 cc 00 00 00       	jmpq   377b <find_to+0x2f8>
    36af:	83 f8 02             	cmp    $0x2,%eax
    36b2:	74 6c                	je     3720 <find_to+0x29d>
    36b4:	83 f8 03             	cmp    $0x3,%eax
    36b7:	0f 84 93 00 00 00    	je     3750 <find_to+0x2cd>
    36bd:	e9 b9 00 00 00       	jmpq   377b <find_to+0x2f8>
    36c2:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 36c8 <find_to+0x245>
    36c8:	83 e8 01             	sub    $0x1,%eax
    36cb:	89 c7                	mov    %eax,%edi
    36cd:	e8 00 00 00 00       	callq  36d2 <find_to+0x24f>
    36d2:	83 c0 01             	add    $0x1,%eax
    36d5:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    36d8:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    36dc:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
    36e2:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    36e6:	8b 55 c4             	mov    -0x3c(%rbp),%edx
    36e9:	89 10                	mov    %edx,(%rax)
    36eb:	e9 9f 00 00 00       	jmpq   378f <find_to+0x30c>
    36f0:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 36f6 <find_to+0x273>
    36f6:	83 e8 01             	sub    $0x1,%eax
    36f9:	89 c7                	mov    %eax,%edi
    36fb:	e8 00 00 00 00       	callq  3700 <find_to+0x27d>
    3700:	83 c0 01             	add    $0x1,%eax
    3703:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    3706:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    370a:	8b 55 c4             	mov    -0x3c(%rbp),%edx
    370d:	89 10                	mov    %edx,(%rax)
    370f:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3715 <find_to+0x292>
    3715:	8d 50 01             	lea    0x1(%rax),%edx
    3718:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    371c:	89 10                	mov    %edx,(%rax)
    371e:	eb 6f                	jmp    378f <find_to+0x30c>
    3720:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3726 <find_to+0x2a3>
    3726:	83 e8 01             	sub    $0x1,%eax
    3729:	89 c7                	mov    %eax,%edi
    372b:	e8 00 00 00 00       	callq  3730 <find_to+0x2ad>
    3730:	83 c0 01             	add    $0x1,%eax
    3733:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    3736:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 373c <find_to+0x2b9>
    373c:	8d 50 01             	lea    0x1(%rax),%edx
    373f:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3743:	89 10                	mov    %edx,(%rax)
    3745:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3749:	8b 55 c4             	mov    -0x3c(%rbp),%edx
    374c:	89 10                	mov    %edx,(%rax)
    374e:	eb 3f                	jmp    378f <find_to+0x30c>
    3750:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3756 <find_to+0x2d3>
    3756:	83 e8 01             	sub    $0x1,%eax
    3759:	89 c7                	mov    %eax,%edi
    375b:	e8 00 00 00 00       	callq  3760 <find_to+0x2dd>
    3760:	83 c0 01             	add    $0x1,%eax
    3763:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    3766:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    376a:	8b 55 c4             	mov    -0x3c(%rbp),%edx
    376d:	89 10                	mov    %edx,(%rax)
    376f:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3773:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
    3779:	eb 14                	jmp    378f <find_to+0x30c>
    377b:	bf 00 00 00 00       	mov    $0x0,%edi
    3780:	e8 00 00 00 00       	callq  3785 <find_to+0x302>
    3785:	bf 01 00 00 00       	mov    $0x1,%edi
    378a:	e8 00 00 00 00       	callq  378f <find_to+0x30c>
    378f:	e9 b8 03 00 00       	jmpq   3b4c <find_to+0x6c9>
    3794:	83 7d ac 00          	cmpl   $0x0,-0x54(%rbp)
    3798:	0f 85 98 00 00 00    	jne    3836 <find_to+0x3b3>
    379e:	8b 45 dc             	mov    -0x24(%rbp),%eax
    37a1:	01 c0                	add    %eax,%eax
    37a3:	89 c7                	mov    %eax,%edi
    37a5:	e8 00 00 00 00       	callq  37aa <find_to+0x327>
    37aa:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    37ad:	8b 45 a8             	mov    -0x58(%rbp),%eax
    37b0:	2b 45 dc             	sub    -0x24(%rbp),%eax
    37b3:	89 c2                	mov    %eax,%edx
    37b5:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    37b8:	01 c2                	add    %eax,%edx
    37ba:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    37be:	89 10                	mov    %edx,(%rax)
    37c0:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    37c4:	8b 55 ac             	mov    -0x54(%rbp),%edx
    37c7:	89 10                	mov    %edx,(%rax)
    37c9:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    37cd:	8b 10                	mov    (%rax),%edx
    37cf:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 37d5 <find_to+0x352>
    37d5:	39 c2                	cmp    %eax,%edx
    37d7:	7e 2a                	jle    3803 <find_to+0x380>
    37d9:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 37df <find_to+0x35c>
    37df:	8d 50 01             	lea    0x1(%rax),%edx
    37e2:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    37e6:	89 10                	mov    %edx,(%rax)
    37e8:	8b 45 e0             	mov    -0x20(%rbp),%eax
    37eb:	83 e8 01             	sub    $0x1,%eax
    37ee:	89 c7                	mov    %eax,%edi
    37f0:	e8 00 00 00 00       	callq  37f5 <find_to+0x372>
    37f5:	8d 50 01             	lea    0x1(%rax),%edx
    37f8:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    37fc:	89 10                	mov    %edx,(%rax)
    37fe:	e9 49 03 00 00       	jmpq   3b4c <find_to+0x6c9>
    3803:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3807:	8b 00                	mov    (%rax),%eax
    3809:	85 c0                	test   %eax,%eax
    380b:	0f 8f 3b 03 00 00    	jg     3b4c <find_to+0x6c9>
    3811:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3815:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
    381b:	8b 45 e0             	mov    -0x20(%rbp),%eax
    381e:	83 e8 01             	sub    $0x1,%eax
    3821:	89 c7                	mov    %eax,%edi
    3823:	e8 00 00 00 00       	callq  3828 <find_to+0x3a5>
    3828:	8d 50 01             	lea    0x1(%rax),%edx
    382b:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    382f:	89 10                	mov    %edx,(%rax)
    3831:	e9 16 03 00 00       	jmpq   3b4c <find_to+0x6c9>
    3836:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 383c <find_to+0x3b9>
    383c:	83 c0 01             	add    $0x1,%eax
    383f:	3b 45 ac             	cmp    -0x54(%rbp),%eax
    3842:	0f 85 a6 00 00 00    	jne    38ee <find_to+0x46b>
    3848:	8b 45 dc             	mov    -0x24(%rbp),%eax
    384b:	01 c0                	add    %eax,%eax
    384d:	89 c7                	mov    %eax,%edi
    384f:	e8 00 00 00 00       	callq  3854 <find_to+0x3d1>
    3854:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    3857:	8b 45 a8             	mov    -0x58(%rbp),%eax
    385a:	2b 45 dc             	sub    -0x24(%rbp),%eax
    385d:	89 c2                	mov    %eax,%edx
    385f:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    3862:	01 c2                	add    %eax,%edx
    3864:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3868:	89 10                	mov    %edx,(%rax)
    386a:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    386e:	8b 55 ac             	mov    -0x54(%rbp),%edx
    3871:	89 10                	mov    %edx,(%rax)
    3873:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3877:	8b 10                	mov    (%rax),%edx
    3879:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 387f <find_to+0x3fc>
    387f:	39 c2                	cmp    %eax,%edx
    3881:	7e 31                	jle    38b4 <find_to+0x431>
    3883:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3889 <find_to+0x406>
    3889:	8d 50 01             	lea    0x1(%rax),%edx
    388c:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3890:	89 10                	mov    %edx,(%rax)
    3892:	8b 1d 00 00 00 00    	mov    0x0(%rip),%ebx        # 3898 <find_to+0x415>
    3898:	8b 45 e0             	mov    -0x20(%rbp),%eax
    389b:	83 e8 01             	sub    $0x1,%eax
    389e:	89 c7                	mov    %eax,%edi
    38a0:	e8 00 00 00 00       	callq  38a5 <find_to+0x422>
    38a5:	29 c3                	sub    %eax,%ebx
    38a7:	89 da                	mov    %ebx,%edx
    38a9:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    38ad:	89 10                	mov    %edx,(%rax)
    38af:	e9 98 02 00 00       	jmpq   3b4c <find_to+0x6c9>
    38b4:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    38b8:	8b 00                	mov    (%rax),%eax
    38ba:	85 c0                	test   %eax,%eax
    38bc:	0f 8f 8a 02 00 00    	jg     3b4c <find_to+0x6c9>
    38c2:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    38c6:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
    38cc:	8b 1d 00 00 00 00    	mov    0x0(%rip),%ebx        # 38d2 <find_to+0x44f>
    38d2:	8b 45 e0             	mov    -0x20(%rbp),%eax
    38d5:	83 e8 01             	sub    $0x1,%eax
    38d8:	89 c7                	mov    %eax,%edi
    38da:	e8 00 00 00 00       	callq  38df <find_to+0x45c>
    38df:	29 c3                	sub    %eax,%ebx
    38e1:	89 da                	mov    %ebx,%edx
    38e3:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    38e7:	89 10                	mov    %edx,(%rax)
    38e9:	e9 5e 02 00 00       	jmpq   3b4c <find_to+0x6c9>
    38ee:	83 7d a8 00          	cmpl   $0x0,-0x58(%rbp)
    38f2:	0f 85 98 00 00 00    	jne    3990 <find_to+0x50d>
    38f8:	8b 45 e0             	mov    -0x20(%rbp),%eax
    38fb:	01 c0                	add    %eax,%eax
    38fd:	89 c7                	mov    %eax,%edi
    38ff:	e8 00 00 00 00       	callq  3904 <find_to+0x481>
    3904:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    3907:	8b 45 ac             	mov    -0x54(%rbp),%eax
    390a:	2b 45 e0             	sub    -0x20(%rbp),%eax
    390d:	89 c2                	mov    %eax,%edx
    390f:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    3912:	01 c2                	add    %eax,%edx
    3914:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3918:	89 10                	mov    %edx,(%rax)
    391a:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    391e:	8b 55 a8             	mov    -0x58(%rbp),%edx
    3921:	89 10                	mov    %edx,(%rax)
    3923:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3927:	8b 10                	mov    (%rax),%edx
    3929:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 392f <find_to+0x4ac>
    392f:	39 c2                	cmp    %eax,%edx
    3931:	7e 2a                	jle    395d <find_to+0x4da>
    3933:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3939 <find_to+0x4b6>
    3939:	8d 50 01             	lea    0x1(%rax),%edx
    393c:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3940:	89 10                	mov    %edx,(%rax)
    3942:	8b 45 dc             	mov    -0x24(%rbp),%eax
    3945:	83 e8 01             	sub    $0x1,%eax
    3948:	89 c7                	mov    %eax,%edi
    394a:	e8 00 00 00 00       	callq  394f <find_to+0x4cc>
    394f:	8d 50 01             	lea    0x1(%rax),%edx
    3952:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3956:	89 10                	mov    %edx,(%rax)
    3958:	e9 ef 01 00 00       	jmpq   3b4c <find_to+0x6c9>
    395d:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3961:	8b 00                	mov    (%rax),%eax
    3963:	85 c0                	test   %eax,%eax
    3965:	0f 8f e1 01 00 00    	jg     3b4c <find_to+0x6c9>
    396b:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    396f:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
    3975:	8b 45 dc             	mov    -0x24(%rbp),%eax
    3978:	83 e8 01             	sub    $0x1,%eax
    397b:	89 c7                	mov    %eax,%edi
    397d:	e8 00 00 00 00       	callq  3982 <find_to+0x4ff>
    3982:	8d 50 01             	lea    0x1(%rax),%edx
    3985:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3989:	89 10                	mov    %edx,(%rax)
    398b:	e9 bc 01 00 00       	jmpq   3b4c <find_to+0x6c9>
    3990:	8b 45 e0             	mov    -0x20(%rbp),%eax
    3993:	01 c0                	add    %eax,%eax
    3995:	89 c7                	mov    %eax,%edi
    3997:	e8 00 00 00 00       	callq  399c <find_to+0x519>
    399c:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    399f:	8b 45 ac             	mov    -0x54(%rbp),%eax
    39a2:	2b 45 e0             	sub    -0x20(%rbp),%eax
    39a5:	89 c2                	mov    %eax,%edx
    39a7:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    39aa:	01 c2                	add    %eax,%edx
    39ac:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    39b0:	89 10                	mov    %edx,(%rax)
    39b2:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    39b6:	8b 55 a8             	mov    -0x58(%rbp),%edx
    39b9:	89 10                	mov    %edx,(%rax)
    39bb:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    39bf:	8b 10                	mov    (%rax),%edx
    39c1:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 39c7 <find_to+0x544>
    39c7:	39 c2                	cmp    %eax,%edx
    39c9:	7e 31                	jle    39fc <find_to+0x579>
    39cb:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 39d1 <find_to+0x54e>
    39d1:	8d 50 01             	lea    0x1(%rax),%edx
    39d4:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    39d8:	89 10                	mov    %edx,(%rax)
    39da:	8b 1d 00 00 00 00    	mov    0x0(%rip),%ebx        # 39e0 <find_to+0x55d>
    39e0:	8b 45 dc             	mov    -0x24(%rbp),%eax
    39e3:	83 e8 01             	sub    $0x1,%eax
    39e6:	89 c7                	mov    %eax,%edi
    39e8:	e8 00 00 00 00       	callq  39ed <find_to+0x56a>
    39ed:	29 c3                	sub    %eax,%ebx
    39ef:	89 da                	mov    %ebx,%edx
    39f1:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    39f5:	89 10                	mov    %edx,(%rax)
    39f7:	e9 50 01 00 00       	jmpq   3b4c <find_to+0x6c9>
    39fc:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3a00:	8b 00                	mov    (%rax),%eax
    3a02:	85 c0                	test   %eax,%eax
    3a04:	0f 8f 42 01 00 00    	jg     3b4c <find_to+0x6c9>
    3a0a:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3a0e:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
    3a14:	8b 1d 00 00 00 00    	mov    0x0(%rip),%ebx        # 3a1a <find_to+0x597>
    3a1a:	8b 45 dc             	mov    -0x24(%rbp),%eax
    3a1d:	83 e8 01             	sub    $0x1,%eax
    3a20:	89 c7                	mov    %eax,%edi
    3a22:	e8 00 00 00 00       	callq  3a27 <find_to+0x5a4>
    3a27:	29 c3                	sub    %eax,%ebx
    3a29:	89 da                	mov    %ebx,%edx
    3a2b:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3a2f:	89 10                	mov    %edx,(%rax)
    3a31:	e9 16 01 00 00       	jmpq   3b4c <find_to+0x6c9>
    3a36:	8b 45 ec             	mov    -0x14(%rbp),%eax
    3a39:	83 e8 01             	sub    $0x1,%eax
    3a3c:	89 c7                	mov    %eax,%edi
    3a3e:	e8 00 00 00 00       	callq  3a43 <find_to+0x5c0>
    3a43:	89 45 c0             	mov    %eax,-0x40(%rbp)
    3a46:	8b 45 cc             	mov    -0x34(%rbp),%eax
    3a49:	2b 45 d0             	sub    -0x30(%rbp),%eax
    3a4c:	48 8b 55 a0          	mov    -0x60(%rbp),%rdx
    3a50:	8b 72 10             	mov    0x10(%rdx),%esi
    3a53:	99                   	cltd   
    3a54:	f7 fe                	idiv   %esi
    3a56:	83 e8 01             	sub    $0x1,%eax
    3a59:	ba 00 00 00 00       	mov    $0x0,%edx
    3a5e:	85 c0                	test   %eax,%eax
    3a60:	0f 48 c2             	cmovs  %edx,%eax
    3a63:	89 c7                	mov    %eax,%edi
    3a65:	e8 00 00 00 00       	callq  3a6a <find_to+0x5e7>
    3a6a:	89 45 bc             	mov    %eax,-0x44(%rbp)
    3a6d:	8b 45 c0             	mov    -0x40(%rbp),%eax
    3a70:	48 98                	cltq   
    3a72:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    3a79:	00 
    3a7a:	48 8b 45 90          	mov    -0x70(%rbp),%rax
    3a7e:	48 01 d0             	add    %rdx,%rax
    3a81:	8b 10                	mov    (%rax),%edx
    3a83:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3a87:	89 10                	mov    %edx,(%rax)
    3a89:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
    3a8d:	8b 40 10             	mov    0x10(%rax),%eax
    3a90:	0f af 45 bc          	imul   -0x44(%rbp),%eax
    3a94:	89 c2                	mov    %eax,%edx
    3a96:	8b 45 d0             	mov    -0x30(%rbp),%eax
    3a99:	01 c2                	add    %eax,%edx
    3a9b:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3a9f:	89 10                	mov    %edx,(%rax)
    3aa1:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3aa5:	8b 08                	mov    (%rax),%ecx
    3aa7:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 3aae <find_to+0x62b>
    3aae:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3ab2:	8b 00                	mov    (%rax),%eax
    3ab4:	48 98                	cltq   
    3ab6:	48 c1 e0 03          	shl    $0x3,%rax
    3aba:	48 01 d0             	add    %rdx,%rax
    3abd:	48 8b 30             	mov    (%rax),%rsi
    3ac0:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3ac4:	8b 00                	mov    (%rax),%eax
    3ac6:	48 63 d0             	movslq %eax,%rdx
    3ac9:	48 89 d0             	mov    %rdx,%rax
    3acc:	48 01 c0             	add    %rax,%rax
    3acf:	48 01 d0             	add    %rdx,%rax
    3ad2:	48 c1 e0 03          	shl    $0x3,%rax
    3ad6:	48 01 f0             	add    %rsi,%rax
    3ad9:	8b 40 08             	mov    0x8(%rax),%eax
    3adc:	29 c1                	sub    %eax,%ecx
    3ade:	89 ca                	mov    %ecx,%edx
    3ae0:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3ae4:	89 10                	mov    %edx,(%rax)
    3ae6:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3aea:	8b 00                	mov    (%rax),%eax
    3aec:	85 c0                	test   %eax,%eax
    3aee:	7e 10                	jle    3b00 <find_to+0x67d>
    3af0:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3af4:	8b 10                	mov    (%rax),%edx
    3af6:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3afc <find_to+0x679>
    3afc:	39 c2                	cmp    %eax,%edx
    3afe:	7e 19                	jle    3b19 <find_to+0x696>
    3b00:	b9 00 00 00 00       	mov    $0x0,%ecx
    3b05:	ba 3a 07 00 00       	mov    $0x73a,%edx
    3b0a:	be 00 00 00 00       	mov    $0x0,%esi
    3b0f:	bf 00 00 00 00       	mov    $0x0,%edi
    3b14:	e8 00 00 00 00       	callq  3b19 <find_to+0x696>
    3b19:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3b1d:	8b 00                	mov    (%rax),%eax
    3b1f:	85 c0                	test   %eax,%eax
    3b21:	7e 10                	jle    3b33 <find_to+0x6b0>
    3b23:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3b27:	8b 10                	mov    (%rax),%edx
    3b29:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3b2f <find_to+0x6ac>
    3b2f:	39 c2                	cmp    %eax,%edx
    3b31:	7e 19                	jle    3b4c <find_to+0x6c9>
    3b33:	b9 00 00 00 00       	mov    $0x0,%ecx
    3b38:	ba 3b 07 00 00       	mov    $0x73b,%edx
    3b3d:	be 00 00 00 00       	mov    $0x0,%esi
    3b42:	bf 00 00 00 00       	mov    $0x0,%edi
    3b47:	e8 00 00 00 00       	callq  3b4c <find_to+0x6c9>
    3b4c:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3b50:	8b 00                	mov    (%rax),%eax
    3b52:	3b 45 ac             	cmp    -0x54(%rbp),%eax
    3b55:	75 0f                	jne    3b66 <find_to+0x6e3>
    3b57:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3b5b:	8b 00                	mov    (%rax),%eax
    3b5d:	3b 45 a8             	cmp    -0x58(%rbp),%eax
    3b60:	0f 84 06 fb ff ff    	je     366c <find_to+0x1e9>
    3b66:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3b6a:	8b 00                	mov    (%rax),%eax
    3b6c:	85 c0                	test   %eax,%eax
    3b6e:	78 30                	js     3ba0 <find_to+0x71d>
    3b70:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3b74:	8b 00                	mov    (%rax),%eax
    3b76:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 3b7c <find_to+0x6f9>
    3b7c:	83 c2 01             	add    $0x1,%edx
    3b7f:	39 d0                	cmp    %edx,%eax
    3b81:	7f 1d                	jg     3ba0 <find_to+0x71d>
    3b83:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3b87:	8b 00                	mov    (%rax),%eax
    3b89:	85 c0                	test   %eax,%eax
    3b8b:	78 13                	js     3ba0 <find_to+0x71d>
    3b8d:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3b91:	8b 00                	mov    (%rax),%eax
    3b93:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 3b99 <find_to+0x716>
    3b99:	83 c2 01             	add    $0x1,%edx
    3b9c:	39 d0                	cmp    %edx,%eax
    3b9e:	7e 27                	jle    3bc7 <find_to+0x744>
    3ba0:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3ba4:	8b 10                	mov    (%rax),%edx
    3ba6:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3baa:	8b 00                	mov    (%rax),%eax
    3bac:	89 c6                	mov    %eax,%esi
    3bae:	bf 00 00 00 00       	mov    $0x0,%edi
    3bb3:	b8 00 00 00 00       	mov    $0x0,%eax
    3bb8:	e8 00 00 00 00       	callq  3bbd <find_to+0x73a>
    3bbd:	bf 01 00 00 00       	mov    $0x1,%edi
    3bc2:	e8 00 00 00 00       	callq  3bc7 <find_to+0x744>
    3bc7:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 3bce <find_to+0x74b>
    3bce:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    3bd2:	8b 00                	mov    (%rax),%eax
    3bd4:	48 98                	cltq   
    3bd6:	48 c1 e0 03          	shl    $0x3,%rax
    3bda:	48 01 d0             	add    %rdx,%rax
    3bdd:	48 8b 08             	mov    (%rax),%rcx
    3be0:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    3be4:	8b 00                	mov    (%rax),%eax
    3be6:	48 63 d0             	movslq %eax,%rdx
    3be9:	48 89 d0             	mov    %rdx,%rax
    3bec:	48 01 c0             	add    %rax,%rax
    3bef:	48 01 d0             	add    %rdx,%rax
    3bf2:	48 c1 e0 03          	shl    $0x3,%rax
    3bf6:	48 01 c8             	add    %rcx,%rax
    3bf9:	48 8b 00             	mov    (%rax),%rax
    3bfc:	48 3b 45 a0          	cmp    -0x60(%rbp),%rax
    3c00:	74 19                	je     3c1b <find_to+0x798>
    3c02:	b9 00 00 00 00       	mov    $0x0,%ecx
    3c07:	ba 48 07 00 00       	mov    $0x748,%edx
    3c0c:	be 00 00 00 00       	mov    $0x0,%esi
    3c11:	bf 00 00 00 00       	mov    $0x0,%edi
    3c16:	e8 00 00 00 00       	callq  3c1b <find_to+0x798>
    3c1b:	b8 01 00 00 00       	mov    $0x1,%eax
    3c20:	48 83 c4 78          	add    $0x78,%rsp
    3c24:	5b                   	pop    %rbx
    3c25:	5d                   	pop    %rbp
    3c26:	c3                   	retq   

0000000000003c27 <assess_swap>:
    3c27:	55                   	push   %rbp
    3c28:	48 89 e5             	mov    %rsp,%rbp
    3c2b:	48 83 ec 20          	sub    $0x20,%rsp
    3c2f:	f3 0f 11 45 ec       	movss  %xmm0,-0x14(%rbp)
    3c34:	f3 0f 11 4d e8       	movss  %xmm1,-0x18(%rbp)
    3c39:	66 0f ef c0          	pxor   %xmm0,%xmm0
    3c3d:	0f 2e 45 ec          	ucomiss -0x14(%rbp),%xmm0
    3c41:	72 0c                	jb     3c4f <assess_swap+0x28>
    3c43:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%rbp)
    3c4a:	8b 45 fc             	mov    -0x4(%rbp),%eax
    3c4d:	eb 6c                	jmp    3cbb <assess_swap+0x94>
    3c4f:	66 0f ef c0          	pxor   %xmm0,%xmm0
    3c53:	0f 2e 45 e8          	ucomiss -0x18(%rbp),%xmm0
    3c57:	7a 11                	jp     3c6a <assess_swap+0x43>
    3c59:	66 0f ef c0          	pxor   %xmm0,%xmm0
    3c5d:	0f 2e 45 e8          	ucomiss -0x18(%rbp),%xmm0
    3c61:	75 07                	jne    3c6a <assess_swap+0x43>
    3c63:	b8 00 00 00 00       	mov    $0x0,%eax
    3c68:	eb 51                	jmp    3cbb <assess_swap+0x94>
    3c6a:	e8 00 00 00 00       	callq  3c6f <assess_swap+0x48>
    3c6f:	66 0f 7e c0          	movd   %xmm0,%eax
    3c73:	89 45 f8             	mov    %eax,-0x8(%rbp)
    3c76:	f3 0f 10 4d ec       	movss  -0x14(%rbp),%xmm1
    3c7b:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 3c83 <assess_swap+0x5c>
    3c82:	00 
    3c83:	0f 57 c1             	xorps  %xmm1,%xmm0
    3c86:	f3 0f 5e 45 e8       	divss  -0x18(%rbp),%xmm0
    3c8b:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    3c8f:	e8 00 00 00 00       	callq  3c94 <assess_swap+0x6d>
    3c94:	f2 0f 5a d0          	cvtsd2ss %xmm0,%xmm2
    3c98:	f3 0f 11 55 f4       	movss  %xmm2,-0xc(%rbp)
    3c9d:	f3 0f 10 45 f4       	movss  -0xc(%rbp),%xmm0
    3ca2:	0f 2e 45 f8          	ucomiss -0x8(%rbp),%xmm0
    3ca6:	76 09                	jbe    3cb1 <assess_swap+0x8a>
    3ca8:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%rbp)
    3caf:	eb 07                	jmp    3cb8 <assess_swap+0x91>
    3cb1:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    3cb8:	8b 45 fc             	mov    -0x4(%rbp),%eax
    3cbb:	c9                   	leaveq 
    3cbc:	c3                   	retq   

0000000000003cbd <recompute_bb_cost>:
    3cbd:	55                   	push   %rbp
    3cbe:	48 89 e5             	mov    %rsp,%rbp
    3cc1:	48 83 ec 20          	sub    $0x20,%rsp
    3cc5:	89 7d ec             	mov    %edi,-0x14(%rbp)
    3cc8:	89 75 e8             	mov    %esi,-0x18(%rbp)
    3ccb:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3cd1 <recompute_bb_cost+0x14>
    3cd1:	89 45 f0             	mov    %eax,-0x10(%rbp)
    3cd4:	83 7d ec 01          	cmpl   $0x1,-0x14(%rbp)
    3cd8:	0f 85 84 00 00 00    	jne    3d62 <recompute_bb_cost+0xa5>
    3cde:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    3ce5:	eb 73                	jmp    3d5a <recompute_bb_cost+0x9d>
    3ce7:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    3cee:	eb 5e                	jmp    3d4e <recompute_bb_cost+0x91>
    3cf0:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3cf7 <recompute_bb_cost+0x3a>
    3cf7:	8b 55 fc             	mov    -0x4(%rbp),%edx
    3cfa:	48 63 d2             	movslq %edx,%rdx
    3cfd:	48 c1 e2 03          	shl    $0x3,%rdx
    3d01:	48 01 d0             	add    %rdx,%rax
    3d04:	48 8b 00             	mov    (%rax),%rax
    3d07:	8b 55 f8             	mov    -0x8(%rbp),%edx
    3d0a:	48 63 d2             	movslq %edx,%rdx
    3d0d:	48 c1 e2 04          	shl    $0x4,%rdx
    3d11:	48 01 c2             	add    %rax,%rdx
    3d14:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3d1a <recompute_bb_cost+0x5d>
    3d1a:	89 42 08             	mov    %eax,0x8(%rdx)
    3d1d:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3d24 <recompute_bb_cost+0x67>
    3d24:	8b 55 fc             	mov    -0x4(%rbp),%edx
    3d27:	48 63 d2             	movslq %edx,%rdx
    3d2a:	48 c1 e2 03          	shl    $0x3,%rdx
    3d2e:	48 01 d0             	add    %rdx,%rax
    3d31:	48 8b 00             	mov    (%rax),%rax
    3d34:	8b 55 f8             	mov    -0x8(%rbp),%edx
    3d37:	48 63 d2             	movslq %edx,%rdx
    3d3a:	48 c1 e2 04          	shl    $0x4,%rdx
    3d3e:	48 01 c2             	add    %rax,%rdx
    3d41:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3d47 <recompute_bb_cost+0x8a>
    3d47:	89 42 08             	mov    %eax,0x8(%rdx)
    3d4a:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    3d4e:	8b 45 f8             	mov    -0x8(%rbp),%eax
    3d51:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    3d54:	7c 9a                	jl     3cf0 <recompute_bb_cost+0x33>
    3d56:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    3d5a:	8b 45 fc             	mov    -0x4(%rbp),%eax
    3d5d:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    3d60:	7c 85                	jl     3ce7 <recompute_bb_cost+0x2a>
    3d62:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
    3d69:	e9 82 00 00 00       	jmpq   3df0 <recompute_bb_cost+0x133>
    3d6e:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 3d75 <recompute_bb_cost+0xb8>
    3d75:	8b 45 f4             	mov    -0xc(%rbp),%eax
    3d78:	48 63 d0             	movslq %eax,%rdx
    3d7b:	48 89 d0             	mov    %rdx,%rax
    3d7e:	48 c1 e0 02          	shl    $0x2,%rax
    3d82:	48 01 d0             	add    %rdx,%rax
    3d85:	48 c1 e0 03          	shl    $0x3,%rax
    3d89:	48 01 c8             	add    %rcx,%rax
    3d8c:	8b 40 20             	mov    0x20(%rax),%eax
    3d8f:	85 c0                	test   %eax,%eax
    3d91:	75 59                	jne    3dec <recompute_bb_cost+0x12f>
    3d93:	83 7d ec 01          	cmpl   $0x1,-0x14(%rbp)
    3d97:	74 2a                	je     3dc3 <recompute_bb_cost+0x106>
    3d99:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3da0 <recompute_bb_cost+0xe3>
    3da0:	8b 55 f4             	mov    -0xc(%rbp),%edx
    3da3:	48 63 d2             	movslq %edx,%rdx
    3da6:	48 c1 e2 02          	shl    $0x2,%rdx
    3daa:	48 01 d0             	add    %rdx,%rax
    3dad:	f3 0f 10 00          	movss  (%rax),%xmm0
    3db1:	f3 0f 10 4d f0       	movss  -0x10(%rbp),%xmm1
    3db6:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    3dba:	66 0f 7e c8          	movd   %xmm1,%eax
    3dbe:	89 45 f0             	mov    %eax,-0x10(%rbp)
    3dc1:	eb 29                	jmp    3dec <recompute_bb_cost+0x12f>
    3dc3:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3dca <recompute_bb_cost+0x10d>
    3dca:	8b 55 f4             	mov    -0xc(%rbp),%edx
    3dcd:	48 63 d2             	movslq %edx,%rdx
    3dd0:	48 c1 e2 04          	shl    $0x4,%rdx
    3dd4:	48 8d 34 10          	lea    (%rax,%rdx,1),%rsi
    3dd8:	8b 55 e8             	mov    -0x18(%rbp),%edx
    3ddb:	8b 45 f4             	mov    -0xc(%rbp),%eax
    3dde:	89 d1                	mov    %edx,%ecx
    3de0:	ba 01 00 00 00       	mov    $0x1,%edx
    3de5:	89 c7                	mov    %eax,%edi
    3de7:	e8 02 19 00 00       	callq  56ee <update_region_occ>
    3dec:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
    3df0:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3df6 <recompute_bb_cost+0x139>
    3df6:	39 45 f4             	cmp    %eax,-0xc(%rbp)
    3df9:	0f 8c 6f ff ff ff    	jl     3d6e <recompute_bb_cost+0xb1>
    3dff:	83 7d ec 01          	cmpl   $0x1,-0x14(%rbp)
    3e03:	75 11                	jne    3e16 <recompute_bb_cost+0x159>
    3e05:	8b 45 e8             	mov    -0x18(%rbp),%eax
    3e08:	89 c7                	mov    %eax,%edi
    3e0a:	e8 20 16 00 00       	callq  542f <nonlinear_cong_cost>
    3e0f:	66 0f 7e c0          	movd   %xmm0,%eax
    3e13:	89 45 f0             	mov    %eax,-0x10(%rbp)
    3e16:	8b 45 f0             	mov    -0x10(%rbp),%eax
    3e19:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    3e1c:	f3 0f 10 45 e4       	movss  -0x1c(%rbp),%xmm0
    3e21:	c9                   	leaveq 
    3e22:	c3                   	retq   

0000000000003e23 <comp_td_point_to_point_delay>:
    3e23:	55                   	push   %rbp
    3e24:	48 89 e5             	mov    %rsp,%rbp
    3e27:	48 83 ec 40          	sub    $0x40,%rsp
    3e2b:	89 7d cc             	mov    %edi,-0x34(%rbp)
    3e2e:	89 75 c8             	mov    %esi,-0x38(%rbp)
    3e31:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 3e37 <comp_td_point_to_point_delay+0x14>
    3e37:	89 45 fc             	mov    %eax,-0x4(%rbp)
    3e3a:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 3e41 <comp_td_point_to_point_delay+0x1e>
    3e41:	8b 45 cc             	mov    -0x34(%rbp),%eax
    3e44:	48 63 d0             	movslq %eax,%rdx
    3e47:	48 89 d0             	mov    %rdx,%rax
    3e4a:	48 c1 e0 02          	shl    $0x2,%rax
    3e4e:	48 01 d0             	add    %rdx,%rax
    3e51:	48 c1 e0 03          	shl    $0x3,%rax
    3e55:	48 01 c8             	add    %rcx,%rax
    3e58:	48 8b 40 10          	mov    0x10(%rax),%rax
    3e5c:	8b 00                	mov    (%rax),%eax
    3e5e:	89 45 f8             	mov    %eax,-0x8(%rbp)
    3e61:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 3e68 <comp_td_point_to_point_delay+0x45>
    3e68:	8b 45 f8             	mov    -0x8(%rbp),%eax
    3e6b:	48 63 d0             	movslq %eax,%rdx
    3e6e:	48 89 d0             	mov    %rdx,%rax
    3e71:	48 c1 e0 02          	shl    $0x2,%rax
    3e75:	48 01 d0             	add    %rdx,%rax
    3e78:	48 c1 e0 03          	shl    $0x3,%rax
    3e7c:	48 01 c8             	add    %rcx,%rax
    3e7f:	48 8b 40 08          	mov    0x8(%rax),%rax
    3e83:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
    3e87:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 3e8e <comp_td_point_to_point_delay+0x6b>
    3e8e:	8b 45 cc             	mov    -0x34(%rbp),%eax
    3e91:	48 63 d0             	movslq %eax,%rdx
    3e94:	48 89 d0             	mov    %rdx,%rax
    3e97:	48 c1 e0 02          	shl    $0x2,%rax
    3e9b:	48 01 d0             	add    %rdx,%rax
    3e9e:	48 c1 e0 03          	shl    $0x3,%rax
    3ea2:	48 01 c8             	add    %rcx,%rax
    3ea5:	48 8b 40 10          	mov    0x10(%rax),%rax
    3ea9:	8b 55 c8             	mov    -0x38(%rbp),%edx
    3eac:	48 63 d2             	movslq %edx,%rdx
    3eaf:	48 c1 e2 02          	shl    $0x2,%rdx
    3eb3:	48 01 d0             	add    %rdx,%rax
    3eb6:	8b 00                	mov    (%rax),%eax
    3eb8:	89 45 ec             	mov    %eax,-0x14(%rbp)
    3ebb:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 3ec2 <comp_td_point_to_point_delay+0x9f>
    3ec2:	8b 45 ec             	mov    -0x14(%rbp),%eax
    3ec5:	48 63 d0             	movslq %eax,%rdx
    3ec8:	48 89 d0             	mov    %rdx,%rax
    3ecb:	48 c1 e0 02          	shl    $0x2,%rax
    3ecf:	48 01 d0             	add    %rdx,%rax
    3ed2:	48 c1 e0 03          	shl    $0x3,%rax
    3ed6:	48 01 c8             	add    %rcx,%rax
    3ed9:	48 8b 40 08          	mov    0x8(%rax),%rax
    3edd:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
    3ee1:	48 83 7d f0 00       	cmpq   $0x0,-0x10(%rbp)
    3ee6:	75 19                	jne    3f01 <comp_td_point_to_point_delay+0xde>
    3ee8:	b9 00 00 00 00       	mov    $0x0,%ecx
    3eed:	ba c0 07 00 00       	mov    $0x7c0,%edx
    3ef2:	be 00 00 00 00       	mov    $0x0,%esi
    3ef7:	bf 00 00 00 00       	mov    $0x0,%edi
    3efc:	e8 00 00 00 00       	callq  3f01 <comp_td_point_to_point_delay+0xde>
    3f01:	48 83 7d e0 00       	cmpq   $0x0,-0x20(%rbp)
    3f06:	75 19                	jne    3f21 <comp_td_point_to_point_delay+0xfe>
    3f08:	b9 00 00 00 00       	mov    $0x0,%ecx
    3f0d:	ba c1 07 00 00       	mov    $0x7c1,%edx
    3f12:	be 00 00 00 00       	mov    $0x0,%esi
    3f17:	bf 00 00 00 00       	mov    $0x0,%edi
    3f1c:	e8 00 00 00 00       	callq  3f21 <comp_td_point_to_point_delay+0xfe>
    3f21:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 3f28 <comp_td_point_to_point_delay+0x105>
    3f28:	8b 45 ec             	mov    -0x14(%rbp),%eax
    3f2b:	48 63 d0             	movslq %eax,%rdx
    3f2e:	48 89 d0             	mov    %rdx,%rax
    3f31:	48 c1 e0 02          	shl    $0x2,%rax
    3f35:	48 01 d0             	add    %rdx,%rax
    3f38:	48 c1 e0 03          	shl    $0x3,%rax
    3f3c:	48 01 c8             	add    %rcx,%rax
    3f3f:	8b 48 18             	mov    0x18(%rax),%ecx
    3f42:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 3f49 <comp_td_point_to_point_delay+0x126>
    3f49:	8b 45 f8             	mov    -0x8(%rbp),%eax
    3f4c:	48 63 d0             	movslq %eax,%rdx
    3f4f:	48 89 d0             	mov    %rdx,%rax
    3f52:	48 c1 e0 02          	shl    $0x2,%rax
    3f56:	48 01 d0             	add    %rdx,%rax
    3f59:	48 c1 e0 03          	shl    $0x3,%rax
    3f5d:	48 01 f0             	add    %rsi,%rax
    3f60:	8b 40 18             	mov    0x18(%rax),%eax
    3f63:	29 c1                	sub    %eax,%ecx
    3f65:	89 ca                	mov    %ecx,%edx
    3f67:	89 d0                	mov    %edx,%eax
    3f69:	c1 f8 1f             	sar    $0x1f,%eax
    3f6c:	31 c2                	xor    %eax,%edx
    3f6e:	89 55 dc             	mov    %edx,-0x24(%rbp)
    3f71:	29 45 dc             	sub    %eax,-0x24(%rbp)
    3f74:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 3f7b <comp_td_point_to_point_delay+0x158>
    3f7b:	8b 45 ec             	mov    -0x14(%rbp),%eax
    3f7e:	48 63 d0             	movslq %eax,%rdx
    3f81:	48 89 d0             	mov    %rdx,%rax
    3f84:	48 c1 e0 02          	shl    $0x2,%rax
    3f88:	48 01 d0             	add    %rdx,%rax
    3f8b:	48 c1 e0 03          	shl    $0x3,%rax
    3f8f:	48 01 c8             	add    %rcx,%rax
    3f92:	8b 48 1c             	mov    0x1c(%rax),%ecx
    3f95:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 3f9c <comp_td_point_to_point_delay+0x179>
    3f9c:	8b 45 f8             	mov    -0x8(%rbp),%eax
    3f9f:	48 63 d0             	movslq %eax,%rdx
    3fa2:	48 89 d0             	mov    %rdx,%rax
    3fa5:	48 c1 e0 02          	shl    $0x2,%rax
    3fa9:	48 01 d0             	add    %rdx,%rax
    3fac:	48 c1 e0 03          	shl    $0x3,%rax
    3fb0:	48 01 f0             	add    %rsi,%rax
    3fb3:	8b 40 1c             	mov    0x1c(%rax),%eax
    3fb6:	29 c1                	sub    %eax,%ecx
    3fb8:	89 ca                	mov    %ecx,%edx
    3fba:	89 d0                	mov    %edx,%eax
    3fbc:	c1 f8 1f             	sar    $0x1f,%eax
    3fbf:	31 c2                	xor    %eax,%edx
    3fc1:	89 55 d8             	mov    %edx,-0x28(%rbp)
    3fc4:	29 45 d8             	sub    %eax,-0x28(%rbp)
    3fc7:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3fce <comp_td_point_to_point_delay+0x1ab>
    3fce:	48 39 45 f0          	cmp    %rax,-0x10(%rbp)
    3fd2:	75 66                	jne    403a <comp_td_point_to_point_delay+0x217>
    3fd4:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3fdb <comp_td_point_to_point_delay+0x1b8>
    3fdb:	48 39 45 e0          	cmp    %rax,-0x20(%rbp)
    3fdf:	75 2e                	jne    400f <comp_td_point_to_point_delay+0x1ec>
    3fe1:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 3fe8 <comp_td_point_to_point_delay+0x1c5>
    3fe8:	8b 55 dc             	mov    -0x24(%rbp),%edx
    3feb:	48 63 d2             	movslq %edx,%rdx
    3fee:	48 c1 e2 03          	shl    $0x3,%rdx
    3ff2:	48 01 d0             	add    %rdx,%rax
    3ff5:	48 8b 00             	mov    (%rax),%rax
    3ff8:	8b 55 d8             	mov    -0x28(%rbp),%edx
    3ffb:	48 63 d2             	movslq %edx,%rdx
    3ffe:	48 c1 e2 02          	shl    $0x2,%rdx
    4002:	48 01 d0             	add    %rdx,%rax
    4005:	8b 00                	mov    (%rax),%eax
    4007:	89 45 fc             	mov    %eax,-0x4(%rbp)
    400a:	e9 8c 00 00 00       	jmpq   409b <comp_td_point_to_point_delay+0x278>
    400f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4016 <comp_td_point_to_point_delay+0x1f3>
    4016:	8b 55 dc             	mov    -0x24(%rbp),%edx
    4019:	48 63 d2             	movslq %edx,%rdx
    401c:	48 c1 e2 03          	shl    $0x3,%rdx
    4020:	48 01 d0             	add    %rdx,%rax
    4023:	48 8b 00             	mov    (%rax),%rax
    4026:	8b 55 d8             	mov    -0x28(%rbp),%edx
    4029:	48 63 d2             	movslq %edx,%rdx
    402c:	48 c1 e2 02          	shl    $0x2,%rdx
    4030:	48 01 d0             	add    %rdx,%rax
    4033:	8b 00                	mov    (%rax),%eax
    4035:	89 45 fc             	mov    %eax,-0x4(%rbp)
    4038:	eb 61                	jmp    409b <comp_td_point_to_point_delay+0x278>
    403a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4041 <comp_td_point_to_point_delay+0x21e>
    4041:	48 39 45 e0          	cmp    %rax,-0x20(%rbp)
    4045:	75 2b                	jne    4072 <comp_td_point_to_point_delay+0x24f>
    4047:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 404e <comp_td_point_to_point_delay+0x22b>
    404e:	8b 55 dc             	mov    -0x24(%rbp),%edx
    4051:	48 63 d2             	movslq %edx,%rdx
    4054:	48 c1 e2 03          	shl    $0x3,%rdx
    4058:	48 01 d0             	add    %rdx,%rax
    405b:	48 8b 00             	mov    (%rax),%rax
    405e:	8b 55 d8             	mov    -0x28(%rbp),%edx
    4061:	48 63 d2             	movslq %edx,%rdx
    4064:	48 c1 e2 02          	shl    $0x2,%rdx
    4068:	48 01 d0             	add    %rdx,%rax
    406b:	8b 00                	mov    (%rax),%eax
    406d:	89 45 fc             	mov    %eax,-0x4(%rbp)
    4070:	eb 29                	jmp    409b <comp_td_point_to_point_delay+0x278>
    4072:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4079 <comp_td_point_to_point_delay+0x256>
    4079:	8b 55 dc             	mov    -0x24(%rbp),%edx
    407c:	48 63 d2             	movslq %edx,%rdx
    407f:	48 c1 e2 03          	shl    $0x3,%rdx
    4083:	48 01 d0             	add    %rdx,%rax
    4086:	48 8b 00             	mov    (%rax),%rax
    4089:	8b 55 d8             	mov    -0x28(%rbp),%edx
    408c:	48 63 d2             	movslq %edx,%rdx
    408f:	48 c1 e2 02          	shl    $0x2,%rdx
    4093:	48 01 d0             	add    %rdx,%rax
    4096:	8b 00                	mov    (%rax),%eax
    4098:	89 45 fc             	mov    %eax,-0x4(%rbp)
    409b:	66 0f ef c0          	pxor   %xmm0,%xmm0
    409f:	0f 2e 45 fc          	ucomiss -0x4(%rbp),%xmm0
    40a3:	76 14                	jbe    40b9 <comp_td_point_to_point_delay+0x296>
    40a5:	bf 00 00 00 00       	mov    $0x0,%edi
    40aa:	e8 00 00 00 00       	callq  40af <comp_td_point_to_point_delay+0x28c>
    40af:	bf 01 00 00 00       	mov    $0x1,%edi
    40b4:	e8 00 00 00 00       	callq  40b9 <comp_td_point_to_point_delay+0x296>
    40b9:	66 0f ef c0          	pxor   %xmm0,%xmm0
    40bd:	0f 2e 45 fc          	ucomiss -0x4(%rbp),%xmm0
    40c1:	76 14                	jbe    40d7 <comp_td_point_to_point_delay+0x2b4>
    40c3:	bf 00 00 00 00       	mov    $0x0,%edi
    40c8:	e8 00 00 00 00       	callq  40cd <comp_td_point_to_point_delay+0x2aa>
    40cd:	bf 01 00 00 00       	mov    $0x1,%edi
    40d2:	e8 00 00 00 00       	callq  40d7 <comp_td_point_to_point_delay+0x2b4>
    40d7:	8b 45 fc             	mov    -0x4(%rbp),%eax
    40da:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    40dd:	f3 0f 10 45 c4       	movss  -0x3c(%rbp),%xmm0
    40e2:	c9                   	leaveq 
    40e3:	c3                   	retq   

00000000000040e4 <update_td_cost>:
    40e4:	55                   	push   %rbp
    40e5:	48 89 e5             	mov    %rsp,%rbp
    40e8:	89 7d ec             	mov    %edi,-0x14(%rbp)
    40eb:	89 75 e8             	mov    %esi,-0x18(%rbp)
    40ee:	89 55 e4             	mov    %edx,-0x1c(%rbp)
    40f1:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    40f8:	e9 19 03 00 00       	jmpq   4416 <update_td_cost+0x332>
    40fd:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4104 <update_td_cost+0x20>
    4104:	8b 45 ec             	mov    -0x14(%rbp),%eax
    4107:	48 63 d0             	movslq %eax,%rdx
    410a:	48 89 d0             	mov    %rdx,%rax
    410d:	48 c1 e0 02          	shl    $0x2,%rax
    4111:	48 01 d0             	add    %rdx,%rax
    4114:	48 c1 e0 03          	shl    $0x3,%rax
    4118:	48 01 c8             	add    %rcx,%rax
    411b:	48 8b 40 10          	mov    0x10(%rax),%rax
    411f:	8b 55 fc             	mov    -0x4(%rbp),%edx
    4122:	48 63 d2             	movslq %edx,%rdx
    4125:	48 c1 e2 02          	shl    $0x2,%rdx
    4129:	48 01 d0             	add    %rdx,%rax
    412c:	8b 00                	mov    (%rax),%eax
    412e:	89 45 f4             	mov    %eax,-0xc(%rbp)
    4131:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%rbp)
    4135:	75 05                	jne    413c <update_td_cost+0x58>
    4137:	e9 d6 02 00 00       	jmpq   4412 <update_td_cost+0x32e>
    413c:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4143 <update_td_cost+0x5f>
    4143:	8b 45 f4             	mov    -0xc(%rbp),%eax
    4146:	48 63 d0             	movslq %eax,%rdx
    4149:	48 89 d0             	mov    %rdx,%rax
    414c:	48 c1 e0 02          	shl    $0x2,%rax
    4150:	48 01 d0             	add    %rdx,%rax
    4153:	48 c1 e0 03          	shl    $0x3,%rax
    4157:	48 01 c8             	add    %rcx,%rax
    415a:	8b 40 20             	mov    0x20(%rax),%eax
    415d:	85 c0                	test   %eax,%eax
    415f:	74 05                	je     4166 <update_td_cost+0x82>
    4161:	e9 ac 02 00 00       	jmpq   4412 <update_td_cost+0x32e>
    4166:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 416d <update_td_cost+0x89>
    416d:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4170:	48 63 d2             	movslq %edx,%rdx
    4173:	48 c1 e2 03          	shl    $0x3,%rdx
    4177:	48 01 d0             	add    %rdx,%rax
    417a:	48 8b 00             	mov    (%rax),%rax
    417d:	8b 55 fc             	mov    -0x4(%rbp),%edx
    4180:	48 63 d2             	movslq %edx,%rdx
    4183:	48 c1 e2 02          	shl    $0x2,%rdx
    4187:	48 01 d0             	add    %rdx,%rax
    418a:	8b 00                	mov    (%rax),%eax
    418c:	89 45 f0             	mov    %eax,-0x10(%rbp)
    418f:	83 7d f0 00          	cmpl   $0x0,-0x10(%rbp)
    4193:	0f 84 4f 01 00 00    	je     42e8 <update_td_cost+0x204>
    4199:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 41a0 <update_td_cost+0xbc>
    41a0:	8b 45 f4             	mov    -0xc(%rbp),%eax
    41a3:	48 63 d0             	movslq %eax,%rdx
    41a6:	48 89 d0             	mov    %rdx,%rax
    41a9:	48 c1 e0 02          	shl    $0x2,%rax
    41ad:	48 01 d0             	add    %rdx,%rax
    41b0:	48 c1 e0 03          	shl    $0x3,%rax
    41b4:	48 01 c8             	add    %rcx,%rax
    41b7:	48 8b 40 10          	mov    0x10(%rax),%rax
    41bb:	8b 00                	mov    (%rax),%eax
    41bd:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    41c0:	0f 84 4c 02 00 00    	je     4412 <update_td_cost+0x32e>
    41c6:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 41cd <update_td_cost+0xe9>
    41cd:	8b 45 f4             	mov    -0xc(%rbp),%eax
    41d0:	48 63 d0             	movslq %eax,%rdx
    41d3:	48 89 d0             	mov    %rdx,%rax
    41d6:	48 c1 e0 02          	shl    $0x2,%rax
    41da:	48 01 d0             	add    %rdx,%rax
    41dd:	48 c1 e0 03          	shl    $0x3,%rax
    41e1:	48 01 c8             	add    %rcx,%rax
    41e4:	48 8b 40 10          	mov    0x10(%rax),%rax
    41e8:	8b 00                	mov    (%rax),%eax
    41ea:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    41ed:	0f 84 1f 02 00 00    	je     4412 <update_td_cost+0x32e>
    41f3:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 41fa <update_td_cost+0x116>
    41fa:	8b 55 f4             	mov    -0xc(%rbp),%edx
    41fd:	48 63 d2             	movslq %edx,%rdx
    4200:	48 c1 e2 03          	shl    $0x3,%rdx
    4204:	48 01 d0             	add    %rdx,%rax
    4207:	48 8b 00             	mov    (%rax),%rax
    420a:	8b 55 f0             	mov    -0x10(%rbp),%edx
    420d:	48 63 d2             	movslq %edx,%rdx
    4210:	48 c1 e2 02          	shl    $0x2,%rdx
    4214:	48 01 c2             	add    %rax,%rdx
    4217:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 421e <update_td_cost+0x13a>
    421e:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    4221:	48 63 c9             	movslq %ecx,%rcx
    4224:	48 c1 e1 03          	shl    $0x3,%rcx
    4228:	48 01 c8             	add    %rcx,%rax
    422b:	48 8b 00             	mov    (%rax),%rax
    422e:	8b 4d f0             	mov    -0x10(%rbp),%ecx
    4231:	48 63 c9             	movslq %ecx,%rcx
    4234:	48 c1 e1 02          	shl    $0x2,%rcx
    4238:	48 01 c8             	add    %rcx,%rax
    423b:	8b 00                	mov    (%rax),%eax
    423d:	89 02                	mov    %eax,(%rdx)
    423f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4246 <update_td_cost+0x162>
    4246:	8b 55 f4             	mov    -0xc(%rbp),%edx
    4249:	48 63 d2             	movslq %edx,%rdx
    424c:	48 c1 e2 03          	shl    $0x3,%rdx
    4250:	48 01 d0             	add    %rdx,%rax
    4253:	48 8b 00             	mov    (%rax),%rax
    4256:	8b 55 f0             	mov    -0x10(%rbp),%edx
    4259:	48 63 d2             	movslq %edx,%rdx
    425c:	48 c1 e2 02          	shl    $0x2,%rdx
    4260:	48 01 c2             	add    %rax,%rdx
    4263:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 4269 <update_td_cost+0x185>
    4269:	89 02                	mov    %eax,(%rdx)
    426b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4272 <update_td_cost+0x18e>
    4272:	8b 55 f4             	mov    -0xc(%rbp),%edx
    4275:	48 63 d2             	movslq %edx,%rdx
    4278:	48 c1 e2 03          	shl    $0x3,%rdx
    427c:	48 01 d0             	add    %rdx,%rax
    427f:	48 8b 00             	mov    (%rax),%rax
    4282:	8b 55 f0             	mov    -0x10(%rbp),%edx
    4285:	48 63 d2             	movslq %edx,%rdx
    4288:	48 c1 e2 02          	shl    $0x2,%rdx
    428c:	48 01 c2             	add    %rax,%rdx
    428f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4296 <update_td_cost+0x1b2>
    4296:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    4299:	48 63 c9             	movslq %ecx,%rcx
    429c:	48 c1 e1 03          	shl    $0x3,%rcx
    42a0:	48 01 c8             	add    %rcx,%rax
    42a3:	48 8b 00             	mov    (%rax),%rax
    42a6:	8b 4d f0             	mov    -0x10(%rbp),%ecx
    42a9:	48 63 c9             	movslq %ecx,%rcx
    42ac:	48 c1 e1 02          	shl    $0x2,%rcx
    42b0:	48 01 c8             	add    %rcx,%rax
    42b3:	8b 00                	mov    (%rax),%eax
    42b5:	89 02                	mov    %eax,(%rdx)
    42b7:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 42be <update_td_cost+0x1da>
    42be:	8b 55 f4             	mov    -0xc(%rbp),%edx
    42c1:	48 63 d2             	movslq %edx,%rdx
    42c4:	48 c1 e2 03          	shl    $0x3,%rdx
    42c8:	48 01 d0             	add    %rdx,%rax
    42cb:	48 8b 00             	mov    (%rax),%rax
    42ce:	8b 55 f0             	mov    -0x10(%rbp),%edx
    42d1:	48 63 d2             	movslq %edx,%rdx
    42d4:	48 c1 e2 02          	shl    $0x2,%rdx
    42d8:	48 01 c2             	add    %rax,%rdx
    42db:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 42e1 <update_td_cost+0x1fd>
    42e1:	89 02                	mov    %eax,(%rdx)
    42e3:	e9 2a 01 00 00       	jmpq   4412 <update_td_cost+0x32e>
    42e8:	c7 45 f8 01 00 00 00 	movl   $0x1,-0x8(%rbp)
    42ef:	e9 f4 00 00 00       	jmpq   43e8 <update_td_cost+0x304>
    42f4:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 42fb <update_td_cost+0x217>
    42fb:	8b 55 f4             	mov    -0xc(%rbp),%edx
    42fe:	48 63 d2             	movslq %edx,%rdx
    4301:	48 c1 e2 03          	shl    $0x3,%rdx
    4305:	48 01 d0             	add    %rdx,%rax
    4308:	48 8b 00             	mov    (%rax),%rax
    430b:	8b 55 f8             	mov    -0x8(%rbp),%edx
    430e:	48 63 d2             	movslq %edx,%rdx
    4311:	48 c1 e2 02          	shl    $0x2,%rdx
    4315:	48 01 c2             	add    %rax,%rdx
    4318:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 431f <update_td_cost+0x23b>
    431f:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    4322:	48 63 c9             	movslq %ecx,%rcx
    4325:	48 c1 e1 03          	shl    $0x3,%rcx
    4329:	48 01 c8             	add    %rcx,%rax
    432c:	48 8b 00             	mov    (%rax),%rax
    432f:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    4332:	48 63 c9             	movslq %ecx,%rcx
    4335:	48 c1 e1 02          	shl    $0x2,%rcx
    4339:	48 01 c8             	add    %rcx,%rax
    433c:	8b 00                	mov    (%rax),%eax
    433e:	89 02                	mov    %eax,(%rdx)
    4340:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4347 <update_td_cost+0x263>
    4347:	8b 55 f4             	mov    -0xc(%rbp),%edx
    434a:	48 63 d2             	movslq %edx,%rdx
    434d:	48 c1 e2 03          	shl    $0x3,%rdx
    4351:	48 01 d0             	add    %rdx,%rax
    4354:	48 8b 00             	mov    (%rax),%rax
    4357:	8b 55 f8             	mov    -0x8(%rbp),%edx
    435a:	48 63 d2             	movslq %edx,%rdx
    435d:	48 c1 e2 02          	shl    $0x2,%rdx
    4361:	48 01 c2             	add    %rax,%rdx
    4364:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 436a <update_td_cost+0x286>
    436a:	89 02                	mov    %eax,(%rdx)
    436c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4373 <update_td_cost+0x28f>
    4373:	8b 55 f4             	mov    -0xc(%rbp),%edx
    4376:	48 63 d2             	movslq %edx,%rdx
    4379:	48 c1 e2 03          	shl    $0x3,%rdx
    437d:	48 01 d0             	add    %rdx,%rax
    4380:	48 8b 00             	mov    (%rax),%rax
    4383:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4386:	48 63 d2             	movslq %edx,%rdx
    4389:	48 c1 e2 02          	shl    $0x2,%rdx
    438d:	48 01 c2             	add    %rax,%rdx
    4390:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4397 <update_td_cost+0x2b3>
    4397:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    439a:	48 63 c9             	movslq %ecx,%rcx
    439d:	48 c1 e1 03          	shl    $0x3,%rcx
    43a1:	48 01 c8             	add    %rcx,%rax
    43a4:	48 8b 00             	mov    (%rax),%rax
    43a7:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    43aa:	48 63 c9             	movslq %ecx,%rcx
    43ad:	48 c1 e1 02          	shl    $0x2,%rcx
    43b1:	48 01 c8             	add    %rcx,%rax
    43b4:	8b 00                	mov    (%rax),%eax
    43b6:	89 02                	mov    %eax,(%rdx)
    43b8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 43bf <update_td_cost+0x2db>
    43bf:	8b 55 f4             	mov    -0xc(%rbp),%edx
    43c2:	48 63 d2             	movslq %edx,%rdx
    43c5:	48 c1 e2 03          	shl    $0x3,%rdx
    43c9:	48 01 d0             	add    %rdx,%rax
    43cc:	48 8b 00             	mov    (%rax),%rax
    43cf:	8b 55 f8             	mov    -0x8(%rbp),%edx
    43d2:	48 63 d2             	movslq %edx,%rdx
    43d5:	48 c1 e2 02          	shl    $0x2,%rdx
    43d9:	48 01 c2             	add    %rax,%rdx
    43dc:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 43e2 <update_td_cost+0x2fe>
    43e2:	89 02                	mov    %eax,(%rdx)
    43e4:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    43e8:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 43ef <update_td_cost+0x30b>
    43ef:	8b 45 f4             	mov    -0xc(%rbp),%eax
    43f2:	48 63 d0             	movslq %eax,%rdx
    43f5:	48 89 d0             	mov    %rdx,%rax
    43f8:	48 c1 e0 02          	shl    $0x2,%rax
    43fc:	48 01 d0             	add    %rdx,%rax
    43ff:	48 c1 e0 03          	shl    $0x3,%rax
    4403:	48 01 c8             	add    %rcx,%rax
    4406:	8b 40 08             	mov    0x8(%rax),%eax
    4409:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    440c:	0f 8d e2 fe ff ff    	jge    42f4 <update_td_cost+0x210>
    4412:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    4416:	8b 45 fc             	mov    -0x4(%rbp),%eax
    4419:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
    441c:	0f 8c db fc ff ff    	jl     40fd <update_td_cost+0x19>
    4422:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%rbp)
    4426:	0f 84 31 03 00 00    	je     475d <update_td_cost+0x679>
    442c:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    4433:	e9 19 03 00 00       	jmpq   4751 <update_td_cost+0x66d>
    4438:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 443f <update_td_cost+0x35b>
    443f:	8b 45 e8             	mov    -0x18(%rbp),%eax
    4442:	48 63 d0             	movslq %eax,%rdx
    4445:	48 89 d0             	mov    %rdx,%rax
    4448:	48 c1 e0 02          	shl    $0x2,%rax
    444c:	48 01 d0             	add    %rdx,%rax
    444f:	48 c1 e0 03          	shl    $0x3,%rax
    4453:	48 01 c8             	add    %rcx,%rax
    4456:	48 8b 40 10          	mov    0x10(%rax),%rax
    445a:	8b 55 fc             	mov    -0x4(%rbp),%edx
    445d:	48 63 d2             	movslq %edx,%rdx
    4460:	48 c1 e2 02          	shl    $0x2,%rdx
    4464:	48 01 d0             	add    %rdx,%rax
    4467:	8b 00                	mov    (%rax),%eax
    4469:	89 45 f4             	mov    %eax,-0xc(%rbp)
    446c:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%rbp)
    4470:	75 05                	jne    4477 <update_td_cost+0x393>
    4472:	e9 d6 02 00 00       	jmpq   474d <update_td_cost+0x669>
    4477:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 447e <update_td_cost+0x39a>
    447e:	8b 45 f4             	mov    -0xc(%rbp),%eax
    4481:	48 63 d0             	movslq %eax,%rdx
    4484:	48 89 d0             	mov    %rdx,%rax
    4487:	48 c1 e0 02          	shl    $0x2,%rax
    448b:	48 01 d0             	add    %rdx,%rax
    448e:	48 c1 e0 03          	shl    $0x3,%rax
    4492:	48 01 c8             	add    %rcx,%rax
    4495:	8b 40 20             	mov    0x20(%rax),%eax
    4498:	85 c0                	test   %eax,%eax
    449a:	74 05                	je     44a1 <update_td_cost+0x3bd>
    449c:	e9 ac 02 00 00       	jmpq   474d <update_td_cost+0x669>
    44a1:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 44a8 <update_td_cost+0x3c4>
    44a8:	8b 55 e8             	mov    -0x18(%rbp),%edx
    44ab:	48 63 d2             	movslq %edx,%rdx
    44ae:	48 c1 e2 03          	shl    $0x3,%rdx
    44b2:	48 01 d0             	add    %rdx,%rax
    44b5:	48 8b 00             	mov    (%rax),%rax
    44b8:	8b 55 fc             	mov    -0x4(%rbp),%edx
    44bb:	48 63 d2             	movslq %edx,%rdx
    44be:	48 c1 e2 02          	shl    $0x2,%rdx
    44c2:	48 01 d0             	add    %rdx,%rax
    44c5:	8b 00                	mov    (%rax),%eax
    44c7:	89 45 f0             	mov    %eax,-0x10(%rbp)
    44ca:	83 7d f0 00          	cmpl   $0x0,-0x10(%rbp)
    44ce:	0f 84 4f 01 00 00    	je     4623 <update_td_cost+0x53f>
    44d4:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 44db <update_td_cost+0x3f7>
    44db:	8b 45 f4             	mov    -0xc(%rbp),%eax
    44de:	48 63 d0             	movslq %eax,%rdx
    44e1:	48 89 d0             	mov    %rdx,%rax
    44e4:	48 c1 e0 02          	shl    $0x2,%rax
    44e8:	48 01 d0             	add    %rdx,%rax
    44eb:	48 c1 e0 03          	shl    $0x3,%rax
    44ef:	48 01 c8             	add    %rcx,%rax
    44f2:	48 8b 40 10          	mov    0x10(%rax),%rax
    44f6:	8b 00                	mov    (%rax),%eax
    44f8:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    44fb:	0f 84 4c 02 00 00    	je     474d <update_td_cost+0x669>
    4501:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4508 <update_td_cost+0x424>
    4508:	8b 45 f4             	mov    -0xc(%rbp),%eax
    450b:	48 63 d0             	movslq %eax,%rdx
    450e:	48 89 d0             	mov    %rdx,%rax
    4511:	48 c1 e0 02          	shl    $0x2,%rax
    4515:	48 01 d0             	add    %rdx,%rax
    4518:	48 c1 e0 03          	shl    $0x3,%rax
    451c:	48 01 c8             	add    %rcx,%rax
    451f:	48 8b 40 10          	mov    0x10(%rax),%rax
    4523:	8b 00                	mov    (%rax),%eax
    4525:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    4528:	0f 84 1f 02 00 00    	je     474d <update_td_cost+0x669>
    452e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4535 <update_td_cost+0x451>
    4535:	8b 55 f4             	mov    -0xc(%rbp),%edx
    4538:	48 63 d2             	movslq %edx,%rdx
    453b:	48 c1 e2 03          	shl    $0x3,%rdx
    453f:	48 01 d0             	add    %rdx,%rax
    4542:	48 8b 00             	mov    (%rax),%rax
    4545:	8b 55 f0             	mov    -0x10(%rbp),%edx
    4548:	48 63 d2             	movslq %edx,%rdx
    454b:	48 c1 e2 02          	shl    $0x2,%rdx
    454f:	48 01 c2             	add    %rax,%rdx
    4552:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4559 <update_td_cost+0x475>
    4559:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    455c:	48 63 c9             	movslq %ecx,%rcx
    455f:	48 c1 e1 03          	shl    $0x3,%rcx
    4563:	48 01 c8             	add    %rcx,%rax
    4566:	48 8b 00             	mov    (%rax),%rax
    4569:	8b 4d f0             	mov    -0x10(%rbp),%ecx
    456c:	48 63 c9             	movslq %ecx,%rcx
    456f:	48 c1 e1 02          	shl    $0x2,%rcx
    4573:	48 01 c8             	add    %rcx,%rax
    4576:	8b 00                	mov    (%rax),%eax
    4578:	89 02                	mov    %eax,(%rdx)
    457a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4581 <update_td_cost+0x49d>
    4581:	8b 55 f4             	mov    -0xc(%rbp),%edx
    4584:	48 63 d2             	movslq %edx,%rdx
    4587:	48 c1 e2 03          	shl    $0x3,%rdx
    458b:	48 01 d0             	add    %rdx,%rax
    458e:	48 8b 00             	mov    (%rax),%rax
    4591:	8b 55 f0             	mov    -0x10(%rbp),%edx
    4594:	48 63 d2             	movslq %edx,%rdx
    4597:	48 c1 e2 02          	shl    $0x2,%rdx
    459b:	48 01 c2             	add    %rax,%rdx
    459e:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 45a4 <update_td_cost+0x4c0>
    45a4:	89 02                	mov    %eax,(%rdx)
    45a6:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 45ad <update_td_cost+0x4c9>
    45ad:	8b 55 f4             	mov    -0xc(%rbp),%edx
    45b0:	48 63 d2             	movslq %edx,%rdx
    45b3:	48 c1 e2 03          	shl    $0x3,%rdx
    45b7:	48 01 d0             	add    %rdx,%rax
    45ba:	48 8b 00             	mov    (%rax),%rax
    45bd:	8b 55 f0             	mov    -0x10(%rbp),%edx
    45c0:	48 63 d2             	movslq %edx,%rdx
    45c3:	48 c1 e2 02          	shl    $0x2,%rdx
    45c7:	48 01 c2             	add    %rax,%rdx
    45ca:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 45d1 <update_td_cost+0x4ed>
    45d1:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    45d4:	48 63 c9             	movslq %ecx,%rcx
    45d7:	48 c1 e1 03          	shl    $0x3,%rcx
    45db:	48 01 c8             	add    %rcx,%rax
    45de:	48 8b 00             	mov    (%rax),%rax
    45e1:	8b 4d f0             	mov    -0x10(%rbp),%ecx
    45e4:	48 63 c9             	movslq %ecx,%rcx
    45e7:	48 c1 e1 02          	shl    $0x2,%rcx
    45eb:	48 01 c8             	add    %rcx,%rax
    45ee:	8b 00                	mov    (%rax),%eax
    45f0:	89 02                	mov    %eax,(%rdx)
    45f2:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 45f9 <update_td_cost+0x515>
    45f9:	8b 55 f4             	mov    -0xc(%rbp),%edx
    45fc:	48 63 d2             	movslq %edx,%rdx
    45ff:	48 c1 e2 03          	shl    $0x3,%rdx
    4603:	48 01 d0             	add    %rdx,%rax
    4606:	48 8b 00             	mov    (%rax),%rax
    4609:	8b 55 f0             	mov    -0x10(%rbp),%edx
    460c:	48 63 d2             	movslq %edx,%rdx
    460f:	48 c1 e2 02          	shl    $0x2,%rdx
    4613:	48 01 c2             	add    %rax,%rdx
    4616:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 461c <update_td_cost+0x538>
    461c:	89 02                	mov    %eax,(%rdx)
    461e:	e9 2a 01 00 00       	jmpq   474d <update_td_cost+0x669>
    4623:	c7 45 f8 01 00 00 00 	movl   $0x1,-0x8(%rbp)
    462a:	e9 f4 00 00 00       	jmpq   4723 <update_td_cost+0x63f>
    462f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4636 <update_td_cost+0x552>
    4636:	8b 55 f4             	mov    -0xc(%rbp),%edx
    4639:	48 63 d2             	movslq %edx,%rdx
    463c:	48 c1 e2 03          	shl    $0x3,%rdx
    4640:	48 01 d0             	add    %rdx,%rax
    4643:	48 8b 00             	mov    (%rax),%rax
    4646:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4649:	48 63 d2             	movslq %edx,%rdx
    464c:	48 c1 e2 02          	shl    $0x2,%rdx
    4650:	48 01 c2             	add    %rax,%rdx
    4653:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 465a <update_td_cost+0x576>
    465a:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    465d:	48 63 c9             	movslq %ecx,%rcx
    4660:	48 c1 e1 03          	shl    $0x3,%rcx
    4664:	48 01 c8             	add    %rcx,%rax
    4667:	48 8b 00             	mov    (%rax),%rax
    466a:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    466d:	48 63 c9             	movslq %ecx,%rcx
    4670:	48 c1 e1 02          	shl    $0x2,%rcx
    4674:	48 01 c8             	add    %rcx,%rax
    4677:	8b 00                	mov    (%rax),%eax
    4679:	89 02                	mov    %eax,(%rdx)
    467b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4682 <update_td_cost+0x59e>
    4682:	8b 55 f4             	mov    -0xc(%rbp),%edx
    4685:	48 63 d2             	movslq %edx,%rdx
    4688:	48 c1 e2 03          	shl    $0x3,%rdx
    468c:	48 01 d0             	add    %rdx,%rax
    468f:	48 8b 00             	mov    (%rax),%rax
    4692:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4695:	48 63 d2             	movslq %edx,%rdx
    4698:	48 c1 e2 02          	shl    $0x2,%rdx
    469c:	48 01 c2             	add    %rax,%rdx
    469f:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 46a5 <update_td_cost+0x5c1>
    46a5:	89 02                	mov    %eax,(%rdx)
    46a7:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 46ae <update_td_cost+0x5ca>
    46ae:	8b 55 f4             	mov    -0xc(%rbp),%edx
    46b1:	48 63 d2             	movslq %edx,%rdx
    46b4:	48 c1 e2 03          	shl    $0x3,%rdx
    46b8:	48 01 d0             	add    %rdx,%rax
    46bb:	48 8b 00             	mov    (%rax),%rax
    46be:	8b 55 f8             	mov    -0x8(%rbp),%edx
    46c1:	48 63 d2             	movslq %edx,%rdx
    46c4:	48 c1 e2 02          	shl    $0x2,%rdx
    46c8:	48 01 c2             	add    %rax,%rdx
    46cb:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 46d2 <update_td_cost+0x5ee>
    46d2:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    46d5:	48 63 c9             	movslq %ecx,%rcx
    46d8:	48 c1 e1 03          	shl    $0x3,%rcx
    46dc:	48 01 c8             	add    %rcx,%rax
    46df:	48 8b 00             	mov    (%rax),%rax
    46e2:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    46e5:	48 63 c9             	movslq %ecx,%rcx
    46e8:	48 c1 e1 02          	shl    $0x2,%rcx
    46ec:	48 01 c8             	add    %rcx,%rax
    46ef:	8b 00                	mov    (%rax),%eax
    46f1:	89 02                	mov    %eax,(%rdx)
    46f3:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 46fa <update_td_cost+0x616>
    46fa:	8b 55 f4             	mov    -0xc(%rbp),%edx
    46fd:	48 63 d2             	movslq %edx,%rdx
    4700:	48 c1 e2 03          	shl    $0x3,%rdx
    4704:	48 01 d0             	add    %rdx,%rax
    4707:	48 8b 00             	mov    (%rax),%rax
    470a:	8b 55 f8             	mov    -0x8(%rbp),%edx
    470d:	48 63 d2             	movslq %edx,%rdx
    4710:	48 c1 e2 02          	shl    $0x2,%rdx
    4714:	48 01 c2             	add    %rax,%rdx
    4717:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 471d <update_td_cost+0x639>
    471d:	89 02                	mov    %eax,(%rdx)
    471f:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    4723:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 472a <update_td_cost+0x646>
    472a:	8b 45 f4             	mov    -0xc(%rbp),%eax
    472d:	48 63 d0             	movslq %eax,%rdx
    4730:	48 89 d0             	mov    %rdx,%rax
    4733:	48 c1 e0 02          	shl    $0x2,%rax
    4737:	48 01 d0             	add    %rdx,%rax
    473a:	48 c1 e0 03          	shl    $0x3,%rax
    473e:	48 01 c8             	add    %rcx,%rax
    4741:	8b 40 08             	mov    0x8(%rax),%eax
    4744:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    4747:	0f 8d e2 fe ff ff    	jge    462f <update_td_cost+0x54b>
    474d:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    4751:	8b 45 fc             	mov    -0x4(%rbp),%eax
    4754:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
    4757:	0f 8c db fc ff ff    	jl     4438 <update_td_cost+0x354>
    475d:	5d                   	pop    %rbp
    475e:	c3                   	retq   

000000000000475f <comp_delta_td_cost>:
    475f:	55                   	push   %rbp
    4760:	48 89 e5             	mov    %rsp,%rbp
    4763:	48 83 ec 40          	sub    $0x40,%rsp
    4767:	89 7d dc             	mov    %edi,-0x24(%rbp)
    476a:	89 75 d8             	mov    %esi,-0x28(%rbp)
    476d:	89 55 d4             	mov    %edx,-0x2c(%rbp)
    4770:	48 89 4d c8          	mov    %rcx,-0x38(%rbp)
    4774:	4c 89 45 c0          	mov    %r8,-0x40(%rbp)
    4778:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 477e <comp_delta_td_cost+0x1f>
    477e:	89 45 f4             	mov    %eax,-0xc(%rbp)
    4781:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 4787 <comp_delta_td_cost+0x28>
    4787:	89 45 f0             	mov    %eax,-0x10(%rbp)
    478a:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    4791:	e9 f5 03 00 00       	jmpq   4b8b <comp_delta_td_cost+0x42c>
    4796:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 479d <comp_delta_td_cost+0x3e>
    479d:	8b 45 dc             	mov    -0x24(%rbp),%eax
    47a0:	48 63 d0             	movslq %eax,%rdx
    47a3:	48 89 d0             	mov    %rdx,%rax
    47a6:	48 c1 e0 02          	shl    $0x2,%rax
    47aa:	48 01 d0             	add    %rdx,%rax
    47ad:	48 c1 e0 03          	shl    $0x3,%rax
    47b1:	48 01 c8             	add    %rcx,%rax
    47b4:	48 8b 40 10          	mov    0x10(%rax),%rax
    47b8:	8b 55 fc             	mov    -0x4(%rbp),%edx
    47bb:	48 63 d2             	movslq %edx,%rdx
    47be:	48 c1 e2 02          	shl    $0x2,%rdx
    47c2:	48 01 d0             	add    %rdx,%rax
    47c5:	8b 00                	mov    (%rax),%eax
    47c7:	89 45 ec             	mov    %eax,-0x14(%rbp)
    47ca:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%rbp)
    47ce:	75 05                	jne    47d5 <comp_delta_td_cost+0x76>
    47d0:	e9 b2 03 00 00       	jmpq   4b87 <comp_delta_td_cost+0x428>
    47d5:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 47dc <comp_delta_td_cost+0x7d>
    47dc:	8b 45 ec             	mov    -0x14(%rbp),%eax
    47df:	48 63 d0             	movslq %eax,%rdx
    47e2:	48 89 d0             	mov    %rdx,%rax
    47e5:	48 c1 e0 02          	shl    $0x2,%rax
    47e9:	48 01 d0             	add    %rdx,%rax
    47ec:	48 c1 e0 03          	shl    $0x3,%rax
    47f0:	48 01 c8             	add    %rcx,%rax
    47f3:	8b 40 20             	mov    0x20(%rax),%eax
    47f6:	85 c0                	test   %eax,%eax
    47f8:	74 05                	je     47ff <comp_delta_td_cost+0xa0>
    47fa:	e9 88 03 00 00       	jmpq   4b87 <comp_delta_td_cost+0x428>
    47ff:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4806 <comp_delta_td_cost+0xa7>
    4806:	8b 55 dc             	mov    -0x24(%rbp),%edx
    4809:	48 63 d2             	movslq %edx,%rdx
    480c:	48 c1 e2 03          	shl    $0x3,%rdx
    4810:	48 01 d0             	add    %rdx,%rax
    4813:	48 8b 00             	mov    (%rax),%rax
    4816:	8b 55 fc             	mov    -0x4(%rbp),%edx
    4819:	48 63 d2             	movslq %edx,%rdx
    481c:	48 c1 e2 02          	shl    $0x2,%rdx
    4820:	48 01 d0             	add    %rdx,%rax
    4823:	8b 00                	mov    (%rax),%eax
    4825:	89 45 e8             	mov    %eax,-0x18(%rbp)
    4828:	83 7d e8 00          	cmpl   $0x0,-0x18(%rbp)
    482c:	0f 84 bd 01 00 00    	je     49ef <comp_delta_td_cost+0x290>
    4832:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4839 <comp_delta_td_cost+0xda>
    4839:	8b 45 ec             	mov    -0x14(%rbp),%eax
    483c:	48 63 d0             	movslq %eax,%rdx
    483f:	48 89 d0             	mov    %rdx,%rax
    4842:	48 c1 e0 02          	shl    $0x2,%rax
    4846:	48 01 d0             	add    %rdx,%rax
    4849:	48 c1 e0 03          	shl    $0x3,%rax
    484d:	48 01 c8             	add    %rcx,%rax
    4850:	48 8b 40 10          	mov    0x10(%rax),%rax
    4854:	8b 00                	mov    (%rax),%eax
    4856:	3b 45 d8             	cmp    -0x28(%rbp),%eax
    4859:	0f 84 28 03 00 00    	je     4b87 <comp_delta_td_cost+0x428>
    485f:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4866 <comp_delta_td_cost+0x107>
    4866:	8b 45 ec             	mov    -0x14(%rbp),%eax
    4869:	48 63 d0             	movslq %eax,%rdx
    486c:	48 89 d0             	mov    %rdx,%rax
    486f:	48 c1 e0 02          	shl    $0x2,%rax
    4873:	48 01 d0             	add    %rdx,%rax
    4876:	48 c1 e0 03          	shl    $0x3,%rax
    487a:	48 01 c8             	add    %rcx,%rax
    487d:	48 8b 40 10          	mov    0x10(%rax),%rax
    4881:	8b 00                	mov    (%rax),%eax
    4883:	3b 45 dc             	cmp    -0x24(%rbp),%eax
    4886:	0f 84 fb 02 00 00    	je     4b87 <comp_delta_td_cost+0x428>
    488c:	8b 55 e8             	mov    -0x18(%rbp),%edx
    488f:	8b 45 ec             	mov    -0x14(%rbp),%eax
    4892:	89 d6                	mov    %edx,%esi
    4894:	89 c7                	mov    %eax,%edi
    4896:	e8 88 f5 ff ff       	callq  3e23 <comp_td_point_to_point_delay>
    489b:	66 0f 7e c0          	movd   %xmm0,%eax
    489f:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    48a2:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 48a9 <comp_delta_td_cost+0x14a>
    48a9:	8b 55 ec             	mov    -0x14(%rbp),%edx
    48ac:	48 63 d2             	movslq %edx,%rdx
    48af:	48 c1 e2 03          	shl    $0x3,%rdx
    48b3:	48 01 d0             	add    %rdx,%rax
    48b6:	48 8b 00             	mov    (%rax),%rax
    48b9:	8b 55 e8             	mov    -0x18(%rbp),%edx
    48bc:	48 63 d2             	movslq %edx,%rdx
    48bf:	48 c1 e2 02          	shl    $0x2,%rdx
    48c3:	48 01 c2             	add    %rax,%rdx
    48c6:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    48c9:	89 02                	mov    %eax,(%rdx)
    48cb:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 48d2 <comp_delta_td_cost+0x173>
    48d2:	8b 55 ec             	mov    -0x14(%rbp),%edx
    48d5:	48 63 d2             	movslq %edx,%rdx
    48d8:	48 c1 e2 03          	shl    $0x3,%rdx
    48dc:	48 01 d0             	add    %rdx,%rax
    48df:	48 8b 00             	mov    (%rax),%rax
    48e2:	8b 55 e8             	mov    -0x18(%rbp),%edx
    48e5:	48 63 d2             	movslq %edx,%rdx
    48e8:	48 c1 e2 02          	shl    $0x2,%rdx
    48ec:	48 01 c2             	add    %rax,%rdx
    48ef:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 48f6 <comp_delta_td_cost+0x197>
    48f6:	8b 4d ec             	mov    -0x14(%rbp),%ecx
    48f9:	48 63 c9             	movslq %ecx,%rcx
    48fc:	48 c1 e1 03          	shl    $0x3,%rcx
    4900:	48 01 c8             	add    %rcx,%rax
    4903:	48 8b 00             	mov    (%rax),%rax
    4906:	8b 4d e8             	mov    -0x18(%rbp),%ecx
    4909:	48 63 c9             	movslq %ecx,%rcx
    490c:	48 c1 e1 02          	shl    $0x2,%rcx
    4910:	48 01 c8             	add    %rcx,%rax
    4913:	f3 0f 10 00          	movss  (%rax),%xmm0
    4917:	f3 0f 59 45 e4       	mulss  -0x1c(%rbp),%xmm0
    491c:	66 0f 7e c0          	movd   %xmm0,%eax
    4920:	89 02                	mov    %eax,(%rdx)
    4922:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4929 <comp_delta_td_cost+0x1ca>
    4929:	8b 55 ec             	mov    -0x14(%rbp),%edx
    492c:	48 63 d2             	movslq %edx,%rdx
    492f:	48 c1 e2 03          	shl    $0x3,%rdx
    4933:	48 01 d0             	add    %rdx,%rax
    4936:	48 8b 00             	mov    (%rax),%rax
    4939:	8b 55 e8             	mov    -0x18(%rbp),%edx
    493c:	48 63 d2             	movslq %edx,%rdx
    493f:	48 c1 e2 02          	shl    $0x2,%rdx
    4943:	48 01 d0             	add    %rdx,%rax
    4946:	f3 0f 10 00          	movss  (%rax),%xmm0
    494a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4951 <comp_delta_td_cost+0x1f2>
    4951:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4954:	48 63 d2             	movslq %edx,%rdx
    4957:	48 c1 e2 03          	shl    $0x3,%rdx
    495b:	48 01 d0             	add    %rdx,%rax
    495e:	48 8b 00             	mov    (%rax),%rax
    4961:	8b 55 e8             	mov    -0x18(%rbp),%edx
    4964:	48 63 d2             	movslq %edx,%rdx
    4967:	48 c1 e2 02          	shl    $0x2,%rdx
    496b:	48 01 d0             	add    %rdx,%rax
    496e:	f3 0f 10 08          	movss  (%rax),%xmm1
    4972:	f3 0f 5c c1          	subss  %xmm1,%xmm0
    4976:	f3 0f 10 4d f0       	movss  -0x10(%rbp),%xmm1
    497b:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    497f:	66 0f 7e c8          	movd   %xmm1,%eax
    4983:	89 45 f0             	mov    %eax,-0x10(%rbp)
    4986:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 498d <comp_delta_td_cost+0x22e>
    498d:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4990:	48 63 d2             	movslq %edx,%rdx
    4993:	48 c1 e2 03          	shl    $0x3,%rdx
    4997:	48 01 d0             	add    %rdx,%rax
    499a:	48 8b 00             	mov    (%rax),%rax
    499d:	8b 55 e8             	mov    -0x18(%rbp),%edx
    49a0:	48 63 d2             	movslq %edx,%rdx
    49a3:	48 c1 e2 02          	shl    $0x2,%rdx
    49a7:	48 01 d0             	add    %rdx,%rax
    49aa:	f3 0f 10 00          	movss  (%rax),%xmm0
    49ae:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 49b5 <comp_delta_td_cost+0x256>
    49b5:	8b 55 ec             	mov    -0x14(%rbp),%edx
    49b8:	48 63 d2             	movslq %edx,%rdx
    49bb:	48 c1 e2 03          	shl    $0x3,%rdx
    49bf:	48 01 d0             	add    %rdx,%rax
    49c2:	48 8b 00             	mov    (%rax),%rax
    49c5:	8b 55 e8             	mov    -0x18(%rbp),%edx
    49c8:	48 63 d2             	movslq %edx,%rdx
    49cb:	48 c1 e2 02          	shl    $0x2,%rdx
    49cf:	48 01 d0             	add    %rdx,%rax
    49d2:	f3 0f 10 08          	movss  (%rax),%xmm1
    49d6:	f3 0f 5c c1          	subss  %xmm1,%xmm0
    49da:	f3 0f 10 4d f4       	movss  -0xc(%rbp),%xmm1
    49df:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    49e3:	66 0f 7e c8          	movd   %xmm1,%eax
    49e7:	89 45 f4             	mov    %eax,-0xc(%rbp)
    49ea:	e9 98 01 00 00       	jmpq   4b87 <comp_delta_td_cost+0x428>
    49ef:	c7 45 f8 01 00 00 00 	movl   $0x1,-0x8(%rbp)
    49f6:	e9 62 01 00 00       	jmpq   4b5d <comp_delta_td_cost+0x3fe>
    49fb:	8b 55 f8             	mov    -0x8(%rbp),%edx
    49fe:	8b 45 ec             	mov    -0x14(%rbp),%eax
    4a01:	89 d6                	mov    %edx,%esi
    4a03:	89 c7                	mov    %eax,%edi
    4a05:	e8 19 f4 ff ff       	callq  3e23 <comp_td_point_to_point_delay>
    4a0a:	66 0f 7e c0          	movd   %xmm0,%eax
    4a0e:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    4a11:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4a18 <comp_delta_td_cost+0x2b9>
    4a18:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4a1b:	48 63 d2             	movslq %edx,%rdx
    4a1e:	48 c1 e2 03          	shl    $0x3,%rdx
    4a22:	48 01 d0             	add    %rdx,%rax
    4a25:	48 8b 00             	mov    (%rax),%rax
    4a28:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4a2b:	48 63 d2             	movslq %edx,%rdx
    4a2e:	48 c1 e2 02          	shl    $0x2,%rdx
    4a32:	48 01 c2             	add    %rax,%rdx
    4a35:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    4a38:	89 02                	mov    %eax,(%rdx)
    4a3a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4a41 <comp_delta_td_cost+0x2e2>
    4a41:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4a44:	48 63 d2             	movslq %edx,%rdx
    4a47:	48 c1 e2 03          	shl    $0x3,%rdx
    4a4b:	48 01 d0             	add    %rdx,%rax
    4a4e:	48 8b 00             	mov    (%rax),%rax
    4a51:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4a54:	48 63 d2             	movslq %edx,%rdx
    4a57:	48 c1 e2 02          	shl    $0x2,%rdx
    4a5b:	48 01 c2             	add    %rax,%rdx
    4a5e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4a65 <comp_delta_td_cost+0x306>
    4a65:	8b 4d ec             	mov    -0x14(%rbp),%ecx
    4a68:	48 63 c9             	movslq %ecx,%rcx
    4a6b:	48 c1 e1 03          	shl    $0x3,%rcx
    4a6f:	48 01 c8             	add    %rcx,%rax
    4a72:	48 8b 00             	mov    (%rax),%rax
    4a75:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    4a78:	48 63 c9             	movslq %ecx,%rcx
    4a7b:	48 c1 e1 02          	shl    $0x2,%rcx
    4a7f:	48 01 c8             	add    %rcx,%rax
    4a82:	f3 0f 10 00          	movss  (%rax),%xmm0
    4a86:	f3 0f 59 45 e4       	mulss  -0x1c(%rbp),%xmm0
    4a8b:	66 0f 7e c0          	movd   %xmm0,%eax
    4a8f:	89 02                	mov    %eax,(%rdx)
    4a91:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4a98 <comp_delta_td_cost+0x339>
    4a98:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4a9b:	48 63 d2             	movslq %edx,%rdx
    4a9e:	48 c1 e2 03          	shl    $0x3,%rdx
    4aa2:	48 01 d0             	add    %rdx,%rax
    4aa5:	48 8b 00             	mov    (%rax),%rax
    4aa8:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4aab:	48 63 d2             	movslq %edx,%rdx
    4aae:	48 c1 e2 02          	shl    $0x2,%rdx
    4ab2:	48 01 d0             	add    %rdx,%rax
    4ab5:	f3 0f 10 00          	movss  (%rax),%xmm0
    4ab9:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4ac0 <comp_delta_td_cost+0x361>
    4ac0:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4ac3:	48 63 d2             	movslq %edx,%rdx
    4ac6:	48 c1 e2 03          	shl    $0x3,%rdx
    4aca:	48 01 d0             	add    %rdx,%rax
    4acd:	48 8b 00             	mov    (%rax),%rax
    4ad0:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4ad3:	48 63 d2             	movslq %edx,%rdx
    4ad6:	48 c1 e2 02          	shl    $0x2,%rdx
    4ada:	48 01 d0             	add    %rdx,%rax
    4add:	f3 0f 10 08          	movss  (%rax),%xmm1
    4ae1:	f3 0f 5c c1          	subss  %xmm1,%xmm0
    4ae5:	f3 0f 10 4d f0       	movss  -0x10(%rbp),%xmm1
    4aea:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    4aee:	66 0f 7e c8          	movd   %xmm1,%eax
    4af2:	89 45 f0             	mov    %eax,-0x10(%rbp)
    4af5:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4afc <comp_delta_td_cost+0x39d>
    4afc:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4aff:	48 63 d2             	movslq %edx,%rdx
    4b02:	48 c1 e2 03          	shl    $0x3,%rdx
    4b06:	48 01 d0             	add    %rdx,%rax
    4b09:	48 8b 00             	mov    (%rax),%rax
    4b0c:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4b0f:	48 63 d2             	movslq %edx,%rdx
    4b12:	48 c1 e2 02          	shl    $0x2,%rdx
    4b16:	48 01 d0             	add    %rdx,%rax
    4b19:	f3 0f 10 00          	movss  (%rax),%xmm0
    4b1d:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4b24 <comp_delta_td_cost+0x3c5>
    4b24:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4b27:	48 63 d2             	movslq %edx,%rdx
    4b2a:	48 c1 e2 03          	shl    $0x3,%rdx
    4b2e:	48 01 d0             	add    %rdx,%rax
    4b31:	48 8b 00             	mov    (%rax),%rax
    4b34:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4b37:	48 63 d2             	movslq %edx,%rdx
    4b3a:	48 c1 e2 02          	shl    $0x2,%rdx
    4b3e:	48 01 d0             	add    %rdx,%rax
    4b41:	f3 0f 10 08          	movss  (%rax),%xmm1
    4b45:	f3 0f 5c c1          	subss  %xmm1,%xmm0
    4b49:	f3 0f 10 4d f4       	movss  -0xc(%rbp),%xmm1
    4b4e:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    4b52:	66 0f 7e c8          	movd   %xmm1,%eax
    4b56:	89 45 f4             	mov    %eax,-0xc(%rbp)
    4b59:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    4b5d:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4b64 <comp_delta_td_cost+0x405>
    4b64:	8b 45 ec             	mov    -0x14(%rbp),%eax
    4b67:	48 63 d0             	movslq %eax,%rdx
    4b6a:	48 89 d0             	mov    %rdx,%rax
    4b6d:	48 c1 e0 02          	shl    $0x2,%rax
    4b71:	48 01 d0             	add    %rdx,%rax
    4b74:	48 c1 e0 03          	shl    $0x3,%rax
    4b78:	48 01 c8             	add    %rcx,%rax
    4b7b:	8b 40 08             	mov    0x8(%rax),%eax
    4b7e:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    4b81:	0f 8d 74 fe ff ff    	jge    49fb <comp_delta_td_cost+0x29c>
    4b87:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    4b8b:	8b 45 fc             	mov    -0x4(%rbp),%eax
    4b8e:	3b 45 d4             	cmp    -0x2c(%rbp),%eax
    4b91:	0f 8c ff fb ff ff    	jl     4796 <comp_delta_td_cost+0x37>
    4b97:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%rbp)
    4b9b:	0f 84 0d 04 00 00    	je     4fae <comp_delta_td_cost+0x84f>
    4ba1:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    4ba8:	e9 f5 03 00 00       	jmpq   4fa2 <comp_delta_td_cost+0x843>
    4bad:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4bb4 <comp_delta_td_cost+0x455>
    4bb4:	8b 45 d8             	mov    -0x28(%rbp),%eax
    4bb7:	48 63 d0             	movslq %eax,%rdx
    4bba:	48 89 d0             	mov    %rdx,%rax
    4bbd:	48 c1 e0 02          	shl    $0x2,%rax
    4bc1:	48 01 d0             	add    %rdx,%rax
    4bc4:	48 c1 e0 03          	shl    $0x3,%rax
    4bc8:	48 01 c8             	add    %rcx,%rax
    4bcb:	48 8b 40 10          	mov    0x10(%rax),%rax
    4bcf:	8b 55 fc             	mov    -0x4(%rbp),%edx
    4bd2:	48 63 d2             	movslq %edx,%rdx
    4bd5:	48 c1 e2 02          	shl    $0x2,%rdx
    4bd9:	48 01 d0             	add    %rdx,%rax
    4bdc:	8b 00                	mov    (%rax),%eax
    4bde:	89 45 ec             	mov    %eax,-0x14(%rbp)
    4be1:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%rbp)
    4be5:	75 05                	jne    4bec <comp_delta_td_cost+0x48d>
    4be7:	e9 b2 03 00 00       	jmpq   4f9e <comp_delta_td_cost+0x83f>
    4bec:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4bf3 <comp_delta_td_cost+0x494>
    4bf3:	8b 45 ec             	mov    -0x14(%rbp),%eax
    4bf6:	48 63 d0             	movslq %eax,%rdx
    4bf9:	48 89 d0             	mov    %rdx,%rax
    4bfc:	48 c1 e0 02          	shl    $0x2,%rax
    4c00:	48 01 d0             	add    %rdx,%rax
    4c03:	48 c1 e0 03          	shl    $0x3,%rax
    4c07:	48 01 c8             	add    %rcx,%rax
    4c0a:	8b 40 20             	mov    0x20(%rax),%eax
    4c0d:	85 c0                	test   %eax,%eax
    4c0f:	74 05                	je     4c16 <comp_delta_td_cost+0x4b7>
    4c11:	e9 88 03 00 00       	jmpq   4f9e <comp_delta_td_cost+0x83f>
    4c16:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4c1d <comp_delta_td_cost+0x4be>
    4c1d:	8b 55 d8             	mov    -0x28(%rbp),%edx
    4c20:	48 63 d2             	movslq %edx,%rdx
    4c23:	48 c1 e2 03          	shl    $0x3,%rdx
    4c27:	48 01 d0             	add    %rdx,%rax
    4c2a:	48 8b 00             	mov    (%rax),%rax
    4c2d:	8b 55 fc             	mov    -0x4(%rbp),%edx
    4c30:	48 63 d2             	movslq %edx,%rdx
    4c33:	48 c1 e2 02          	shl    $0x2,%rdx
    4c37:	48 01 d0             	add    %rdx,%rax
    4c3a:	8b 00                	mov    (%rax),%eax
    4c3c:	89 45 e8             	mov    %eax,-0x18(%rbp)
    4c3f:	83 7d e8 00          	cmpl   $0x0,-0x18(%rbp)
    4c43:	0f 84 bd 01 00 00    	je     4e06 <comp_delta_td_cost+0x6a7>
    4c49:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4c50 <comp_delta_td_cost+0x4f1>
    4c50:	8b 45 ec             	mov    -0x14(%rbp),%eax
    4c53:	48 63 d0             	movslq %eax,%rdx
    4c56:	48 89 d0             	mov    %rdx,%rax
    4c59:	48 c1 e0 02          	shl    $0x2,%rax
    4c5d:	48 01 d0             	add    %rdx,%rax
    4c60:	48 c1 e0 03          	shl    $0x3,%rax
    4c64:	48 01 c8             	add    %rcx,%rax
    4c67:	48 8b 40 10          	mov    0x10(%rax),%rax
    4c6b:	8b 00                	mov    (%rax),%eax
    4c6d:	3b 45 d8             	cmp    -0x28(%rbp),%eax
    4c70:	0f 84 28 03 00 00    	je     4f9e <comp_delta_td_cost+0x83f>
    4c76:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4c7d <comp_delta_td_cost+0x51e>
    4c7d:	8b 45 ec             	mov    -0x14(%rbp),%eax
    4c80:	48 63 d0             	movslq %eax,%rdx
    4c83:	48 89 d0             	mov    %rdx,%rax
    4c86:	48 c1 e0 02          	shl    $0x2,%rax
    4c8a:	48 01 d0             	add    %rdx,%rax
    4c8d:	48 c1 e0 03          	shl    $0x3,%rax
    4c91:	48 01 c8             	add    %rcx,%rax
    4c94:	48 8b 40 10          	mov    0x10(%rax),%rax
    4c98:	8b 00                	mov    (%rax),%eax
    4c9a:	3b 45 dc             	cmp    -0x24(%rbp),%eax
    4c9d:	0f 84 fb 02 00 00    	je     4f9e <comp_delta_td_cost+0x83f>
    4ca3:	8b 55 e8             	mov    -0x18(%rbp),%edx
    4ca6:	8b 45 ec             	mov    -0x14(%rbp),%eax
    4ca9:	89 d6                	mov    %edx,%esi
    4cab:	89 c7                	mov    %eax,%edi
    4cad:	e8 71 f1 ff ff       	callq  3e23 <comp_td_point_to_point_delay>
    4cb2:	66 0f 7e c0          	movd   %xmm0,%eax
    4cb6:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    4cb9:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4cc0 <comp_delta_td_cost+0x561>
    4cc0:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4cc3:	48 63 d2             	movslq %edx,%rdx
    4cc6:	48 c1 e2 03          	shl    $0x3,%rdx
    4cca:	48 01 d0             	add    %rdx,%rax
    4ccd:	48 8b 00             	mov    (%rax),%rax
    4cd0:	8b 55 e8             	mov    -0x18(%rbp),%edx
    4cd3:	48 63 d2             	movslq %edx,%rdx
    4cd6:	48 c1 e2 02          	shl    $0x2,%rdx
    4cda:	48 01 c2             	add    %rax,%rdx
    4cdd:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    4ce0:	89 02                	mov    %eax,(%rdx)
    4ce2:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4ce9 <comp_delta_td_cost+0x58a>
    4ce9:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4cec:	48 63 d2             	movslq %edx,%rdx
    4cef:	48 c1 e2 03          	shl    $0x3,%rdx
    4cf3:	48 01 d0             	add    %rdx,%rax
    4cf6:	48 8b 00             	mov    (%rax),%rax
    4cf9:	8b 55 e8             	mov    -0x18(%rbp),%edx
    4cfc:	48 63 d2             	movslq %edx,%rdx
    4cff:	48 c1 e2 02          	shl    $0x2,%rdx
    4d03:	48 01 c2             	add    %rax,%rdx
    4d06:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4d0d <comp_delta_td_cost+0x5ae>
    4d0d:	8b 4d ec             	mov    -0x14(%rbp),%ecx
    4d10:	48 63 c9             	movslq %ecx,%rcx
    4d13:	48 c1 e1 03          	shl    $0x3,%rcx
    4d17:	48 01 c8             	add    %rcx,%rax
    4d1a:	48 8b 00             	mov    (%rax),%rax
    4d1d:	8b 4d e8             	mov    -0x18(%rbp),%ecx
    4d20:	48 63 c9             	movslq %ecx,%rcx
    4d23:	48 c1 e1 02          	shl    $0x2,%rcx
    4d27:	48 01 c8             	add    %rcx,%rax
    4d2a:	f3 0f 10 00          	movss  (%rax),%xmm0
    4d2e:	f3 0f 59 45 e4       	mulss  -0x1c(%rbp),%xmm0
    4d33:	66 0f 7e c0          	movd   %xmm0,%eax
    4d37:	89 02                	mov    %eax,(%rdx)
    4d39:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4d40 <comp_delta_td_cost+0x5e1>
    4d40:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4d43:	48 63 d2             	movslq %edx,%rdx
    4d46:	48 c1 e2 03          	shl    $0x3,%rdx
    4d4a:	48 01 d0             	add    %rdx,%rax
    4d4d:	48 8b 00             	mov    (%rax),%rax
    4d50:	8b 55 e8             	mov    -0x18(%rbp),%edx
    4d53:	48 63 d2             	movslq %edx,%rdx
    4d56:	48 c1 e2 02          	shl    $0x2,%rdx
    4d5a:	48 01 d0             	add    %rdx,%rax
    4d5d:	f3 0f 10 00          	movss  (%rax),%xmm0
    4d61:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4d68 <comp_delta_td_cost+0x609>
    4d68:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4d6b:	48 63 d2             	movslq %edx,%rdx
    4d6e:	48 c1 e2 03          	shl    $0x3,%rdx
    4d72:	48 01 d0             	add    %rdx,%rax
    4d75:	48 8b 00             	mov    (%rax),%rax
    4d78:	8b 55 e8             	mov    -0x18(%rbp),%edx
    4d7b:	48 63 d2             	movslq %edx,%rdx
    4d7e:	48 c1 e2 02          	shl    $0x2,%rdx
    4d82:	48 01 d0             	add    %rdx,%rax
    4d85:	f3 0f 10 08          	movss  (%rax),%xmm1
    4d89:	f3 0f 5c c1          	subss  %xmm1,%xmm0
    4d8d:	f3 0f 10 4d f0       	movss  -0x10(%rbp),%xmm1
    4d92:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    4d96:	66 0f 7e c8          	movd   %xmm1,%eax
    4d9a:	89 45 f0             	mov    %eax,-0x10(%rbp)
    4d9d:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4da4 <comp_delta_td_cost+0x645>
    4da4:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4da7:	48 63 d2             	movslq %edx,%rdx
    4daa:	48 c1 e2 03          	shl    $0x3,%rdx
    4dae:	48 01 d0             	add    %rdx,%rax
    4db1:	48 8b 00             	mov    (%rax),%rax
    4db4:	8b 55 e8             	mov    -0x18(%rbp),%edx
    4db7:	48 63 d2             	movslq %edx,%rdx
    4dba:	48 c1 e2 02          	shl    $0x2,%rdx
    4dbe:	48 01 d0             	add    %rdx,%rax
    4dc1:	f3 0f 10 00          	movss  (%rax),%xmm0
    4dc5:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4dcc <comp_delta_td_cost+0x66d>
    4dcc:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4dcf:	48 63 d2             	movslq %edx,%rdx
    4dd2:	48 c1 e2 03          	shl    $0x3,%rdx
    4dd6:	48 01 d0             	add    %rdx,%rax
    4dd9:	48 8b 00             	mov    (%rax),%rax
    4ddc:	8b 55 e8             	mov    -0x18(%rbp),%edx
    4ddf:	48 63 d2             	movslq %edx,%rdx
    4de2:	48 c1 e2 02          	shl    $0x2,%rdx
    4de6:	48 01 d0             	add    %rdx,%rax
    4de9:	f3 0f 10 08          	movss  (%rax),%xmm1
    4ded:	f3 0f 5c c1          	subss  %xmm1,%xmm0
    4df1:	f3 0f 10 4d f4       	movss  -0xc(%rbp),%xmm1
    4df6:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    4dfa:	66 0f 7e c8          	movd   %xmm1,%eax
    4dfe:	89 45 f4             	mov    %eax,-0xc(%rbp)
    4e01:	e9 98 01 00 00       	jmpq   4f9e <comp_delta_td_cost+0x83f>
    4e06:	c7 45 f8 01 00 00 00 	movl   $0x1,-0x8(%rbp)
    4e0d:	e9 62 01 00 00       	jmpq   4f74 <comp_delta_td_cost+0x815>
    4e12:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4e15:	8b 45 ec             	mov    -0x14(%rbp),%eax
    4e18:	89 d6                	mov    %edx,%esi
    4e1a:	89 c7                	mov    %eax,%edi
    4e1c:	e8 02 f0 ff ff       	callq  3e23 <comp_td_point_to_point_delay>
    4e21:	66 0f 7e c0          	movd   %xmm0,%eax
    4e25:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    4e28:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4e2f <comp_delta_td_cost+0x6d0>
    4e2f:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4e32:	48 63 d2             	movslq %edx,%rdx
    4e35:	48 c1 e2 03          	shl    $0x3,%rdx
    4e39:	48 01 d0             	add    %rdx,%rax
    4e3c:	48 8b 00             	mov    (%rax),%rax
    4e3f:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4e42:	48 63 d2             	movslq %edx,%rdx
    4e45:	48 c1 e2 02          	shl    $0x2,%rdx
    4e49:	48 01 c2             	add    %rax,%rdx
    4e4c:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    4e4f:	89 02                	mov    %eax,(%rdx)
    4e51:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4e58 <comp_delta_td_cost+0x6f9>
    4e58:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4e5b:	48 63 d2             	movslq %edx,%rdx
    4e5e:	48 c1 e2 03          	shl    $0x3,%rdx
    4e62:	48 01 d0             	add    %rdx,%rax
    4e65:	48 8b 00             	mov    (%rax),%rax
    4e68:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4e6b:	48 63 d2             	movslq %edx,%rdx
    4e6e:	48 c1 e2 02          	shl    $0x2,%rdx
    4e72:	48 01 c2             	add    %rax,%rdx
    4e75:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4e7c <comp_delta_td_cost+0x71d>
    4e7c:	8b 4d ec             	mov    -0x14(%rbp),%ecx
    4e7f:	48 63 c9             	movslq %ecx,%rcx
    4e82:	48 c1 e1 03          	shl    $0x3,%rcx
    4e86:	48 01 c8             	add    %rcx,%rax
    4e89:	48 8b 00             	mov    (%rax),%rax
    4e8c:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    4e8f:	48 63 c9             	movslq %ecx,%rcx
    4e92:	48 c1 e1 02          	shl    $0x2,%rcx
    4e96:	48 01 c8             	add    %rcx,%rax
    4e99:	f3 0f 10 00          	movss  (%rax),%xmm0
    4e9d:	f3 0f 59 45 e4       	mulss  -0x1c(%rbp),%xmm0
    4ea2:	66 0f 7e c0          	movd   %xmm0,%eax
    4ea6:	89 02                	mov    %eax,(%rdx)
    4ea8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4eaf <comp_delta_td_cost+0x750>
    4eaf:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4eb2:	48 63 d2             	movslq %edx,%rdx
    4eb5:	48 c1 e2 03          	shl    $0x3,%rdx
    4eb9:	48 01 d0             	add    %rdx,%rax
    4ebc:	48 8b 00             	mov    (%rax),%rax
    4ebf:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4ec2:	48 63 d2             	movslq %edx,%rdx
    4ec5:	48 c1 e2 02          	shl    $0x2,%rdx
    4ec9:	48 01 d0             	add    %rdx,%rax
    4ecc:	f3 0f 10 00          	movss  (%rax),%xmm0
    4ed0:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4ed7 <comp_delta_td_cost+0x778>
    4ed7:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4eda:	48 63 d2             	movslq %edx,%rdx
    4edd:	48 c1 e2 03          	shl    $0x3,%rdx
    4ee1:	48 01 d0             	add    %rdx,%rax
    4ee4:	48 8b 00             	mov    (%rax),%rax
    4ee7:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4eea:	48 63 d2             	movslq %edx,%rdx
    4eed:	48 c1 e2 02          	shl    $0x2,%rdx
    4ef1:	48 01 d0             	add    %rdx,%rax
    4ef4:	f3 0f 10 08          	movss  (%rax),%xmm1
    4ef8:	f3 0f 5c c1          	subss  %xmm1,%xmm0
    4efc:	f3 0f 10 4d f0       	movss  -0x10(%rbp),%xmm1
    4f01:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    4f05:	66 0f 7e c8          	movd   %xmm1,%eax
    4f09:	89 45 f0             	mov    %eax,-0x10(%rbp)
    4f0c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4f13 <comp_delta_td_cost+0x7b4>
    4f13:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4f16:	48 63 d2             	movslq %edx,%rdx
    4f19:	48 c1 e2 03          	shl    $0x3,%rdx
    4f1d:	48 01 d0             	add    %rdx,%rax
    4f20:	48 8b 00             	mov    (%rax),%rax
    4f23:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4f26:	48 63 d2             	movslq %edx,%rdx
    4f29:	48 c1 e2 02          	shl    $0x2,%rdx
    4f2d:	48 01 d0             	add    %rdx,%rax
    4f30:	f3 0f 10 00          	movss  (%rax),%xmm0
    4f34:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 4f3b <comp_delta_td_cost+0x7dc>
    4f3b:	8b 55 ec             	mov    -0x14(%rbp),%edx
    4f3e:	48 63 d2             	movslq %edx,%rdx
    4f41:	48 c1 e2 03          	shl    $0x3,%rdx
    4f45:	48 01 d0             	add    %rdx,%rax
    4f48:	48 8b 00             	mov    (%rax),%rax
    4f4b:	8b 55 f8             	mov    -0x8(%rbp),%edx
    4f4e:	48 63 d2             	movslq %edx,%rdx
    4f51:	48 c1 e2 02          	shl    $0x2,%rdx
    4f55:	48 01 d0             	add    %rdx,%rax
    4f58:	f3 0f 10 08          	movss  (%rax),%xmm1
    4f5c:	f3 0f 5c c1          	subss  %xmm1,%xmm0
    4f60:	f3 0f 10 4d f4       	movss  -0xc(%rbp),%xmm1
    4f65:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    4f69:	66 0f 7e c8          	movd   %xmm1,%eax
    4f6d:	89 45 f4             	mov    %eax,-0xc(%rbp)
    4f70:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    4f74:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4f7b <comp_delta_td_cost+0x81c>
    4f7b:	8b 45 ec             	mov    -0x14(%rbp),%eax
    4f7e:	48 63 d0             	movslq %eax,%rdx
    4f81:	48 89 d0             	mov    %rdx,%rax
    4f84:	48 c1 e0 02          	shl    $0x2,%rax
    4f88:	48 01 d0             	add    %rdx,%rax
    4f8b:	48 c1 e0 03          	shl    $0x3,%rax
    4f8f:	48 01 c8             	add    %rcx,%rax
    4f92:	8b 40 08             	mov    0x8(%rax),%eax
    4f95:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    4f98:	0f 8d 74 fe ff ff    	jge    4e12 <comp_delta_td_cost+0x6b3>
    4f9e:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    4fa2:	8b 45 fc             	mov    -0x4(%rbp),%eax
    4fa5:	3b 45 d4             	cmp    -0x2c(%rbp),%eax
    4fa8:	0f 8c ff fb ff ff    	jl     4bad <comp_delta_td_cost+0x44e>
    4fae:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
    4fb2:	8b 45 f4             	mov    -0xc(%rbp),%eax
    4fb5:	89 02                	mov    %eax,(%rdx)
    4fb7:	48 8b 55 c0          	mov    -0x40(%rbp),%rdx
    4fbb:	8b 45 f0             	mov    -0x10(%rbp),%eax
    4fbe:	89 02                	mov    %eax,(%rdx)
    4fc0:	c9                   	leaveq 
    4fc1:	c3                   	retq   

0000000000004fc2 <comp_td_costs>:
    4fc2:	55                   	push   %rbp
    4fc3:	48 89 e5             	mov    %rsp,%rbp
    4fc6:	48 83 ec 30          	sub    $0x30,%rsp
    4fca:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
    4fce:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
    4fd2:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 4fd8 <comp_td_costs+0x16>
    4fd8:	89 45 f4             	mov    %eax,-0xc(%rbp)
    4fdb:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 4fe1 <comp_td_costs+0x1f>
    4fe1:	89 45 f0             	mov    %eax,-0x10(%rbp)
    4fe4:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    4feb:	e9 7d 01 00 00       	jmpq   516d <comp_td_costs+0x1ab>
    4ff0:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 4ff7 <comp_td_costs+0x35>
    4ff7:	8b 45 fc             	mov    -0x4(%rbp),%eax
    4ffa:	48 63 d0             	movslq %eax,%rdx
    4ffd:	48 89 d0             	mov    %rdx,%rax
    5000:	48 c1 e0 02          	shl    $0x2,%rax
    5004:	48 01 d0             	add    %rdx,%rax
    5007:	48 c1 e0 03          	shl    $0x3,%rax
    500b:	48 01 c8             	add    %rcx,%rax
    500e:	8b 40 20             	mov    0x20(%rax),%eax
    5011:	85 c0                	test   %eax,%eax
    5013:	0f 85 50 01 00 00    	jne    5169 <comp_td_costs+0x1a7>
    5019:	c7 45 f8 01 00 00 00 	movl   $0x1,-0x8(%rbp)
    5020:	e9 1a 01 00 00       	jmpq   513f <comp_td_costs+0x17d>
    5025:	8b 55 f8             	mov    -0x8(%rbp),%edx
    5028:	8b 45 fc             	mov    -0x4(%rbp),%eax
    502b:	89 d6                	mov    %edx,%esi
    502d:	89 c7                	mov    %eax,%edi
    502f:	e8 ef ed ff ff       	callq  3e23 <comp_td_point_to_point_delay>
    5034:	66 0f 7e c0          	movd   %xmm0,%eax
    5038:	89 45 ec             	mov    %eax,-0x14(%rbp)
    503b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5042 <comp_td_costs+0x80>
    5042:	8b 55 fc             	mov    -0x4(%rbp),%edx
    5045:	48 63 d2             	movslq %edx,%rdx
    5048:	48 c1 e2 03          	shl    $0x3,%rdx
    504c:	48 01 d0             	add    %rdx,%rax
    504f:	48 8b 00             	mov    (%rax),%rax
    5052:	8b 55 f8             	mov    -0x8(%rbp),%edx
    5055:	48 63 d2             	movslq %edx,%rdx
    5058:	48 c1 e2 02          	shl    $0x2,%rdx
    505c:	48 01 d0             	add    %rdx,%rax
    505f:	f3 0f 10 00          	movss  (%rax),%xmm0
    5063:	f3 0f 59 45 ec       	mulss  -0x14(%rbp),%xmm0
    5068:	66 0f 7e c0          	movd   %xmm0,%eax
    506c:	89 45 e8             	mov    %eax,-0x18(%rbp)
    506f:	f3 0f 10 45 f0       	movss  -0x10(%rbp),%xmm0
    5074:	f3 0f 58 45 ec       	addss  -0x14(%rbp),%xmm0
    5079:	66 0f 7e c0          	movd   %xmm0,%eax
    507d:	89 45 f0             	mov    %eax,-0x10(%rbp)
    5080:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5087 <comp_td_costs+0xc5>
    5087:	8b 55 fc             	mov    -0x4(%rbp),%edx
    508a:	48 63 d2             	movslq %edx,%rdx
    508d:	48 c1 e2 03          	shl    $0x3,%rdx
    5091:	48 01 d0             	add    %rdx,%rax
    5094:	48 8b 00             	mov    (%rax),%rax
    5097:	8b 55 f8             	mov    -0x8(%rbp),%edx
    509a:	48 63 d2             	movslq %edx,%rdx
    509d:	48 c1 e2 02          	shl    $0x2,%rdx
    50a1:	48 01 c2             	add    %rax,%rdx
    50a4:	8b 45 ec             	mov    -0x14(%rbp),%eax
    50a7:	89 02                	mov    %eax,(%rdx)
    50a9:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 50b0 <comp_td_costs+0xee>
    50b0:	8b 55 fc             	mov    -0x4(%rbp),%edx
    50b3:	48 63 d2             	movslq %edx,%rdx
    50b6:	48 c1 e2 03          	shl    $0x3,%rdx
    50ba:	48 01 d0             	add    %rdx,%rax
    50bd:	48 8b 00             	mov    (%rax),%rax
    50c0:	8b 55 f8             	mov    -0x8(%rbp),%edx
    50c3:	48 63 d2             	movslq %edx,%rdx
    50c6:	48 c1 e2 02          	shl    $0x2,%rdx
    50ca:	48 01 c2             	add    %rax,%rdx
    50cd:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 50d3 <comp_td_costs+0x111>
    50d3:	89 02                	mov    %eax,(%rdx)
    50d5:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 50dc <comp_td_costs+0x11a>
    50dc:	8b 55 fc             	mov    -0x4(%rbp),%edx
    50df:	48 63 d2             	movslq %edx,%rdx
    50e2:	48 c1 e2 03          	shl    $0x3,%rdx
    50e6:	48 01 d0             	add    %rdx,%rax
    50e9:	48 8b 00             	mov    (%rax),%rax
    50ec:	8b 55 f8             	mov    -0x8(%rbp),%edx
    50ef:	48 63 d2             	movslq %edx,%rdx
    50f2:	48 c1 e2 02          	shl    $0x2,%rdx
    50f6:	48 01 c2             	add    %rax,%rdx
    50f9:	8b 45 e8             	mov    -0x18(%rbp),%eax
    50fc:	89 02                	mov    %eax,(%rdx)
    50fe:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5105 <comp_td_costs+0x143>
    5105:	8b 55 fc             	mov    -0x4(%rbp),%edx
    5108:	48 63 d2             	movslq %edx,%rdx
    510b:	48 c1 e2 03          	shl    $0x3,%rdx
    510f:	48 01 d0             	add    %rdx,%rax
    5112:	48 8b 00             	mov    (%rax),%rax
    5115:	8b 55 f8             	mov    -0x8(%rbp),%edx
    5118:	48 63 d2             	movslq %edx,%rdx
    511b:	48 c1 e2 02          	shl    $0x2,%rdx
    511f:	48 01 c2             	add    %rax,%rdx
    5122:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5128 <comp_td_costs+0x166>
    5128:	89 02                	mov    %eax,(%rdx)
    512a:	f3 0f 10 45 f4       	movss  -0xc(%rbp),%xmm0
    512f:	f3 0f 58 45 e8       	addss  -0x18(%rbp),%xmm0
    5134:	66 0f 7e c0          	movd   %xmm0,%eax
    5138:	89 45 f4             	mov    %eax,-0xc(%rbp)
    513b:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    513f:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 5146 <comp_td_costs+0x184>
    5146:	8b 45 fc             	mov    -0x4(%rbp),%eax
    5149:	48 63 d0             	movslq %eax,%rdx
    514c:	48 89 d0             	mov    %rdx,%rax
    514f:	48 c1 e0 02          	shl    $0x2,%rax
    5153:	48 01 d0             	add    %rdx,%rax
    5156:	48 c1 e0 03          	shl    $0x3,%rax
    515a:	48 01 c8             	add    %rcx,%rax
    515d:	8b 40 08             	mov    0x8(%rax),%eax
    5160:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    5163:	0f 8d bc fe ff ff    	jge    5025 <comp_td_costs+0x63>
    5169:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    516d:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5173 <comp_td_costs+0x1b1>
    5173:	39 45 fc             	cmp    %eax,-0x4(%rbp)
    5176:	0f 8c 74 fe ff ff    	jl     4ff0 <comp_td_costs+0x2e>
    517c:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
    5180:	8b 45 f4             	mov    -0xc(%rbp),%eax
    5183:	89 02                	mov    %eax,(%rdx)
    5185:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
    5189:	8b 45 f0             	mov    -0x10(%rbp),%eax
    518c:	89 02                	mov    %eax,(%rdx)
    518e:	c9                   	leaveq 
    518f:	c3                   	retq   

0000000000005190 <comp_bb_cost>:
    5190:	55                   	push   %rbp
    5191:	48 89 e5             	mov    %rsp,%rbp
    5194:	53                   	push   %rbx
    5195:	48 83 ec 48          	sub    $0x48,%rsp
    5199:	89 7d cc             	mov    %edi,-0x34(%rbp)
    519c:	89 75 c8             	mov    %esi,-0x38(%rbp)
    519f:	89 55 c4             	mov    %edx,-0x3c(%rbp)
    51a2:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 51a8 <comp_bb_cost+0x18>
    51a8:	89 45 e0             	mov    %eax,-0x20(%rbp)
    51ab:	b8 00 00 00 00       	mov    $0x0,%eax
    51b0:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    51b4:	83 7d c8 01          	cmpl   $0x1,-0x38(%rbp)
    51b8:	0f 85 84 00 00 00    	jne    5242 <comp_bb_cost+0xb2>
    51be:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    51c5:	eb 73                	jmp    523a <comp_bb_cost+0xaa>
    51c7:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    51ce:	eb 5e                	jmp    522e <comp_bb_cost+0x9e>
    51d0:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 51d7 <comp_bb_cost+0x47>
    51d7:	8b 55 ec             	mov    -0x14(%rbp),%edx
    51da:	48 63 d2             	movslq %edx,%rdx
    51dd:	48 c1 e2 03          	shl    $0x3,%rdx
    51e1:	48 01 d0             	add    %rdx,%rax
    51e4:	48 8b 00             	mov    (%rax),%rax
    51e7:	8b 55 e8             	mov    -0x18(%rbp),%edx
    51ea:	48 63 d2             	movslq %edx,%rdx
    51ed:	48 c1 e2 04          	shl    $0x4,%rdx
    51f1:	48 01 c2             	add    %rax,%rdx
    51f4:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 51fa <comp_bb_cost+0x6a>
    51fa:	89 42 08             	mov    %eax,0x8(%rdx)
    51fd:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5204 <comp_bb_cost+0x74>
    5204:	8b 55 ec             	mov    -0x14(%rbp),%edx
    5207:	48 63 d2             	movslq %edx,%rdx
    520a:	48 c1 e2 03          	shl    $0x3,%rdx
    520e:	48 01 d0             	add    %rdx,%rax
    5211:	48 8b 00             	mov    (%rax),%rax
    5214:	8b 55 e8             	mov    -0x18(%rbp),%edx
    5217:	48 63 d2             	movslq %edx,%rdx
    521a:	48 c1 e2 04          	shl    $0x4,%rdx
    521e:	48 01 c2             	add    %rax,%rdx
    5221:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5227 <comp_bb_cost+0x97>
    5227:	89 42 08             	mov    %eax,0x8(%rdx)
    522a:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    522e:	8b 45 e8             	mov    -0x18(%rbp),%eax
    5231:	3b 45 c4             	cmp    -0x3c(%rbp),%eax
    5234:	7c 9a                	jl     51d0 <comp_bb_cost+0x40>
    5236:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    523a:	8b 45 ec             	mov    -0x14(%rbp),%eax
    523d:	3b 45 c4             	cmp    -0x3c(%rbp),%eax
    5240:	7c 85                	jl     51c7 <comp_bb_cost+0x37>
    5242:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%rbp)
    5249:	e9 87 01 00 00       	jmpq   53d5 <comp_bb_cost+0x245>
    524e:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 5255 <comp_bb_cost+0xc5>
    5255:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    5258:	48 63 d0             	movslq %eax,%rdx
    525b:	48 89 d0             	mov    %rdx,%rax
    525e:	48 c1 e0 02          	shl    $0x2,%rax
    5262:	48 01 d0             	add    %rdx,%rax
    5265:	48 c1 e0 03          	shl    $0x3,%rax
    5269:	48 01 c8             	add    %rcx,%rax
    526c:	8b 40 20             	mov    0x20(%rax),%eax
    526f:	85 c0                	test   %eax,%eax
    5271:	0f 85 5a 01 00 00    	jne    53d1 <comp_bb_cost+0x241>
    5277:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 527e <comp_bb_cost+0xee>
    527e:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    5281:	48 63 d0             	movslq %eax,%rdx
    5284:	48 89 d0             	mov    %rdx,%rax
    5287:	48 c1 e0 02          	shl    $0x2,%rax
    528b:	48 01 d0             	add    %rdx,%rax
    528e:	48 c1 e0 03          	shl    $0x3,%rax
    5292:	48 01 c8             	add    %rcx,%rax
    5295:	8b 40 08             	mov    0x8(%rax),%eax
    5298:	83 f8 03             	cmp    $0x3,%eax
    529b:	7e 3d                	jle    52da <comp_bb_cost+0x14a>
    529d:	83 7d cc 00          	cmpl   $0x0,-0x34(%rbp)
    52a1:	75 37                	jne    52da <comp_bb_cost+0x14a>
    52a3:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 52aa <comp_bb_cost+0x11a>
    52aa:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    52ad:	48 63 d2             	movslq %edx,%rdx
    52b0:	48 c1 e2 04          	shl    $0x4,%rdx
    52b4:	48 01 c2             	add    %rax,%rdx
    52b7:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 52be <comp_bb_cost+0x12e>
    52be:	8b 4d e4             	mov    -0x1c(%rbp),%ecx
    52c1:	48 63 c9             	movslq %ecx,%rcx
    52c4:	48 c1 e1 04          	shl    $0x4,%rcx
    52c8:	48 01 c1             	add    %rax,%rcx
    52cb:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    52ce:	48 89 ce             	mov    %rcx,%rsi
    52d1:	89 c7                	mov    %eax,%edi
    52d3:	e8 e7 1d 00 00       	callq  70bf <get_bb_from_scratch>
    52d8:	eb 21                	jmp    52fb <comp_bb_cost+0x16b>
    52da:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 52e1 <comp_bb_cost+0x151>
    52e1:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    52e4:	48 63 d2             	movslq %edx,%rdx
    52e7:	48 c1 e2 04          	shl    $0x4,%rdx
    52eb:	48 01 c2             	add    %rax,%rdx
    52ee:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    52f1:	48 89 d6             	mov    %rdx,%rsi
    52f4:	89 c7                	mov    %eax,%edi
    52f6:	e8 96 24 00 00       	callq  7791 <get_non_updateable_bb>
    52fb:	83 7d c8 01          	cmpl   $0x1,-0x38(%rbp)
    52ff:	0f 84 a3 00 00 00    	je     53a8 <comp_bb_cost+0x218>
    5305:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 530c <comp_bb_cost+0x17c>
    530c:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    530f:	48 63 d2             	movslq %edx,%rdx
    5312:	48 c1 e2 02          	shl    $0x2,%rdx
    5316:	48 8d 1c 10          	lea    (%rax,%rdx,1),%rbx
    531a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5321 <comp_bb_cost+0x191>
    5321:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    5324:	48 63 d2             	movslq %edx,%rdx
    5327:	48 c1 e2 04          	shl    $0x4,%rdx
    532b:	48 01 c2             	add    %rax,%rdx
    532e:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    5331:	48 89 d6             	mov    %rdx,%rsi
    5334:	89 c7                	mov    %eax,%edi
    5336:	e8 d4 22 00 00       	callq  760f <get_net_cost>
    533b:	66 0f 7e c0          	movd   %xmm0,%eax
    533f:	89 03                	mov    %eax,(%rbx)
    5341:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5348 <comp_bb_cost+0x1b8>
    5348:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    534b:	48 63 d2             	movslq %edx,%rdx
    534e:	48 c1 e2 02          	shl    $0x2,%rdx
    5352:	48 01 d0             	add    %rdx,%rax
    5355:	f3 0f 10 00          	movss  (%rax),%xmm0
    5359:	f3 0f 10 4d e0       	movss  -0x20(%rbp),%xmm1
    535e:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    5362:	66 0f 7e c8          	movd   %xmm1,%eax
    5366:	89 45 e0             	mov    %eax,-0x20(%rbp)
    5369:	83 7d cc 01          	cmpl   $0x1,-0x34(%rbp)
    536d:	75 62                	jne    53d1 <comp_bb_cost+0x241>
    536f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5376 <comp_bb_cost+0x1e6>
    5376:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    5379:	48 63 d2             	movslq %edx,%rdx
    537c:	48 c1 e2 04          	shl    $0x4,%rdx
    5380:	48 01 c2             	add    %rax,%rdx
    5383:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    5386:	48 89 d6             	mov    %rdx,%rsi
    5389:	89 c7                	mov    %eax,%edi
    538b:	e8 46 20 00 00       	callq  73d6 <get_net_wirelength_estimate>
    5390:	66 0f 28 c8          	movapd %xmm0,%xmm1
    5394:	f2 0f 10 45 d8       	movsd  -0x28(%rbp),%xmm0
    5399:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    539d:	66 48 0f 7e c0       	movq   %xmm0,%rax
    53a2:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    53a6:	eb 29                	jmp    53d1 <comp_bb_cost+0x241>
    53a8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 53af <comp_bb_cost+0x21f>
    53af:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    53b2:	48 63 d2             	movslq %edx,%rdx
    53b5:	48 c1 e2 04          	shl    $0x4,%rdx
    53b9:	48 8d 34 10          	lea    (%rax,%rdx,1),%rsi
    53bd:	8b 55 c4             	mov    -0x3c(%rbp),%edx
    53c0:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    53c3:	89 d1                	mov    %edx,%ecx
    53c5:	ba 01 00 00 00       	mov    $0x1,%edx
    53ca:	89 c7                	mov    %eax,%edi
    53cc:	e8 1d 03 00 00       	callq  56ee <update_region_occ>
    53d1:	83 45 e4 01          	addl   $0x1,-0x1c(%rbp)
    53d5:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 53db <comp_bb_cost+0x24b>
    53db:	39 45 e4             	cmp    %eax,-0x1c(%rbp)
    53de:	0f 8c 6a fe ff ff    	jl     524e <comp_bb_cost+0xbe>
    53e4:	83 7d c8 01          	cmpl   $0x1,-0x38(%rbp)
    53e8:	75 11                	jne    53fb <comp_bb_cost+0x26b>
    53ea:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    53ed:	89 c7                	mov    %eax,%edi
    53ef:	e8 3b 00 00 00       	callq  542f <nonlinear_cong_cost>
    53f4:	66 0f 7e c0          	movd   %xmm0,%eax
    53f8:	89 45 e0             	mov    %eax,-0x20(%rbp)
    53fb:	83 7d cc 01          	cmpl   $0x1,-0x34(%rbp)
    53ff:	75 1c                	jne    541d <comp_bb_cost+0x28d>
    5401:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    5405:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
    5409:	f2 0f 10 45 b8       	movsd  -0x48(%rbp),%xmm0
    540e:	bf 00 00 00 00       	mov    $0x0,%edi
    5413:	b8 01 00 00 00       	mov    $0x1,%eax
    5418:	e8 00 00 00 00       	callq  541d <comp_bb_cost+0x28d>
    541d:	8b 45 e0             	mov    -0x20(%rbp),%eax
    5420:	89 45 b8             	mov    %eax,-0x48(%rbp)
    5423:	f3 0f 10 45 b8       	movss  -0x48(%rbp),%xmm0
    5428:	48 83 c4 48          	add    $0x48,%rsp
    542c:	5b                   	pop    %rbx
    542d:	5d                   	pop    %rbp
    542e:	c3                   	retq   

000000000000542f <nonlinear_cong_cost>:
    542f:	55                   	push   %rbp
    5430:	48 89 e5             	mov    %rsp,%rbp
    5433:	89 7d ec             	mov    %edi,-0x14(%rbp)
    5436:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 543c <nonlinear_cong_cost+0xd>
    543c:	89 45 fc             	mov    %eax,-0x4(%rbp)
    543f:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    5446:	e9 8a 02 00 00       	jmpq   56d5 <nonlinear_cong_cost+0x2a6>
    544b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
    5452:	e9 6e 02 00 00       	jmpq   56c5 <nonlinear_cong_cost+0x296>
    5457:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 545e <nonlinear_cong_cost+0x2f>
    545e:	8b 55 f8             	mov    -0x8(%rbp),%edx
    5461:	48 63 d2             	movslq %edx,%rdx
    5464:	48 c1 e2 03          	shl    $0x3,%rdx
    5468:	48 01 d0             	add    %rdx,%rax
    546b:	48 8b 00             	mov    (%rax),%rax
    546e:	8b 55 f4             	mov    -0xc(%rbp),%edx
    5471:	48 63 d2             	movslq %edx,%rdx
    5474:	48 c1 e2 04          	shl    $0x4,%rdx
    5478:	48 01 d0             	add    %rdx,%rax
    547b:	f3 0f 10 48 08       	movss  0x8(%rax),%xmm1
    5480:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5487 <nonlinear_cong_cost+0x58>
    5487:	8b 55 f8             	mov    -0x8(%rbp),%edx
    548a:	48 63 d2             	movslq %edx,%rdx
    548d:	48 c1 e2 03          	shl    $0x3,%rdx
    5491:	48 01 d0             	add    %rdx,%rax
    5494:	48 8b 00             	mov    (%rax),%rax
    5497:	8b 55 f4             	mov    -0xc(%rbp),%edx
    549a:	48 63 d2             	movslq %edx,%rdx
    549d:	48 c1 e2 04          	shl    $0x4,%rdx
    54a1:	48 01 d0             	add    %rdx,%rax
    54a4:	f3 0f 10 00          	movss  (%rax),%xmm0
    54a8:	0f 2e c1             	ucomiss %xmm1,%xmm0
    54ab:	76 68                	jbe    5515 <nonlinear_cong_cost+0xe6>
    54ad:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 54b4 <nonlinear_cong_cost+0x85>
    54b4:	8b 55 f8             	mov    -0x8(%rbp),%edx
    54b7:	48 63 d2             	movslq %edx,%rdx
    54ba:	48 c1 e2 03          	shl    $0x3,%rdx
    54be:	48 01 d0             	add    %rdx,%rax
    54c1:	48 8b 00             	mov    (%rax),%rax
    54c4:	8b 55 f4             	mov    -0xc(%rbp),%edx
    54c7:	48 63 d2             	movslq %edx,%rdx
    54ca:	48 c1 e2 04          	shl    $0x4,%rdx
    54ce:	48 01 d0             	add    %rdx,%rax
    54d1:	f3 0f 10 48 08       	movss  0x8(%rax),%xmm1
    54d6:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 54dd <nonlinear_cong_cost+0xae>
    54dd:	8b 55 f8             	mov    -0x8(%rbp),%edx
    54e0:	48 63 d2             	movslq %edx,%rdx
    54e3:	48 c1 e2 03          	shl    $0x3,%rdx
    54e7:	48 01 d0             	add    %rdx,%rax
    54ea:	48 8b 00             	mov    (%rax),%rax
    54ed:	8b 55 f4             	mov    -0xc(%rbp),%edx
    54f0:	48 63 d2             	movslq %edx,%rdx
    54f3:	48 c1 e2 04          	shl    $0x4,%rdx
    54f7:	48 01 d0             	add    %rdx,%rax
    54fa:	f3 0f 10 40 04       	movss  0x4(%rax),%xmm0
    54ff:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
    5503:	f3 0f 10 4d fc       	movss  -0x4(%rbp),%xmm1
    5508:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    550c:	66 0f 7e c8          	movd   %xmm1,%eax
    5510:	89 45 fc             	mov    %eax,-0x4(%rbp)
    5513:	eb 77                	jmp    558c <nonlinear_cong_cost+0x15d>
    5515:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 551c <nonlinear_cong_cost+0xed>
    551c:	8b 55 f8             	mov    -0x8(%rbp),%edx
    551f:	48 63 d2             	movslq %edx,%rdx
    5522:	48 c1 e2 03          	shl    $0x3,%rdx
    5526:	48 01 d0             	add    %rdx,%rax
    5529:	48 8b 00             	mov    (%rax),%rax
    552c:	8b 55 f4             	mov    -0xc(%rbp),%edx
    552f:	48 63 d2             	movslq %edx,%rdx
    5532:	48 c1 e2 04          	shl    $0x4,%rdx
    5536:	48 01 d0             	add    %rdx,%rax
    5539:	f3 0f 10 48 08       	movss  0x8(%rax),%xmm1
    553e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5545 <nonlinear_cong_cost+0x116>
    5545:	8b 55 f8             	mov    -0x8(%rbp),%edx
    5548:	48 63 d2             	movslq %edx,%rdx
    554b:	48 c1 e2 03          	shl    $0x3,%rdx
    554f:	48 01 d0             	add    %rdx,%rax
    5552:	48 8b 00             	mov    (%rax),%rax
    5555:	8b 55 f4             	mov    -0xc(%rbp),%edx
    5558:	48 63 d2             	movslq %edx,%rdx
    555b:	48 c1 e2 04          	shl    $0x4,%rdx
    555f:	48 01 d0             	add    %rdx,%rax
    5562:	f3 0f 10 40 04       	movss  0x4(%rax),%xmm0
    5567:	f3 0f 59 c8          	mulss  %xmm0,%xmm1
    556b:	66 0f 7e c8          	movd   %xmm1,%eax
    556f:	89 45 f0             	mov    %eax,-0x10(%rbp)
    5572:	f3 0f 10 45 f0       	movss  -0x10(%rbp),%xmm0
    5577:	f3 0f 59 45 f0       	mulss  -0x10(%rbp),%xmm0
    557c:	f3 0f 10 4d fc       	movss  -0x4(%rbp),%xmm1
    5581:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    5585:	66 0f 7e c8          	movd   %xmm1,%eax
    5589:	89 45 fc             	mov    %eax,-0x4(%rbp)
    558c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5593 <nonlinear_cong_cost+0x164>
    5593:	8b 55 f8             	mov    -0x8(%rbp),%edx
    5596:	48 63 d2             	movslq %edx,%rdx
    5599:	48 c1 e2 03          	shl    $0x3,%rdx
    559d:	48 01 d0             	add    %rdx,%rax
    55a0:	48 8b 00             	mov    (%rax),%rax
    55a3:	8b 55 f4             	mov    -0xc(%rbp),%edx
    55a6:	48 63 d2             	movslq %edx,%rdx
    55a9:	48 c1 e2 04          	shl    $0x4,%rdx
    55ad:	48 01 d0             	add    %rdx,%rax
    55b0:	f3 0f 10 48 08       	movss  0x8(%rax),%xmm1
    55b5:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 55bc <nonlinear_cong_cost+0x18d>
    55bc:	8b 55 f8             	mov    -0x8(%rbp),%edx
    55bf:	48 63 d2             	movslq %edx,%rdx
    55c2:	48 c1 e2 03          	shl    $0x3,%rdx
    55c6:	48 01 d0             	add    %rdx,%rax
    55c9:	48 8b 00             	mov    (%rax),%rax
    55cc:	8b 55 f4             	mov    -0xc(%rbp),%edx
    55cf:	48 63 d2             	movslq %edx,%rdx
    55d2:	48 c1 e2 04          	shl    $0x4,%rdx
    55d6:	48 01 d0             	add    %rdx,%rax
    55d9:	f3 0f 10 00          	movss  (%rax),%xmm0
    55dd:	0f 2e c1             	ucomiss %xmm1,%xmm0
    55e0:	76 68                	jbe    564a <nonlinear_cong_cost+0x21b>
    55e2:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 55e9 <nonlinear_cong_cost+0x1ba>
    55e9:	8b 55 f8             	mov    -0x8(%rbp),%edx
    55ec:	48 63 d2             	movslq %edx,%rdx
    55ef:	48 c1 e2 03          	shl    $0x3,%rdx
    55f3:	48 01 d0             	add    %rdx,%rax
    55f6:	48 8b 00             	mov    (%rax),%rax
    55f9:	8b 55 f4             	mov    -0xc(%rbp),%edx
    55fc:	48 63 d2             	movslq %edx,%rdx
    55ff:	48 c1 e2 04          	shl    $0x4,%rdx
    5603:	48 01 d0             	add    %rdx,%rax
    5606:	f3 0f 10 48 08       	movss  0x8(%rax),%xmm1
    560b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5612 <nonlinear_cong_cost+0x1e3>
    5612:	8b 55 f8             	mov    -0x8(%rbp),%edx
    5615:	48 63 d2             	movslq %edx,%rdx
    5618:	48 c1 e2 03          	shl    $0x3,%rdx
    561c:	48 01 d0             	add    %rdx,%rax
    561f:	48 8b 00             	mov    (%rax),%rax
    5622:	8b 55 f4             	mov    -0xc(%rbp),%edx
    5625:	48 63 d2             	movslq %edx,%rdx
    5628:	48 c1 e2 04          	shl    $0x4,%rdx
    562c:	48 01 d0             	add    %rdx,%rax
    562f:	f3 0f 10 40 04       	movss  0x4(%rax),%xmm0
    5634:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
    5638:	f3 0f 10 4d fc       	movss  -0x4(%rbp),%xmm1
    563d:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    5641:	66 0f 7e c8          	movd   %xmm1,%eax
    5645:	89 45 fc             	mov    %eax,-0x4(%rbp)
    5648:	eb 77                	jmp    56c1 <nonlinear_cong_cost+0x292>
    564a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5651 <nonlinear_cong_cost+0x222>
    5651:	8b 55 f8             	mov    -0x8(%rbp),%edx
    5654:	48 63 d2             	movslq %edx,%rdx
    5657:	48 c1 e2 03          	shl    $0x3,%rdx
    565b:	48 01 d0             	add    %rdx,%rax
    565e:	48 8b 00             	mov    (%rax),%rax
    5661:	8b 55 f4             	mov    -0xc(%rbp),%edx
    5664:	48 63 d2             	movslq %edx,%rdx
    5667:	48 c1 e2 04          	shl    $0x4,%rdx
    566b:	48 01 d0             	add    %rdx,%rax
    566e:	f3 0f 10 48 08       	movss  0x8(%rax),%xmm1
    5673:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 567a <nonlinear_cong_cost+0x24b>
    567a:	8b 55 f8             	mov    -0x8(%rbp),%edx
    567d:	48 63 d2             	movslq %edx,%rdx
    5680:	48 c1 e2 03          	shl    $0x3,%rdx
    5684:	48 01 d0             	add    %rdx,%rax
    5687:	48 8b 00             	mov    (%rax),%rax
    568a:	8b 55 f4             	mov    -0xc(%rbp),%edx
    568d:	48 63 d2             	movslq %edx,%rdx
    5690:	48 c1 e2 04          	shl    $0x4,%rdx
    5694:	48 01 d0             	add    %rdx,%rax
    5697:	f3 0f 10 40 04       	movss  0x4(%rax),%xmm0
    569c:	f3 0f 59 c8          	mulss  %xmm0,%xmm1
    56a0:	66 0f 7e c8          	movd   %xmm1,%eax
    56a4:	89 45 f0             	mov    %eax,-0x10(%rbp)
    56a7:	f3 0f 10 45 f0       	movss  -0x10(%rbp),%xmm0
    56ac:	f3 0f 59 45 f0       	mulss  -0x10(%rbp),%xmm0
    56b1:	f3 0f 10 4d fc       	movss  -0x4(%rbp),%xmm1
    56b6:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    56ba:	66 0f 7e c8          	movd   %xmm1,%eax
    56be:	89 45 fc             	mov    %eax,-0x4(%rbp)
    56c1:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
    56c5:	8b 45 f4             	mov    -0xc(%rbp),%eax
    56c8:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    56cb:	0f 8c 86 fd ff ff    	jl     5457 <nonlinear_cong_cost+0x28>
    56d1:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    56d5:	8b 45 f8             	mov    -0x8(%rbp),%eax
    56d8:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    56db:	0f 8c 6a fd ff ff    	jl     544b <nonlinear_cong_cost+0x1c>
    56e1:	8b 45 fc             	mov    -0x4(%rbp),%eax
    56e4:	89 45 e8             	mov    %eax,-0x18(%rbp)
    56e7:	f3 0f 10 45 e8       	movss  -0x18(%rbp),%xmm0
    56ec:	5d                   	pop    %rbp
    56ed:	c3                   	retq   

00000000000056ee <update_region_occ>:
    56ee:	55                   	push   %rbp
    56ef:	48 89 e5             	mov    %rsp,%rbp
    56f2:	48 83 c4 80          	add    $0xffffffffffffff80,%rsp
    56f6:	89 7d 9c             	mov    %edi,-0x64(%rbp)
    56f9:	48 89 75 90          	mov    %rsi,-0x70(%rbp)
    56fd:	89 55 98             	mov    %edx,-0x68(%rbp)
    5700:	89 4d 8c             	mov    %ecx,-0x74(%rbp)
    5703:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 570a <update_region_occ+0x1c>
    570a:	8b 45 9c             	mov    -0x64(%rbp),%eax
    570d:	48 63 d0             	movslq %eax,%rdx
    5710:	48 89 d0             	mov    %rdx,%rax
    5713:	48 c1 e0 02          	shl    $0x2,%rax
    5717:	48 01 d0             	add    %rdx,%rax
    571a:	48 c1 e0 03          	shl    $0x3,%rax
    571e:	48 01 c8             	add    %rcx,%rax
    5721:	8b 40 08             	mov    0x8(%rax),%eax
    5724:	83 f8 31             	cmp    $0x31,%eax
    5727:	7e 4f                	jle    5778 <update_region_occ+0x8a>
    5729:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 5730 <update_region_occ+0x42>
    5730:	8b 45 9c             	mov    -0x64(%rbp),%eax
    5733:	48 63 d0             	movslq %eax,%rdx
    5736:	48 89 d0             	mov    %rdx,%rax
    5739:	48 c1 e0 02          	shl    $0x2,%rax
    573d:	48 01 d0             	add    %rdx,%rax
    5740:	48 c1 e0 03          	shl    $0x3,%rax
    5744:	48 01 c8             	add    %rcx,%rax
    5747:	8b 40 08             	mov    0x8(%rax),%eax
    574a:	83 e8 31             	sub    $0x31,%eax
    574d:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5751:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    5755:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 575d <update_region_occ+0x6f>
    575c:	00 
    575d:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    5761:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 5769 <update_region_occ+0x7b>
    5768:	00 
    5769:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    576d:	f2 0f 5a d0          	cvtsd2ss %xmm0,%xmm2
    5771:	f3 0f 11 55 fc       	movss  %xmm2,-0x4(%rbp)
    5776:	eb 2d                	jmp    57a5 <update_region_occ+0xb7>
    5778:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 577f <update_region_occ+0x91>
    577f:	8b 45 9c             	mov    -0x64(%rbp),%eax
    5782:	48 63 d0             	movslq %eax,%rdx
    5785:	48 89 d0             	mov    %rdx,%rax
    5788:	48 c1 e0 02          	shl    $0x2,%rax
    578c:	48 01 d0             	add    %rdx,%rax
    578f:	48 c1 e0 03          	shl    $0x3,%rax
    5793:	48 01 c8             	add    %rcx,%rax
    5796:	8b 40 08             	mov    0x8(%rax),%eax
    5799:	48 98                	cltq   
    579b:	8b 04 85 00 00 00 00 	mov    0x0(,%rax,4),%eax
    57a2:	89 45 fc             	mov    %eax,-0x4(%rbp)
    57a5:	48 8b 45 90          	mov    -0x70(%rbp),%rax
    57a9:	8b 00                	mov    (%rax),%eax
    57ab:	66 0f ef c0          	pxor   %xmm0,%xmm0
    57af:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    57b3:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 57bb <update_region_occ+0xcd>
    57ba:	00 
    57bb:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
    57bf:	f2 0f 5a d8          	cvtsd2ss %xmm0,%xmm3
    57c3:	f3 0f 11 5d f0       	movss  %xmm3,-0x10(%rbp)
    57c8:	48 8b 45 90          	mov    -0x70(%rbp),%rax
    57cc:	8b 40 04             	mov    0x4(%rax),%eax
    57cf:	66 0f ef c0          	pxor   %xmm0,%xmm0
    57d3:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    57d7:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 57df <update_region_occ+0xf1>
    57de:	00 
    57df:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    57e3:	f2 0f 5a e0          	cvtsd2ss %xmm0,%xmm4
    57e7:	f3 0f 11 65 ec       	movss  %xmm4,-0x14(%rbp)
    57ec:	48 8b 45 90          	mov    -0x70(%rbp),%rax
    57f0:	8b 40 08             	mov    0x8(%rax),%eax
    57f3:	66 0f ef c0          	pxor   %xmm0,%xmm0
    57f7:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    57fb:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 5803 <update_region_occ+0x115>
    5802:	00 
    5803:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
    5807:	f2 0f 5a e8          	cvtsd2ss %xmm0,%xmm5
    580b:	f3 0f 11 6d e8       	movss  %xmm5,-0x18(%rbp)
    5810:	48 8b 45 90          	mov    -0x70(%rbp),%rax
    5814:	8b 40 0c             	mov    0xc(%rax),%eax
    5817:	66 0f ef c0          	pxor   %xmm0,%xmm0
    581b:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    581f:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 5827 <update_region_occ+0x139>
    5826:	00 
    5827:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    582b:	f2 0f 5a f0          	cvtsd2ss %xmm0,%xmm6
    582f:	f3 0f 11 75 e4       	movss  %xmm6,-0x1c(%rbp)
    5834:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5838:	f3 0f 2a 45 8c       	cvtsi2ssl -0x74(%rbp),%xmm0
    583d:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5843 <update_region_occ+0x155>
    5843:	66 0f ef c9          	pxor   %xmm1,%xmm1
    5847:	f3 0f 2a c8          	cvtsi2ss %eax,%xmm1
    584b:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    584f:	66 0f 7e c0          	movd   %xmm0,%eax
    5853:	89 45 e0             	mov    %eax,-0x20(%rbp)
    5856:	66 0f ef c0          	pxor   %xmm0,%xmm0
    585a:	f3 0f 2a 45 8c       	cvtsi2ssl -0x74(%rbp),%xmm0
    585f:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5865 <update_region_occ+0x177>
    5865:	66 0f ef c9          	pxor   %xmm1,%xmm1
    5869:	f3 0f 2a c8          	cvtsi2ss %eax,%xmm1
    586d:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    5871:	66 0f 7e c0          	movd   %xmm0,%eax
    5875:	89 45 dc             	mov    %eax,-0x24(%rbp)
    5878:	f3 0f 5a 45 f0       	cvtss2sd -0x10(%rbp),%xmm0
    587d:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 5885 <update_region_occ+0x197>
    5884:	00 
    5885:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
    5889:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    588d:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5891:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    5895:	f3 0f 59 45 e0       	mulss  -0x20(%rbp),%xmm0
    589a:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
    589e:	89 45 d8             	mov    %eax,-0x28(%rbp)
    58a1:	f3 0f 5a 45 ec       	cvtss2sd -0x14(%rbp),%xmm0
    58a6:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 58ae <update_region_occ+0x1c0>
    58ad:	00 
    58ae:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
    58b2:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    58b6:	66 0f ef c0          	pxor   %xmm0,%xmm0
    58ba:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    58be:	f3 0f 59 45 e0       	mulss  -0x20(%rbp),%xmm0
    58c3:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
    58c7:	89 45 d4             	mov    %eax,-0x2c(%rbp)
    58ca:	8b 45 8c             	mov    -0x74(%rbp),%eax
    58cd:	8d 50 ff             	lea    -0x1(%rax),%edx
    58d0:	8b 45 d4             	mov    -0x2c(%rbp),%eax
    58d3:	39 c2                	cmp    %eax,%edx
    58d5:	0f 4e c2             	cmovle %edx,%eax
    58d8:	89 45 d4             	mov    %eax,-0x2c(%rbp)
    58db:	f3 0f 5a 45 e8       	cvtss2sd -0x18(%rbp),%xmm0
    58e0:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 58e8 <update_region_occ+0x1fa>
    58e7:	00 
    58e8:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
    58ec:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    58f0:	66 0f ef c0          	pxor   %xmm0,%xmm0
    58f4:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    58f8:	f3 0f 59 45 dc       	mulss  -0x24(%rbp),%xmm0
    58fd:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
    5901:	89 45 d0             	mov    %eax,-0x30(%rbp)
    5904:	f3 0f 5a 45 e4       	cvtss2sd -0x1c(%rbp),%xmm0
    5909:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 5911 <update_region_occ+0x223>
    5910:	00 
    5911:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
    5915:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    5919:	66 0f ef c0          	pxor   %xmm0,%xmm0
    591d:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    5921:	f3 0f 59 45 dc       	mulss  -0x24(%rbp),%xmm0
    5926:	f3 0f 2c c0          	cvttss2si %xmm0,%eax
    592a:	89 45 cc             	mov    %eax,-0x34(%rbp)
    592d:	8b 45 8c             	mov    -0x74(%rbp),%eax
    5930:	8d 50 ff             	lea    -0x1(%rax),%edx
    5933:	8b 45 cc             	mov    -0x34(%rbp),%eax
    5936:	39 c2                	cmp    %eax,%edx
    5938:	0f 4e c2             	cmovle %edx,%eax
    593b:	89 45 cc             	mov    %eax,-0x34(%rbp)
    593e:	f3 0f 10 45 ec       	movss  -0x14(%rbp),%xmm0
    5943:	f3 0f 5c 45 f0       	subss  -0x10(%rbp),%xmm0
    5948:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 5950 <update_region_occ+0x262>
    594f:	00 
    5950:	f3 0f 5e c8          	divss  %xmm0,%xmm1
    5954:	66 0f 7e c8          	movd   %xmm1,%eax
    5958:	89 45 c8             	mov    %eax,-0x38(%rbp)
    595b:	f3 0f 10 45 e4       	movss  -0x1c(%rbp),%xmm0
    5960:	f3 0f 5c 45 e8       	subss  -0x18(%rbp),%xmm0
    5965:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 596d <update_region_occ+0x27f>
    596c:	00 
    596d:	f3 0f 5e c8          	divss  %xmm0,%xmm1
    5971:	66 0f 7e c8          	movd   %xmm1,%eax
    5975:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    5978:	8b 45 d8             	mov    -0x28(%rbp),%eax
    597b:	89 45 f8             	mov    %eax,-0x8(%rbp)
    597e:	e9 a5 02 00 00       	jmpq   5c28 <update_region_occ+0x53a>
    5983:	8b 45 d0             	mov    -0x30(%rbp),%eax
    5986:	89 45 f4             	mov    %eax,-0xc(%rbp)
    5989:	e9 8a 02 00 00       	jmpq   5c18 <update_region_occ+0x52a>
    598e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5995 <update_region_occ+0x2a7>
    5995:	8b 55 f8             	mov    -0x8(%rbp),%edx
    5998:	48 63 d2             	movslq %edx,%rdx
    599b:	48 c1 e2 02          	shl    $0x2,%rdx
    599f:	48 01 d0             	add    %rdx,%rax
    59a2:	f3 0f 10 00          	movss  (%rax),%xmm0
    59a6:	0f 2e 45 f0          	ucomiss -0x10(%rbp),%xmm0
    59aa:	76 18                	jbe    59c4 <update_region_occ+0x2d6>
    59ac:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 59b3 <update_region_occ+0x2c5>
    59b3:	8b 55 f8             	mov    -0x8(%rbp),%edx
    59b6:	48 63 d2             	movslq %edx,%rdx
    59b9:	48 c1 e2 02          	shl    $0x2,%rdx
    59bd:	48 01 d0             	add    %rdx,%rax
    59c0:	8b 00                	mov    (%rax),%eax
    59c2:	eb 03                	jmp    59c7 <update_region_occ+0x2d9>
    59c4:	8b 45 f0             	mov    -0x10(%rbp),%eax
    59c7:	89 45 c0             	mov    %eax,-0x40(%rbp)
    59ca:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 59d1 <update_region_occ+0x2e3>
    59d1:	8b 55 f8             	mov    -0x8(%rbp),%edx
    59d4:	48 63 d2             	movslq %edx,%rdx
    59d7:	48 83 c2 01          	add    $0x1,%rdx
    59db:	48 c1 e2 02          	shl    $0x2,%rdx
    59df:	48 01 d0             	add    %rdx,%rax
    59e2:	f3 0f 10 00          	movss  (%rax),%xmm0
    59e6:	0f 2e 45 ec          	ucomiss -0x14(%rbp),%xmm0
    59ea:	76 05                	jbe    59f1 <update_region_occ+0x303>
    59ec:	8b 45 ec             	mov    -0x14(%rbp),%eax
    59ef:	eb 1a                	jmp    5a0b <update_region_occ+0x31d>
    59f1:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 59f8 <update_region_occ+0x30a>
    59f8:	8b 55 f8             	mov    -0x8(%rbp),%edx
    59fb:	48 63 d2             	movslq %edx,%rdx
    59fe:	48 83 c2 01          	add    $0x1,%rdx
    5a02:	48 c1 e2 02          	shl    $0x2,%rdx
    5a06:	48 01 d0             	add    %rdx,%rax
    5a09:	8b 00                	mov    (%rax),%eax
    5a0b:	89 45 bc             	mov    %eax,-0x44(%rbp)
    5a0e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5a15 <update_region_occ+0x327>
    5a15:	8b 55 f4             	mov    -0xc(%rbp),%edx
    5a18:	48 63 d2             	movslq %edx,%rdx
    5a1b:	48 c1 e2 02          	shl    $0x2,%rdx
    5a1f:	48 01 d0             	add    %rdx,%rax
    5a22:	f3 0f 10 00          	movss  (%rax),%xmm0
    5a26:	0f 2e 45 e8          	ucomiss -0x18(%rbp),%xmm0
    5a2a:	76 18                	jbe    5a44 <update_region_occ+0x356>
    5a2c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5a33 <update_region_occ+0x345>
    5a33:	8b 55 f4             	mov    -0xc(%rbp),%edx
    5a36:	48 63 d2             	movslq %edx,%rdx
    5a39:	48 c1 e2 02          	shl    $0x2,%rdx
    5a3d:	48 01 d0             	add    %rdx,%rax
    5a40:	8b 00                	mov    (%rax),%eax
    5a42:	eb 03                	jmp    5a47 <update_region_occ+0x359>
    5a44:	8b 45 e8             	mov    -0x18(%rbp),%eax
    5a47:	89 45 b8             	mov    %eax,-0x48(%rbp)
    5a4a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5a51 <update_region_occ+0x363>
    5a51:	8b 55 f4             	mov    -0xc(%rbp),%edx
    5a54:	48 63 d2             	movslq %edx,%rdx
    5a57:	48 83 c2 01          	add    $0x1,%rdx
    5a5b:	48 c1 e2 02          	shl    $0x2,%rdx
    5a5f:	48 01 d0             	add    %rdx,%rax
    5a62:	f3 0f 10 00          	movss  (%rax),%xmm0
    5a66:	0f 2e 45 e4          	ucomiss -0x1c(%rbp),%xmm0
    5a6a:	76 05                	jbe    5a71 <update_region_occ+0x383>
    5a6c:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    5a6f:	eb 1a                	jmp    5a8b <update_region_occ+0x39d>
    5a71:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5a78 <update_region_occ+0x38a>
    5a78:	8b 55 f4             	mov    -0xc(%rbp),%edx
    5a7b:	48 63 d2             	movslq %edx,%rdx
    5a7e:	48 83 c2 01          	add    $0x1,%rdx
    5a82:	48 c1 e2 02          	shl    $0x2,%rdx
    5a86:	48 01 d0             	add    %rdx,%rax
    5a89:	8b 00                	mov    (%rax),%eax
    5a8b:	89 45 b4             	mov    %eax,-0x4c(%rbp)
    5a8e:	f3 0f 10 45 bc       	movss  -0x44(%rbp),%xmm0
    5a93:	f3 0f 5c 45 c0       	subss  -0x40(%rbp),%xmm0
    5a98:	66 0f 7e c0          	movd   %xmm0,%eax
    5a9c:	89 45 b0             	mov    %eax,-0x50(%rbp)
    5a9f:	f3 0f 10 45 b4       	movss  -0x4c(%rbp),%xmm0
    5aa4:	f3 0f 5c 45 b8       	subss  -0x48(%rbp),%xmm0
    5aa9:	66 0f 7e c0          	movd   %xmm0,%eax
    5aad:	89 45 ac             	mov    %eax,-0x54(%rbp)
    5ab0:	f3 0f 5a 45 b0       	cvtss2sd -0x50(%rbp),%xmm0
    5ab5:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 5abd <update_region_occ+0x3cf>
    5abc:	00 
    5abd:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
    5ac1:	76 19                	jbe    5adc <update_region_occ+0x3ee>
    5ac3:	f3 0f 5a 45 b0       	cvtss2sd -0x50(%rbp),%xmm0
    5ac8:	8b 45 9c             	mov    -0x64(%rbp),%eax
    5acb:	89 c6                	mov    %eax,%esi
    5acd:	bf 00 00 00 00       	mov    $0x0,%edi
    5ad2:	b8 01 00 00 00       	mov    $0x1,%eax
    5ad7:	e8 00 00 00 00       	callq  5adc <update_region_occ+0x3ee>
    5adc:	f3 0f 5a 45 ac       	cvtss2sd -0x54(%rbp),%xmm0
    5ae1:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 5ae9 <update_region_occ+0x3fb>
    5ae8:	00 
    5ae9:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
    5aed:	76 19                	jbe    5b08 <update_region_occ+0x41a>
    5aef:	f3 0f 5a 45 ac       	cvtss2sd -0x54(%rbp),%xmm0
    5af4:	8b 45 9c             	mov    -0x64(%rbp),%eax
    5af7:	89 c6                	mov    %eax,%esi
    5af9:	bf 00 00 00 00       	mov    $0x0,%edi
    5afe:	b8 01 00 00 00       	mov    $0x1,%eax
    5b03:	e8 00 00 00 00       	callq  5b08 <update_region_occ+0x41a>
    5b08:	f3 0f 10 45 fc       	movss  -0x4(%rbp),%xmm0
    5b0d:	f3 0f 59 45 ac       	mulss  -0x54(%rbp),%xmm0
    5b12:	f3 0f 59 45 b0       	mulss  -0x50(%rbp),%xmm0
    5b17:	f3 0f 59 45 c4       	mulss  -0x3c(%rbp),%xmm0
    5b1c:	f3 0f 59 45 e0       	mulss  -0x20(%rbp),%xmm0
    5b21:	66 0f 7e c0          	movd   %xmm0,%eax
    5b25:	89 45 a8             	mov    %eax,-0x58(%rbp)
    5b28:	f3 0f 10 45 fc       	movss  -0x4(%rbp),%xmm0
    5b2d:	f3 0f 59 45 b0       	mulss  -0x50(%rbp),%xmm0
    5b32:	f3 0f 59 45 ac       	mulss  -0x54(%rbp),%xmm0
    5b37:	f3 0f 59 45 c8       	mulss  -0x38(%rbp),%xmm0
    5b3c:	f3 0f 59 45 dc       	mulss  -0x24(%rbp),%xmm0
    5b41:	66 0f 7e c0          	movd   %xmm0,%eax
    5b45:	89 45 a4             	mov    %eax,-0x5c(%rbp)
    5b48:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5b4f <update_region_occ+0x461>
    5b4f:	8b 55 f8             	mov    -0x8(%rbp),%edx
    5b52:	48 63 d2             	movslq %edx,%rdx
    5b55:	48 c1 e2 03          	shl    $0x3,%rdx
    5b59:	48 01 d0             	add    %rdx,%rax
    5b5c:	48 8b 00             	mov    (%rax),%rax
    5b5f:	8b 55 f4             	mov    -0xc(%rbp),%edx
    5b62:	48 63 d2             	movslq %edx,%rdx
    5b65:	48 c1 e2 04          	shl    $0x4,%rdx
    5b69:	48 01 c2             	add    %rax,%rdx
    5b6c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5b73 <update_region_occ+0x485>
    5b73:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    5b76:	48 63 c9             	movslq %ecx,%rcx
    5b79:	48 c1 e1 03          	shl    $0x3,%rcx
    5b7d:	48 01 c8             	add    %rcx,%rax
    5b80:	48 8b 00             	mov    (%rax),%rax
    5b83:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    5b86:	48 63 c9             	movslq %ecx,%rcx
    5b89:	48 c1 e1 04          	shl    $0x4,%rcx
    5b8d:	48 01 c8             	add    %rcx,%rax
    5b90:	f3 0f 10 48 08       	movss  0x8(%rax),%xmm1
    5b95:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5b99:	f3 0f 2a 45 98       	cvtsi2ssl -0x68(%rbp),%xmm0
    5b9e:	f3 0f 59 45 a8       	mulss  -0x58(%rbp),%xmm0
    5ba3:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    5ba7:	66 0f 7e c8          	movd   %xmm1,%eax
    5bab:	89 42 08             	mov    %eax,0x8(%rdx)
    5bae:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5bb5 <update_region_occ+0x4c7>
    5bb5:	8b 55 f8             	mov    -0x8(%rbp),%edx
    5bb8:	48 63 d2             	movslq %edx,%rdx
    5bbb:	48 c1 e2 03          	shl    $0x3,%rdx
    5bbf:	48 01 d0             	add    %rdx,%rax
    5bc2:	48 8b 00             	mov    (%rax),%rax
    5bc5:	8b 55 f4             	mov    -0xc(%rbp),%edx
    5bc8:	48 63 d2             	movslq %edx,%rdx
    5bcb:	48 c1 e2 04          	shl    $0x4,%rdx
    5bcf:	48 01 c2             	add    %rax,%rdx
    5bd2:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5bd9 <update_region_occ+0x4eb>
    5bd9:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    5bdc:	48 63 c9             	movslq %ecx,%rcx
    5bdf:	48 c1 e1 03          	shl    $0x3,%rcx
    5be3:	48 01 c8             	add    %rcx,%rax
    5be6:	48 8b 00             	mov    (%rax),%rax
    5be9:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    5bec:	48 63 c9             	movslq %ecx,%rcx
    5bef:	48 c1 e1 04          	shl    $0x4,%rcx
    5bf3:	48 01 c8             	add    %rcx,%rax
    5bf6:	f3 0f 10 48 08       	movss  0x8(%rax),%xmm1
    5bfb:	66 0f ef c0          	pxor   %xmm0,%xmm0
    5bff:	f3 0f 2a 45 98       	cvtsi2ssl -0x68(%rbp),%xmm0
    5c04:	f3 0f 59 45 a4       	mulss  -0x5c(%rbp),%xmm0
    5c09:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    5c0d:	66 0f 7e c8          	movd   %xmm1,%eax
    5c11:	89 42 08             	mov    %eax,0x8(%rdx)
    5c14:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
    5c18:	8b 45 f4             	mov    -0xc(%rbp),%eax
    5c1b:	3b 45 cc             	cmp    -0x34(%rbp),%eax
    5c1e:	0f 8e 6a fd ff ff    	jle    598e <update_region_occ+0x2a0>
    5c24:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    5c28:	8b 45 f8             	mov    -0x8(%rbp),%eax
    5c2b:	3b 45 d4             	cmp    -0x2c(%rbp),%eax
    5c2e:	0f 8e 4f fd ff ff    	jle    5983 <update_region_occ+0x295>
    5c34:	c9                   	leaveq 
    5c35:	c3                   	retq   

0000000000005c36 <free_place_regions>:
    5c36:	55                   	push   %rbp
    5c37:	48 89 e5             	mov    %rsp,%rbp
    5c3a:	48 83 ec 10          	sub    $0x10,%rsp
    5c3e:	89 7d fc             	mov    %edi,-0x4(%rbp)
    5c41:	8b 45 fc             	mov    -0x4(%rbp),%eax
    5c44:	8d 50 ff             	lea    -0x1(%rax),%edx
    5c47:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5c4e <free_place_regions+0x18>
    5c4e:	41 b8 10 00 00 00    	mov    $0x10,%r8d
    5c54:	b9 00 00 00 00       	mov    $0x0,%ecx
    5c59:	be 00 00 00 00       	mov    $0x0,%esi
    5c5e:	48 89 c7             	mov    %rax,%rdi
    5c61:	e8 00 00 00 00       	callq  5c66 <free_place_regions+0x30>
    5c66:	8b 45 fc             	mov    -0x4(%rbp),%eax
    5c69:	8d 50 ff             	lea    -0x1(%rax),%edx
    5c6c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5c73 <free_place_regions+0x3d>
    5c73:	41 b8 10 00 00 00    	mov    $0x10,%r8d
    5c79:	b9 00 00 00 00       	mov    $0x0,%ecx
    5c7e:	be 00 00 00 00       	mov    $0x0,%esi
    5c83:	48 89 c7             	mov    %rax,%rdi
    5c86:	e8 00 00 00 00       	callq  5c8b <free_place_regions+0x55>
    5c8b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5c92 <free_place_regions+0x5c>
    5c92:	48 89 c7             	mov    %rax,%rdi
    5c95:	e8 00 00 00 00       	callq  5c9a <free_place_regions+0x64>
    5c9a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5ca1 <free_place_regions+0x6b>
    5ca1:	48 89 c7             	mov    %rax,%rdi
    5ca4:	e8 00 00 00 00       	callq  5ca9 <free_place_regions+0x73>
    5ca9:	c9                   	leaveq 
    5caa:	c3                   	retq   

0000000000005cab <free_placement_structs>:
    5cab:	55                   	push   %rbp
    5cac:	48 89 e5             	mov    %rsp,%rbp
    5caf:	48 83 ec 30          	sub    $0x30,%rsp
    5cb3:	89 7d ec             	mov    %edi,-0x14(%rbp)
    5cb6:	89 75 e8             	mov    %esi,-0x18(%rbp)
    5cb9:	48 89 55 e0          	mov    %rdx,-0x20(%rbp)
    5cbd:	48 89 4d d8          	mov    %rcx,-0x28(%rbp)
    5cc1:	8b 45 10             	mov    0x10(%rbp),%eax
    5cc4:	83 f8 01             	cmp    $0x1,%eax
    5cc7:	74 13                	je     5cdc <free_placement_structs+0x31>
    5cc9:	8b 45 10             	mov    0x10(%rbp),%eax
    5ccc:	83 f8 02             	cmp    $0x2,%eax
    5ccf:	74 0b                	je     5cdc <free_placement_structs+0x31>
    5cd1:	8b 45 44             	mov    0x44(%rbp),%eax
    5cd4:	85 c0                	test   %eax,%eax
    5cd6:	0f 84 77 01 00 00    	je     5e53 <free_placement_structs+0x1a8>
    5cdc:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    5ce3:	e9 f8 00 00 00       	jmpq   5de0 <free_placement_structs+0x135>
    5ce8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5cef <free_placement_structs+0x44>
    5cef:	8b 55 fc             	mov    -0x4(%rbp),%edx
    5cf2:	48 63 d2             	movslq %edx,%rdx
    5cf5:	48 c1 e2 03          	shl    $0x3,%rdx
    5cf9:	48 01 d0             	add    %rdx,%rax
    5cfc:	48 8b 10             	mov    (%rax),%rdx
    5cff:	48 83 c2 04          	add    $0x4,%rdx
    5d03:	48 89 10             	mov    %rdx,(%rax)
    5d06:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5d0d <free_placement_structs+0x62>
    5d0d:	8b 55 fc             	mov    -0x4(%rbp),%edx
    5d10:	48 63 d2             	movslq %edx,%rdx
    5d13:	48 c1 e2 03          	shl    $0x3,%rdx
    5d17:	48 01 d0             	add    %rdx,%rax
    5d1a:	48 8b 00             	mov    (%rax),%rax
    5d1d:	48 89 c7             	mov    %rax,%rdi
    5d20:	e8 00 00 00 00       	callq  5d25 <free_placement_structs+0x7a>
    5d25:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5d2c <free_placement_structs+0x81>
    5d2c:	8b 55 fc             	mov    -0x4(%rbp),%edx
    5d2f:	48 63 d2             	movslq %edx,%rdx
    5d32:	48 c1 e2 03          	shl    $0x3,%rdx
    5d36:	48 01 d0             	add    %rdx,%rax
    5d39:	48 8b 10             	mov    (%rax),%rdx
    5d3c:	48 83 c2 04          	add    $0x4,%rdx
    5d40:	48 89 10             	mov    %rdx,(%rax)
    5d43:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5d4a <free_placement_structs+0x9f>
    5d4a:	8b 55 fc             	mov    -0x4(%rbp),%edx
    5d4d:	48 63 d2             	movslq %edx,%rdx
    5d50:	48 c1 e2 03          	shl    $0x3,%rdx
    5d54:	48 01 d0             	add    %rdx,%rax
    5d57:	48 8b 00             	mov    (%rax),%rax
    5d5a:	48 89 c7             	mov    %rax,%rdi
    5d5d:	e8 00 00 00 00       	callq  5d62 <free_placement_structs+0xb7>
    5d62:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5d69 <free_placement_structs+0xbe>
    5d69:	8b 55 fc             	mov    -0x4(%rbp),%edx
    5d6c:	48 63 d2             	movslq %edx,%rdx
    5d6f:	48 c1 e2 03          	shl    $0x3,%rdx
    5d73:	48 01 d0             	add    %rdx,%rax
    5d76:	48 8b 10             	mov    (%rax),%rdx
    5d79:	48 83 c2 04          	add    $0x4,%rdx
    5d7d:	48 89 10             	mov    %rdx,(%rax)
    5d80:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5d87 <free_placement_structs+0xdc>
    5d87:	8b 55 fc             	mov    -0x4(%rbp),%edx
    5d8a:	48 63 d2             	movslq %edx,%rdx
    5d8d:	48 c1 e2 03          	shl    $0x3,%rdx
    5d91:	48 01 d0             	add    %rdx,%rax
    5d94:	48 8b 00             	mov    (%rax),%rax
    5d97:	48 89 c7             	mov    %rax,%rdi
    5d9a:	e8 00 00 00 00       	callq  5d9f <free_placement_structs+0xf4>
    5d9f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5da6 <free_placement_structs+0xfb>
    5da6:	8b 55 fc             	mov    -0x4(%rbp),%edx
    5da9:	48 63 d2             	movslq %edx,%rdx
    5dac:	48 c1 e2 03          	shl    $0x3,%rdx
    5db0:	48 01 d0             	add    %rdx,%rax
    5db3:	48 8b 10             	mov    (%rax),%rdx
    5db6:	48 83 c2 04          	add    $0x4,%rdx
    5dba:	48 89 10             	mov    %rdx,(%rax)
    5dbd:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5dc4 <free_placement_structs+0x119>
    5dc4:	8b 55 fc             	mov    -0x4(%rbp),%edx
    5dc7:	48 63 d2             	movslq %edx,%rdx
    5dca:	48 c1 e2 03          	shl    $0x3,%rdx
    5dce:	48 01 d0             	add    %rdx,%rax
    5dd1:	48 8b 00             	mov    (%rax),%rax
    5dd4:	48 89 c7             	mov    %rax,%rdi
    5dd7:	e8 00 00 00 00       	callq  5ddc <free_placement_structs+0x131>
    5ddc:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    5de0:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5de6 <free_placement_structs+0x13b>
    5de6:	39 45 fc             	cmp    %eax,-0x4(%rbp)
    5de9:	0f 8c f9 fe ff ff    	jl     5ce8 <free_placement_structs+0x3d>
    5def:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5df6 <free_placement_structs+0x14b>
    5df6:	48 89 c7             	mov    %rax,%rdi
    5df9:	e8 00 00 00 00       	callq  5dfe <free_placement_structs+0x153>
    5dfe:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5e05 <free_placement_structs+0x15a>
    5e05:	48 89 c7             	mov    %rax,%rdi
    5e08:	e8 00 00 00 00       	callq  5e0d <free_placement_structs+0x162>
    5e0d:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5e14 <free_placement_structs+0x169>
    5e14:	48 89 c7             	mov    %rax,%rdi
    5e17:	e8 00 00 00 00       	callq  5e1c <free_placement_structs+0x171>
    5e1c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5e23 <free_placement_structs+0x178>
    5e23:	48 89 c7             	mov    %rax,%rdi
    5e26:	e8 00 00 00 00       	callq  5e2b <free_placement_structs+0x180>
    5e2b:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5e31 <free_placement_structs+0x186>
    5e31:	8d 50 ff             	lea    -0x1(%rax),%edx
    5e34:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5e3b <free_placement_structs+0x190>
    5e3b:	41 b8 04 00 00 00    	mov    $0x4,%r8d
    5e41:	b9 00 00 00 00       	mov    $0x0,%ecx
    5e46:	be 00 00 00 00       	mov    $0x0,%esi
    5e4b:	48 89 c7             	mov    %rax,%rdi
    5e4e:	e8 00 00 00 00       	callq  5e53 <free_placement_structs+0x1a8>
    5e53:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5e5a <free_placement_structs+0x1af>
    5e5a:	48 89 c7             	mov    %rax,%rdi
    5e5d:	e8 00 00 00 00       	callq  5e62 <free_placement_structs+0x1b7>
    5e62:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5e69 <free_placement_structs+0x1be>
    5e69:	48 89 c7             	mov    %rax,%rdi
    5e6c:	e8 00 00 00 00       	callq  5e71 <free_placement_structs+0x1c6>
    5e71:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5e78 <free_placement_structs+0x1cd>
    5e78:	48 89 c7             	mov    %rax,%rdi
    5e7b:	e8 00 00 00 00       	callq  5e80 <free_placement_structs+0x1d5>
    5e80:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 5e87 <free_placement_structs+0x1dc>
    5e87:	48 89 c7             	mov    %rax,%rdi
    5e8a:	e8 00 00 00 00       	callq  5e8f <free_placement_structs+0x1e4>
    5e8f:	48 c7 05 00 00 00 00 	movq   $0x0,0x0(%rip)        # 5e9a <free_placement_structs+0x1ef>
    5e96:	00 00 00 00 
    5e9a:	48 c7 05 00 00 00 00 	movq   $0x0,0x0(%rip)        # 5ea5 <free_placement_structs+0x1fa>
    5ea1:	00 00 00 00 
    5ea5:	48 c7 05 00 00 00 00 	movq   $0x0,0x0(%rip)        # 5eb0 <free_placement_structs+0x205>
    5eac:	00 00 00 00 
    5eb0:	48 c7 05 00 00 00 00 	movq   $0x0,0x0(%rip)        # 5ebb <free_placement_structs+0x210>
    5eb7:	00 00 00 00 
    5ebb:	e8 5a 0e 00 00       	callq  6d1a <free_unique_pin_list>
    5ec0:	83 7d ec 01          	cmpl   $0x1,-0x14(%rbp)
    5ec4:	75 50                	jne    5f16 <free_placement_structs+0x26b>
    5ec6:	8b 45 e8             	mov    -0x18(%rbp),%eax
    5ec9:	89 c7                	mov    %eax,%edi
    5ecb:	e8 66 fd ff ff       	callq  5c36 <free_place_regions>
    5ed0:	8b 45 e8             	mov    -0x18(%rbp),%eax
    5ed3:	8d 50 ff             	lea    -0x1(%rax),%edx
    5ed6:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    5eda:	41 b8 04 00 00 00    	mov    $0x4,%r8d
    5ee0:	b9 00 00 00 00       	mov    $0x0,%ecx
    5ee5:	be 00 00 00 00       	mov    $0x0,%esi
    5eea:	48 89 c7             	mov    %rax,%rdi
    5eed:	e8 00 00 00 00       	callq  5ef2 <free_placement_structs+0x247>
    5ef2:	8b 45 e8             	mov    -0x18(%rbp),%eax
    5ef5:	8d 50 ff             	lea    -0x1(%rax),%edx
    5ef8:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    5efc:	41 b8 04 00 00 00    	mov    $0x4,%r8d
    5f02:	b9 00 00 00 00       	mov    $0x0,%ecx
    5f07:	be 00 00 00 00       	mov    $0x0,%esi
    5f0c:	48 89 c7             	mov    %rax,%rdi
    5f0f:	e8 00 00 00 00       	callq  5f14 <free_placement_structs+0x269>
    5f14:	eb 0b                	jmp    5f21 <free_placement_structs+0x276>
    5f16:	83 7d ec 00          	cmpl   $0x0,-0x14(%rbp)
    5f1a:	75 05                	jne    5f21 <free_placement_structs+0x276>
    5f1c:	e8 43 2b 00 00       	callq  8a64 <free_fast_cost_update_structs>
    5f21:	c9                   	leaveq 
    5f22:	c3                   	retq   

0000000000005f23 <alloc_and_load_placement_structs>:
    5f23:	55                   	push   %rbp
    5f24:	48 89 e5             	mov    %rsp,%rbp
    5f27:	53                   	push   %rbx
    5f28:	48 83 ec 38          	sub    $0x38,%rsp
    5f2c:	89 7d dc             	mov    %edi,-0x24(%rbp)
    5f2f:	89 75 d8             	mov    %esi,-0x28(%rbp)
    5f32:	f3 0f 11 45 d4       	movss  %xmm0,-0x2c(%rbp)
    5f37:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
    5f3b:	48 89 4d c0          	mov    %rcx,-0x40(%rbp)
    5f3f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%rbp)
    5f46:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%rbp)
    5f4d:	eb 36                	jmp    5f85 <alloc_and_load_placement_structs+0x62>
    5f4f:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 5f56 <alloc_and_load_placement_structs+0x33>
    5f56:	8b 45 e0             	mov    -0x20(%rbp),%eax
    5f59:	48 63 d0             	movslq %eax,%rdx
    5f5c:	48 89 d0             	mov    %rdx,%rax
    5f5f:	48 c1 e0 03          	shl    $0x3,%rax
    5f63:	48 01 d0             	add    %rdx,%rax
    5f66:	48 01 c0             	add    %rax,%rax
    5f69:	48 01 d0             	add    %rdx,%rax
    5f6c:	48 c1 e0 03          	shl    $0x3,%rax
    5f70:	48 01 c8             	add    %rcx,%rax
    5f73:	8b 50 08             	mov    0x8(%rax),%edx
    5f76:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    5f79:	39 c2                	cmp    %eax,%edx
    5f7b:	0f 4d c2             	cmovge %edx,%eax
    5f7e:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    5f81:	83 45 e0 01          	addl   $0x1,-0x20(%rbp)
    5f85:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5f8b <alloc_and_load_placement_structs+0x68>
    5f8b:	39 45 e0             	cmp    %eax,-0x20(%rbp)
    5f8e:	7c bf                	jl     5f4f <alloc_and_load_placement_structs+0x2c>
    5f90:	8b 45 10             	mov    0x10(%rbp),%eax
    5f93:	83 f8 01             	cmp    $0x1,%eax
    5f96:	74 13                	je     5fab <alloc_and_load_placement_structs+0x88>
    5f98:	8b 45 10             	mov    0x10(%rbp),%eax
    5f9b:	83 f8 02             	cmp    $0x2,%eax
    5f9e:	74 0b                	je     5fab <alloc_and_load_placement_structs+0x88>
    5fa0:	8b 45 44             	mov    0x44(%rbp),%eax
    5fa3:	85 c0                	test   %eax,%eax
    5fa5:	0f 84 fc 02 00 00    	je     62a7 <alloc_and_load_placement_structs+0x384>
    5fab:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5fb1 <alloc_and_load_placement_structs+0x8e>
    5fb1:	48 98                	cltq   
    5fb3:	48 c1 e0 03          	shl    $0x3,%rax
    5fb7:	48 89 c7             	mov    %rax,%rdi
    5fba:	e8 00 00 00 00       	callq  5fbf <alloc_and_load_placement_structs+0x9c>
    5fbf:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 5fc6 <alloc_and_load_placement_structs+0xa3>
    5fc6:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5fcc <alloc_and_load_placement_structs+0xa9>
    5fcc:	48 98                	cltq   
    5fce:	48 c1 e0 03          	shl    $0x3,%rax
    5fd2:	48 89 c7             	mov    %rax,%rdi
    5fd5:	e8 00 00 00 00       	callq  5fda <alloc_and_load_placement_structs+0xb7>
    5fda:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 5fe1 <alloc_and_load_placement_structs+0xbe>
    5fe1:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 5fe7 <alloc_and_load_placement_structs+0xc4>
    5fe7:	48 98                	cltq   
    5fe9:	48 c1 e0 03          	shl    $0x3,%rax
    5fed:	48 89 c7             	mov    %rax,%rdi
    5ff0:	e8 00 00 00 00       	callq  5ff5 <alloc_and_load_placement_structs+0xd2>
    5ff5:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 5ffc <alloc_and_load_placement_structs+0xd9>
    5ffc:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6002 <alloc_and_load_placement_structs+0xdf>
    6002:	48 98                	cltq   
    6004:	48 c1 e0 03          	shl    $0x3,%rax
    6008:	48 89 c7             	mov    %rax,%rdi
    600b:	e8 00 00 00 00       	callq  6010 <alloc_and_load_placement_structs+0xed>
    6010:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 6017 <alloc_and_load_placement_structs+0xf4>
    6017:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    601a:	8d 50 ff             	lea    -0x1(%rax),%edx
    601d:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6023 <alloc_and_load_placement_structs+0x100>
    6023:	83 e8 01             	sub    $0x1,%eax
    6026:	41 b8 04 00 00 00    	mov    $0x4,%r8d
    602c:	89 d1                	mov    %edx,%ecx
    602e:	ba 00 00 00 00       	mov    $0x0,%edx
    6033:	89 c6                	mov    %eax,%esi
    6035:	bf 00 00 00 00       	mov    $0x0,%edi
    603a:	e8 00 00 00 00       	callq  603f <alloc_and_load_placement_structs+0x11c>
    603f:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 6046 <alloc_and_load_placement_structs+0x123>
    6046:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    604d:	e9 98 01 00 00       	jmpq   61ea <alloc_and_load_placement_structs+0x2c7>
    6052:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6059 <alloc_and_load_placement_structs+0x136>
    6059:	8b 55 ec             	mov    -0x14(%rbp),%edx
    605c:	48 63 d2             	movslq %edx,%rdx
    605f:	48 c1 e2 03          	shl    $0x3,%rdx
    6063:	48 8d 1c 10          	lea    (%rax,%rdx,1),%rbx
    6067:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 606e <alloc_and_load_placement_structs+0x14b>
    606e:	8b 45 ec             	mov    -0x14(%rbp),%eax
    6071:	48 63 d0             	movslq %eax,%rdx
    6074:	48 89 d0             	mov    %rdx,%rax
    6077:	48 c1 e0 02          	shl    $0x2,%rax
    607b:	48 01 d0             	add    %rdx,%rax
    607e:	48 c1 e0 03          	shl    $0x3,%rax
    6082:	48 01 c8             	add    %rcx,%rax
    6085:	8b 40 08             	mov    0x8(%rax),%eax
    6088:	48 98                	cltq   
    608a:	48 c1 e0 02          	shl    $0x2,%rax
    608e:	48 89 c7             	mov    %rax,%rdi
    6091:	e8 00 00 00 00       	callq  6096 <alloc_and_load_placement_structs+0x173>
    6096:	48 89 03             	mov    %rax,(%rbx)
    6099:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 60a0 <alloc_and_load_placement_structs+0x17d>
    60a0:	8b 55 ec             	mov    -0x14(%rbp),%edx
    60a3:	48 63 d2             	movslq %edx,%rdx
    60a6:	48 c1 e2 03          	shl    $0x3,%rdx
    60aa:	48 01 d0             	add    %rdx,%rax
    60ad:	48 8b 10             	mov    (%rax),%rdx
    60b0:	48 83 ea 04          	sub    $0x4,%rdx
    60b4:	48 89 10             	mov    %rdx,(%rax)
    60b7:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 60be <alloc_and_load_placement_structs+0x19b>
    60be:	8b 55 ec             	mov    -0x14(%rbp),%edx
    60c1:	48 63 d2             	movslq %edx,%rdx
    60c4:	48 c1 e2 03          	shl    $0x3,%rdx
    60c8:	48 8d 1c 10          	lea    (%rax,%rdx,1),%rbx
    60cc:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 60d3 <alloc_and_load_placement_structs+0x1b0>
    60d3:	8b 45 ec             	mov    -0x14(%rbp),%eax
    60d6:	48 63 d0             	movslq %eax,%rdx
    60d9:	48 89 d0             	mov    %rdx,%rax
    60dc:	48 c1 e0 02          	shl    $0x2,%rax
    60e0:	48 01 d0             	add    %rdx,%rax
    60e3:	48 c1 e0 03          	shl    $0x3,%rax
    60e7:	48 01 c8             	add    %rcx,%rax
    60ea:	8b 40 08             	mov    0x8(%rax),%eax
    60ed:	48 98                	cltq   
    60ef:	48 c1 e0 02          	shl    $0x2,%rax
    60f3:	48 89 c7             	mov    %rax,%rdi
    60f6:	e8 00 00 00 00       	callq  60fb <alloc_and_load_placement_structs+0x1d8>
    60fb:	48 89 03             	mov    %rax,(%rbx)
    60fe:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6105 <alloc_and_load_placement_structs+0x1e2>
    6105:	8b 55 ec             	mov    -0x14(%rbp),%edx
    6108:	48 63 d2             	movslq %edx,%rdx
    610b:	48 c1 e2 03          	shl    $0x3,%rdx
    610f:	48 01 d0             	add    %rdx,%rax
    6112:	48 8b 10             	mov    (%rax),%rdx
    6115:	48 83 ea 04          	sub    $0x4,%rdx
    6119:	48 89 10             	mov    %rdx,(%rax)
    611c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6123 <alloc_and_load_placement_structs+0x200>
    6123:	8b 55 ec             	mov    -0x14(%rbp),%edx
    6126:	48 63 d2             	movslq %edx,%rdx
    6129:	48 c1 e2 03          	shl    $0x3,%rdx
    612d:	48 8d 1c 10          	lea    (%rax,%rdx,1),%rbx
    6131:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 6138 <alloc_and_load_placement_structs+0x215>
    6138:	8b 45 ec             	mov    -0x14(%rbp),%eax
    613b:	48 63 d0             	movslq %eax,%rdx
    613e:	48 89 d0             	mov    %rdx,%rax
    6141:	48 c1 e0 02          	shl    $0x2,%rax
    6145:	48 01 d0             	add    %rdx,%rax
    6148:	48 c1 e0 03          	shl    $0x3,%rax
    614c:	48 01 c8             	add    %rcx,%rax
    614f:	8b 40 08             	mov    0x8(%rax),%eax
    6152:	48 98                	cltq   
    6154:	48 c1 e0 02          	shl    $0x2,%rax
    6158:	48 89 c7             	mov    %rax,%rdi
    615b:	e8 00 00 00 00       	callq  6160 <alloc_and_load_placement_structs+0x23d>
    6160:	48 89 03             	mov    %rax,(%rbx)
    6163:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 616a <alloc_and_load_placement_structs+0x247>
    616a:	8b 55 ec             	mov    -0x14(%rbp),%edx
    616d:	48 63 d2             	movslq %edx,%rdx
    6170:	48 c1 e2 03          	shl    $0x3,%rdx
    6174:	48 01 d0             	add    %rdx,%rax
    6177:	48 8b 10             	mov    (%rax),%rdx
    617a:	48 83 ea 04          	sub    $0x4,%rdx
    617e:	48 89 10             	mov    %rdx,(%rax)
    6181:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6188 <alloc_and_load_placement_structs+0x265>
    6188:	8b 55 ec             	mov    -0x14(%rbp),%edx
    618b:	48 63 d2             	movslq %edx,%rdx
    618e:	48 c1 e2 03          	shl    $0x3,%rdx
    6192:	48 8d 1c 10          	lea    (%rax,%rdx,1),%rbx
    6196:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 619d <alloc_and_load_placement_structs+0x27a>
    619d:	8b 45 ec             	mov    -0x14(%rbp),%eax
    61a0:	48 63 d0             	movslq %eax,%rdx
    61a3:	48 89 d0             	mov    %rdx,%rax
    61a6:	48 c1 e0 02          	shl    $0x2,%rax
    61aa:	48 01 d0             	add    %rdx,%rax
    61ad:	48 c1 e0 03          	shl    $0x3,%rax
    61b1:	48 01 c8             	add    %rcx,%rax
    61b4:	8b 40 08             	mov    0x8(%rax),%eax
    61b7:	48 98                	cltq   
    61b9:	48 c1 e0 02          	shl    $0x2,%rax
    61bd:	48 89 c7             	mov    %rax,%rdi
    61c0:	e8 00 00 00 00       	callq  61c5 <alloc_and_load_placement_structs+0x2a2>
    61c5:	48 89 03             	mov    %rax,(%rbx)
    61c8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 61cf <alloc_and_load_placement_structs+0x2ac>
    61cf:	8b 55 ec             	mov    -0x14(%rbp),%edx
    61d2:	48 63 d2             	movslq %edx,%rdx
    61d5:	48 c1 e2 03          	shl    $0x3,%rdx
    61d9:	48 01 d0             	add    %rdx,%rax
    61dc:	48 8b 10             	mov    (%rax),%rdx
    61df:	48 83 ea 04          	sub    $0x4,%rdx
    61e3:	48 89 10             	mov    %rdx,(%rax)
    61e6:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    61ea:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 61f0 <alloc_and_load_placement_structs+0x2cd>
    61f0:	39 45 ec             	cmp    %eax,-0x14(%rbp)
    61f3:	0f 8c 59 fe ff ff    	jl     6052 <alloc_and_load_placement_structs+0x12f>
    61f9:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    6200:	e9 93 00 00 00       	jmpq   6298 <alloc_and_load_placement_structs+0x375>
    6205:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%rbp)
    620c:	eb 5c                	jmp    626a <alloc_and_load_placement_structs+0x347>
    620e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6215 <alloc_and_load_placement_structs+0x2f2>
    6215:	8b 55 ec             	mov    -0x14(%rbp),%edx
    6218:	48 63 d2             	movslq %edx,%rdx
    621b:	48 c1 e2 03          	shl    $0x3,%rdx
    621f:	48 01 d0             	add    %rdx,%rax
    6222:	48 8b 00             	mov    (%rax),%rax
    6225:	8b 55 e8             	mov    -0x18(%rbp),%edx
    6228:	48 63 d2             	movslq %edx,%rdx
    622b:	48 c1 e2 02          	shl    $0x2,%rdx
    622f:	48 01 c2             	add    %rax,%rdx
    6232:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6238 <alloc_and_load_placement_structs+0x315>
    6238:	89 02                	mov    %eax,(%rdx)
    623a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6241 <alloc_and_load_placement_structs+0x31e>
    6241:	8b 55 ec             	mov    -0x14(%rbp),%edx
    6244:	48 63 d2             	movslq %edx,%rdx
    6247:	48 c1 e2 03          	shl    $0x3,%rdx
    624b:	48 01 d0             	add    %rdx,%rax
    624e:	48 8b 00             	mov    (%rax),%rax
    6251:	8b 55 e8             	mov    -0x18(%rbp),%edx
    6254:	48 63 d2             	movslq %edx,%rdx
    6257:	48 c1 e2 02          	shl    $0x2,%rdx
    625b:	48 01 c2             	add    %rax,%rdx
    625e:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6264 <alloc_and_load_placement_structs+0x341>
    6264:	89 02                	mov    %eax,(%rdx)
    6266:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    626a:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 6271 <alloc_and_load_placement_structs+0x34e>
    6271:	8b 45 ec             	mov    -0x14(%rbp),%eax
    6274:	48 63 d0             	movslq %eax,%rdx
    6277:	48 89 d0             	mov    %rdx,%rax
    627a:	48 c1 e0 02          	shl    $0x2,%rax
    627e:	48 01 d0             	add    %rdx,%rax
    6281:	48 c1 e0 03          	shl    $0x3,%rax
    6285:	48 01 c8             	add    %rcx,%rax
    6288:	8b 40 08             	mov    0x8(%rax),%eax
    628b:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    628e:	0f 8d 7a ff ff ff    	jge    620e <alloc_and_load_placement_structs+0x2eb>
    6294:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    6298:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 629e <alloc_and_load_placement_structs+0x37b>
    629e:	39 45 ec             	cmp    %eax,-0x14(%rbp)
    62a1:	0f 8c 5e ff ff ff    	jl     6205 <alloc_and_load_placement_structs+0x2e2>
    62a7:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 62ad <alloc_and_load_placement_structs+0x38a>
    62ad:	48 98                	cltq   
    62af:	48 c1 e0 02          	shl    $0x2,%rax
    62b3:	48 89 c7             	mov    %rax,%rdi
    62b6:	e8 00 00 00 00       	callq  62bb <alloc_and_load_placement_structs+0x398>
    62bb:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 62c2 <alloc_and_load_placement_structs+0x39f>
    62c2:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 62c8 <alloc_and_load_placement_structs+0x3a5>
    62c8:	48 98                	cltq   
    62ca:	48 c1 e0 02          	shl    $0x2,%rax
    62ce:	48 89 c7             	mov    %rax,%rdi
    62d1:	e8 00 00 00 00       	callq  62d6 <alloc_and_load_placement_structs+0x3b3>
    62d6:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 62dd <alloc_and_load_placement_structs+0x3ba>
    62dd:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    62e4:	eb 20                	jmp    6306 <alloc_and_load_placement_structs+0x3e3>
    62e6:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 62ed <alloc_and_load_placement_structs+0x3ca>
    62ed:	8b 55 ec             	mov    -0x14(%rbp),%edx
    62f0:	48 63 d2             	movslq %edx,%rdx
    62f3:	48 c1 e2 02          	shl    $0x2,%rdx
    62f7:	48 01 c2             	add    %rax,%rdx
    62fa:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6300 <alloc_and_load_placement_structs+0x3dd>
    6300:	89 02                	mov    %eax,(%rdx)
    6302:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    6306:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 630c <alloc_and_load_placement_structs+0x3e9>
    630c:	39 45 ec             	cmp    %eax,-0x14(%rbp)
    630f:	7c d5                	jl     62e6 <alloc_and_load_placement_structs+0x3c3>
    6311:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6317 <alloc_and_load_placement_structs+0x3f4>
    6317:	48 98                	cltq   
    6319:	48 c1 e0 04          	shl    $0x4,%rax
    631d:	48 89 c7             	mov    %rax,%rdi
    6320:	e8 00 00 00 00       	callq  6325 <alloc_and_load_placement_structs+0x402>
    6325:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 632c <alloc_and_load_placement_structs+0x409>
    632c:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6332 <alloc_and_load_placement_structs+0x40f>
    6332:	48 98                	cltq   
    6334:	48 c1 e0 04          	shl    $0x4,%rax
    6338:	48 89 c7             	mov    %rax,%rdi
    633b:	e8 00 00 00 00       	callq  6340 <alloc_and_load_placement_structs+0x41d>
    6340:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 6347 <alloc_and_load_placement_structs+0x424>
    6347:	e8 5b 0a 00 00       	callq  6da7 <alloc_and_load_unique_pin_list>
    634c:	83 7d dc 01          	cmpl   $0x1,-0x24(%rbp)
    6350:	75 74                	jne    63c6 <alloc_and_load_placement_structs+0x4a3>
    6352:	8b 45 d8             	mov    -0x28(%rbp),%eax
    6355:	89 c7                	mov    %eax,%edi
    6357:	e8 9d 00 00 00       	callq  63f9 <alloc_place_regions>
    635c:	8b 45 d8             	mov    -0x28(%rbp),%eax
    635f:	89 c7                	mov    %eax,%edi
    6361:	e8 2e 01 00 00       	callq  6494 <load_place_regions>
    6366:	8b 45 d8             	mov    -0x28(%rbp),%eax
    6369:	8d 50 ff             	lea    -0x1(%rax),%edx
    636c:	8b 45 d8             	mov    -0x28(%rbp),%eax
    636f:	83 e8 01             	sub    $0x1,%eax
    6372:	41 b8 04 00 00 00    	mov    $0x4,%r8d
    6378:	89 d1                	mov    %edx,%ecx
    637a:	ba 00 00 00 00       	mov    $0x0,%edx
    637f:	89 c6                	mov    %eax,%esi
    6381:	bf 00 00 00 00       	mov    $0x0,%edi
    6386:	e8 00 00 00 00       	callq  638b <alloc_and_load_placement_structs+0x468>
    638b:	48 89 c2             	mov    %rax,%rdx
    638e:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    6392:	48 89 10             	mov    %rdx,(%rax)
    6395:	8b 45 d8             	mov    -0x28(%rbp),%eax
    6398:	8d 50 ff             	lea    -0x1(%rax),%edx
    639b:	8b 45 d8             	mov    -0x28(%rbp),%eax
    639e:	83 e8 01             	sub    $0x1,%eax
    63a1:	41 b8 04 00 00 00    	mov    $0x4,%r8d
    63a7:	89 d1                	mov    %edx,%ecx
    63a9:	ba 00 00 00 00       	mov    $0x0,%edx
    63ae:	89 c6                	mov    %eax,%esi
    63b0:	bf 00 00 00 00       	mov    $0x0,%edi
    63b5:	e8 00 00 00 00       	callq  63ba <alloc_and_load_placement_structs+0x497>
    63ba:	48 89 c2             	mov    %rax,%rdx
    63bd:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
    63c1:	48 89 10             	mov    %rdx,(%rax)
    63c4:	eb 16                	jmp    63dc <alloc_and_load_placement_structs+0x4b9>
    63c6:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    63ca:	48 c7 00 00 00 00 00 	movq   $0x0,(%rax)
    63d1:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
    63d5:	48 c7 00 00 00 00 00 	movq   $0x0,(%rax)
    63dc:	83 7d dc 00          	cmpl   $0x0,-0x24(%rbp)
    63e0:	75 10                	jne    63f2 <alloc_and_load_placement_structs+0x4cf>
    63e2:	8b 45 d4             	mov    -0x2c(%rbp),%eax
    63e5:	89 45 d0             	mov    %eax,-0x30(%rbp)
    63e8:	f3 0f 10 45 d0       	movss  -0x30(%rbp),%xmm0
    63ed:	e8 08 27 00 00       	callq  8afa <alloc_and_load_for_fast_cost_update>
    63f2:	48 83 c4 38          	add    $0x38,%rsp
    63f6:	5b                   	pop    %rbx
    63f7:	5d                   	pop    %rbp
    63f8:	c3                   	retq   

00000000000063f9 <alloc_place_regions>:
    63f9:	55                   	push   %rbp
    63fa:	48 89 e5             	mov    %rsp,%rbp
    63fd:	48 83 ec 10          	sub    $0x10,%rsp
    6401:	89 7d fc             	mov    %edi,-0x4(%rbp)
    6404:	8b 45 fc             	mov    -0x4(%rbp),%eax
    6407:	8d 50 ff             	lea    -0x1(%rax),%edx
    640a:	8b 45 fc             	mov    -0x4(%rbp),%eax
    640d:	83 e8 01             	sub    $0x1,%eax
    6410:	41 b8 10 00 00 00    	mov    $0x10,%r8d
    6416:	89 d1                	mov    %edx,%ecx
    6418:	ba 00 00 00 00       	mov    $0x0,%edx
    641d:	89 c6                	mov    %eax,%esi
    641f:	bf 00 00 00 00       	mov    $0x0,%edi
    6424:	e8 00 00 00 00       	callq  6429 <alloc_place_regions+0x30>
    6429:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 6430 <alloc_place_regions+0x37>
    6430:	8b 45 fc             	mov    -0x4(%rbp),%eax
    6433:	8d 50 ff             	lea    -0x1(%rax),%edx
    6436:	8b 45 fc             	mov    -0x4(%rbp),%eax
    6439:	83 e8 01             	sub    $0x1,%eax
    643c:	41 b8 10 00 00 00    	mov    $0x10,%r8d
    6442:	89 d1                	mov    %edx,%ecx
    6444:	ba 00 00 00 00       	mov    $0x0,%edx
    6449:	89 c6                	mov    %eax,%esi
    644b:	bf 00 00 00 00       	mov    $0x0,%edi
    6450:	e8 00 00 00 00       	callq  6455 <alloc_place_regions+0x5c>
    6455:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 645c <alloc_place_regions+0x63>
    645c:	8b 45 fc             	mov    -0x4(%rbp),%eax
    645f:	83 c0 01             	add    $0x1,%eax
    6462:	48 98                	cltq   
    6464:	48 c1 e0 02          	shl    $0x2,%rax
    6468:	48 89 c7             	mov    %rax,%rdi
    646b:	e8 00 00 00 00       	callq  6470 <alloc_place_regions+0x77>
    6470:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 6477 <alloc_place_regions+0x7e>
    6477:	8b 45 fc             	mov    -0x4(%rbp),%eax
    647a:	83 c0 01             	add    $0x1,%eax
    647d:	48 98                	cltq   
    647f:	48 c1 e0 02          	shl    $0x2,%rax
    6483:	48 89 c7             	mov    %rax,%rdi
    6486:	e8 00 00 00 00       	callq  648b <alloc_place_regions+0x92>
    648b:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 6492 <alloc_place_regions+0x99>
    6492:	c9                   	leaveq 
    6493:	c3                   	retq   

0000000000006494 <load_place_regions>:
    6494:	55                   	push   %rbp
    6495:	48 89 e5             	mov    %rsp,%rbp
    6498:	48 83 ec 40          	sub    $0x40,%rsp
    649c:	89 7d cc             	mov    %edi,-0x34(%rbp)
    649f:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    64a6:	e9 ac 03 00 00       	jmpq   6857 <load_place_regions+0x3c3>
    64ab:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 64b1 <load_place_regions+0x1d>
    64b1:	89 45 f0             	mov    %eax,-0x10(%rbp)
    64b4:	66 0f ef c0          	pxor   %xmm0,%xmm0
    64b8:	f3 0f 2a 45 f8       	cvtsi2ssl -0x8(%rbp),%xmm0
    64bd:	66 0f ef c9          	pxor   %xmm1,%xmm1
    64c1:	f3 0f 2a 4d cc       	cvtsi2ssl -0x34(%rbp),%xmm1
    64c6:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    64ca:	0f 28 c8             	movaps %xmm0,%xmm1
    64cd:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 64d3 <load_place_regions+0x3f>
    64d3:	66 0f ef c0          	pxor   %xmm0,%xmm0
    64d7:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    64db:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
    64df:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 64e7 <load_place_regions+0x53>
    64e6:	00 
    64e7:	f3 0f 58 c1          	addss  %xmm1,%xmm0
    64eb:	66 0f 7e c0          	movd   %xmm0,%eax
    64ef:	89 45 e8             	mov    %eax,-0x18(%rbp)
    64f2:	8b 45 f8             	mov    -0x8(%rbp),%eax
    64f5:	83 c0 01             	add    $0x1,%eax
    64f8:	66 0f ef c0          	pxor   %xmm0,%xmm0
    64fc:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    6500:	66 0f ef c9          	pxor   %xmm1,%xmm1
    6504:	f3 0f 2a 4d cc       	cvtsi2ssl -0x34(%rbp),%xmm1
    6509:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    650d:	0f 28 c8             	movaps %xmm0,%xmm1
    6510:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6516 <load_place_regions+0x82>
    6516:	66 0f ef c0          	pxor   %xmm0,%xmm0
    651a:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    651e:	f3 0f 59 c8          	mulss  %xmm0,%xmm1
    6522:	66 0f 7e c8          	movd   %xmm1,%eax
    6526:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    6529:	f3 0f 5a 45 e8       	cvtss2sd -0x18(%rbp),%xmm0
    652e:	e8 00 00 00 00       	callq  6533 <load_place_regions+0x9f>
    6533:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    6537:	89 45 e0             	mov    %eax,-0x20(%rbp)
    653a:	b8 01 00 00 00       	mov    $0x1,%eax
    653f:	83 7d e0 00          	cmpl   $0x0,-0x20(%rbp)
    6543:	0f 4f 45 e0          	cmovg  -0x20(%rbp),%eax
    6547:	89 45 e0             	mov    %eax,-0x20(%rbp)
    654a:	f3 0f 5a 45 e4       	cvtss2sd -0x1c(%rbp),%xmm0
    654f:	e8 00 00 00 00       	callq  6554 <load_place_regions+0xc0>
    6554:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    6558:	89 45 dc             	mov    %eax,-0x24(%rbp)
    655b:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6561 <load_place_regions+0xcd>
    6561:	39 45 dc             	cmp    %eax,-0x24(%rbp)
    6564:	0f 4e 45 dc          	cmovle -0x24(%rbp),%eax
    6568:	89 45 dc             	mov    %eax,-0x24(%rbp)
    656b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6572 <load_place_regions+0xde>
    6572:	8b 55 e0             	mov    -0x20(%rbp),%edx
    6575:	48 63 d2             	movslq %edx,%rdx
    6578:	48 c1 e2 02          	shl    $0x2,%rdx
    657c:	48 83 ea 04          	sub    $0x4,%rdx
    6580:	48 01 d0             	add    %rdx,%rax
    6583:	8b 10                	mov    (%rax),%edx
    6585:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 658c <load_place_regions+0xf8>
    658c:	8b 4d e0             	mov    -0x20(%rbp),%ecx
    658f:	48 63 c9             	movslq %ecx,%rcx
    6592:	48 c1 e1 02          	shl    $0x2,%rcx
    6596:	48 01 c8             	add    %rcx,%rax
    6599:	8b 00                	mov    (%rax),%eax
    659b:	01 d0                	add    %edx,%eax
    659d:	66 0f ef c0          	pxor   %xmm0,%xmm0
    65a1:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    65a5:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 65ad <load_place_regions+0x119>
    65ac:	00 
    65ad:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
    65b1:	f2 0f 5a d8          	cvtsd2ss %xmm0,%xmm3
    65b5:	f3 0f 11 5d ec       	movss  %xmm3,-0x14(%rbp)
    65ba:	83 7d e0 01          	cmpl   $0x1,-0x20(%rbp)
    65be:	75 2f                	jne    65ef <load_place_regions+0x15b>
    65c0:	f3 0f 5a 4d ec       	cvtss2sd -0x14(%rbp),%xmm1
    65c5:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 65cc <load_place_regions+0x138>
    65cc:	8b 00                	mov    (%rax),%eax
    65ce:	66 0f ef c0          	pxor   %xmm0,%xmm0
    65d2:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    65d6:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # 65de <load_place_regions+0x14a>
    65dd:	00 
    65de:	f2 0f 5e c2          	divsd  %xmm2,%xmm0
    65e2:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    65e6:	f2 0f 5a e0          	cvtsd2ss %xmm0,%xmm4
    65ea:	f3 0f 11 65 ec       	movss  %xmm4,-0x14(%rbp)
    65ef:	66 0f ef c0          	pxor   %xmm0,%xmm0
    65f3:	f3 0f 2a 45 e0       	cvtsi2ssl -0x20(%rbp),%xmm0
    65f8:	f3 0f 10 4d e8       	movss  -0x18(%rbp),%xmm1
    65fd:	f3 0f 5c c8          	subss  %xmm0,%xmm1
    6601:	0f 28 c1             	movaps %xmm1,%xmm0
    6604:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 660c <load_place_regions+0x178>
    660b:	00 
    660c:	f3 0f 5c c8          	subss  %xmm0,%xmm1
    6610:	66 0f 7e c8          	movd   %xmm1,%eax
    6614:	89 45 d8             	mov    %eax,-0x28(%rbp)
    6617:	f3 0f 10 45 d8       	movss  -0x28(%rbp),%xmm0
    661c:	f3 0f 59 45 ec       	mulss  -0x14(%rbp),%xmm0
    6621:	f3 0f 10 4d f0       	movss  -0x10(%rbp),%xmm1
    6626:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    662a:	66 0f 7e c8          	movd   %xmm1,%eax
    662e:	89 45 f0             	mov    %eax,-0x10(%rbp)
    6631:	8b 45 e0             	mov    -0x20(%rbp),%eax
    6634:	83 c0 01             	add    $0x1,%eax
    6637:	89 45 f4             	mov    %eax,-0xc(%rbp)
    663a:	eb 64                	jmp    66a0 <load_place_regions+0x20c>
    663c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6643 <load_place_regions+0x1af>
    6643:	8b 55 f4             	mov    -0xc(%rbp),%edx
    6646:	48 63 d2             	movslq %edx,%rdx
    6649:	48 c1 e2 02          	shl    $0x2,%rdx
    664d:	48 83 ea 04          	sub    $0x4,%rdx
    6651:	48 01 d0             	add    %rdx,%rax
    6654:	8b 10                	mov    (%rax),%edx
    6656:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 665d <load_place_regions+0x1c9>
    665d:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    6660:	48 63 c9             	movslq %ecx,%rcx
    6663:	48 c1 e1 02          	shl    $0x2,%rcx
    6667:	48 01 c8             	add    %rcx,%rax
    666a:	8b 00                	mov    (%rax),%eax
    666c:	01 d0                	add    %edx,%eax
    666e:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6672:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    6676:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 667e <load_place_regions+0x1ea>
    667d:	00 
    667e:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
    6682:	f2 0f 5a e8          	cvtsd2ss %xmm0,%xmm5
    6686:	f3 0f 11 6d ec       	movss  %xmm5,-0x14(%rbp)
    668b:	f3 0f 10 45 f0       	movss  -0x10(%rbp),%xmm0
    6690:	f3 0f 58 45 ec       	addss  -0x14(%rbp),%xmm0
    6695:	66 0f 7e c0          	movd   %xmm0,%eax
    6699:	89 45 f0             	mov    %eax,-0x10(%rbp)
    669c:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
    66a0:	8b 45 f4             	mov    -0xc(%rbp),%eax
    66a3:	3b 45 dc             	cmp    -0x24(%rbp),%eax
    66a6:	7c 94                	jl     663c <load_place_regions+0x1a8>
    66a8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 66af <load_place_regions+0x21b>
    66af:	8b 55 dc             	mov    -0x24(%rbp),%edx
    66b2:	48 63 d2             	movslq %edx,%rdx
    66b5:	48 c1 e2 02          	shl    $0x2,%rdx
    66b9:	48 83 ea 04          	sub    $0x4,%rdx
    66bd:	48 01 d0             	add    %rdx,%rax
    66c0:	8b 10                	mov    (%rax),%edx
    66c2:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 66c9 <load_place_regions+0x235>
    66c9:	8b 4d dc             	mov    -0x24(%rbp),%ecx
    66cc:	48 63 c9             	movslq %ecx,%rcx
    66cf:	48 c1 e1 02          	shl    $0x2,%rcx
    66d3:	48 01 c8             	add    %rcx,%rax
    66d6:	8b 00                	mov    (%rax),%eax
    66d8:	01 d0                	add    %edx,%eax
    66da:	66 0f ef c0          	pxor   %xmm0,%xmm0
    66de:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    66e2:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 66ea <load_place_regions+0x256>
    66e9:	00 
    66ea:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
    66ee:	f2 0f 5a f0          	cvtsd2ss %xmm0,%xmm6
    66f2:	f3 0f 11 75 ec       	movss  %xmm6,-0x14(%rbp)
    66f7:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 66fd <load_place_regions+0x269>
    66fd:	39 45 dc             	cmp    %eax,-0x24(%rbp)
    6700:	75 3f                	jne    6741 <load_place_regions+0x2ad>
    6702:	f3 0f 5a 4d ec       	cvtss2sd -0x14(%rbp),%xmm1
    6707:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 670e <load_place_regions+0x27a>
    670e:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 6714 <load_place_regions+0x280>
    6714:	48 63 d2             	movslq %edx,%rdx
    6717:	48 c1 e2 02          	shl    $0x2,%rdx
    671b:	48 01 d0             	add    %rdx,%rax
    671e:	8b 00                	mov    (%rax),%eax
    6720:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6724:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    6728:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # 6730 <load_place_regions+0x29c>
    672f:	00 
    6730:	f2 0f 5e c2          	divsd  %xmm2,%xmm0
    6734:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    6738:	f2 0f 5a f8          	cvtsd2ss %xmm0,%xmm7
    673c:	f3 0f 11 7d ec       	movss  %xmm7,-0x14(%rbp)
    6741:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6745:	f3 0f 2a 45 dc       	cvtsi2ssl -0x24(%rbp),%xmm0
    674a:	f3 0f 5c 45 e4       	subss  -0x1c(%rbp),%xmm0
    674f:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 6757 <load_place_regions+0x2c3>
    6756:	00 
    6757:	f3 0f 5c c8          	subss  %xmm0,%xmm1
    675b:	66 0f 7e c8          	movd   %xmm1,%eax
    675f:	89 45 d8             	mov    %eax,-0x28(%rbp)
    6762:	f3 0f 10 45 d8       	movss  -0x28(%rbp),%xmm0
    6767:	f3 0f 59 45 ec       	mulss  -0x14(%rbp),%xmm0
    676c:	f3 0f 10 4d f0       	movss  -0x10(%rbp),%xmm1
    6771:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    6775:	66 0f 7e c8          	movd   %xmm1,%eax
    6779:	89 45 f0             	mov    %eax,-0x10(%rbp)
    677c:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    6783:	e9 bf 00 00 00       	jmpq   6847 <load_place_regions+0x3b3>
    6788:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 678f <load_place_regions+0x2fb>
    678f:	8b 55 fc             	mov    -0x4(%rbp),%edx
    6792:	48 63 d2             	movslq %edx,%rdx
    6795:	48 c1 e2 03          	shl    $0x3,%rdx
    6799:	48 01 d0             	add    %rdx,%rax
    679c:	48 8b 00             	mov    (%rax),%rax
    679f:	8b 55 f8             	mov    -0x8(%rbp),%edx
    67a2:	48 63 d2             	movslq %edx,%rdx
    67a5:	48 c1 e2 04          	shl    $0x4,%rdx
    67a9:	48 01 c2             	add    %rax,%rdx
    67ac:	8b 45 f0             	mov    -0x10(%rbp),%eax
    67af:	89 02                	mov    %eax,(%rdx)
    67b1:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 67b8 <load_place_regions+0x324>
    67b8:	8b 55 fc             	mov    -0x4(%rbp),%edx
    67bb:	48 63 d2             	movslq %edx,%rdx
    67be:	48 c1 e2 03          	shl    $0x3,%rdx
    67c2:	48 01 d0             	add    %rdx,%rax
    67c5:	48 8b 00             	mov    (%rax),%rax
    67c8:	8b 55 f8             	mov    -0x8(%rbp),%edx
    67cb:	48 63 d2             	movslq %edx,%rdx
    67ce:	48 c1 e2 04          	shl    $0x4,%rdx
    67d2:	48 01 c2             	add    %rax,%rdx
    67d5:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 67dd <load_place_regions+0x349>
    67dc:	00 
    67dd:	f3 0f 5e 45 f0       	divss  -0x10(%rbp),%xmm0
    67e2:	66 0f 7e c0          	movd   %xmm0,%eax
    67e6:	89 42 04             	mov    %eax,0x4(%rdx)
    67e9:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 67f0 <load_place_regions+0x35c>
    67f0:	8b 55 fc             	mov    -0x4(%rbp),%edx
    67f3:	48 63 d2             	movslq %edx,%rdx
    67f6:	48 c1 e2 03          	shl    $0x3,%rdx
    67fa:	48 01 d0             	add    %rdx,%rax
    67fd:	48 8b 00             	mov    (%rax),%rax
    6800:	8b 55 f8             	mov    -0x8(%rbp),%edx
    6803:	48 63 d2             	movslq %edx,%rdx
    6806:	48 c1 e2 04          	shl    $0x4,%rdx
    680a:	48 01 c2             	add    %rax,%rdx
    680d:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6813 <load_place_regions+0x37f>
    6813:	89 42 08             	mov    %eax,0x8(%rdx)
    6816:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 681d <load_place_regions+0x389>
    681d:	8b 55 fc             	mov    -0x4(%rbp),%edx
    6820:	48 63 d2             	movslq %edx,%rdx
    6823:	48 c1 e2 03          	shl    $0x3,%rdx
    6827:	48 01 d0             	add    %rdx,%rax
    682a:	48 8b 00             	mov    (%rax),%rax
    682d:	8b 55 f8             	mov    -0x8(%rbp),%edx
    6830:	48 63 d2             	movslq %edx,%rdx
    6833:	48 c1 e2 04          	shl    $0x4,%rdx
    6837:	48 01 c2             	add    %rax,%rdx
    683a:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6840 <load_place_regions+0x3ac>
    6840:	89 42 0c             	mov    %eax,0xc(%rdx)
    6843:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    6847:	8b 45 fc             	mov    -0x4(%rbp),%eax
    684a:	3b 45 cc             	cmp    -0x34(%rbp),%eax
    684d:	0f 8c 35 ff ff ff    	jl     6788 <load_place_regions+0x2f4>
    6853:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    6857:	8b 45 f8             	mov    -0x8(%rbp),%eax
    685a:	3b 45 cc             	cmp    -0x34(%rbp),%eax
    685d:	0f 8c 48 fc ff ff    	jl     64ab <load_place_regions+0x17>
    6863:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    686a:	e9 ac 03 00 00       	jmpq   6c1b <load_place_regions+0x787>
    686f:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6875 <load_place_regions+0x3e1>
    6875:	89 45 f0             	mov    %eax,-0x10(%rbp)
    6878:	66 0f ef c0          	pxor   %xmm0,%xmm0
    687c:	f3 0f 2a 45 fc       	cvtsi2ssl -0x4(%rbp),%xmm0
    6881:	66 0f ef c9          	pxor   %xmm1,%xmm1
    6885:	f3 0f 2a 4d cc       	cvtsi2ssl -0x34(%rbp),%xmm1
    688a:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    688e:	0f 28 c8             	movaps %xmm0,%xmm1
    6891:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6897 <load_place_regions+0x403>
    6897:	66 0f ef c0          	pxor   %xmm0,%xmm0
    689b:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    689f:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
    68a3:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 68ab <load_place_regions+0x417>
    68aa:	00 
    68ab:	f3 0f 58 c1          	addss  %xmm1,%xmm0
    68af:	66 0f 7e c0          	movd   %xmm0,%eax
    68b3:	89 45 e8             	mov    %eax,-0x18(%rbp)
    68b6:	8b 45 fc             	mov    -0x4(%rbp),%eax
    68b9:	83 c0 01             	add    $0x1,%eax
    68bc:	66 0f ef c0          	pxor   %xmm0,%xmm0
    68c0:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    68c4:	66 0f ef c9          	pxor   %xmm1,%xmm1
    68c8:	f3 0f 2a 4d cc       	cvtsi2ssl -0x34(%rbp),%xmm1
    68cd:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    68d1:	0f 28 c8             	movaps %xmm0,%xmm1
    68d4:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 68da <load_place_regions+0x446>
    68da:	66 0f ef c0          	pxor   %xmm0,%xmm0
    68de:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    68e2:	f3 0f 59 c8          	mulss  %xmm0,%xmm1
    68e6:	66 0f 7e c8          	movd   %xmm1,%eax
    68ea:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    68ed:	f3 0f 5a 45 e8       	cvtss2sd -0x18(%rbp),%xmm0
    68f2:	e8 00 00 00 00       	callq  68f7 <load_place_regions+0x463>
    68f7:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    68fb:	89 45 e0             	mov    %eax,-0x20(%rbp)
    68fe:	b8 01 00 00 00       	mov    $0x1,%eax
    6903:	83 7d e0 00          	cmpl   $0x0,-0x20(%rbp)
    6907:	0f 4f 45 e0          	cmovg  -0x20(%rbp),%eax
    690b:	89 45 e0             	mov    %eax,-0x20(%rbp)
    690e:	f3 0f 5a 45 e4       	cvtss2sd -0x1c(%rbp),%xmm0
    6913:	e8 00 00 00 00       	callq  6918 <load_place_regions+0x484>
    6918:	f2 0f 2c c0          	cvttsd2si %xmm0,%eax
    691c:	89 45 dc             	mov    %eax,-0x24(%rbp)
    691f:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6925 <load_place_regions+0x491>
    6925:	39 45 dc             	cmp    %eax,-0x24(%rbp)
    6928:	0f 4e 45 dc          	cmovle -0x24(%rbp),%eax
    692c:	89 45 dc             	mov    %eax,-0x24(%rbp)
    692f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6936 <load_place_regions+0x4a2>
    6936:	8b 55 e0             	mov    -0x20(%rbp),%edx
    6939:	48 63 d2             	movslq %edx,%rdx
    693c:	48 c1 e2 02          	shl    $0x2,%rdx
    6940:	48 83 ea 04          	sub    $0x4,%rdx
    6944:	48 01 d0             	add    %rdx,%rax
    6947:	8b 10                	mov    (%rax),%edx
    6949:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6950 <load_place_regions+0x4bc>
    6950:	8b 4d e0             	mov    -0x20(%rbp),%ecx
    6953:	48 63 c9             	movslq %ecx,%rcx
    6956:	48 c1 e1 02          	shl    $0x2,%rcx
    695a:	48 01 c8             	add    %rcx,%rax
    695d:	8b 00                	mov    (%rax),%eax
    695f:	01 d0                	add    %edx,%eax
    6961:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6965:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    6969:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 6971 <load_place_regions+0x4dd>
    6970:	00 
    6971:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
    6975:	f2 0f 5a d8          	cvtsd2ss %xmm0,%xmm3
    6979:	f3 0f 11 5d ec       	movss  %xmm3,-0x14(%rbp)
    697e:	83 7d e0 01          	cmpl   $0x1,-0x20(%rbp)
    6982:	75 2f                	jne    69b3 <load_place_regions+0x51f>
    6984:	f3 0f 5a 4d ec       	cvtss2sd -0x14(%rbp),%xmm1
    6989:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6990 <load_place_regions+0x4fc>
    6990:	8b 00                	mov    (%rax),%eax
    6992:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6996:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    699a:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # 69a2 <load_place_regions+0x50e>
    69a1:	00 
    69a2:	f2 0f 5e c2          	divsd  %xmm2,%xmm0
    69a6:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    69aa:	f2 0f 5a e0          	cvtsd2ss %xmm0,%xmm4
    69ae:	f3 0f 11 65 ec       	movss  %xmm4,-0x14(%rbp)
    69b3:	66 0f ef c0          	pxor   %xmm0,%xmm0
    69b7:	f3 0f 2a 45 e0       	cvtsi2ssl -0x20(%rbp),%xmm0
    69bc:	f3 0f 10 4d e8       	movss  -0x18(%rbp),%xmm1
    69c1:	f3 0f 5c c8          	subss  %xmm0,%xmm1
    69c5:	0f 28 c1             	movaps %xmm1,%xmm0
    69c8:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 69d0 <load_place_regions+0x53c>
    69cf:	00 
    69d0:	f3 0f 5c c8          	subss  %xmm0,%xmm1
    69d4:	66 0f 7e c8          	movd   %xmm1,%eax
    69d8:	89 45 d8             	mov    %eax,-0x28(%rbp)
    69db:	f3 0f 10 45 d8       	movss  -0x28(%rbp),%xmm0
    69e0:	f3 0f 59 45 ec       	mulss  -0x14(%rbp),%xmm0
    69e5:	f3 0f 10 4d f0       	movss  -0x10(%rbp),%xmm1
    69ea:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    69ee:	66 0f 7e c8          	movd   %xmm1,%eax
    69f2:	89 45 f0             	mov    %eax,-0x10(%rbp)
    69f5:	8b 45 e0             	mov    -0x20(%rbp),%eax
    69f8:	83 c0 01             	add    $0x1,%eax
    69fb:	89 45 f4             	mov    %eax,-0xc(%rbp)
    69fe:	eb 64                	jmp    6a64 <load_place_regions+0x5d0>
    6a00:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6a07 <load_place_regions+0x573>
    6a07:	8b 55 f4             	mov    -0xc(%rbp),%edx
    6a0a:	48 63 d2             	movslq %edx,%rdx
    6a0d:	48 c1 e2 02          	shl    $0x2,%rdx
    6a11:	48 83 ea 04          	sub    $0x4,%rdx
    6a15:	48 01 d0             	add    %rdx,%rax
    6a18:	8b 10                	mov    (%rax),%edx
    6a1a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6a21 <load_place_regions+0x58d>
    6a21:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    6a24:	48 63 c9             	movslq %ecx,%rcx
    6a27:	48 c1 e1 02          	shl    $0x2,%rcx
    6a2b:	48 01 c8             	add    %rcx,%rax
    6a2e:	8b 00                	mov    (%rax),%eax
    6a30:	01 d0                	add    %edx,%eax
    6a32:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6a36:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    6a3a:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 6a42 <load_place_regions+0x5ae>
    6a41:	00 
    6a42:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
    6a46:	f2 0f 5a e8          	cvtsd2ss %xmm0,%xmm5
    6a4a:	f3 0f 11 6d ec       	movss  %xmm5,-0x14(%rbp)
    6a4f:	f3 0f 10 45 f0       	movss  -0x10(%rbp),%xmm0
    6a54:	f3 0f 58 45 ec       	addss  -0x14(%rbp),%xmm0
    6a59:	66 0f 7e c0          	movd   %xmm0,%eax
    6a5d:	89 45 f0             	mov    %eax,-0x10(%rbp)
    6a60:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
    6a64:	8b 45 f4             	mov    -0xc(%rbp),%eax
    6a67:	3b 45 dc             	cmp    -0x24(%rbp),%eax
    6a6a:	7c 94                	jl     6a00 <load_place_regions+0x56c>
    6a6c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6a73 <load_place_regions+0x5df>
    6a73:	8b 55 dc             	mov    -0x24(%rbp),%edx
    6a76:	48 63 d2             	movslq %edx,%rdx
    6a79:	48 c1 e2 02          	shl    $0x2,%rdx
    6a7d:	48 83 ea 04          	sub    $0x4,%rdx
    6a81:	48 01 d0             	add    %rdx,%rax
    6a84:	8b 10                	mov    (%rax),%edx
    6a86:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6a8d <load_place_regions+0x5f9>
    6a8d:	8b 4d dc             	mov    -0x24(%rbp),%ecx
    6a90:	48 63 c9             	movslq %ecx,%rcx
    6a93:	48 c1 e1 02          	shl    $0x2,%rcx
    6a97:	48 01 c8             	add    %rcx,%rax
    6a9a:	8b 00                	mov    (%rax),%eax
    6a9c:	01 d0                	add    %edx,%eax
    6a9e:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6aa2:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    6aa6:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 6aae <load_place_regions+0x61a>
    6aad:	00 
    6aae:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
    6ab2:	f2 0f 5a f0          	cvtsd2ss %xmm0,%xmm6
    6ab6:	f3 0f 11 75 ec       	movss  %xmm6,-0x14(%rbp)
    6abb:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6ac1 <load_place_regions+0x62d>
    6ac1:	39 45 dc             	cmp    %eax,-0x24(%rbp)
    6ac4:	75 3f                	jne    6b05 <load_place_regions+0x671>
    6ac6:	f3 0f 5a 4d ec       	cvtss2sd -0x14(%rbp),%xmm1
    6acb:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6ad2 <load_place_regions+0x63e>
    6ad2:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 6ad8 <load_place_regions+0x644>
    6ad8:	48 63 d2             	movslq %edx,%rdx
    6adb:	48 c1 e2 02          	shl    $0x2,%rdx
    6adf:	48 01 d0             	add    %rdx,%rax
    6ae2:	8b 00                	mov    (%rax),%eax
    6ae4:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6ae8:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    6aec:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # 6af4 <load_place_regions+0x660>
    6af3:	00 
    6af4:	f2 0f 5e c2          	divsd  %xmm2,%xmm0
    6af8:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    6afc:	f2 0f 5a f8          	cvtsd2ss %xmm0,%xmm7
    6b00:	f3 0f 11 7d ec       	movss  %xmm7,-0x14(%rbp)
    6b05:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6b09:	f3 0f 2a 45 dc       	cvtsi2ssl -0x24(%rbp),%xmm0
    6b0e:	f3 0f 5c 45 e4       	subss  -0x1c(%rbp),%xmm0
    6b13:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 6b1b <load_place_regions+0x687>
    6b1a:	00 
    6b1b:	f3 0f 5c c8          	subss  %xmm0,%xmm1
    6b1f:	66 0f 7e c8          	movd   %xmm1,%eax
    6b23:	89 45 d8             	mov    %eax,-0x28(%rbp)
    6b26:	f3 0f 10 45 d8       	movss  -0x28(%rbp),%xmm0
    6b2b:	f3 0f 59 45 ec       	mulss  -0x14(%rbp),%xmm0
    6b30:	f3 0f 10 4d f0       	movss  -0x10(%rbp),%xmm1
    6b35:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    6b39:	66 0f 7e c8          	movd   %xmm1,%eax
    6b3d:	89 45 f0             	mov    %eax,-0x10(%rbp)
    6b40:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    6b47:	e9 bf 00 00 00       	jmpq   6c0b <load_place_regions+0x777>
    6b4c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6b53 <load_place_regions+0x6bf>
    6b53:	8b 55 fc             	mov    -0x4(%rbp),%edx
    6b56:	48 63 d2             	movslq %edx,%rdx
    6b59:	48 c1 e2 03          	shl    $0x3,%rdx
    6b5d:	48 01 d0             	add    %rdx,%rax
    6b60:	48 8b 00             	mov    (%rax),%rax
    6b63:	8b 55 f8             	mov    -0x8(%rbp),%edx
    6b66:	48 63 d2             	movslq %edx,%rdx
    6b69:	48 c1 e2 04          	shl    $0x4,%rdx
    6b6d:	48 01 c2             	add    %rax,%rdx
    6b70:	8b 45 f0             	mov    -0x10(%rbp),%eax
    6b73:	89 02                	mov    %eax,(%rdx)
    6b75:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6b7c <load_place_regions+0x6e8>
    6b7c:	8b 55 fc             	mov    -0x4(%rbp),%edx
    6b7f:	48 63 d2             	movslq %edx,%rdx
    6b82:	48 c1 e2 03          	shl    $0x3,%rdx
    6b86:	48 01 d0             	add    %rdx,%rax
    6b89:	48 8b 00             	mov    (%rax),%rax
    6b8c:	8b 55 f8             	mov    -0x8(%rbp),%edx
    6b8f:	48 63 d2             	movslq %edx,%rdx
    6b92:	48 c1 e2 04          	shl    $0x4,%rdx
    6b96:	48 01 c2             	add    %rax,%rdx
    6b99:	f3 0f 10 05 00 00 00 	movss  0x0(%rip),%xmm0        # 6ba1 <load_place_regions+0x70d>
    6ba0:	00 
    6ba1:	f3 0f 5e 45 f0       	divss  -0x10(%rbp),%xmm0
    6ba6:	66 0f 7e c0          	movd   %xmm0,%eax
    6baa:	89 42 04             	mov    %eax,0x4(%rdx)
    6bad:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6bb4 <load_place_regions+0x720>
    6bb4:	8b 55 fc             	mov    -0x4(%rbp),%edx
    6bb7:	48 63 d2             	movslq %edx,%rdx
    6bba:	48 c1 e2 03          	shl    $0x3,%rdx
    6bbe:	48 01 d0             	add    %rdx,%rax
    6bc1:	48 8b 00             	mov    (%rax),%rax
    6bc4:	8b 55 f8             	mov    -0x8(%rbp),%edx
    6bc7:	48 63 d2             	movslq %edx,%rdx
    6bca:	48 c1 e2 04          	shl    $0x4,%rdx
    6bce:	48 01 c2             	add    %rax,%rdx
    6bd1:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6bd7 <load_place_regions+0x743>
    6bd7:	89 42 08             	mov    %eax,0x8(%rdx)
    6bda:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6be1 <load_place_regions+0x74d>
    6be1:	8b 55 fc             	mov    -0x4(%rbp),%edx
    6be4:	48 63 d2             	movslq %edx,%rdx
    6be7:	48 c1 e2 03          	shl    $0x3,%rdx
    6beb:	48 01 d0             	add    %rdx,%rax
    6bee:	48 8b 00             	mov    (%rax),%rax
    6bf1:	8b 55 f8             	mov    -0x8(%rbp),%edx
    6bf4:	48 63 d2             	movslq %edx,%rdx
    6bf7:	48 c1 e2 04          	shl    $0x4,%rdx
    6bfb:	48 01 c2             	add    %rax,%rdx
    6bfe:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6c04 <load_place_regions+0x770>
    6c04:	89 42 0c             	mov    %eax,0xc(%rdx)
    6c07:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    6c0b:	8b 45 f8             	mov    -0x8(%rbp),%eax
    6c0e:	3b 45 cc             	cmp    -0x34(%rbp),%eax
    6c11:	0f 8c 35 ff ff ff    	jl     6b4c <load_place_regions+0x6b8>
    6c17:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    6c1b:	8b 45 fc             	mov    -0x4(%rbp),%eax
    6c1e:	3b 45 cc             	cmp    -0x34(%rbp),%eax
    6c21:	0f 8c 48 fc ff ff    	jl     686f <load_place_regions+0x3db>
    6c27:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6c2d <load_place_regions+0x799>
    6c2d:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6c31:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    6c35:	66 0f ef c9          	pxor   %xmm1,%xmm1
    6c39:	f3 0f 2a 4d cc       	cvtsi2ssl -0x34(%rbp),%xmm1
    6c3e:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    6c42:	66 0f 7e c0          	movd   %xmm0,%eax
    6c46:	89 45 d4             	mov    %eax,-0x2c(%rbp)
    6c49:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6c4f <load_place_regions+0x7bb>
    6c4f:	66 0f ef c0          	pxor   %xmm0,%xmm0
    6c53:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    6c57:	66 0f ef c9          	pxor   %xmm1,%xmm1
    6c5b:	f3 0f 2a 4d cc       	cvtsi2ssl -0x34(%rbp),%xmm1
    6c60:	f3 0f 5e c1          	divss  %xmm1,%xmm0
    6c64:	66 0f 7e c0          	movd   %xmm0,%eax
    6c68:	89 45 d0             	mov    %eax,-0x30(%rbp)
    6c6b:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 6c72 <load_place_regions+0x7de>
    6c72:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6c78 <load_place_regions+0x7e4>
    6c78:	89 02                	mov    %eax,(%rdx)
    6c7a:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 6c81 <load_place_regions+0x7ed>
    6c81:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6c87 <load_place_regions+0x7f3>
    6c87:	89 02                	mov    %eax,(%rdx)
    6c89:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%rbp)
    6c90:	eb 7a                	jmp    6d0c <load_place_regions+0x878>
    6c92:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6c99 <load_place_regions+0x805>
    6c99:	8b 55 fc             	mov    -0x4(%rbp),%edx
    6c9c:	48 63 d2             	movslq %edx,%rdx
    6c9f:	48 c1 e2 02          	shl    $0x2,%rdx
    6ca3:	48 01 c2             	add    %rax,%rdx
    6ca6:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6cad <load_place_regions+0x819>
    6cad:	8b 4d fc             	mov    -0x4(%rbp),%ecx
    6cb0:	48 63 c9             	movslq %ecx,%rcx
    6cb3:	48 c1 e1 02          	shl    $0x2,%rcx
    6cb7:	48 83 e9 04          	sub    $0x4,%rcx
    6cbb:	48 01 c8             	add    %rcx,%rax
    6cbe:	f3 0f 10 00          	movss  (%rax),%xmm0
    6cc2:	f3 0f 58 45 d4       	addss  -0x2c(%rbp),%xmm0
    6cc7:	66 0f 7e c0          	movd   %xmm0,%eax
    6ccb:	89 02                	mov    %eax,(%rdx)
    6ccd:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6cd4 <load_place_regions+0x840>
    6cd4:	8b 55 fc             	mov    -0x4(%rbp),%edx
    6cd7:	48 63 d2             	movslq %edx,%rdx
    6cda:	48 c1 e2 02          	shl    $0x2,%rdx
    6cde:	48 01 c2             	add    %rax,%rdx
    6ce1:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6ce8 <load_place_regions+0x854>
    6ce8:	8b 4d fc             	mov    -0x4(%rbp),%ecx
    6ceb:	48 63 c9             	movslq %ecx,%rcx
    6cee:	48 c1 e1 02          	shl    $0x2,%rcx
    6cf2:	48 83 e9 04          	sub    $0x4,%rcx
    6cf6:	48 01 c8             	add    %rcx,%rax
    6cf9:	f3 0f 10 00          	movss  (%rax),%xmm0
    6cfd:	f3 0f 58 45 d0       	addss  -0x30(%rbp),%xmm0
    6d02:	66 0f 7e c0          	movd   %xmm0,%eax
    6d06:	89 02                	mov    %eax,(%rdx)
    6d08:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    6d0c:	8b 45 fc             	mov    -0x4(%rbp),%eax
    6d0f:	3b 45 cc             	cmp    -0x34(%rbp),%eax
    6d12:	0f 8e 7a ff ff ff    	jle    6c92 <load_place_regions+0x7fe>
    6d18:	c9                   	leaveq 
    6d19:	c3                   	retq   

0000000000006d1a <free_unique_pin_list>:
    6d1a:	55                   	push   %rbp
    6d1b:	48 89 e5             	mov    %rsp,%rbp
    6d1e:	48 83 ec 10          	sub    $0x10,%rsp
    6d22:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    6d29:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    6d30:	eb 44                	jmp    6d76 <free_unique_pin_list+0x5c>
    6d32:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6d39 <free_unique_pin_list+0x1f>
    6d39:	8b 55 f8             	mov    -0x8(%rbp),%edx
    6d3c:	48 63 d2             	movslq %edx,%rdx
    6d3f:	48 c1 e2 02          	shl    $0x2,%rdx
    6d43:	48 01 d0             	add    %rdx,%rax
    6d46:	8b 00                	mov    (%rax),%eax
    6d48:	85 c0                	test   %eax,%eax
    6d4a:	74 26                	je     6d72 <free_unique_pin_list+0x58>
    6d4c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6d53 <free_unique_pin_list+0x39>
    6d53:	8b 55 f8             	mov    -0x8(%rbp),%edx
    6d56:	48 63 d2             	movslq %edx,%rdx
    6d59:	48 c1 e2 03          	shl    $0x3,%rdx
    6d5d:	48 01 d0             	add    %rdx,%rax
    6d60:	48 8b 00             	mov    (%rax),%rax
    6d63:	48 89 c7             	mov    %rax,%rdi
    6d66:	e8 00 00 00 00       	callq  6d6b <free_unique_pin_list+0x51>
    6d6b:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%rbp)
    6d72:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    6d76:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6d7c <free_unique_pin_list+0x62>
    6d7c:	39 45 f8             	cmp    %eax,-0x8(%rbp)
    6d7f:	7c b1                	jl     6d32 <free_unique_pin_list+0x18>
    6d81:	83 7d fc 00          	cmpl   $0x0,-0x4(%rbp)
    6d85:	74 0f                	je     6d96 <free_unique_pin_list+0x7c>
    6d87:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6d8e <free_unique_pin_list+0x74>
    6d8e:	48 89 c7             	mov    %rax,%rdi
    6d91:	e8 00 00 00 00       	callq  6d96 <free_unique_pin_list+0x7c>
    6d96:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6d9d <free_unique_pin_list+0x83>
    6d9d:	48 89 c7             	mov    %rax,%rdi
    6da0:	e8 00 00 00 00       	callq  6da5 <free_unique_pin_list+0x8b>
    6da5:	c9                   	leaveq 
    6da6:	c3                   	retq   

0000000000006da7 <alloc_and_load_unique_pin_list>:
    6da7:	55                   	push   %rbp
    6da8:	48 89 e5             	mov    %rsp,%rbp
    6dab:	53                   	push   %rbx
    6dac:	48 83 ec 38          	sub    $0x38,%rsp
    6db0:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6db6 <alloc_and_load_unique_pin_list+0xf>
    6db6:	48 98                	cltq   
    6db8:	be 04 00 00 00       	mov    $0x4,%esi
    6dbd:	48 89 c7             	mov    %rax,%rdi
    6dc0:	e8 00 00 00 00       	callq  6dc5 <alloc_and_load_unique_pin_list+0x1e>
    6dc5:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 6dcc <alloc_and_load_unique_pin_list+0x25>
    6dcc:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6dd2 <alloc_and_load_unique_pin_list+0x2b>
    6dd2:	48 98                	cltq   
    6dd4:	be 04 00 00 00       	mov    $0x4,%esi
    6dd9:	48 89 c7             	mov    %rax,%rdi
    6ddc:	e8 00 00 00 00       	callq  6de1 <alloc_and_load_unique_pin_list+0x3a>
    6de1:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    6de5:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%rbp)
    6dec:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    6df3:	e9 a5 02 00 00       	jmpq   709d <alloc_and_load_unique_pin_list+0x2f6>
    6df8:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%rbp)
    6dff:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    6e06:	eb 72                	jmp    6e7a <alloc_and_load_unique_pin_list+0xd3>
    6e08:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 6e0f <alloc_and_load_unique_pin_list+0x68>
    6e0f:	8b 45 ec             	mov    -0x14(%rbp),%eax
    6e12:	48 63 d0             	movslq %eax,%rdx
    6e15:	48 89 d0             	mov    %rdx,%rax
    6e18:	48 c1 e0 02          	shl    $0x2,%rax
    6e1c:	48 01 d0             	add    %rdx,%rax
    6e1f:	48 c1 e0 03          	shl    $0x3,%rax
    6e23:	48 01 c8             	add    %rcx,%rax
    6e26:	48 8b 40 10          	mov    0x10(%rax),%rax
    6e2a:	8b 55 e8             	mov    -0x18(%rbp),%edx
    6e2d:	48 63 d2             	movslq %edx,%rdx
    6e30:	48 c1 e2 02          	shl    $0x2,%rdx
    6e34:	48 01 d0             	add    %rdx,%rax
    6e37:	8b 00                	mov    (%rax),%eax
    6e39:	89 45 cc             	mov    %eax,-0x34(%rbp)
    6e3c:	8b 45 cc             	mov    -0x34(%rbp),%eax
    6e3f:	48 98                	cltq   
    6e41:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    6e48:	00 
    6e49:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    6e4d:	48 01 d0             	add    %rdx,%rax
    6e50:	8b 10                	mov    (%rax),%edx
    6e52:	83 c2 01             	add    $0x1,%edx
    6e55:	89 10                	mov    %edx,(%rax)
    6e57:	8b 45 cc             	mov    -0x34(%rbp),%eax
    6e5a:	48 98                	cltq   
    6e5c:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    6e63:	00 
    6e64:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    6e68:	48 01 d0             	add    %rdx,%rax
    6e6b:	8b 00                	mov    (%rax),%eax
    6e6d:	83 f8 01             	cmp    $0x1,%eax
    6e70:	7e 04                	jle    6e76 <alloc_and_load_unique_pin_list+0xcf>
    6e72:	83 45 e4 01          	addl   $0x1,-0x1c(%rbp)
    6e76:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    6e7a:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 6e81 <alloc_and_load_unique_pin_list+0xda>
    6e81:	8b 45 ec             	mov    -0x14(%rbp),%eax
    6e84:	48 63 d0             	movslq %eax,%rdx
    6e87:	48 89 d0             	mov    %rdx,%rax
    6e8a:	48 c1 e0 02          	shl    $0x2,%rax
    6e8e:	48 01 d0             	add    %rdx,%rax
    6e91:	48 c1 e0 03          	shl    $0x3,%rax
    6e95:	48 01 c8             	add    %rcx,%rax
    6e98:	8b 40 08             	mov    0x8(%rax),%eax
    6e9b:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    6e9e:	0f 8d 64 ff ff ff    	jge    6e08 <alloc_and_load_unique_pin_list+0x61>
    6ea4:	83 7d e4 00          	cmpl   $0x0,-0x1c(%rbp)
    6ea8:	0f 8e 6a 01 00 00    	jle    7018 <alloc_and_load_unique_pin_list+0x271>
    6eae:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6eb5 <alloc_and_load_unique_pin_list+0x10e>
    6eb5:	8b 55 ec             	mov    -0x14(%rbp),%edx
    6eb8:	48 63 d2             	movslq %edx,%rdx
    6ebb:	48 c1 e2 02          	shl    $0x2,%rdx
    6ebf:	48 01 c2             	add    %rax,%rdx
    6ec2:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    6ec5:	89 02                	mov    %eax,(%rdx)
    6ec7:	83 7d e0 00          	cmpl   $0x0,-0x20(%rbp)
    6ecb:	75 23                	jne    6ef0 <alloc_and_load_unique_pin_list+0x149>
    6ecd:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 6ed3 <alloc_and_load_unique_pin_list+0x12c>
    6ed3:	48 98                	cltq   
    6ed5:	be 08 00 00 00       	mov    $0x8,%esi
    6eda:	48 89 c7             	mov    %rax,%rdi
    6edd:	e8 00 00 00 00       	callq  6ee2 <alloc_and_load_unique_pin_list+0x13b>
    6ee2:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 6ee9 <alloc_and_load_unique_pin_list+0x142>
    6ee9:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%rbp)
    6ef0:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6ef7 <alloc_and_load_unique_pin_list+0x150>
    6ef7:	8b 55 ec             	mov    -0x14(%rbp),%edx
    6efa:	48 63 d2             	movslq %edx,%rdx
    6efd:	48 c1 e2 03          	shl    $0x3,%rdx
    6f01:	48 8d 1c 10          	lea    (%rax,%rdx,1),%rbx
    6f05:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 6f0c <alloc_and_load_unique_pin_list+0x165>
    6f0c:	8b 45 ec             	mov    -0x14(%rbp),%eax
    6f0f:	48 63 d0             	movslq %eax,%rdx
    6f12:	48 89 d0             	mov    %rdx,%rax
    6f15:	48 c1 e0 02          	shl    $0x2,%rax
    6f19:	48 01 d0             	add    %rdx,%rax
    6f1c:	48 c1 e0 03          	shl    $0x3,%rax
    6f20:	48 01 c8             	add    %rcx,%rax
    6f23:	8b 40 08             	mov    0x8(%rax),%eax
    6f26:	83 c0 01             	add    $0x1,%eax
    6f29:	2b 45 e4             	sub    -0x1c(%rbp),%eax
    6f2c:	48 98                	cltq   
    6f2e:	48 c1 e0 02          	shl    $0x2,%rax
    6f32:	48 89 c7             	mov    %rax,%rdi
    6f35:	e8 00 00 00 00       	callq  6f3a <alloc_and_load_unique_pin_list+0x193>
    6f3a:	48 89 03             	mov    %rax,(%rbx)
    6f3d:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%rbp)
    6f44:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    6f4b:	e9 99 00 00 00       	jmpq   6fe9 <alloc_and_load_unique_pin_list+0x242>
    6f50:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 6f57 <alloc_and_load_unique_pin_list+0x1b0>
    6f57:	8b 45 ec             	mov    -0x14(%rbp),%eax
    6f5a:	48 63 d0             	movslq %eax,%rdx
    6f5d:	48 89 d0             	mov    %rdx,%rax
    6f60:	48 c1 e0 02          	shl    $0x2,%rax
    6f64:	48 01 d0             	add    %rdx,%rax
    6f67:	48 c1 e0 03          	shl    $0x3,%rax
    6f6b:	48 01 c8             	add    %rcx,%rax
    6f6e:	48 8b 40 10          	mov    0x10(%rax),%rax
    6f72:	8b 55 e8             	mov    -0x18(%rbp),%edx
    6f75:	48 63 d2             	movslq %edx,%rdx
    6f78:	48 c1 e2 02          	shl    $0x2,%rdx
    6f7c:	48 01 d0             	add    %rdx,%rax
    6f7f:	8b 00                	mov    (%rax),%eax
    6f81:	89 45 cc             	mov    %eax,-0x34(%rbp)
    6f84:	8b 45 cc             	mov    -0x34(%rbp),%eax
    6f87:	48 98                	cltq   
    6f89:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    6f90:	00 
    6f91:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    6f95:	48 01 d0             	add    %rdx,%rax
    6f98:	8b 00                	mov    (%rax),%eax
    6f9a:	85 c0                	test   %eax,%eax
    6f9c:	74 47                	je     6fe5 <alloc_and_load_unique_pin_list+0x23e>
    6f9e:	8b 45 cc             	mov    -0x34(%rbp),%eax
    6fa1:	48 98                	cltq   
    6fa3:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    6faa:	00 
    6fab:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    6faf:	48 01 d0             	add    %rdx,%rax
    6fb2:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
    6fb8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 6fbf <alloc_and_load_unique_pin_list+0x218>
    6fbf:	8b 55 ec             	mov    -0x14(%rbp),%edx
    6fc2:	48 63 d2             	movslq %edx,%rdx
    6fc5:	48 c1 e2 03          	shl    $0x3,%rdx
    6fc9:	48 01 d0             	add    %rdx,%rax
    6fcc:	48 8b 00             	mov    (%rax),%rax
    6fcf:	8b 55 dc             	mov    -0x24(%rbp),%edx
    6fd2:	48 63 d2             	movslq %edx,%rdx
    6fd5:	48 c1 e2 02          	shl    $0x2,%rdx
    6fd9:	48 01 c2             	add    %rax,%rdx
    6fdc:	8b 45 cc             	mov    -0x34(%rbp),%eax
    6fdf:	89 02                	mov    %eax,(%rdx)
    6fe1:	83 45 dc 01          	addl   $0x1,-0x24(%rbp)
    6fe5:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    6fe9:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 6ff0 <alloc_and_load_unique_pin_list+0x249>
    6ff0:	8b 45 ec             	mov    -0x14(%rbp),%eax
    6ff3:	48 63 d0             	movslq %eax,%rdx
    6ff6:	48 89 d0             	mov    %rdx,%rax
    6ff9:	48 c1 e0 02          	shl    $0x2,%rax
    6ffd:	48 01 d0             	add    %rdx,%rax
    7000:	48 c1 e0 03          	shl    $0x3,%rax
    7004:	48 01 c8             	add    %rcx,%rax
    7007:	8b 40 08             	mov    0x8(%rax),%eax
    700a:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    700d:	0f 8d 3d ff ff ff    	jge    6f50 <alloc_and_load_unique_pin_list+0x1a9>
    7013:	e9 81 00 00 00       	jmpq   7099 <alloc_and_load_unique_pin_list+0x2f2>
    7018:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    701f:	eb 52                	jmp    7073 <alloc_and_load_unique_pin_list+0x2cc>
    7021:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 7028 <alloc_and_load_unique_pin_list+0x281>
    7028:	8b 45 ec             	mov    -0x14(%rbp),%eax
    702b:	48 63 d0             	movslq %eax,%rdx
    702e:	48 89 d0             	mov    %rdx,%rax
    7031:	48 c1 e0 02          	shl    $0x2,%rax
    7035:	48 01 d0             	add    %rdx,%rax
    7038:	48 c1 e0 03          	shl    $0x3,%rax
    703c:	48 01 c8             	add    %rcx,%rax
    703f:	48 8b 40 10          	mov    0x10(%rax),%rax
    7043:	8b 55 e8             	mov    -0x18(%rbp),%edx
    7046:	48 63 d2             	movslq %edx,%rdx
    7049:	48 c1 e2 02          	shl    $0x2,%rdx
    704d:	48 01 d0             	add    %rdx,%rax
    7050:	8b 00                	mov    (%rax),%eax
    7052:	89 45 cc             	mov    %eax,-0x34(%rbp)
    7055:	8b 45 cc             	mov    -0x34(%rbp),%eax
    7058:	48 98                	cltq   
    705a:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    7061:	00 
    7062:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    7066:	48 01 d0             	add    %rdx,%rax
    7069:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
    706f:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    7073:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 707a <alloc_and_load_unique_pin_list+0x2d3>
    707a:	8b 45 ec             	mov    -0x14(%rbp),%eax
    707d:	48 63 d0             	movslq %eax,%rdx
    7080:	48 89 d0             	mov    %rdx,%rax
    7083:	48 c1 e0 02          	shl    $0x2,%rax
    7087:	48 01 d0             	add    %rdx,%rax
    708a:	48 c1 e0 03          	shl    $0x3,%rax
    708e:	48 01 c8             	add    %rcx,%rax
    7091:	8b 40 08             	mov    0x8(%rax),%eax
    7094:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    7097:	7d 88                	jge    7021 <alloc_and_load_unique_pin_list+0x27a>
    7099:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    709d:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 70a3 <alloc_and_load_unique_pin_list+0x2fc>
    70a3:	39 45 ec             	cmp    %eax,-0x14(%rbp)
    70a6:	0f 8c 4c fd ff ff    	jl     6df8 <alloc_and_load_unique_pin_list+0x51>
    70ac:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    70b0:	48 89 c7             	mov    %rax,%rdi
    70b3:	e8 00 00 00 00       	callq  70b8 <alloc_and_load_unique_pin_list+0x311>
    70b8:	48 83 c4 38          	add    $0x38,%rsp
    70bc:	5b                   	pop    %rbx
    70bd:	5d                   	pop    %rbp
    70be:	c3                   	retq   

00000000000070bf <get_bb_from_scratch>:
    70bf:	55                   	push   %rbp
    70c0:	48 89 e5             	mov    %rsp,%rbp
    70c3:	89 7d bc             	mov    %edi,-0x44(%rbp)
    70c6:	48 89 75 b0          	mov    %rsi,-0x50(%rbp)
    70ca:	48 89 55 a8          	mov    %rdx,-0x58(%rbp)
    70ce:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 70d5 <get_bb_from_scratch+0x16>
    70d5:	8b 55 bc             	mov    -0x44(%rbp),%edx
    70d8:	48 63 d2             	movslq %edx,%rdx
    70db:	48 c1 e2 02          	shl    $0x2,%rdx
    70df:	48 01 d0             	add    %rdx,%rax
    70e2:	8b 00                	mov    (%rax),%eax
    70e4:	85 c0                	test   %eax,%eax
    70e6:	75 4f                	jne    7137 <get_bb_from_scratch+0x78>
    70e8:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 70ef <get_bb_from_scratch+0x30>
    70ef:	8b 45 bc             	mov    -0x44(%rbp),%eax
    70f2:	48 63 d0             	movslq %eax,%rdx
    70f5:	48 89 d0             	mov    %rdx,%rax
    70f8:	48 c1 e0 02          	shl    $0x2,%rax
    70fc:	48 01 d0             	add    %rdx,%rax
    70ff:	48 c1 e0 03          	shl    $0x3,%rax
    7103:	48 01 c8             	add    %rcx,%rax
    7106:	48 8b 40 10          	mov    0x10(%rax),%rax
    710a:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    710e:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 7115 <get_bb_from_scratch+0x56>
    7115:	8b 45 bc             	mov    -0x44(%rbp),%eax
    7118:	48 63 d0             	movslq %eax,%rdx
    711b:	48 89 d0             	mov    %rdx,%rax
    711e:	48 c1 e0 02          	shl    $0x2,%rax
    7122:	48 01 d0             	add    %rdx,%rax
    7125:	48 c1 e0 03          	shl    $0x3,%rax
    7129:	48 01 c8             	add    %rcx,%rax
    712c:	8b 40 08             	mov    0x8(%rax),%eax
    712f:	83 c0 01             	add    $0x1,%eax
    7132:	89 45 d8             	mov    %eax,-0x28(%rbp)
    7135:	eb 5c                	jmp    7193 <get_bb_from_scratch+0xd4>
    7137:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 713e <get_bb_from_scratch+0x7f>
    713e:	8b 55 bc             	mov    -0x44(%rbp),%edx
    7141:	48 63 d2             	movslq %edx,%rdx
    7144:	48 c1 e2 03          	shl    $0x3,%rdx
    7148:	48 01 d0             	add    %rdx,%rax
    714b:	48 8b 00             	mov    (%rax),%rax
    714e:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    7152:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 7159 <get_bb_from_scratch+0x9a>
    7159:	8b 45 bc             	mov    -0x44(%rbp),%eax
    715c:	48 63 d0             	movslq %eax,%rdx
    715f:	48 89 d0             	mov    %rdx,%rax
    7162:	48 c1 e0 02          	shl    $0x2,%rax
    7166:	48 01 d0             	add    %rdx,%rax
    7169:	48 c1 e0 03          	shl    $0x3,%rax
    716d:	48 01 c8             	add    %rcx,%rax
    7170:	8b 40 08             	mov    0x8(%rax),%eax
    7173:	8d 48 01             	lea    0x1(%rax),%ecx
    7176:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 717d <get_bb_from_scratch+0xbe>
    717d:	8b 55 bc             	mov    -0x44(%rbp),%edx
    7180:	48 63 d2             	movslq %edx,%rdx
    7183:	48 c1 e2 02          	shl    $0x2,%rdx
    7187:	48 01 d0             	add    %rdx,%rax
    718a:	8b 00                	mov    (%rax),%eax
    718c:	29 c1                	sub    %eax,%ecx
    718e:	89 c8                	mov    %ecx,%eax
    7190:	89 45 d8             	mov    %eax,-0x28(%rbp)
    7193:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 719a <get_bb_from_scratch+0xdb>
    719a:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    719e:	8b 00                	mov    (%rax),%eax
    71a0:	48 63 d0             	movslq %eax,%rdx
    71a3:	48 89 d0             	mov    %rdx,%rax
    71a6:	48 c1 e0 02          	shl    $0x2,%rax
    71aa:	48 01 d0             	add    %rdx,%rax
    71ad:	48 c1 e0 03          	shl    $0x3,%rax
    71b1:	48 01 c8             	add    %rcx,%rax
    71b4:	8b 40 18             	mov    0x18(%rax),%eax
    71b7:	89 45 cc             	mov    %eax,-0x34(%rbp)
    71ba:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 71c1 <get_bb_from_scratch+0x102>
    71c1:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    71c5:	8b 00                	mov    (%rax),%eax
    71c7:	48 63 d0             	movslq %eax,%rdx
    71ca:	48 89 d0             	mov    %rdx,%rax
    71cd:	48 c1 e0 02          	shl    $0x2,%rax
    71d1:	48 01 d0             	add    %rdx,%rax
    71d4:	48 c1 e0 03          	shl    $0x3,%rax
    71d8:	48 01 c8             	add    %rcx,%rax
    71db:	8b 40 1c             	mov    0x1c(%rax),%eax
    71de:	89 45 c8             	mov    %eax,-0x38(%rbp)
    71e1:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 71e7 <get_bb_from_scratch+0x128>
    71e7:	39 45 cc             	cmp    %eax,-0x34(%rbp)
    71ea:	0f 4e 45 cc          	cmovle -0x34(%rbp),%eax
    71ee:	ba 01 00 00 00       	mov    $0x1,%edx
    71f3:	85 c0                	test   %eax,%eax
    71f5:	0f 4e c2             	cmovle %edx,%eax
    71f8:	89 45 cc             	mov    %eax,-0x34(%rbp)
    71fb:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 7201 <get_bb_from_scratch+0x142>
    7201:	39 45 c8             	cmp    %eax,-0x38(%rbp)
    7204:	0f 4e 45 c8          	cmovle -0x38(%rbp),%eax
    7208:	ba 01 00 00 00       	mov    $0x1,%edx
    720d:	85 c0                	test   %eax,%eax
    720f:	0f 4e c2             	cmovle %edx,%eax
    7212:	89 45 c8             	mov    %eax,-0x38(%rbp)
    7215:	8b 45 cc             	mov    -0x34(%rbp),%eax
    7218:	89 45 f8             	mov    %eax,-0x8(%rbp)
    721b:	8b 45 c8             	mov    -0x38(%rbp),%eax
    721e:	89 45 f0             	mov    %eax,-0x10(%rbp)
    7221:	8b 45 cc             	mov    -0x34(%rbp),%eax
    7224:	89 45 f4             	mov    %eax,-0xc(%rbp)
    7227:	8b 45 c8             	mov    -0x38(%rbp),%eax
    722a:	89 45 ec             	mov    %eax,-0x14(%rbp)
    722d:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%rbp)
    7234:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%rbp)
    723b:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%rbp)
    7242:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%rbp)
    7249:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%rbp)
    7250:	e9 25 01 00 00       	jmpq   737a <get_bb_from_scratch+0x2bb>
    7255:	8b 45 fc             	mov    -0x4(%rbp),%eax
    7258:	48 98                	cltq   
    725a:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    7261:	00 
    7262:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    7266:	48 01 d0             	add    %rdx,%rax
    7269:	8b 00                	mov    (%rax),%eax
    726b:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    726e:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 7275 <get_bb_from_scratch+0x1b6>
    7275:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    7278:	48 63 d0             	movslq %eax,%rdx
    727b:	48 89 d0             	mov    %rdx,%rax
    727e:	48 c1 e0 02          	shl    $0x2,%rax
    7282:	48 01 d0             	add    %rdx,%rax
    7285:	48 c1 e0 03          	shl    $0x3,%rax
    7289:	48 01 c8             	add    %rcx,%rax
    728c:	8b 40 18             	mov    0x18(%rax),%eax
    728f:	89 45 cc             	mov    %eax,-0x34(%rbp)
    7292:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 7299 <get_bb_from_scratch+0x1da>
    7299:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    729c:	48 63 d0             	movslq %eax,%rdx
    729f:	48 89 d0             	mov    %rdx,%rax
    72a2:	48 c1 e0 02          	shl    $0x2,%rax
    72a6:	48 01 d0             	add    %rdx,%rax
    72a9:	48 c1 e0 03          	shl    $0x3,%rax
    72ad:	48 01 c8             	add    %rcx,%rax
    72b0:	8b 40 1c             	mov    0x1c(%rax),%eax
    72b3:	89 45 c8             	mov    %eax,-0x38(%rbp)
    72b6:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 72bc <get_bb_from_scratch+0x1fd>
    72bc:	39 45 cc             	cmp    %eax,-0x34(%rbp)
    72bf:	0f 4e 45 cc          	cmovle -0x34(%rbp),%eax
    72c3:	ba 01 00 00 00       	mov    $0x1,%edx
    72c8:	85 c0                	test   %eax,%eax
    72ca:	0f 4e c2             	cmovle %edx,%eax
    72cd:	89 45 cc             	mov    %eax,-0x34(%rbp)
    72d0:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 72d6 <get_bb_from_scratch+0x217>
    72d6:	39 45 c8             	cmp    %eax,-0x38(%rbp)
    72d9:	0f 4e 45 c8          	cmovle -0x38(%rbp),%eax
    72dd:	ba 01 00 00 00       	mov    $0x1,%edx
    72e2:	85 c0                	test   %eax,%eax
    72e4:	0f 4e c2             	cmovle %edx,%eax
    72e7:	89 45 c8             	mov    %eax,-0x38(%rbp)
    72ea:	8b 45 cc             	mov    -0x34(%rbp),%eax
    72ed:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    72f0:	75 04                	jne    72f6 <get_bb_from_scratch+0x237>
    72f2:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    72f6:	8b 45 cc             	mov    -0x34(%rbp),%eax
    72f9:	3b 45 f4             	cmp    -0xc(%rbp),%eax
    72fc:	75 06                	jne    7304 <get_bb_from_scratch+0x245>
    72fe:	83 45 e4 01          	addl   $0x1,-0x1c(%rbp)
    7302:	eb 2c                	jmp    7330 <get_bb_from_scratch+0x271>
    7304:	8b 45 cc             	mov    -0x34(%rbp),%eax
    7307:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    730a:	7d 0f                	jge    731b <get_bb_from_scratch+0x25c>
    730c:	8b 45 cc             	mov    -0x34(%rbp),%eax
    730f:	89 45 f8             	mov    %eax,-0x8(%rbp)
    7312:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%rbp)
    7319:	eb 15                	jmp    7330 <get_bb_from_scratch+0x271>
    731b:	8b 45 cc             	mov    -0x34(%rbp),%eax
    731e:	3b 45 f4             	cmp    -0xc(%rbp),%eax
    7321:	7e 0d                	jle    7330 <get_bb_from_scratch+0x271>
    7323:	8b 45 cc             	mov    -0x34(%rbp),%eax
    7326:	89 45 f4             	mov    %eax,-0xc(%rbp)
    7329:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%rbp)
    7330:	8b 45 c8             	mov    -0x38(%rbp),%eax
    7333:	3b 45 f0             	cmp    -0x10(%rbp),%eax
    7336:	75 04                	jne    733c <get_bb_from_scratch+0x27d>
    7338:	83 45 e0 01          	addl   $0x1,-0x20(%rbp)
    733c:	8b 45 c8             	mov    -0x38(%rbp),%eax
    733f:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    7342:	75 06                	jne    734a <get_bb_from_scratch+0x28b>
    7344:	83 45 dc 01          	addl   $0x1,-0x24(%rbp)
    7348:	eb 2c                	jmp    7376 <get_bb_from_scratch+0x2b7>
    734a:	8b 45 c8             	mov    -0x38(%rbp),%eax
    734d:	3b 45 f0             	cmp    -0x10(%rbp),%eax
    7350:	7d 0f                	jge    7361 <get_bb_from_scratch+0x2a2>
    7352:	8b 45 c8             	mov    -0x38(%rbp),%eax
    7355:	89 45 f0             	mov    %eax,-0x10(%rbp)
    7358:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%rbp)
    735f:	eb 15                	jmp    7376 <get_bb_from_scratch+0x2b7>
    7361:	8b 45 c8             	mov    -0x38(%rbp),%eax
    7364:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    7367:	7e 0d                	jle    7376 <get_bb_from_scratch+0x2b7>
    7369:	8b 45 c8             	mov    -0x38(%rbp),%eax
    736c:	89 45 ec             	mov    %eax,-0x14(%rbp)
    736f:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%rbp)
    7376:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    737a:	8b 45 fc             	mov    -0x4(%rbp),%eax
    737d:	3b 45 d8             	cmp    -0x28(%rbp),%eax
    7380:	0f 8c cf fe ff ff    	jl     7255 <get_bb_from_scratch+0x196>
    7386:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
    738a:	8b 55 f8             	mov    -0x8(%rbp),%edx
    738d:	89 10                	mov    %edx,(%rax)
    738f:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
    7393:	8b 55 f4             	mov    -0xc(%rbp),%edx
    7396:	89 50 04             	mov    %edx,0x4(%rax)
    7399:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
    739d:	8b 55 f0             	mov    -0x10(%rbp),%edx
    73a0:	89 50 08             	mov    %edx,0x8(%rax)
    73a3:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
    73a7:	8b 55 ec             	mov    -0x14(%rbp),%edx
    73aa:	89 50 0c             	mov    %edx,0xc(%rax)
    73ad:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
    73b1:	8b 55 e8             	mov    -0x18(%rbp),%edx
    73b4:	89 10                	mov    %edx,(%rax)
    73b6:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
    73ba:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    73bd:	89 50 04             	mov    %edx,0x4(%rax)
    73c0:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
    73c4:	8b 55 e0             	mov    -0x20(%rbp),%edx
    73c7:	89 50 08             	mov    %edx,0x8(%rax)
    73ca:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
    73ce:	8b 55 dc             	mov    -0x24(%rbp),%edx
    73d1:	89 50 0c             	mov    %edx,0xc(%rax)
    73d4:	5d                   	pop    %rbp
    73d5:	c3                   	retq   

00000000000073d6 <get_net_wirelength_estimate>:
    73d6:	55                   	push   %rbp
    73d7:	48 89 e5             	mov    %rsp,%rbp
    73da:	89 7d ec             	mov    %edi,-0x14(%rbp)
    73dd:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    73e1:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 73e8 <get_net_wirelength_estimate+0x12>
    73e8:	8b 45 ec             	mov    -0x14(%rbp),%eax
    73eb:	48 63 d0             	movslq %eax,%rdx
    73ee:	48 89 d0             	mov    %rdx,%rax
    73f1:	48 c1 e0 02          	shl    $0x2,%rax
    73f5:	48 01 d0             	add    %rdx,%rax
    73f8:	48 c1 e0 03          	shl    $0x3,%rax
    73fc:	48 01 c8             	add    %rcx,%rax
    73ff:	8b 40 08             	mov    0x8(%rax),%eax
    7402:	83 c0 01             	add    $0x1,%eax
    7405:	83 f8 32             	cmp    $0x32,%eax
    7408:	7e 7b                	jle    7485 <get_net_wirelength_estimate+0xaf>
    740a:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 7411 <get_net_wirelength_estimate+0x3b>
    7411:	8b 45 ec             	mov    -0x14(%rbp),%eax
    7414:	48 63 d0             	movslq %eax,%rdx
    7417:	48 89 d0             	mov    %rdx,%rax
    741a:	48 c1 e0 02          	shl    $0x2,%rax
    741e:	48 01 d0             	add    %rdx,%rax
    7421:	48 c1 e0 03          	shl    $0x3,%rax
    7425:	48 01 c8             	add    %rcx,%rax
    7428:	8b 40 08             	mov    0x8(%rax),%eax
    742b:	83 c0 01             	add    $0x1,%eax
    742e:	83 f8 54             	cmp    $0x54,%eax
    7431:	7f 52                	jg     7485 <get_net_wirelength_estimate+0xaf>
    7433:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 743a <get_net_wirelength_estimate+0x64>
    743a:	8b 45 ec             	mov    -0x14(%rbp),%eax
    743d:	48 63 d0             	movslq %eax,%rdx
    7440:	48 89 d0             	mov    %rdx,%rax
    7443:	48 c1 e0 02          	shl    $0x2,%rax
    7447:	48 01 d0             	add    %rdx,%rax
    744a:	48 c1 e0 03          	shl    $0x3,%rax
    744e:	48 01 c8             	add    %rcx,%rax
    7451:	8b 40 08             	mov    0x8(%rax),%eax
    7454:	83 e8 31             	sub    $0x31,%eax
    7457:	66 0f ef c0          	pxor   %xmm0,%xmm0
    745b:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    745f:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 7467 <get_net_wirelength_estimate+0x91>
    7466:	00 
    7467:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    746b:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 7473 <get_net_wirelength_estimate+0x9d>
    7472:	00 
    7473:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    7477:	66 48 0f 7e c0       	movq   %xmm0,%rax
    747c:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    7480:	e9 1d 01 00 00       	jmpq   75a2 <get_net_wirelength_estimate+0x1cc>
    7485:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 748c <get_net_wirelength_estimate+0xb6>
    748c:	8b 45 ec             	mov    -0x14(%rbp),%eax
    748f:	48 63 d0             	movslq %eax,%rdx
    7492:	48 89 d0             	mov    %rdx,%rax
    7495:	48 c1 e0 02          	shl    $0x2,%rax
    7499:	48 01 d0             	add    %rdx,%rax
    749c:	48 c1 e0 03          	shl    $0x3,%rax
    74a0:	48 01 c8             	add    %rcx,%rax
    74a3:	8b 40 08             	mov    0x8(%rax),%eax
    74a6:	83 c0 01             	add    $0x1,%eax
    74a9:	83 f8 54             	cmp    $0x54,%eax
    74ac:	0f 8e bb 00 00 00    	jle    756d <get_net_wirelength_estimate+0x197>
    74b2:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 74b9 <get_net_wirelength_estimate+0xe3>
    74b9:	8b 45 ec             	mov    -0x14(%rbp),%eax
    74bc:	48 63 d0             	movslq %eax,%rdx
    74bf:	48 89 d0             	mov    %rdx,%rax
    74c2:	48 c1 e0 02          	shl    $0x2,%rax
    74c6:	48 01 d0             	add    %rdx,%rax
    74c9:	48 c1 e0 03          	shl    $0x3,%rax
    74cd:	48 01 c8             	add    %rcx,%rax
    74d0:	8b 40 08             	mov    0x8(%rax),%eax
    74d3:	83 c0 01             	add    $0x1,%eax
    74d6:	66 0f ef c0          	pxor   %xmm0,%xmm0
    74da:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    74de:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 74e6 <get_net_wirelength_estimate+0x110>
    74e5:	00 
    74e6:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    74ea:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 74f2 <get_net_wirelength_estimate+0x11c>
    74f1:	00 
    74f2:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    74f6:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 74fd <get_net_wirelength_estimate+0x127>
    74fd:	8b 45 ec             	mov    -0x14(%rbp),%eax
    7500:	48 63 d0             	movslq %eax,%rdx
    7503:	48 89 d0             	mov    %rdx,%rax
    7506:	48 c1 e0 02          	shl    $0x2,%rax
    750a:	48 01 d0             	add    %rdx,%rax
    750d:	48 c1 e0 03          	shl    $0x3,%rax
    7511:	48 01 c8             	add    %rcx,%rax
    7514:	8b 40 08             	mov    0x8(%rax),%eax
    7517:	83 c0 01             	add    $0x1,%eax
    751a:	66 0f ef c9          	pxor   %xmm1,%xmm1
    751e:	f2 0f 2a c8          	cvtsi2sd %eax,%xmm1
    7522:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # 752a <get_net_wirelength_estimate+0x154>
    7529:	00 
    752a:	f2 0f 59 d1          	mulsd  %xmm1,%xmm2
    752e:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 7535 <get_net_wirelength_estimate+0x15f>
    7535:	8b 45 ec             	mov    -0x14(%rbp),%eax
    7538:	48 63 d0             	movslq %eax,%rdx
    753b:	48 89 d0             	mov    %rdx,%rax
    753e:	48 c1 e0 02          	shl    $0x2,%rax
    7542:	48 01 d0             	add    %rdx,%rax
    7545:	48 c1 e0 03          	shl    $0x3,%rax
    7549:	48 01 c8             	add    %rcx,%rax
    754c:	8b 40 08             	mov    0x8(%rax),%eax
    754f:	83 c0 01             	add    $0x1,%eax
    7552:	66 0f ef c9          	pxor   %xmm1,%xmm1
    7556:	f2 0f 2a c8          	cvtsi2sd %eax,%xmm1
    755a:	f2 0f 59 ca          	mulsd  %xmm2,%xmm1
    755e:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
    7562:	66 48 0f 7e c0       	movq   %xmm0,%rax
    7567:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    756b:	eb 35                	jmp    75a2 <get_net_wirelength_estimate+0x1cc>
    756d:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 7574 <get_net_wirelength_estimate+0x19e>
    7574:	8b 45 ec             	mov    -0x14(%rbp),%eax
    7577:	48 63 d0             	movslq %eax,%rdx
    757a:	48 89 d0             	mov    %rdx,%rax
    757d:	48 c1 e0 02          	shl    $0x2,%rax
    7581:	48 01 d0             	add    %rdx,%rax
    7584:	48 c1 e0 03          	shl    $0x3,%rax
    7588:	48 01 c8             	add    %rcx,%rax
    758b:	8b 40 08             	mov    0x8(%rax),%eax
    758e:	48 98                	cltq   
    7590:	f3 0f 10 04 85 00 00 	movss  0x0(,%rax,4),%xmm0
    7597:	00 00 
    7599:	f3 0f 5a d8          	cvtss2sd %xmm0,%xmm3
    759d:	f2 0f 11 5d f8       	movsd  %xmm3,-0x8(%rbp)
    75a2:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    75a6:	8b 50 04             	mov    0x4(%rax),%edx
    75a9:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    75ad:	8b 00                	mov    (%rax),%eax
    75af:	29 c2                	sub    %eax,%edx
    75b1:	89 d0                	mov    %edx,%eax
    75b3:	83 c0 01             	add    $0x1,%eax
    75b6:	66 0f ef c0          	pxor   %xmm0,%xmm0
    75ba:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    75be:	f2 0f 59 45 f8       	mulsd  -0x8(%rbp),%xmm0
    75c3:	66 48 0f 7e c0       	movq   %xmm0,%rax
    75c8:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
    75cc:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    75d0:	8b 50 0c             	mov    0xc(%rax),%edx
    75d3:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    75d7:	8b 40 08             	mov    0x8(%rax),%eax
    75da:	29 c2                	sub    %eax,%edx
    75dc:	89 d0                	mov    %edx,%eax
    75de:	83 c0 01             	add    $0x1,%eax
    75e1:	66 0f ef c0          	pxor   %xmm0,%xmm0
    75e5:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    75e9:	f2 0f 59 45 f8       	mulsd  -0x8(%rbp),%xmm0
    75ee:	f2 0f 10 4d f0       	movsd  -0x10(%rbp),%xmm1
    75f3:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
    75f7:	66 48 0f 7e c8       	movq   %xmm1,%rax
    75fc:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
    7600:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7604:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    7608:	f2 0f 10 45 d8       	movsd  -0x28(%rbp),%xmm0
    760d:	5d                   	pop    %rbp
    760e:	c3                   	retq   

000000000000760f <get_net_cost>:
    760f:	55                   	push   %rbp
    7610:	48 89 e5             	mov    %rsp,%rbp
    7613:	89 7d ec             	mov    %edi,-0x14(%rbp)
    7616:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    761a:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 7621 <get_net_cost+0x12>
    7621:	8b 45 ec             	mov    -0x14(%rbp),%eax
    7624:	48 63 d0             	movslq %eax,%rdx
    7627:	48 89 d0             	mov    %rdx,%rax
    762a:	48 c1 e0 02          	shl    $0x2,%rax
    762e:	48 01 d0             	add    %rdx,%rax
    7631:	48 c1 e0 03          	shl    $0x3,%rax
    7635:	48 01 c8             	add    %rcx,%rax
    7638:	8b 40 08             	mov    0x8(%rax),%eax
    763b:	83 c0 01             	add    $0x1,%eax
    763e:	83 f8 32             	cmp    $0x32,%eax
    7641:	7e 4f                	jle    7692 <get_net_cost+0x83>
    7643:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 764a <get_net_cost+0x3b>
    764a:	8b 45 ec             	mov    -0x14(%rbp),%eax
    764d:	48 63 d0             	movslq %eax,%rdx
    7650:	48 89 d0             	mov    %rdx,%rax
    7653:	48 c1 e0 02          	shl    $0x2,%rax
    7657:	48 01 d0             	add    %rdx,%rax
    765a:	48 c1 e0 03          	shl    $0x3,%rax
    765e:	48 01 c8             	add    %rcx,%rax
    7661:	8b 40 08             	mov    0x8(%rax),%eax
    7664:	83 e8 31             	sub    $0x31,%eax
    7667:	66 0f ef c0          	pxor   %xmm0,%xmm0
    766b:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    766f:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 7677 <get_net_cost+0x68>
    7676:	00 
    7677:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
    767b:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 7683 <get_net_cost+0x74>
    7682:	00 
    7683:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    7687:	f2 0f 5a d0          	cvtsd2ss %xmm0,%xmm2
    768b:	f3 0f 11 55 fc       	movss  %xmm2,-0x4(%rbp)
    7690:	eb 2d                	jmp    76bf <get_net_cost+0xb0>
    7692:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 7699 <get_net_cost+0x8a>
    7699:	8b 45 ec             	mov    -0x14(%rbp),%eax
    769c:	48 63 d0             	movslq %eax,%rdx
    769f:	48 89 d0             	mov    %rdx,%rax
    76a2:	48 c1 e0 02          	shl    $0x2,%rax
    76a6:	48 01 d0             	add    %rdx,%rax
    76a9:	48 c1 e0 03          	shl    $0x3,%rax
    76ad:	48 01 c8             	add    %rcx,%rax
    76b0:	8b 40 08             	mov    0x8(%rax),%eax
    76b3:	48 98                	cltq   
    76b5:	8b 04 85 00 00 00 00 	mov    0x0(,%rax,4),%eax
    76bc:	89 45 fc             	mov    %eax,-0x4(%rbp)
    76bf:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    76c3:	8b 50 04             	mov    0x4(%rax),%edx
    76c6:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    76ca:	8b 00                	mov    (%rax),%eax
    76cc:	29 c2                	sub    %eax,%edx
    76ce:	89 d0                	mov    %edx,%eax
    76d0:	83 c0 01             	add    $0x1,%eax
    76d3:	66 0f ef c0          	pxor   %xmm0,%xmm0
    76d7:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    76db:	f3 0f 59 45 fc       	mulss  -0x4(%rbp),%xmm0
    76e0:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 76e7 <get_net_cost+0xd8>
    76e7:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    76eb:	8b 40 0c             	mov    0xc(%rax),%eax
    76ee:	48 98                	cltq   
    76f0:	48 c1 e0 03          	shl    $0x3,%rax
    76f4:	48 01 d0             	add    %rdx,%rax
    76f7:	48 8b 10             	mov    (%rax),%rdx
    76fa:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    76fe:	8b 40 08             	mov    0x8(%rax),%eax
    7701:	48 98                	cltq   
    7703:	48 c1 e0 02          	shl    $0x2,%rax
    7707:	48 83 e8 04          	sub    $0x4,%rax
    770b:	48 01 d0             	add    %rdx,%rax
    770e:	f3 0f 10 08          	movss  (%rax),%xmm1
    7712:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
    7716:	66 0f 7e c0          	movd   %xmm0,%eax
    771a:	89 45 f8             	mov    %eax,-0x8(%rbp)
    771d:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    7721:	8b 50 0c             	mov    0xc(%rax),%edx
    7724:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    7728:	8b 40 08             	mov    0x8(%rax),%eax
    772b:	29 c2                	sub    %eax,%edx
    772d:	89 d0                	mov    %edx,%eax
    772f:	83 c0 01             	add    $0x1,%eax
    7732:	66 0f ef c0          	pxor   %xmm0,%xmm0
    7736:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    773a:	f3 0f 59 45 fc       	mulss  -0x4(%rbp),%xmm0
    773f:	48 8b 15 00 00 00 00 	mov    0x0(%rip),%rdx        # 7746 <get_net_cost+0x137>
    7746:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    774a:	8b 40 04             	mov    0x4(%rax),%eax
    774d:	48 98                	cltq   
    774f:	48 c1 e0 03          	shl    $0x3,%rax
    7753:	48 01 d0             	add    %rdx,%rax
    7756:	48 8b 10             	mov    (%rax),%rdx
    7759:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    775d:	8b 00                	mov    (%rax),%eax
    775f:	48 98                	cltq   
    7761:	48 c1 e0 02          	shl    $0x2,%rax
    7765:	48 83 e8 04          	sub    $0x4,%rax
    7769:	48 01 d0             	add    %rdx,%rax
    776c:	f3 0f 10 08          	movss  (%rax),%xmm1
    7770:	f3 0f 59 c1          	mulss  %xmm1,%xmm0
    7774:	f3 0f 10 4d f8       	movss  -0x8(%rbp),%xmm1
    7779:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    777d:	66 0f 7e c8          	movd   %xmm1,%eax
    7781:	89 45 f8             	mov    %eax,-0x8(%rbp)
    7784:	8b 45 f8             	mov    -0x8(%rbp),%eax
    7787:	89 45 e8             	mov    %eax,-0x18(%rbp)
    778a:	f3 0f 10 45 e8       	movss  -0x18(%rbp),%xmm0
    778f:	5d                   	pop    %rbp
    7790:	c3                   	retq   

0000000000007791 <get_non_updateable_bb>:
    7791:	55                   	push   %rbp
    7792:	48 89 e5             	mov    %rsp,%rbp
    7795:	89 7d dc             	mov    %edi,-0x24(%rbp)
    7798:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
    779c:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 77a3 <get_non_updateable_bb+0x12>
    77a3:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 77aa <get_non_updateable_bb+0x19>
    77aa:	8b 45 dc             	mov    -0x24(%rbp),%eax
    77ad:	48 63 d0             	movslq %eax,%rdx
    77b0:	48 89 d0             	mov    %rdx,%rax
    77b3:	48 c1 e0 02          	shl    $0x2,%rax
    77b7:	48 01 d0             	add    %rdx,%rax
    77ba:	48 c1 e0 03          	shl    $0x3,%rax
    77be:	48 01 f0             	add    %rsi,%rax
    77c1:	48 8b 40 10          	mov    0x10(%rax),%rax
    77c5:	8b 00                	mov    (%rax),%eax
    77c7:	48 63 d0             	movslq %eax,%rdx
    77ca:	48 89 d0             	mov    %rdx,%rax
    77cd:	48 c1 e0 02          	shl    $0x2,%rax
    77d1:	48 01 d0             	add    %rdx,%rax
    77d4:	48 c1 e0 03          	shl    $0x3,%rax
    77d8:	48 01 c8             	add    %rcx,%rax
    77db:	8b 40 18             	mov    0x18(%rax),%eax
    77de:	89 45 e8             	mov    %eax,-0x18(%rbp)
    77e1:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 77e8 <get_non_updateable_bb+0x57>
    77e8:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 77ef <get_non_updateable_bb+0x5e>
    77ef:	8b 45 dc             	mov    -0x24(%rbp),%eax
    77f2:	48 63 d0             	movslq %eax,%rdx
    77f5:	48 89 d0             	mov    %rdx,%rax
    77f8:	48 c1 e0 02          	shl    $0x2,%rax
    77fc:	48 01 d0             	add    %rdx,%rax
    77ff:	48 c1 e0 03          	shl    $0x3,%rax
    7803:	48 01 f0             	add    %rsi,%rax
    7806:	48 8b 40 10          	mov    0x10(%rax),%rax
    780a:	8b 00                	mov    (%rax),%eax
    780c:	48 63 d0             	movslq %eax,%rdx
    780f:	48 89 d0             	mov    %rdx,%rax
    7812:	48 c1 e0 02          	shl    $0x2,%rax
    7816:	48 01 d0             	add    %rdx,%rax
    7819:	48 c1 e0 03          	shl    $0x3,%rax
    781d:	48 01 c8             	add    %rcx,%rax
    7820:	8b 40 1c             	mov    0x1c(%rax),%eax
    7823:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    7826:	8b 45 e8             	mov    -0x18(%rbp),%eax
    7829:	89 45 f0             	mov    %eax,-0x10(%rbp)
    782c:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    782f:	89 45 ec             	mov    %eax,-0x14(%rbp)
    7832:	8b 45 e8             	mov    -0x18(%rbp),%eax
    7835:	89 45 f8             	mov    %eax,-0x8(%rbp)
    7838:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    783b:	89 45 f4             	mov    %eax,-0xc(%rbp)
    783e:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%rbp)
    7845:	e9 e4 00 00 00       	jmpq   792e <get_non_updateable_bb+0x19d>
    784a:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 7851 <get_non_updateable_bb+0xc0>
    7851:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 7858 <get_non_updateable_bb+0xc7>
    7858:	8b 45 dc             	mov    -0x24(%rbp),%eax
    785b:	48 63 d0             	movslq %eax,%rdx
    785e:	48 89 d0             	mov    %rdx,%rax
    7861:	48 c1 e0 02          	shl    $0x2,%rax
    7865:	48 01 d0             	add    %rdx,%rax
    7868:	48 c1 e0 03          	shl    $0x3,%rax
    786c:	48 01 f0             	add    %rsi,%rax
    786f:	48 8b 40 10          	mov    0x10(%rax),%rax
    7873:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7876:	48 63 d2             	movslq %edx,%rdx
    7879:	48 c1 e2 02          	shl    $0x2,%rdx
    787d:	48 01 d0             	add    %rdx,%rax
    7880:	8b 00                	mov    (%rax),%eax
    7882:	48 63 d0             	movslq %eax,%rdx
    7885:	48 89 d0             	mov    %rdx,%rax
    7888:	48 c1 e0 02          	shl    $0x2,%rax
    788c:	48 01 d0             	add    %rdx,%rax
    788f:	48 c1 e0 03          	shl    $0x3,%rax
    7893:	48 01 c8             	add    %rcx,%rax
    7896:	8b 40 18             	mov    0x18(%rax),%eax
    7899:	89 45 e8             	mov    %eax,-0x18(%rbp)
    789c:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 78a3 <get_non_updateable_bb+0x112>
    78a3:	48 8b 35 00 00 00 00 	mov    0x0(%rip),%rsi        # 78aa <get_non_updateable_bb+0x119>
    78aa:	8b 45 dc             	mov    -0x24(%rbp),%eax
    78ad:	48 63 d0             	movslq %eax,%rdx
    78b0:	48 89 d0             	mov    %rdx,%rax
    78b3:	48 c1 e0 02          	shl    $0x2,%rax
    78b7:	48 01 d0             	add    %rdx,%rax
    78ba:	48 c1 e0 03          	shl    $0x3,%rax
    78be:	48 01 f0             	add    %rsi,%rax
    78c1:	48 8b 40 10          	mov    0x10(%rax),%rax
    78c5:	8b 55 fc             	mov    -0x4(%rbp),%edx
    78c8:	48 63 d2             	movslq %edx,%rdx
    78cb:	48 c1 e2 02          	shl    $0x2,%rdx
    78cf:	48 01 d0             	add    %rdx,%rax
    78d2:	8b 00                	mov    (%rax),%eax
    78d4:	48 63 d0             	movslq %eax,%rdx
    78d7:	48 89 d0             	mov    %rdx,%rax
    78da:	48 c1 e0 02          	shl    $0x2,%rax
    78de:	48 01 d0             	add    %rdx,%rax
    78e1:	48 c1 e0 03          	shl    $0x3,%rax
    78e5:	48 01 c8             	add    %rcx,%rax
    78e8:	8b 40 1c             	mov    0x1c(%rax),%eax
    78eb:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    78ee:	8b 45 e8             	mov    -0x18(%rbp),%eax
    78f1:	3b 45 f0             	cmp    -0x10(%rbp),%eax
    78f4:	7d 08                	jge    78fe <get_non_updateable_bb+0x16d>
    78f6:	8b 45 e8             	mov    -0x18(%rbp),%eax
    78f9:	89 45 f0             	mov    %eax,-0x10(%rbp)
    78fc:	eb 0e                	jmp    790c <get_non_updateable_bb+0x17b>
    78fe:	8b 45 e8             	mov    -0x18(%rbp),%eax
    7901:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    7904:	7e 06                	jle    790c <get_non_updateable_bb+0x17b>
    7906:	8b 45 e8             	mov    -0x18(%rbp),%eax
    7909:	89 45 f8             	mov    %eax,-0x8(%rbp)
    790c:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    790f:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    7912:	7d 08                	jge    791c <get_non_updateable_bb+0x18b>
    7914:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    7917:	89 45 ec             	mov    %eax,-0x14(%rbp)
    791a:	eb 0e                	jmp    792a <get_non_updateable_bb+0x199>
    791c:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    791f:	3b 45 f4             	cmp    -0xc(%rbp),%eax
    7922:	7e 06                	jle    792a <get_non_updateable_bb+0x199>
    7924:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    7927:	89 45 f4             	mov    %eax,-0xc(%rbp)
    792a:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    792e:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 7935 <get_non_updateable_bb+0x1a4>
    7935:	8b 45 dc             	mov    -0x24(%rbp),%eax
    7938:	48 63 d0             	movslq %eax,%rdx
    793b:	48 89 d0             	mov    %rdx,%rax
    793e:	48 c1 e0 02          	shl    $0x2,%rax
    7942:	48 01 d0             	add    %rdx,%rax
    7945:	48 c1 e0 03          	shl    $0x3,%rax
    7949:	48 01 c8             	add    %rcx,%rax
    794c:	8b 40 08             	mov    0x8(%rax),%eax
    794f:	83 c0 01             	add    $0x1,%eax
    7952:	3b 45 fc             	cmp    -0x4(%rbp),%eax
    7955:	0f 8f ef fe ff ff    	jg     784a <get_non_updateable_bb+0xb9>
    795b:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 7961 <get_non_updateable_bb+0x1d0>
    7961:	39 45 f0             	cmp    %eax,-0x10(%rbp)
    7964:	0f 4e 45 f0          	cmovle -0x10(%rbp),%eax
    7968:	ba 01 00 00 00       	mov    $0x1,%edx
    796d:	85 c0                	test   %eax,%eax
    796f:	0f 4f d0             	cmovg  %eax,%edx
    7972:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    7976:	89 10                	mov    %edx,(%rax)
    7978:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 797e <get_non_updateable_bb+0x1ed>
    797e:	39 45 ec             	cmp    %eax,-0x14(%rbp)
    7981:	0f 4e 45 ec          	cmovle -0x14(%rbp),%eax
    7985:	ba 01 00 00 00       	mov    $0x1,%edx
    798a:	85 c0                	test   %eax,%eax
    798c:	0f 4f d0             	cmovg  %eax,%edx
    798f:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    7993:	89 50 08             	mov    %edx,0x8(%rax)
    7996:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 799c <get_non_updateable_bb+0x20b>
    799c:	39 45 f8             	cmp    %eax,-0x8(%rbp)
    799f:	0f 4e 45 f8          	cmovle -0x8(%rbp),%eax
    79a3:	ba 01 00 00 00       	mov    $0x1,%edx
    79a8:	85 c0                	test   %eax,%eax
    79aa:	0f 4f d0             	cmovg  %eax,%edx
    79ad:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    79b1:	89 50 04             	mov    %edx,0x4(%rax)
    79b4:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 79ba <get_non_updateable_bb+0x229>
    79ba:	39 45 f4             	cmp    %eax,-0xc(%rbp)
    79bd:	0f 4e 45 f4          	cmovle -0xc(%rbp),%eax
    79c1:	ba 01 00 00 00       	mov    $0x1,%edx
    79c6:	85 c0                	test   %eax,%eax
    79c8:	0f 4f d0             	cmovg  %eax,%edx
    79cb:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    79cf:	89 50 0c             	mov    %edx,0xc(%rax)
    79d2:	5d                   	pop    %rbp
    79d3:	c3                   	retq   

00000000000079d4 <update_bb>:
    79d4:	55                   	push   %rbp
    79d5:	48 89 e5             	mov    %rsp,%rbp
    79d8:	48 83 ec 20          	sub    $0x20,%rsp
    79dc:	89 7d fc             	mov    %edi,-0x4(%rbp)
    79df:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
    79e3:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
    79e7:	89 4d f8             	mov    %ecx,-0x8(%rbp)
    79ea:	44 89 45 e4          	mov    %r8d,-0x1c(%rbp)
    79ee:	44 89 4d e0          	mov    %r9d,-0x20(%rbp)
    79f2:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 79f8 <update_bb+0x24>
    79f8:	39 45 e0             	cmp    %eax,-0x20(%rbp)
    79fb:	0f 4e 45 e0          	cmovle -0x20(%rbp),%eax
    79ff:	ba 01 00 00 00       	mov    $0x1,%edx
    7a04:	85 c0                	test   %eax,%eax
    7a06:	0f 4e c2             	cmovle %edx,%eax
    7a09:	89 45 e0             	mov    %eax,-0x20(%rbp)
    7a0c:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 7a12 <update_bb+0x3e>
    7a12:	39 45 10             	cmp    %eax,0x10(%rbp)
    7a15:	0f 4e 45 10          	cmovle 0x10(%rbp),%eax
    7a19:	ba 01 00 00 00       	mov    $0x1,%edx
    7a1e:	85 c0                	test   %eax,%eax
    7a20:	0f 4e c2             	cmovle %edx,%eax
    7a23:	89 45 10             	mov    %eax,0x10(%rbp)
    7a26:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 7a2c <update_bb+0x58>
    7a2c:	39 45 f8             	cmp    %eax,-0x8(%rbp)
    7a2f:	0f 4e 45 f8          	cmovle -0x8(%rbp),%eax
    7a33:	ba 01 00 00 00       	mov    $0x1,%edx
    7a38:	85 c0                	test   %eax,%eax
    7a3a:	0f 4e c2             	cmovle %edx,%eax
    7a3d:	89 45 f8             	mov    %eax,-0x8(%rbp)
    7a40:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 7a46 <update_bb+0x72>
    7a46:	39 45 e4             	cmp    %eax,-0x1c(%rbp)
    7a49:	0f 4e 45 e4          	cmovle -0x1c(%rbp),%eax
    7a4d:	ba 01 00 00 00       	mov    $0x1,%edx
    7a52:	85 c0                	test   %eax,%eax
    7a54:	0f 4e c2             	cmovle %edx,%eax
    7a57:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    7a5a:	8b 45 e0             	mov    -0x20(%rbp),%eax
    7a5d:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    7a60:	0f 8d 87 01 00 00    	jge    7bed <update_bb+0x219>
    7a66:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7a6d <update_bb+0x99>
    7a6d:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7a70:	48 63 d2             	movslq %edx,%rdx
    7a73:	48 c1 e2 04          	shl    $0x4,%rdx
    7a77:	48 01 d0             	add    %rdx,%rax
    7a7a:	8b 40 04             	mov    0x4(%rax),%eax
    7a7d:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    7a80:	75 77                	jne    7af9 <update_bb+0x125>
    7a82:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7a89 <update_bb+0xb5>
    7a89:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7a8c:	48 63 d2             	movslq %edx,%rdx
    7a8f:	48 c1 e2 04          	shl    $0x4,%rdx
    7a93:	48 01 d0             	add    %rdx,%rax
    7a96:	8b 40 04             	mov    0x4(%rax),%eax
    7a99:	83 f8 01             	cmp    $0x1,%eax
    7a9c:	75 1a                	jne    7ab8 <update_bb+0xe4>
    7a9e:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    7aa2:	48 8b 4d f0          	mov    -0x10(%rbp),%rcx
    7aa6:	8b 45 fc             	mov    -0x4(%rbp),%eax
    7aa9:	48 89 ce             	mov    %rcx,%rsi
    7aac:	89 c7                	mov    %eax,%edi
    7aae:	e8 0c f6 ff ff       	callq  70bf <get_bb_from_scratch>
    7ab3:	e9 eb 06 00 00       	jmpq   81a3 <update_bb+0x7cf>
    7ab8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7abf <update_bb+0xeb>
    7abf:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7ac2:	48 63 d2             	movslq %edx,%rdx
    7ac5:	48 c1 e2 04          	shl    $0x4,%rdx
    7ac9:	48 01 d0             	add    %rdx,%rax
    7acc:	8b 40 04             	mov    0x4(%rax),%eax
    7acf:	8d 50 ff             	lea    -0x1(%rax),%edx
    7ad2:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7ad6:	89 50 04             	mov    %edx,0x4(%rax)
    7ad9:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7ae0 <update_bb+0x10c>
    7ae0:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7ae3:	48 63 d2             	movslq %edx,%rdx
    7ae6:	48 c1 e2 04          	shl    $0x4,%rdx
    7aea:	48 01 d0             	add    %rdx,%rax
    7aed:	8b 50 04             	mov    0x4(%rax),%edx
    7af0:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7af4:	89 50 04             	mov    %edx,0x4(%rax)
    7af7:	eb 3c                	jmp    7b35 <update_bb+0x161>
    7af9:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7b00 <update_bb+0x12c>
    7b00:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7b03:	48 63 d2             	movslq %edx,%rdx
    7b06:	48 c1 e2 04          	shl    $0x4,%rdx
    7b0a:	48 01 d0             	add    %rdx,%rax
    7b0d:	8b 50 04             	mov    0x4(%rax),%edx
    7b10:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7b14:	89 50 04             	mov    %edx,0x4(%rax)
    7b17:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7b1e <update_bb+0x14a>
    7b1e:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7b21:	48 63 d2             	movslq %edx,%rdx
    7b24:	48 c1 e2 04          	shl    $0x4,%rdx
    7b28:	48 01 d0             	add    %rdx,%rax
    7b2b:	8b 50 04             	mov    0x4(%rax),%edx
    7b2e:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7b32:	89 50 04             	mov    %edx,0x4(%rax)
    7b35:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7b3c <update_bb+0x168>
    7b3c:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7b3f:	48 63 d2             	movslq %edx,%rdx
    7b42:	48 c1 e2 04          	shl    $0x4,%rdx
    7b46:	48 01 d0             	add    %rdx,%rax
    7b49:	8b 00                	mov    (%rax),%eax
    7b4b:	3b 45 e0             	cmp    -0x20(%rbp),%eax
    7b4e:	7e 18                	jle    7b68 <update_bb+0x194>
    7b50:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7b54:	8b 55 e0             	mov    -0x20(%rbp),%edx
    7b57:	89 10                	mov    %edx,(%rax)
    7b59:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7b5d:	c7 00 01 00 00 00    	movl   $0x1,(%rax)
    7b63:	e9 8a 02 00 00       	jmpq   7df2 <update_bb+0x41e>
    7b68:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7b6f <update_bb+0x19b>
    7b6f:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7b72:	48 63 d2             	movslq %edx,%rdx
    7b75:	48 c1 e2 04          	shl    $0x4,%rdx
    7b79:	48 01 d0             	add    %rdx,%rax
    7b7c:	8b 00                	mov    (%rax),%eax
    7b7e:	3b 45 e0             	cmp    -0x20(%rbp),%eax
    7b81:	75 2d                	jne    7bb0 <update_bb+0x1dc>
    7b83:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7b87:	8b 55 e0             	mov    -0x20(%rbp),%edx
    7b8a:	89 10                	mov    %edx,(%rax)
    7b8c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7b93 <update_bb+0x1bf>
    7b93:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7b96:	48 63 d2             	movslq %edx,%rdx
    7b99:	48 c1 e2 04          	shl    $0x4,%rdx
    7b9d:	48 01 d0             	add    %rdx,%rax
    7ba0:	8b 00                	mov    (%rax),%eax
    7ba2:	8d 50 01             	lea    0x1(%rax),%edx
    7ba5:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7ba9:	89 10                	mov    %edx,(%rax)
    7bab:	e9 42 02 00 00       	jmpq   7df2 <update_bb+0x41e>
    7bb0:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7bb7 <update_bb+0x1e3>
    7bb7:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7bba:	48 63 d2             	movslq %edx,%rdx
    7bbd:	48 c1 e2 04          	shl    $0x4,%rdx
    7bc1:	48 01 d0             	add    %rdx,%rax
    7bc4:	8b 10                	mov    (%rax),%edx
    7bc6:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7bca:	89 10                	mov    %edx,(%rax)
    7bcc:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7bd3 <update_bb+0x1ff>
    7bd3:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7bd6:	48 63 d2             	movslq %edx,%rdx
    7bd9:	48 c1 e2 04          	shl    $0x4,%rdx
    7bdd:	48 01 d0             	add    %rdx,%rax
    7be0:	8b 10                	mov    (%rax),%edx
    7be2:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7be6:	89 10                	mov    %edx,(%rax)
    7be8:	e9 05 02 00 00       	jmpq   7df2 <update_bb+0x41e>
    7bed:	8b 45 e0             	mov    -0x20(%rbp),%eax
    7bf0:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    7bf3:	0f 8e 85 01 00 00    	jle    7d7e <update_bb+0x3aa>
    7bf9:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7c00 <update_bb+0x22c>
    7c00:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7c03:	48 63 d2             	movslq %edx,%rdx
    7c06:	48 c1 e2 04          	shl    $0x4,%rdx
    7c0a:	48 01 d0             	add    %rdx,%rax
    7c0d:	8b 00                	mov    (%rax),%eax
    7c0f:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    7c12:	75 72                	jne    7c86 <update_bb+0x2b2>
    7c14:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7c1b <update_bb+0x247>
    7c1b:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7c1e:	48 63 d2             	movslq %edx,%rdx
    7c21:	48 c1 e2 04          	shl    $0x4,%rdx
    7c25:	48 01 d0             	add    %rdx,%rax
    7c28:	8b 00                	mov    (%rax),%eax
    7c2a:	83 f8 01             	cmp    $0x1,%eax
    7c2d:	75 1a                	jne    7c49 <update_bb+0x275>
    7c2f:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    7c33:	48 8b 4d f0          	mov    -0x10(%rbp),%rcx
    7c37:	8b 45 fc             	mov    -0x4(%rbp),%eax
    7c3a:	48 89 ce             	mov    %rcx,%rsi
    7c3d:	89 c7                	mov    %eax,%edi
    7c3f:	e8 7b f4 ff ff       	callq  70bf <get_bb_from_scratch>
    7c44:	e9 5a 05 00 00       	jmpq   81a3 <update_bb+0x7cf>
    7c49:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7c50 <update_bb+0x27c>
    7c50:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7c53:	48 63 d2             	movslq %edx,%rdx
    7c56:	48 c1 e2 04          	shl    $0x4,%rdx
    7c5a:	48 01 d0             	add    %rdx,%rax
    7c5d:	8b 00                	mov    (%rax),%eax
    7c5f:	8d 50 ff             	lea    -0x1(%rax),%edx
    7c62:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7c66:	89 10                	mov    %edx,(%rax)
    7c68:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7c6f <update_bb+0x29b>
    7c6f:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7c72:	48 63 d2             	movslq %edx,%rdx
    7c75:	48 c1 e2 04          	shl    $0x4,%rdx
    7c79:	48 01 d0             	add    %rdx,%rax
    7c7c:	8b 10                	mov    (%rax),%edx
    7c7e:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7c82:	89 10                	mov    %edx,(%rax)
    7c84:	eb 38                	jmp    7cbe <update_bb+0x2ea>
    7c86:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7c8d <update_bb+0x2b9>
    7c8d:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7c90:	48 63 d2             	movslq %edx,%rdx
    7c93:	48 c1 e2 04          	shl    $0x4,%rdx
    7c97:	48 01 d0             	add    %rdx,%rax
    7c9a:	8b 10                	mov    (%rax),%edx
    7c9c:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7ca0:	89 10                	mov    %edx,(%rax)
    7ca2:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7ca9 <update_bb+0x2d5>
    7ca9:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7cac:	48 63 d2             	movslq %edx,%rdx
    7caf:	48 c1 e2 04          	shl    $0x4,%rdx
    7cb3:	48 01 d0             	add    %rdx,%rax
    7cb6:	8b 10                	mov    (%rax),%edx
    7cb8:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7cbc:	89 10                	mov    %edx,(%rax)
    7cbe:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7cc5 <update_bb+0x2f1>
    7cc5:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7cc8:	48 63 d2             	movslq %edx,%rdx
    7ccb:	48 c1 e2 04          	shl    $0x4,%rdx
    7ccf:	48 01 d0             	add    %rdx,%rax
    7cd2:	8b 40 04             	mov    0x4(%rax),%eax
    7cd5:	3b 45 e0             	cmp    -0x20(%rbp),%eax
    7cd8:	7d 1a                	jge    7cf4 <update_bb+0x320>
    7cda:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7cde:	8b 55 e0             	mov    -0x20(%rbp),%edx
    7ce1:	89 50 04             	mov    %edx,0x4(%rax)
    7ce4:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7ce8:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%rax)
    7cef:	e9 fe 00 00 00       	jmpq   7df2 <update_bb+0x41e>
    7cf4:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7cfb <update_bb+0x327>
    7cfb:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7cfe:	48 63 d2             	movslq %edx,%rdx
    7d01:	48 c1 e2 04          	shl    $0x4,%rdx
    7d05:	48 01 d0             	add    %rdx,%rax
    7d08:	8b 40 04             	mov    0x4(%rax),%eax
    7d0b:	3b 45 e0             	cmp    -0x20(%rbp),%eax
    7d0e:	75 30                	jne    7d40 <update_bb+0x36c>
    7d10:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7d14:	8b 55 e0             	mov    -0x20(%rbp),%edx
    7d17:	89 50 04             	mov    %edx,0x4(%rax)
    7d1a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7d21 <update_bb+0x34d>
    7d21:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7d24:	48 63 d2             	movslq %edx,%rdx
    7d27:	48 c1 e2 04          	shl    $0x4,%rdx
    7d2b:	48 01 d0             	add    %rdx,%rax
    7d2e:	8b 40 04             	mov    0x4(%rax),%eax
    7d31:	8d 50 01             	lea    0x1(%rax),%edx
    7d34:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7d38:	89 50 04             	mov    %edx,0x4(%rax)
    7d3b:	e9 b2 00 00 00       	jmpq   7df2 <update_bb+0x41e>
    7d40:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7d47 <update_bb+0x373>
    7d47:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7d4a:	48 63 d2             	movslq %edx,%rdx
    7d4d:	48 c1 e2 04          	shl    $0x4,%rdx
    7d51:	48 01 d0             	add    %rdx,%rax
    7d54:	8b 50 04             	mov    0x4(%rax),%edx
    7d57:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7d5b:	89 50 04             	mov    %edx,0x4(%rax)
    7d5e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7d65 <update_bb+0x391>
    7d65:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7d68:	48 63 d2             	movslq %edx,%rdx
    7d6b:	48 c1 e2 04          	shl    $0x4,%rdx
    7d6f:	48 01 d0             	add    %rdx,%rax
    7d72:	8b 50 04             	mov    0x4(%rax),%edx
    7d75:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7d79:	89 50 04             	mov    %edx,0x4(%rax)
    7d7c:	eb 74                	jmp    7df2 <update_bb+0x41e>
    7d7e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7d85 <update_bb+0x3b1>
    7d85:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7d88:	48 63 d2             	movslq %edx,%rdx
    7d8b:	48 c1 e2 04          	shl    $0x4,%rdx
    7d8f:	48 01 d0             	add    %rdx,%rax
    7d92:	8b 10                	mov    (%rax),%edx
    7d94:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7d98:	89 10                	mov    %edx,(%rax)
    7d9a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7da1 <update_bb+0x3cd>
    7da1:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7da4:	48 63 d2             	movslq %edx,%rdx
    7da7:	48 c1 e2 04          	shl    $0x4,%rdx
    7dab:	48 01 d0             	add    %rdx,%rax
    7dae:	8b 50 04             	mov    0x4(%rax),%edx
    7db1:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7db5:	89 50 04             	mov    %edx,0x4(%rax)
    7db8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7dbf <update_bb+0x3eb>
    7dbf:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7dc2:	48 63 d2             	movslq %edx,%rdx
    7dc5:	48 c1 e2 04          	shl    $0x4,%rdx
    7dc9:	48 01 d0             	add    %rdx,%rax
    7dcc:	8b 10                	mov    (%rax),%edx
    7dce:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7dd2:	89 10                	mov    %edx,(%rax)
    7dd4:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7ddb <update_bb+0x407>
    7ddb:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7dde:	48 63 d2             	movslq %edx,%rdx
    7de1:	48 c1 e2 04          	shl    $0x4,%rdx
    7de5:	48 01 d0             	add    %rdx,%rax
    7de8:	8b 50 04             	mov    0x4(%rax),%edx
    7deb:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7def:	89 50 04             	mov    %edx,0x4(%rax)
    7df2:	8b 45 10             	mov    0x10(%rbp),%eax
    7df5:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
    7df8:	0f 8d 92 01 00 00    	jge    7f90 <update_bb+0x5bc>
    7dfe:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7e05 <update_bb+0x431>
    7e05:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7e08:	48 63 d2             	movslq %edx,%rdx
    7e0b:	48 c1 e2 04          	shl    $0x4,%rdx
    7e0f:	48 01 d0             	add    %rdx,%rax
    7e12:	8b 40 0c             	mov    0xc(%rax),%eax
    7e15:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
    7e18:	75 77                	jne    7e91 <update_bb+0x4bd>
    7e1a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7e21 <update_bb+0x44d>
    7e21:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7e24:	48 63 d2             	movslq %edx,%rdx
    7e27:	48 c1 e2 04          	shl    $0x4,%rdx
    7e2b:	48 01 d0             	add    %rdx,%rax
    7e2e:	8b 40 0c             	mov    0xc(%rax),%eax
    7e31:	83 f8 01             	cmp    $0x1,%eax
    7e34:	75 1a                	jne    7e50 <update_bb+0x47c>
    7e36:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    7e3a:	48 8b 4d f0          	mov    -0x10(%rbp),%rcx
    7e3e:	8b 45 fc             	mov    -0x4(%rbp),%eax
    7e41:	48 89 ce             	mov    %rcx,%rsi
    7e44:	89 c7                	mov    %eax,%edi
    7e46:	e8 74 f2 ff ff       	callq  70bf <get_bb_from_scratch>
    7e4b:	e9 53 03 00 00       	jmpq   81a3 <update_bb+0x7cf>
    7e50:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7e57 <update_bb+0x483>
    7e57:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7e5a:	48 63 d2             	movslq %edx,%rdx
    7e5d:	48 c1 e2 04          	shl    $0x4,%rdx
    7e61:	48 01 d0             	add    %rdx,%rax
    7e64:	8b 40 0c             	mov    0xc(%rax),%eax
    7e67:	8d 50 ff             	lea    -0x1(%rax),%edx
    7e6a:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7e6e:	89 50 0c             	mov    %edx,0xc(%rax)
    7e71:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7e78 <update_bb+0x4a4>
    7e78:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7e7b:	48 63 d2             	movslq %edx,%rdx
    7e7e:	48 c1 e2 04          	shl    $0x4,%rdx
    7e82:	48 01 d0             	add    %rdx,%rax
    7e85:	8b 50 0c             	mov    0xc(%rax),%edx
    7e88:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7e8c:	89 50 0c             	mov    %edx,0xc(%rax)
    7e8f:	eb 3c                	jmp    7ecd <update_bb+0x4f9>
    7e91:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7e98 <update_bb+0x4c4>
    7e98:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7e9b:	48 63 d2             	movslq %edx,%rdx
    7e9e:	48 c1 e2 04          	shl    $0x4,%rdx
    7ea2:	48 01 d0             	add    %rdx,%rax
    7ea5:	8b 50 0c             	mov    0xc(%rax),%edx
    7ea8:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7eac:	89 50 0c             	mov    %edx,0xc(%rax)
    7eaf:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7eb6 <update_bb+0x4e2>
    7eb6:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7eb9:	48 63 d2             	movslq %edx,%rdx
    7ebc:	48 c1 e2 04          	shl    $0x4,%rdx
    7ec0:	48 01 d0             	add    %rdx,%rax
    7ec3:	8b 50 0c             	mov    0xc(%rax),%edx
    7ec6:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7eca:	89 50 0c             	mov    %edx,0xc(%rax)
    7ecd:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7ed4 <update_bb+0x500>
    7ed4:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7ed7:	48 63 d2             	movslq %edx,%rdx
    7eda:	48 c1 e2 04          	shl    $0x4,%rdx
    7ede:	48 01 d0             	add    %rdx,%rax
    7ee1:	8b 40 08             	mov    0x8(%rax),%eax
    7ee4:	3b 45 10             	cmp    0x10(%rbp),%eax
    7ee7:	7e 1a                	jle    7f03 <update_bb+0x52f>
    7ee9:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7eed:	8b 55 10             	mov    0x10(%rbp),%edx
    7ef0:	89 50 08             	mov    %edx,0x8(%rax)
    7ef3:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7ef7:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%rax)
    7efe:	e9 a0 02 00 00       	jmpq   81a3 <update_bb+0x7cf>
    7f03:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7f0a <update_bb+0x536>
    7f0a:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7f0d:	48 63 d2             	movslq %edx,%rdx
    7f10:	48 c1 e2 04          	shl    $0x4,%rdx
    7f14:	48 01 d0             	add    %rdx,%rax
    7f17:	8b 40 08             	mov    0x8(%rax),%eax
    7f1a:	3b 45 10             	cmp    0x10(%rbp),%eax
    7f1d:	75 30                	jne    7f4f <update_bb+0x57b>
    7f1f:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7f23:	8b 55 10             	mov    0x10(%rbp),%edx
    7f26:	89 50 08             	mov    %edx,0x8(%rax)
    7f29:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7f30 <update_bb+0x55c>
    7f30:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7f33:	48 63 d2             	movslq %edx,%rdx
    7f36:	48 c1 e2 04          	shl    $0x4,%rdx
    7f3a:	48 01 d0             	add    %rdx,%rax
    7f3d:	8b 40 08             	mov    0x8(%rax),%eax
    7f40:	8d 50 01             	lea    0x1(%rax),%edx
    7f43:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7f47:	89 50 08             	mov    %edx,0x8(%rax)
    7f4a:	e9 54 02 00 00       	jmpq   81a3 <update_bb+0x7cf>
    7f4f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7f56 <update_bb+0x582>
    7f56:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7f59:	48 63 d2             	movslq %edx,%rdx
    7f5c:	48 c1 e2 04          	shl    $0x4,%rdx
    7f60:	48 01 d0             	add    %rdx,%rax
    7f63:	8b 50 08             	mov    0x8(%rax),%edx
    7f66:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    7f6a:	89 50 08             	mov    %edx,0x8(%rax)
    7f6d:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7f74 <update_bb+0x5a0>
    7f74:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7f77:	48 63 d2             	movslq %edx,%rdx
    7f7a:	48 c1 e2 04          	shl    $0x4,%rdx
    7f7e:	48 01 d0             	add    %rdx,%rax
    7f81:	8b 50 08             	mov    0x8(%rax),%edx
    7f84:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    7f88:	89 50 08             	mov    %edx,0x8(%rax)
    7f8b:	e9 13 02 00 00       	jmpq   81a3 <update_bb+0x7cf>
    7f90:	8b 45 10             	mov    0x10(%rbp),%eax
    7f93:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
    7f96:	0f 8e 8f 01 00 00    	jle    812b <update_bb+0x757>
    7f9c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7fa3 <update_bb+0x5cf>
    7fa3:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7fa6:	48 63 d2             	movslq %edx,%rdx
    7fa9:	48 c1 e2 04          	shl    $0x4,%rdx
    7fad:	48 01 d0             	add    %rdx,%rax
    7fb0:	8b 40 08             	mov    0x8(%rax),%eax
    7fb3:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
    7fb6:	75 77                	jne    802f <update_bb+0x65b>
    7fb8:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7fbf <update_bb+0x5eb>
    7fbf:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7fc2:	48 63 d2             	movslq %edx,%rdx
    7fc5:	48 c1 e2 04          	shl    $0x4,%rdx
    7fc9:	48 01 d0             	add    %rdx,%rax
    7fcc:	8b 40 08             	mov    0x8(%rax),%eax
    7fcf:	83 f8 01             	cmp    $0x1,%eax
    7fd2:	75 1a                	jne    7fee <update_bb+0x61a>
    7fd4:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    7fd8:	48 8b 4d f0          	mov    -0x10(%rbp),%rcx
    7fdc:	8b 45 fc             	mov    -0x4(%rbp),%eax
    7fdf:	48 89 ce             	mov    %rcx,%rsi
    7fe2:	89 c7                	mov    %eax,%edi
    7fe4:	e8 d6 f0 ff ff       	callq  70bf <get_bb_from_scratch>
    7fe9:	e9 b5 01 00 00       	jmpq   81a3 <update_bb+0x7cf>
    7fee:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 7ff5 <update_bb+0x621>
    7ff5:	8b 55 fc             	mov    -0x4(%rbp),%edx
    7ff8:	48 63 d2             	movslq %edx,%rdx
    7ffb:	48 c1 e2 04          	shl    $0x4,%rdx
    7fff:	48 01 d0             	add    %rdx,%rax
    8002:	8b 40 08             	mov    0x8(%rax),%eax
    8005:	8d 50 ff             	lea    -0x1(%rax),%edx
    8008:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    800c:	89 50 08             	mov    %edx,0x8(%rax)
    800f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8016 <update_bb+0x642>
    8016:	8b 55 fc             	mov    -0x4(%rbp),%edx
    8019:	48 63 d2             	movslq %edx,%rdx
    801c:	48 c1 e2 04          	shl    $0x4,%rdx
    8020:	48 01 d0             	add    %rdx,%rax
    8023:	8b 50 08             	mov    0x8(%rax),%edx
    8026:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    802a:	89 50 08             	mov    %edx,0x8(%rax)
    802d:	eb 3c                	jmp    806b <update_bb+0x697>
    802f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8036 <update_bb+0x662>
    8036:	8b 55 fc             	mov    -0x4(%rbp),%edx
    8039:	48 63 d2             	movslq %edx,%rdx
    803c:	48 c1 e2 04          	shl    $0x4,%rdx
    8040:	48 01 d0             	add    %rdx,%rax
    8043:	8b 50 08             	mov    0x8(%rax),%edx
    8046:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    804a:	89 50 08             	mov    %edx,0x8(%rax)
    804d:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8054 <update_bb+0x680>
    8054:	8b 55 fc             	mov    -0x4(%rbp),%edx
    8057:	48 63 d2             	movslq %edx,%rdx
    805a:	48 c1 e2 04          	shl    $0x4,%rdx
    805e:	48 01 d0             	add    %rdx,%rax
    8061:	8b 50 08             	mov    0x8(%rax),%edx
    8064:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    8068:	89 50 08             	mov    %edx,0x8(%rax)
    806b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8072 <update_bb+0x69e>
    8072:	8b 55 fc             	mov    -0x4(%rbp),%edx
    8075:	48 63 d2             	movslq %edx,%rdx
    8078:	48 c1 e2 04          	shl    $0x4,%rdx
    807c:	48 01 d0             	add    %rdx,%rax
    807f:	8b 40 0c             	mov    0xc(%rax),%eax
    8082:	3b 45 10             	cmp    0x10(%rbp),%eax
    8085:	7d 1a                	jge    80a1 <update_bb+0x6cd>
    8087:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    808b:	8b 55 10             	mov    0x10(%rbp),%edx
    808e:	89 50 0c             	mov    %edx,0xc(%rax)
    8091:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    8095:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%rax)
    809c:	e9 02 01 00 00       	jmpq   81a3 <update_bb+0x7cf>
    80a1:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 80a8 <update_bb+0x6d4>
    80a8:	8b 55 fc             	mov    -0x4(%rbp),%edx
    80ab:	48 63 d2             	movslq %edx,%rdx
    80ae:	48 c1 e2 04          	shl    $0x4,%rdx
    80b2:	48 01 d0             	add    %rdx,%rax
    80b5:	8b 40 0c             	mov    0xc(%rax),%eax
    80b8:	3b 45 10             	cmp    0x10(%rbp),%eax
    80bb:	75 30                	jne    80ed <update_bb+0x719>
    80bd:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    80c1:	8b 55 10             	mov    0x10(%rbp),%edx
    80c4:	89 50 0c             	mov    %edx,0xc(%rax)
    80c7:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 80ce <update_bb+0x6fa>
    80ce:	8b 55 fc             	mov    -0x4(%rbp),%edx
    80d1:	48 63 d2             	movslq %edx,%rdx
    80d4:	48 c1 e2 04          	shl    $0x4,%rdx
    80d8:	48 01 d0             	add    %rdx,%rax
    80db:	8b 40 0c             	mov    0xc(%rax),%eax
    80de:	8d 50 01             	lea    0x1(%rax),%edx
    80e1:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    80e5:	89 50 0c             	mov    %edx,0xc(%rax)
    80e8:	e9 b6 00 00 00       	jmpq   81a3 <update_bb+0x7cf>
    80ed:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 80f4 <update_bb+0x720>
    80f4:	8b 55 fc             	mov    -0x4(%rbp),%edx
    80f7:	48 63 d2             	movslq %edx,%rdx
    80fa:	48 c1 e2 04          	shl    $0x4,%rdx
    80fe:	48 01 d0             	add    %rdx,%rax
    8101:	8b 50 0c             	mov    0xc(%rax),%edx
    8104:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    8108:	89 50 0c             	mov    %edx,0xc(%rax)
    810b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8112 <update_bb+0x73e>
    8112:	8b 55 fc             	mov    -0x4(%rbp),%edx
    8115:	48 63 d2             	movslq %edx,%rdx
    8118:	48 c1 e2 04          	shl    $0x4,%rdx
    811c:	48 01 d0             	add    %rdx,%rax
    811f:	8b 50 0c             	mov    0xc(%rax),%edx
    8122:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    8126:	89 50 0c             	mov    %edx,0xc(%rax)
    8129:	eb 78                	jmp    81a3 <update_bb+0x7cf>
    812b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8132 <update_bb+0x75e>
    8132:	8b 55 fc             	mov    -0x4(%rbp),%edx
    8135:	48 63 d2             	movslq %edx,%rdx
    8138:	48 c1 e2 04          	shl    $0x4,%rdx
    813c:	48 01 d0             	add    %rdx,%rax
    813f:	8b 50 08             	mov    0x8(%rax),%edx
    8142:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    8146:	89 50 08             	mov    %edx,0x8(%rax)
    8149:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8150 <update_bb+0x77c>
    8150:	8b 55 fc             	mov    -0x4(%rbp),%edx
    8153:	48 63 d2             	movslq %edx,%rdx
    8156:	48 c1 e2 04          	shl    $0x4,%rdx
    815a:	48 01 d0             	add    %rdx,%rax
    815d:	8b 50 0c             	mov    0xc(%rax),%edx
    8160:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    8164:	89 50 0c             	mov    %edx,0xc(%rax)
    8167:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 816e <update_bb+0x79a>
    816e:	8b 55 fc             	mov    -0x4(%rbp),%edx
    8171:	48 63 d2             	movslq %edx,%rdx
    8174:	48 c1 e2 04          	shl    $0x4,%rdx
    8178:	48 01 d0             	add    %rdx,%rax
    817b:	8b 50 08             	mov    0x8(%rax),%edx
    817e:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    8182:	89 50 08             	mov    %edx,0x8(%rax)
    8185:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 818c <update_bb+0x7b8>
    818c:	8b 55 fc             	mov    -0x4(%rbp),%edx
    818f:	48 63 d2             	movslq %edx,%rdx
    8192:	48 c1 e2 04          	shl    $0x4,%rdx
    8196:	48 01 d0             	add    %rdx,%rax
    8199:	8b 50 0c             	mov    0xc(%rax),%edx
    819c:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    81a0:	89 50 0c             	mov    %edx,0xc(%rax)
    81a3:	c9                   	leaveq 
    81a4:	c3                   	retq   

00000000000081a5 <initial_placement>:
    81a5:	55                   	push   %rbp
    81a6:	48 89 e5             	mov    %rsp,%rbp
    81a9:	53                   	push   %rbx
    81aa:	48 83 ec 58          	sub    $0x58,%rsp
    81ae:	89 7d ac             	mov    %edi,-0x54(%rbp)
    81b1:	48 89 75 a0          	mov    %rsi,-0x60(%rbp)
    81b5:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 81bb <initial_placement+0x16>
    81bb:	48 98                	cltq   
    81bd:	48 c1 e0 03          	shl    $0x3,%rax
    81c1:	48 89 c7             	mov    %rax,%rdi
    81c4:	e8 00 00 00 00       	callq  81c9 <initial_placement+0x24>
    81c9:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    81cd:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 81d3 <initial_placement+0x2e>
    81d3:	48 98                	cltq   
    81d5:	be 04 00 00 00       	mov    $0x4,%esi
    81da:	48 89 c7             	mov    %rax,%rdi
    81dd:	e8 00 00 00 00       	callq  81e2 <initial_placement+0x3d>
    81e2:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    81e6:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 81ec <initial_placement+0x47>
    81ec:	48 98                	cltq   
    81ee:	be 04 00 00 00       	mov    $0x4,%esi
    81f3:	48 89 c7             	mov    %rax,%rdi
    81f6:	e8 00 00 00 00       	callq  81fb <initial_placement+0x56>
    81fb:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
    81ff:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    8206:	e9 6c 01 00 00       	jmpq   8377 <initial_placement+0x1d2>
    820b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    8212:	e9 4a 01 00 00       	jmpq   8361 <initial_placement+0x1bc>
    8217:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 821e <initial_placement+0x79>
    821e:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8221:	48 63 d2             	movslq %edx,%rdx
    8224:	48 c1 e2 03          	shl    $0x3,%rdx
    8228:	48 01 d0             	add    %rdx,%rax
    822b:	48 8b 08             	mov    (%rax),%rcx
    822e:	8b 45 e8             	mov    -0x18(%rbp),%eax
    8231:	48 63 d0             	movslq %eax,%rdx
    8234:	48 89 d0             	mov    %rdx,%rax
    8237:	48 01 c0             	add    %rax,%rax
    823a:	48 01 d0             	add    %rdx,%rax
    823d:	48 c1 e0 03          	shl    $0x3,%rax
    8241:	48 01 c8             	add    %rcx,%rax
    8244:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%rax)
    824b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%rbp)
    8252:	e9 ca 00 00 00       	jmpq   8321 <initial_placement+0x17c>
    8257:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 825e <initial_placement+0xb9>
    825e:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8261:	48 63 d2             	movslq %edx,%rdx
    8264:	48 c1 e2 03          	shl    $0x3,%rdx
    8268:	48 01 d0             	add    %rdx,%rax
    826b:	48 8b 08             	mov    (%rax),%rcx
    826e:	8b 45 e8             	mov    -0x18(%rbp),%eax
    8271:	48 63 d0             	movslq %eax,%rdx
    8274:	48 89 d0             	mov    %rdx,%rax
    8277:	48 01 c0             	add    %rax,%rax
    827a:	48 01 d0             	add    %rdx,%rax
    827d:	48 c1 e0 03          	shl    $0x3,%rax
    8281:	48 01 c8             	add    %rcx,%rax
    8284:	48 8b 40 10          	mov    0x10(%rax),%rax
    8288:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    828b:	48 63 d2             	movslq %edx,%rdx
    828e:	48 c1 e2 02          	shl    $0x2,%rdx
    8292:	48 01 d0             	add    %rdx,%rax
    8295:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%rax)
    829b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 82a2 <initial_placement+0xfd>
    82a2:	8b 55 ec             	mov    -0x14(%rbp),%edx
    82a5:	48 63 d2             	movslq %edx,%rdx
    82a8:	48 c1 e2 03          	shl    $0x3,%rdx
    82ac:	48 01 d0             	add    %rdx,%rax
    82af:	48 8b 08             	mov    (%rax),%rcx
    82b2:	8b 45 e8             	mov    -0x18(%rbp),%eax
    82b5:	48 63 d0             	movslq %eax,%rdx
    82b8:	48 89 d0             	mov    %rdx,%rax
    82bb:	48 01 c0             	add    %rax,%rax
    82be:	48 01 d0             	add    %rdx,%rax
    82c1:	48 c1 e0 03          	shl    $0x3,%rax
    82c5:	48 01 c8             	add    %rcx,%rax
    82c8:	8b 40 08             	mov    0x8(%rax),%eax
    82cb:	85 c0                	test   %eax,%eax
    82cd:	75 4e                	jne    831d <initial_placement+0x178>
    82cf:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 82d6 <initial_placement+0x131>
    82d6:	8b 55 ec             	mov    -0x14(%rbp),%edx
    82d9:	48 63 d2             	movslq %edx,%rdx
    82dc:	48 c1 e2 03          	shl    $0x3,%rdx
    82e0:	48 01 d0             	add    %rdx,%rax
    82e3:	48 8b 08             	mov    (%rax),%rcx
    82e6:	8b 45 e8             	mov    -0x18(%rbp),%eax
    82e9:	48 63 d0             	movslq %eax,%rdx
    82ec:	48 89 d0             	mov    %rdx,%rax
    82ef:	48 01 c0             	add    %rax,%rax
    82f2:	48 01 d0             	add    %rdx,%rax
    82f5:	48 c1 e0 03          	shl    $0x3,%rax
    82f9:	48 01 c8             	add    %rcx,%rax
    82fc:	48 8b 00             	mov    (%rax),%rax
    82ff:	8b 80 90 00 00 00    	mov    0x90(%rax),%eax
    8305:	48 98                	cltq   
    8307:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    830e:	00 
    830f:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    8313:	48 01 d0             	add    %rdx,%rax
    8316:	8b 10                	mov    (%rax),%edx
    8318:	83 c2 01             	add    $0x1,%edx
    831b:	89 10                	mov    %edx,(%rax)
    831d:	83 45 e4 01          	addl   $0x1,-0x1c(%rbp)
    8321:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8328 <initial_placement+0x183>
    8328:	8b 55 ec             	mov    -0x14(%rbp),%edx
    832b:	48 63 d2             	movslq %edx,%rdx
    832e:	48 c1 e2 03          	shl    $0x3,%rdx
    8332:	48 01 d0             	add    %rdx,%rax
    8335:	48 8b 08             	mov    (%rax),%rcx
    8338:	8b 45 e8             	mov    -0x18(%rbp),%eax
    833b:	48 63 d0             	movslq %eax,%rdx
    833e:	48 89 d0             	mov    %rdx,%rax
    8341:	48 01 c0             	add    %rax,%rax
    8344:	48 01 d0             	add    %rdx,%rax
    8347:	48 c1 e0 03          	shl    $0x3,%rax
    834b:	48 01 c8             	add    %rcx,%rax
    834e:	48 8b 00             	mov    (%rax),%rax
    8351:	8b 40 0c             	mov    0xc(%rax),%eax
    8354:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
    8357:	0f 8f fa fe ff ff    	jg     8257 <initial_placement+0xb2>
    835d:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    8361:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8367 <initial_placement+0x1c2>
    8367:	83 c0 01             	add    $0x1,%eax
    836a:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    836d:	0f 8d a4 fe ff ff    	jge    8217 <initial_placement+0x72>
    8373:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    8377:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 837d <initial_placement+0x1d8>
    837d:	83 c0 01             	add    $0x1,%eax
    8380:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    8383:	0f 8d 82 fe ff ff    	jge    820b <initial_placement+0x66>
    8389:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    8390:	eb 4a                	jmp    83dc <initial_placement+0x237>
    8392:	8b 45 ec             	mov    -0x14(%rbp),%eax
    8395:	48 98                	cltq   
    8397:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
    839e:	00 
    839f:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    83a3:	48 8d 1c 02          	lea    (%rdx,%rax,1),%rbx
    83a7:	8b 45 ec             	mov    -0x14(%rbp),%eax
    83aa:	48 98                	cltq   
    83ac:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    83b3:	00 
    83b4:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    83b8:	48 01 d0             	add    %rdx,%rax
    83bb:	8b 00                	mov    (%rax),%eax
    83bd:	48 63 d0             	movslq %eax,%rdx
    83c0:	48 89 d0             	mov    %rdx,%rax
    83c3:	48 01 c0             	add    %rax,%rax
    83c6:	48 01 d0             	add    %rdx,%rax
    83c9:	48 c1 e0 02          	shl    $0x2,%rax
    83cd:	48 89 c7             	mov    %rax,%rdi
    83d0:	e8 00 00 00 00       	callq  83d5 <initial_placement+0x230>
    83d5:	48 89 03             	mov    %rax,(%rbx)
    83d8:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    83dc:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 83e2 <initial_placement+0x23d>
    83e2:	39 45 ec             	cmp    %eax,-0x14(%rbp)
    83e5:	7c ab                	jl     8392 <initial_placement+0x1ed>
    83e7:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    83ee:	e9 d2 01 00 00       	jmpq   85c5 <initial_placement+0x420>
    83f3:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    83fa:	e9 b0 01 00 00       	jmpq   85af <initial_placement+0x40a>
    83ff:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%rbp)
    8406:	e9 64 01 00 00       	jmpq   856f <initial_placement+0x3ca>
    840b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8412 <initial_placement+0x26d>
    8412:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8415:	48 63 d2             	movslq %edx,%rdx
    8418:	48 c1 e2 03          	shl    $0x3,%rdx
    841c:	48 01 d0             	add    %rdx,%rax
    841f:	48 8b 08             	mov    (%rax),%rcx
    8422:	8b 45 e8             	mov    -0x18(%rbp),%eax
    8425:	48 63 d0             	movslq %eax,%rdx
    8428:	48 89 d0             	mov    %rdx,%rax
    842b:	48 01 c0             	add    %rax,%rax
    842e:	48 01 d0             	add    %rdx,%rax
    8431:	48 c1 e0 03          	shl    $0x3,%rax
    8435:	48 01 c8             	add    %rcx,%rax
    8438:	8b 40 08             	mov    0x8(%rax),%eax
    843b:	85 c0                	test   %eax,%eax
    843d:	0f 85 28 01 00 00    	jne    856b <initial_placement+0x3c6>
    8443:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 844a <initial_placement+0x2a5>
    844a:	8b 55 ec             	mov    -0x14(%rbp),%edx
    844d:	48 63 d2             	movslq %edx,%rdx
    8450:	48 c1 e2 03          	shl    $0x3,%rdx
    8454:	48 01 d0             	add    %rdx,%rax
    8457:	48 8b 08             	mov    (%rax),%rcx
    845a:	8b 45 e8             	mov    -0x18(%rbp),%eax
    845d:	48 63 d0             	movslq %eax,%rdx
    8460:	48 89 d0             	mov    %rdx,%rax
    8463:	48 01 c0             	add    %rax,%rax
    8466:	48 01 d0             	add    %rdx,%rax
    8469:	48 c1 e0 03          	shl    $0x3,%rax
    846d:	48 01 c8             	add    %rcx,%rax
    8470:	48 8b 00             	mov    (%rax),%rax
    8473:	8b 80 90 00 00 00    	mov    0x90(%rax),%eax
    8479:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    847c:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    847f:	48 98                	cltq   
    8481:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
    8488:	00 
    8489:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    848d:	48 01 d0             	add    %rdx,%rax
    8490:	48 8b 08             	mov    (%rax),%rcx
    8493:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    8496:	48 98                	cltq   
    8498:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    849f:	00 
    84a0:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    84a4:	48 01 d0             	add    %rdx,%rax
    84a7:	8b 00                	mov    (%rax),%eax
    84a9:	48 63 d0             	movslq %eax,%rdx
    84ac:	48 89 d0             	mov    %rdx,%rax
    84af:	48 01 c0             	add    %rax,%rax
    84b2:	48 01 d0             	add    %rdx,%rax
    84b5:	48 c1 e0 02          	shl    $0x2,%rax
    84b9:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    84bd:	8b 45 ec             	mov    -0x14(%rbp),%eax
    84c0:	89 02                	mov    %eax,(%rdx)
    84c2:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    84c5:	48 98                	cltq   
    84c7:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
    84ce:	00 
    84cf:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    84d3:	48 01 d0             	add    %rdx,%rax
    84d6:	48 8b 08             	mov    (%rax),%rcx
    84d9:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    84dc:	48 98                	cltq   
    84de:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    84e5:	00 
    84e6:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    84ea:	48 01 d0             	add    %rdx,%rax
    84ed:	8b 00                	mov    (%rax),%eax
    84ef:	48 63 d0             	movslq %eax,%rdx
    84f2:	48 89 d0             	mov    %rdx,%rax
    84f5:	48 01 c0             	add    %rax,%rax
    84f8:	48 01 d0             	add    %rdx,%rax
    84fb:	48 c1 e0 02          	shl    $0x2,%rax
    84ff:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    8503:	8b 45 e8             	mov    -0x18(%rbp),%eax
    8506:	89 42 04             	mov    %eax,0x4(%rdx)
    8509:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    850c:	48 98                	cltq   
    850e:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
    8515:	00 
    8516:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    851a:	48 01 d0             	add    %rdx,%rax
    851d:	48 8b 08             	mov    (%rax),%rcx
    8520:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    8523:	48 98                	cltq   
    8525:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    852c:	00 
    852d:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    8531:	48 01 d0             	add    %rdx,%rax
    8534:	8b 00                	mov    (%rax),%eax
    8536:	48 63 d0             	movslq %eax,%rdx
    8539:	48 89 d0             	mov    %rdx,%rax
    853c:	48 01 c0             	add    %rax,%rax
    853f:	48 01 d0             	add    %rdx,%rax
    8542:	48 c1 e0 02          	shl    $0x2,%rax
    8546:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    854a:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    854d:	89 42 08             	mov    %eax,0x8(%rdx)
    8550:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    8553:	48 98                	cltq   
    8555:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    855c:	00 
    855d:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    8561:	48 01 d0             	add    %rdx,%rax
    8564:	8b 10                	mov    (%rax),%edx
    8566:	83 c2 01             	add    $0x1,%edx
    8569:	89 10                	mov    %edx,(%rax)
    856b:	83 45 e4 01          	addl   $0x1,-0x1c(%rbp)
    856f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8576 <initial_placement+0x3d1>
    8576:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8579:	48 63 d2             	movslq %edx,%rdx
    857c:	48 c1 e2 03          	shl    $0x3,%rdx
    8580:	48 01 d0             	add    %rdx,%rax
    8583:	48 8b 08             	mov    (%rax),%rcx
    8586:	8b 45 e8             	mov    -0x18(%rbp),%eax
    8589:	48 63 d0             	movslq %eax,%rdx
    858c:	48 89 d0             	mov    %rdx,%rax
    858f:	48 01 c0             	add    %rax,%rax
    8592:	48 01 d0             	add    %rdx,%rax
    8595:	48 c1 e0 03          	shl    $0x3,%rax
    8599:	48 01 c8             	add    %rcx,%rax
    859c:	48 8b 00             	mov    (%rax),%rax
    859f:	8b 40 0c             	mov    0xc(%rax),%eax
    85a2:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
    85a5:	0f 8f 60 fe ff ff    	jg     840b <initial_placement+0x266>
    85ab:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    85af:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 85b5 <initial_placement+0x410>
    85b5:	83 c0 01             	add    $0x1,%eax
    85b8:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    85bb:	0f 8d 3e fe ff ff    	jge    83ff <initial_placement+0x25a>
    85c1:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    85c5:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 85cb <initial_placement+0x426>
    85cb:	83 c0 01             	add    $0x1,%eax
    85ce:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    85d1:	0f 8d 1c fe ff ff    	jge    83f3 <initial_placement+0x24e>
    85d7:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%rbp)
    85de:	e9 67 02 00 00       	jmpq   884a <initial_placement+0x6a5>
    85e3:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 85ea <initial_placement+0x445>
    85ea:	8b 45 e0             	mov    -0x20(%rbp),%eax
    85ed:	48 63 d0             	movslq %eax,%rdx
    85f0:	48 89 d0             	mov    %rdx,%rax
    85f3:	48 c1 e0 02          	shl    $0x2,%rax
    85f7:	48 01 d0             	add    %rdx,%rax
    85fa:	48 c1 e0 03          	shl    $0x3,%rax
    85fe:	48 01 c8             	add    %rcx,%rax
    8601:	48 8b 50 08          	mov    0x8(%rax),%rdx
    8605:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 860c <initial_placement+0x467>
    860c:	48 39 c2             	cmp    %rax,%rdx
    860f:	75 0a                	jne    861b <initial_placement+0x476>
    8611:	83 7d ac 02          	cmpl   $0x2,-0x54(%rbp)
    8615:	0f 84 2b 02 00 00    	je     8846 <initial_placement+0x6a1>
    861b:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 8622 <initial_placement+0x47d>
    8622:	8b 45 e0             	mov    -0x20(%rbp),%eax
    8625:	48 63 d0             	movslq %eax,%rdx
    8628:	48 89 d0             	mov    %rdx,%rax
    862b:	48 c1 e0 02          	shl    $0x2,%rax
    862f:	48 01 d0             	add    %rdx,%rax
    8632:	48 c1 e0 03          	shl    $0x3,%rax
    8636:	48 01 c8             	add    %rcx,%rax
    8639:	48 8b 40 08          	mov    0x8(%rax),%rax
    863d:	8b 80 90 00 00 00    	mov    0x90(%rax),%eax
    8643:	89 45 c4             	mov    %eax,-0x3c(%rbp)
    8646:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    8649:	48 98                	cltq   
    864b:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    8652:	00 
    8653:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    8657:	48 01 d0             	add    %rdx,%rax
    865a:	8b 00                	mov    (%rax),%eax
    865c:	85 c0                	test   %eax,%eax
    865e:	7f 19                	jg     8679 <initial_placement+0x4d4>
    8660:	b9 00 00 00 00       	mov    $0x0,%ecx
    8665:	ba 41 0e 00 00       	mov    $0xe41,%edx
    866a:	be 00 00 00 00       	mov    $0x0,%esi
    866f:	bf 00 00 00 00       	mov    $0x0,%edi
    8674:	e8 00 00 00 00       	callq  8679 <initial_placement+0x4d4>
    8679:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    867c:	48 98                	cltq   
    867e:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    8685:	00 
    8686:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    868a:	48 01 d0             	add    %rdx,%rax
    868d:	8b 00                	mov    (%rax),%eax
    868f:	83 e8 01             	sub    $0x1,%eax
    8692:	89 c7                	mov    %eax,%edi
    8694:	e8 00 00 00 00       	callq  8699 <initial_placement+0x4f4>
    8699:	89 45 c0             	mov    %eax,-0x40(%rbp)
    869c:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    869f:	48 98                	cltq   
    86a1:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
    86a8:	00 
    86a9:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    86ad:	48 01 d0             	add    %rdx,%rax
    86b0:	48 8b 08             	mov    (%rax),%rcx
    86b3:	8b 45 c0             	mov    -0x40(%rbp),%eax
    86b6:	48 63 d0             	movslq %eax,%rdx
    86b9:	48 89 d0             	mov    %rdx,%rax
    86bc:	48 01 c0             	add    %rax,%rax
    86bf:	48 01 d0             	add    %rdx,%rax
    86c2:	48 c1 e0 02          	shl    $0x2,%rax
    86c6:	48 01 c8             	add    %rcx,%rax
    86c9:	8b 00                	mov    (%rax),%eax
    86cb:	89 45 bc             	mov    %eax,-0x44(%rbp)
    86ce:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    86d1:	48 98                	cltq   
    86d3:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
    86da:	00 
    86db:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    86df:	48 01 d0             	add    %rdx,%rax
    86e2:	48 8b 08             	mov    (%rax),%rcx
    86e5:	8b 45 c0             	mov    -0x40(%rbp),%eax
    86e8:	48 63 d0             	movslq %eax,%rdx
    86eb:	48 89 d0             	mov    %rdx,%rax
    86ee:	48 01 c0             	add    %rax,%rax
    86f1:	48 01 d0             	add    %rdx,%rax
    86f4:	48 c1 e0 02          	shl    $0x2,%rax
    86f8:	48 01 c8             	add    %rcx,%rax
    86fb:	8b 40 04             	mov    0x4(%rax),%eax
    86fe:	89 45 b8             	mov    %eax,-0x48(%rbp)
    8701:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    8704:	48 98                	cltq   
    8706:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
    870d:	00 
    870e:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    8712:	48 01 d0             	add    %rdx,%rax
    8715:	48 8b 08             	mov    (%rax),%rcx
    8718:	8b 45 c0             	mov    -0x40(%rbp),%eax
    871b:	48 63 d0             	movslq %eax,%rdx
    871e:	48 89 d0             	mov    %rdx,%rax
    8721:	48 01 c0             	add    %rax,%rax
    8724:	48 01 d0             	add    %rdx,%rax
    8727:	48 c1 e0 02          	shl    $0x2,%rax
    872b:	48 01 c8             	add    %rcx,%rax
    872e:	8b 40 08             	mov    0x8(%rax),%eax
    8731:	89 45 b4             	mov    %eax,-0x4c(%rbp)
    8734:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 873b <initial_placement+0x596>
    873b:	8b 55 bc             	mov    -0x44(%rbp),%edx
    873e:	48 63 d2             	movslq %edx,%rdx
    8741:	48 c1 e2 03          	shl    $0x3,%rdx
    8745:	48 01 d0             	add    %rdx,%rax
    8748:	48 8b 08             	mov    (%rax),%rcx
    874b:	8b 45 b8             	mov    -0x48(%rbp),%eax
    874e:	48 63 d0             	movslq %eax,%rdx
    8751:	48 89 d0             	mov    %rdx,%rax
    8754:	48 01 c0             	add    %rax,%rax
    8757:	48 01 d0             	add    %rdx,%rax
    875a:	48 c1 e0 03          	shl    $0x3,%rax
    875e:	48 01 c8             	add    %rcx,%rax
    8761:	48 8b 40 10          	mov    0x10(%rax),%rax
    8765:	8b 55 b4             	mov    -0x4c(%rbp),%edx
    8768:	48 63 d2             	movslq %edx,%rdx
    876b:	48 c1 e2 02          	shl    $0x2,%rdx
    876f:	48 01 c2             	add    %rax,%rdx
    8772:	8b 45 e0             	mov    -0x20(%rbp),%eax
    8775:	89 02                	mov    %eax,(%rdx)
    8777:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 877e <initial_placement+0x5d9>
    877e:	8b 55 bc             	mov    -0x44(%rbp),%edx
    8781:	48 63 d2             	movslq %edx,%rdx
    8784:	48 c1 e2 03          	shl    $0x3,%rdx
    8788:	48 01 d0             	add    %rdx,%rax
    878b:	48 8b 08             	mov    (%rax),%rcx
    878e:	8b 45 b8             	mov    -0x48(%rbp),%eax
    8791:	48 63 d0             	movslq %eax,%rdx
    8794:	48 89 d0             	mov    %rdx,%rax
    8797:	48 01 c0             	add    %rax,%rax
    879a:	48 01 d0             	add    %rdx,%rax
    879d:	48 c1 e0 03          	shl    $0x3,%rax
    87a1:	48 01 c8             	add    %rcx,%rax
    87a4:	8b 50 0c             	mov    0xc(%rax),%edx
    87a7:	83 c2 01             	add    $0x1,%edx
    87aa:	89 50 0c             	mov    %edx,0xc(%rax)
    87ad:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    87b0:	48 98                	cltq   
    87b2:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
    87b9:	00 
    87ba:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    87be:	48 01 d0             	add    %rdx,%rax
    87c1:	48 8b 08             	mov    (%rax),%rcx
    87c4:	8b 45 c0             	mov    -0x40(%rbp),%eax
    87c7:	48 63 d0             	movslq %eax,%rdx
    87ca:	48 89 d0             	mov    %rdx,%rax
    87cd:	48 01 c0             	add    %rax,%rax
    87d0:	48 01 d0             	add    %rdx,%rax
    87d3:	48 c1 e0 02          	shl    $0x2,%rax
    87d7:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    87db:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    87de:	48 98                	cltq   
    87e0:	48 8d 0c c5 00 00 00 	lea    0x0(,%rax,8),%rcx
    87e7:	00 
    87e8:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    87ec:	48 01 c8             	add    %rcx,%rax
    87ef:	48 8b 30             	mov    (%rax),%rsi
    87f2:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    87f5:	48 98                	cltq   
    87f7:	48 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%rcx
    87fe:	00 
    87ff:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    8803:	48 01 c8             	add    %rcx,%rax
    8806:	8b 00                	mov    (%rax),%eax
    8808:	48 63 c8             	movslq %eax,%rcx
    880b:	48 89 c8             	mov    %rcx,%rax
    880e:	48 01 c0             	add    %rax,%rax
    8811:	48 01 c8             	add    %rcx,%rax
    8814:	48 c1 e0 02          	shl    $0x2,%rax
    8818:	48 83 e8 0c          	sub    $0xc,%rax
    881c:	48 01 f0             	add    %rsi,%rax
    881f:	48 8b 08             	mov    (%rax),%rcx
    8822:	48 89 0a             	mov    %rcx,(%rdx)
    8825:	8b 40 08             	mov    0x8(%rax),%eax
    8828:	89 42 08             	mov    %eax,0x8(%rdx)
    882b:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    882e:	48 98                	cltq   
    8830:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    8837:	00 
    8838:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    883c:	48 01 d0             	add    %rdx,%rax
    883f:	8b 10                	mov    (%rax),%edx
    8841:	83 ea 01             	sub    $0x1,%edx
    8844:	89 10                	mov    %edx,(%rax)
    8846:	83 45 e0 01          	addl   $0x1,-0x20(%rbp)
    884a:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8850 <initial_placement+0x6ab>
    8850:	39 45 e0             	cmp    %eax,-0x20(%rbp)
    8853:	0f 8c 8a fd ff ff    	jl     85e3 <initial_placement+0x43e>
    8859:	83 7d ac 02          	cmpl   $0x2,-0x54(%rbp)
    885d:	75 0c                	jne    886b <initial_placement+0x6c6>
    885f:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
    8863:	48 89 c7             	mov    %rax,%rdi
    8866:	e8 00 00 00 00       	callq  886b <initial_placement+0x6c6>
    886b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    8872:	e9 79 01 00 00       	jmpq   89f0 <initial_placement+0x84b>
    8877:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    887e:	e9 57 01 00 00       	jmpq   89da <initial_placement+0x835>
    8883:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%rbp)
    888a:	e9 0b 01 00 00       	jmpq   899a <initial_placement+0x7f5>
    888f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8896 <initial_placement+0x6f1>
    8896:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8899:	48 63 d2             	movslq %edx,%rdx
    889c:	48 c1 e2 03          	shl    $0x3,%rdx
    88a0:	48 01 d0             	add    %rdx,%rax
    88a3:	48 8b 08             	mov    (%rax),%rcx
    88a6:	8b 45 e8             	mov    -0x18(%rbp),%eax
    88a9:	48 63 d0             	movslq %eax,%rdx
    88ac:	48 89 d0             	mov    %rdx,%rax
    88af:	48 01 c0             	add    %rax,%rax
    88b2:	48 01 d0             	add    %rdx,%rax
    88b5:	48 c1 e0 03          	shl    $0x3,%rax
    88b9:	48 01 c8             	add    %rcx,%rax
    88bc:	48 8b 40 10          	mov    0x10(%rax),%rax
    88c0:	48 85 c0             	test   %rax,%rax
    88c3:	75 19                	jne    88de <initial_placement+0x739>
    88c5:	b9 00 00 00 00       	mov    $0x0,%ecx
    88ca:	ba 5d 0e 00 00       	mov    $0xe5d,%edx
    88cf:	be 00 00 00 00       	mov    $0x0,%esi
    88d4:	bf 00 00 00 00       	mov    $0x0,%edi
    88d9:	e8 00 00 00 00       	callq  88de <initial_placement+0x739>
    88de:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 88e5 <initial_placement+0x740>
    88e5:	8b 55 ec             	mov    -0x14(%rbp),%edx
    88e8:	48 63 d2             	movslq %edx,%rdx
    88eb:	48 c1 e2 03          	shl    $0x3,%rdx
    88ef:	48 01 d0             	add    %rdx,%rax
    88f2:	48 8b 08             	mov    (%rax),%rcx
    88f5:	8b 45 e8             	mov    -0x18(%rbp),%eax
    88f8:	48 63 d0             	movslq %eax,%rdx
    88fb:	48 89 d0             	mov    %rdx,%rax
    88fe:	48 01 c0             	add    %rax,%rax
    8901:	48 01 d0             	add    %rdx,%rax
    8904:	48 c1 e0 03          	shl    $0x3,%rax
    8908:	48 01 c8             	add    %rcx,%rax
    890b:	48 8b 40 10          	mov    0x10(%rax),%rax
    890f:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    8912:	48 63 d2             	movslq %edx,%rdx
    8915:	48 c1 e2 02          	shl    $0x2,%rdx
    8919:	48 01 d0             	add    %rdx,%rax
    891c:	8b 00                	mov    (%rax),%eax
    891e:	89 45 e0             	mov    %eax,-0x20(%rbp)
    8921:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%rbp)
    8925:	74 6f                	je     8996 <initial_placement+0x7f1>
    8927:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 892e <initial_placement+0x789>
    892e:	8b 45 e0             	mov    -0x20(%rbp),%eax
    8931:	48 63 d0             	movslq %eax,%rdx
    8934:	48 89 d0             	mov    %rdx,%rax
    8937:	48 c1 e0 02          	shl    $0x2,%rax
    893b:	48 01 d0             	add    %rdx,%rax
    893e:	48 c1 e0 03          	shl    $0x3,%rax
    8942:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    8946:	8b 45 ec             	mov    -0x14(%rbp),%eax
    8949:	89 42 18             	mov    %eax,0x18(%rdx)
    894c:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 8953 <initial_placement+0x7ae>
    8953:	8b 45 e0             	mov    -0x20(%rbp),%eax
    8956:	48 63 d0             	movslq %eax,%rdx
    8959:	48 89 d0             	mov    %rdx,%rax
    895c:	48 c1 e0 02          	shl    $0x2,%rax
    8960:	48 01 d0             	add    %rdx,%rax
    8963:	48 c1 e0 03          	shl    $0x3,%rax
    8967:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    896b:	8b 45 e8             	mov    -0x18(%rbp),%eax
    896e:	89 42 1c             	mov    %eax,0x1c(%rdx)
    8971:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 8978 <initial_placement+0x7d3>
    8978:	8b 45 e0             	mov    -0x20(%rbp),%eax
    897b:	48 63 d0             	movslq %eax,%rdx
    897e:	48 89 d0             	mov    %rdx,%rax
    8981:	48 c1 e0 02          	shl    $0x2,%rax
    8985:	48 01 d0             	add    %rdx,%rax
    8988:	48 c1 e0 03          	shl    $0x3,%rax
    898c:	48 8d 14 01          	lea    (%rcx,%rax,1),%rdx
    8990:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    8993:	89 42 20             	mov    %eax,0x20(%rdx)
    8996:	83 45 e4 01          	addl   $0x1,-0x1c(%rbp)
    899a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 89a1 <initial_placement+0x7fc>
    89a1:	8b 55 ec             	mov    -0x14(%rbp),%edx
    89a4:	48 63 d2             	movslq %edx,%rdx
    89a7:	48 c1 e2 03          	shl    $0x3,%rdx
    89ab:	48 01 d0             	add    %rdx,%rax
    89ae:	48 8b 08             	mov    (%rax),%rcx
    89b1:	8b 45 e8             	mov    -0x18(%rbp),%eax
    89b4:	48 63 d0             	movslq %eax,%rdx
    89b7:	48 89 d0             	mov    %rdx,%rax
    89ba:	48 01 c0             	add    %rax,%rax
    89bd:	48 01 d0             	add    %rdx,%rax
    89c0:	48 c1 e0 03          	shl    $0x3,%rax
    89c4:	48 01 c8             	add    %rcx,%rax
    89c7:	48 8b 00             	mov    (%rax),%rax
    89ca:	8b 40 0c             	mov    0xc(%rax),%eax
    89cd:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
    89d0:	0f 8f b9 fe ff ff    	jg     888f <initial_placement+0x6ea>
    89d6:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    89da:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 89e0 <initial_placement+0x83b>
    89e0:	83 c0 01             	add    $0x1,%eax
    89e3:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    89e6:	0f 8d 97 fe ff ff    	jge    8883 <initial_placement+0x6de>
    89ec:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    89f0:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 89f6 <initial_placement+0x851>
    89f6:	83 c0 01             	add    $0x1,%eax
    89f9:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    89fc:	0f 8d 75 fe ff ff    	jge    8877 <initial_placement+0x6d2>
    8a02:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    8a09:	eb 23                	jmp    8a2e <initial_placement+0x889>
    8a0b:	8b 45 ec             	mov    -0x14(%rbp),%eax
    8a0e:	48 98                	cltq   
    8a10:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
    8a17:	00 
    8a18:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    8a1c:	48 01 d0             	add    %rdx,%rax
    8a1f:	48 8b 00             	mov    (%rax),%rax
    8a22:	48 89 c7             	mov    %rax,%rdi
    8a25:	e8 00 00 00 00       	callq  8a2a <initial_placement+0x885>
    8a2a:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    8a2e:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8a34 <initial_placement+0x88f>
    8a34:	39 45 ec             	cmp    %eax,-0x14(%rbp)
    8a37:	7c d2                	jl     8a0b <initial_placement+0x866>
    8a39:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    8a3d:	48 89 c7             	mov    %rax,%rdi
    8a40:	e8 00 00 00 00       	callq  8a45 <initial_placement+0x8a0>
    8a45:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    8a49:	48 89 c7             	mov    %rax,%rdi
    8a4c:	e8 00 00 00 00       	callq  8a51 <initial_placement+0x8ac>
    8a51:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    8a55:	48 89 c7             	mov    %rax,%rdi
    8a58:	e8 00 00 00 00       	callq  8a5d <initial_placement+0x8b8>
    8a5d:	48 83 c4 58          	add    $0x58,%rsp
    8a61:	5b                   	pop    %rbx
    8a62:	5d                   	pop    %rbp
    8a63:	c3                   	retq   

0000000000008a64 <free_fast_cost_update_structs>:
    8a64:	55                   	push   %rbp
    8a65:	48 89 e5             	mov    %rsp,%rbp
    8a68:	48 83 ec 10          	sub    $0x10,%rsp
    8a6c:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    8a73:	eb 23                	jmp    8a98 <free_fast_cost_update_structs+0x34>
    8a75:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8a7c <free_fast_cost_update_structs+0x18>
    8a7c:	8b 55 fc             	mov    -0x4(%rbp),%edx
    8a7f:	48 63 d2             	movslq %edx,%rdx
    8a82:	48 c1 e2 03          	shl    $0x3,%rdx
    8a86:	48 01 d0             	add    %rdx,%rax
    8a89:	48 8b 00             	mov    (%rax),%rax
    8a8c:	48 89 c7             	mov    %rax,%rdi
    8a8f:	e8 00 00 00 00       	callq  8a94 <free_fast_cost_update_structs+0x30>
    8a94:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    8a98:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8a9e <free_fast_cost_update_structs+0x3a>
    8a9e:	39 45 fc             	cmp    %eax,-0x4(%rbp)
    8aa1:	7e d2                	jle    8a75 <free_fast_cost_update_structs+0x11>
    8aa3:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8aaa <free_fast_cost_update_structs+0x46>
    8aaa:	48 89 c7             	mov    %rax,%rdi
    8aad:	e8 00 00 00 00       	callq  8ab2 <free_fast_cost_update_structs+0x4e>
    8ab2:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    8ab9:	eb 23                	jmp    8ade <free_fast_cost_update_structs+0x7a>
    8abb:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8ac2 <free_fast_cost_update_structs+0x5e>
    8ac2:	8b 55 fc             	mov    -0x4(%rbp),%edx
    8ac5:	48 63 d2             	movslq %edx,%rdx
    8ac8:	48 c1 e2 03          	shl    $0x3,%rdx
    8acc:	48 01 d0             	add    %rdx,%rax
    8acf:	48 8b 00             	mov    (%rax),%rax
    8ad2:	48 89 c7             	mov    %rax,%rdi
    8ad5:	e8 00 00 00 00       	callq  8ada <free_fast_cost_update_structs+0x76>
    8ada:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    8ade:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8ae4 <free_fast_cost_update_structs+0x80>
    8ae4:	39 45 fc             	cmp    %eax,-0x4(%rbp)
    8ae7:	7e d2                	jle    8abb <free_fast_cost_update_structs+0x57>
    8ae9:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8af0 <free_fast_cost_update_structs+0x8c>
    8af0:	48 89 c7             	mov    %rax,%rdi
    8af3:	e8 00 00 00 00       	callq  8af8 <free_fast_cost_update_structs+0x94>
    8af8:	c9                   	leaveq 
    8af9:	c3                   	retq   

0000000000008afa <alloc_and_load_for_fast_cost_update>:
    8afa:	55                   	push   %rbp
    8afb:	48 89 e5             	mov    %rsp,%rbp
    8afe:	53                   	push   %rbx
    8aff:	48 83 ec 28          	sub    $0x28,%rsp
    8b03:	f3 0f 11 45 dc       	movss  %xmm0,-0x24(%rbp)
    8b08:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8b0e <alloc_and_load_for_fast_cost_update+0x14>
    8b0e:	83 c0 01             	add    $0x1,%eax
    8b11:	48 98                	cltq   
    8b13:	48 c1 e0 03          	shl    $0x3,%rax
    8b17:	48 89 c7             	mov    %rax,%rdi
    8b1a:	e8 00 00 00 00       	callq  8b1f <alloc_and_load_for_fast_cost_update+0x25>
    8b1f:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 8b26 <alloc_and_load_for_fast_cost_update+0x2c>
    8b26:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%rbp)
    8b2d:	eb 30                	jmp    8b5f <alloc_and_load_for_fast_cost_update+0x65>
    8b2f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8b36 <alloc_and_load_for_fast_cost_update+0x3c>
    8b36:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    8b39:	48 63 d2             	movslq %edx,%rdx
    8b3c:	48 c1 e2 03          	shl    $0x3,%rdx
    8b40:	48 8d 1c 10          	lea    (%rax,%rdx,1),%rbx
    8b44:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    8b47:	83 c0 01             	add    $0x1,%eax
    8b4a:	48 98                	cltq   
    8b4c:	48 c1 e0 02          	shl    $0x2,%rax
    8b50:	48 89 c7             	mov    %rax,%rdi
    8b53:	e8 00 00 00 00       	callq  8b58 <alloc_and_load_for_fast_cost_update+0x5e>
    8b58:	48 89 03             	mov    %rax,(%rbx)
    8b5b:	83 45 e4 01          	addl   $0x1,-0x1c(%rbp)
    8b5f:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8b65 <alloc_and_load_for_fast_cost_update+0x6b>
    8b65:	39 45 e4             	cmp    %eax,-0x1c(%rbp)
    8b68:	7e c5                	jle    8b2f <alloc_and_load_for_fast_cost_update+0x35>
    8b6a:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8b70 <alloc_and_load_for_fast_cost_update+0x76>
    8b70:	83 c0 01             	add    $0x1,%eax
    8b73:	48 98                	cltq   
    8b75:	48 c1 e0 03          	shl    $0x3,%rax
    8b79:	48 89 c7             	mov    %rax,%rdi
    8b7c:	e8 00 00 00 00       	callq  8b81 <alloc_and_load_for_fast_cost_update+0x87>
    8b81:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 8b88 <alloc_and_load_for_fast_cost_update+0x8e>
    8b88:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%rbp)
    8b8f:	eb 30                	jmp    8bc1 <alloc_and_load_for_fast_cost_update+0xc7>
    8b91:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8b98 <alloc_and_load_for_fast_cost_update+0x9e>
    8b98:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    8b9b:	48 63 d2             	movslq %edx,%rdx
    8b9e:	48 c1 e2 03          	shl    $0x3,%rdx
    8ba2:	48 8d 1c 10          	lea    (%rax,%rdx,1),%rbx
    8ba6:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    8ba9:	83 c0 01             	add    $0x1,%eax
    8bac:	48 98                	cltq   
    8bae:	48 c1 e0 02          	shl    $0x2,%rax
    8bb2:	48 89 c7             	mov    %rax,%rdi
    8bb5:	e8 00 00 00 00       	callq  8bba <alloc_and_load_for_fast_cost_update+0xc0>
    8bba:	48 89 03             	mov    %rax,(%rbx)
    8bbd:	83 45 e4 01          	addl   $0x1,-0x1c(%rbp)
    8bc1:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8bc7 <alloc_and_load_for_fast_cost_update+0xcd>
    8bc7:	39 45 e4             	cmp    %eax,-0x1c(%rbp)
    8bca:	7e c5                	jle    8b91 <alloc_and_load_for_fast_cost_update+0x97>
    8bcc:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8bd3 <alloc_and_load_for_fast_cost_update+0xd9>
    8bd3:	48 8b 10             	mov    (%rax),%rdx
    8bd6:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8bdd <alloc_and_load_for_fast_cost_update+0xe3>
    8bdd:	8b 00                	mov    (%rax),%eax
    8bdf:	66 0f ef d2          	pxor   %xmm2,%xmm2
    8be3:	f3 0f 2a d0          	cvtsi2ss %eax,%xmm2
    8be7:	66 0f 7e d0          	movd   %xmm2,%eax
    8beb:	89 02                	mov    %eax,(%rdx)
    8bed:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%rbp)
    8bf4:	e9 dd 00 00 00       	jmpq   8cd6 <alloc_and_load_for_fast_cost_update+0x1dc>
    8bf9:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8c00 <alloc_and_load_for_fast_cost_update+0x106>
    8c00:	8b 55 e8             	mov    -0x18(%rbp),%edx
    8c03:	48 63 d2             	movslq %edx,%rdx
    8c06:	48 c1 e2 03          	shl    $0x3,%rdx
    8c0a:	48 01 d0             	add    %rdx,%rax
    8c0d:	48 8b 00             	mov    (%rax),%rax
    8c10:	8b 55 e8             	mov    -0x18(%rbp),%edx
    8c13:	48 63 d2             	movslq %edx,%rdx
    8c16:	48 c1 e2 02          	shl    $0x2,%rdx
    8c1a:	48 01 c2             	add    %rax,%rdx
    8c1d:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8c24 <alloc_and_load_for_fast_cost_update+0x12a>
    8c24:	8b 4d e8             	mov    -0x18(%rbp),%ecx
    8c27:	48 63 c9             	movslq %ecx,%rcx
    8c2a:	48 c1 e1 02          	shl    $0x2,%rcx
    8c2e:	48 01 c8             	add    %rcx,%rax
    8c31:	8b 00                	mov    (%rax),%eax
    8c33:	66 0f ef db          	pxor   %xmm3,%xmm3
    8c37:	f3 0f 2a d8          	cvtsi2ss %eax,%xmm3
    8c3b:	66 0f 7e d8          	movd   %xmm3,%eax
    8c3f:	89 02                	mov    %eax,(%rdx)
    8c41:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    8c48:	eb 7c                	jmp    8cc6 <alloc_and_load_for_fast_cost_update+0x1cc>
    8c4a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8c51 <alloc_and_load_for_fast_cost_update+0x157>
    8c51:	8b 55 e8             	mov    -0x18(%rbp),%edx
    8c54:	48 63 d2             	movslq %edx,%rdx
    8c57:	48 c1 e2 03          	shl    $0x3,%rdx
    8c5b:	48 01 d0             	add    %rdx,%rax
    8c5e:	48 8b 00             	mov    (%rax),%rax
    8c61:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8c64:	48 63 d2             	movslq %edx,%rdx
    8c67:	48 c1 e2 02          	shl    $0x2,%rdx
    8c6b:	48 01 c2             	add    %rax,%rdx
    8c6e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8c75 <alloc_and_load_for_fast_cost_update+0x17b>
    8c75:	8b 4d e8             	mov    -0x18(%rbp),%ecx
    8c78:	48 63 c9             	movslq %ecx,%rcx
    8c7b:	48 c1 e1 03          	shl    $0x3,%rcx
    8c7f:	48 83 e9 08          	sub    $0x8,%rcx
    8c83:	48 01 c8             	add    %rcx,%rax
    8c86:	48 8b 00             	mov    (%rax),%rax
    8c89:	8b 4d ec             	mov    -0x14(%rbp),%ecx
    8c8c:	48 63 c9             	movslq %ecx,%rcx
    8c8f:	48 c1 e1 02          	shl    $0x2,%rcx
    8c93:	48 01 c8             	add    %rcx,%rax
    8c96:	f3 0f 10 08          	movss  (%rax),%xmm1
    8c9a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8ca1 <alloc_and_load_for_fast_cost_update+0x1a7>
    8ca1:	8b 4d e8             	mov    -0x18(%rbp),%ecx
    8ca4:	48 63 c9             	movslq %ecx,%rcx
    8ca7:	48 c1 e1 02          	shl    $0x2,%rcx
    8cab:	48 01 c8             	add    %rcx,%rax
    8cae:	8b 00                	mov    (%rax),%eax
    8cb0:	66 0f ef c0          	pxor   %xmm0,%xmm0
    8cb4:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    8cb8:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    8cbc:	66 0f 7e c8          	movd   %xmm1,%eax
    8cc0:	89 02                	mov    %eax,(%rdx)
    8cc2:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    8cc6:	8b 45 ec             	mov    -0x14(%rbp),%eax
    8cc9:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    8ccc:	0f 8c 78 ff ff ff    	jl     8c4a <alloc_and_load_for_fast_cost_update+0x150>
    8cd2:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    8cd6:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8cdc <alloc_and_load_for_fast_cost_update+0x1e2>
    8cdc:	39 45 e8             	cmp    %eax,-0x18(%rbp)
    8cdf:	0f 8e 14 ff ff ff    	jle    8bf9 <alloc_and_load_for_fast_cost_update+0xff>
    8ce5:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    8cec:	e9 fd 00 00 00       	jmpq   8dee <alloc_and_load_for_fast_cost_update+0x2f4>
    8cf1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    8cf8:	e9 e1 00 00 00       	jmpq   8dde <alloc_and_load_for_fast_cost_update+0x2e4>
    8cfd:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8d04 <alloc_and_load_for_fast_cost_update+0x20a>
    8d04:	8b 55 e8             	mov    -0x18(%rbp),%edx
    8d07:	48 63 d2             	movslq %edx,%rdx
    8d0a:	48 c1 e2 03          	shl    $0x3,%rdx
    8d0e:	48 01 d0             	add    %rdx,%rax
    8d11:	48 8b 00             	mov    (%rax),%rax
    8d14:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8d17:	48 63 d2             	movslq %edx,%rdx
    8d1a:	48 c1 e2 02          	shl    $0x2,%rdx
    8d1e:	48 01 c2             	add    %rax,%rdx
    8d21:	8b 45 e8             	mov    -0x18(%rbp),%eax
    8d24:	2b 45 ec             	sub    -0x14(%rbp),%eax
    8d27:	66 0f ef c0          	pxor   %xmm0,%xmm0
    8d2b:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    8d2f:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 8d37 <alloc_and_load_for_fast_cost_update+0x23d>
    8d36:	00 
    8d37:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    8d3b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8d42 <alloc_and_load_for_fast_cost_update+0x248>
    8d42:	8b 4d e8             	mov    -0x18(%rbp),%ecx
    8d45:	48 63 c9             	movslq %ecx,%rcx
    8d48:	48 c1 e1 03          	shl    $0x3,%rcx
    8d4c:	48 01 c8             	add    %rcx,%rax
    8d4f:	48 8b 00             	mov    (%rax),%rax
    8d52:	8b 4d ec             	mov    -0x14(%rbp),%ecx
    8d55:	48 63 c9             	movslq %ecx,%rcx
    8d58:	48 c1 e1 02          	shl    $0x2,%rcx
    8d5c:	48 01 c8             	add    %rcx,%rax
    8d5f:	f3 0f 10 08          	movss  (%rax),%xmm1
    8d63:	f3 0f 5a c9          	cvtss2sd %xmm1,%xmm1
    8d67:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
    8d6b:	f2 0f 5a e0          	cvtsd2ss %xmm0,%xmm4
    8d6f:	66 0f 7e e0          	movd   %xmm4,%eax
    8d73:	89 02                	mov    %eax,(%rdx)
    8d75:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8d7c <alloc_and_load_for_fast_cost_update+0x282>
    8d7c:	8b 55 e8             	mov    -0x18(%rbp),%edx
    8d7f:	48 63 d2             	movslq %edx,%rdx
    8d82:	48 c1 e2 03          	shl    $0x3,%rdx
    8d86:	48 01 d0             	add    %rdx,%rax
    8d89:	48 8b 00             	mov    (%rax),%rax
    8d8c:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8d8f:	48 63 d2             	movslq %edx,%rdx
    8d92:	48 c1 e2 02          	shl    $0x2,%rdx
    8d96:	48 8d 1c 10          	lea    (%rax,%rdx,1),%rbx
    8d9a:	f3 0f 5a 4d dc       	cvtss2sd -0x24(%rbp),%xmm1
    8d9f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8da6 <alloc_and_load_for_fast_cost_update+0x2ac>
    8da6:	8b 55 e8             	mov    -0x18(%rbp),%edx
    8da9:	48 63 d2             	movslq %edx,%rdx
    8dac:	48 c1 e2 03          	shl    $0x3,%rdx
    8db0:	48 01 d0             	add    %rdx,%rax
    8db3:	48 8b 00             	mov    (%rax),%rax
    8db6:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8db9:	48 63 d2             	movslq %edx,%rdx
    8dbc:	48 c1 e2 02          	shl    $0x2,%rdx
    8dc0:	48 01 d0             	add    %rdx,%rax
    8dc3:	f3 0f 10 00          	movss  (%rax),%xmm0
    8dc7:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    8dcb:	e8 00 00 00 00       	callq  8dd0 <alloc_and_load_for_fast_cost_update+0x2d6>
    8dd0:	f2 0f 5a e8          	cvtsd2ss %xmm0,%xmm5
    8dd4:	66 0f 7e e8          	movd   %xmm5,%eax
    8dd8:	89 03                	mov    %eax,(%rbx)
    8dda:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    8dde:	8b 45 ec             	mov    -0x14(%rbp),%eax
    8de1:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    8de4:	0f 8e 13 ff ff ff    	jle    8cfd <alloc_and_load_for_fast_cost_update+0x203>
    8dea:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    8dee:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8df4 <alloc_and_load_for_fast_cost_update+0x2fa>
    8df4:	39 45 e8             	cmp    %eax,-0x18(%rbp)
    8df7:	0f 8e f4 fe ff ff    	jle    8cf1 <alloc_and_load_for_fast_cost_update+0x1f7>
    8dfd:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8e04 <alloc_and_load_for_fast_cost_update+0x30a>
    8e04:	48 8b 10             	mov    (%rax),%rdx
    8e07:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8e0e <alloc_and_load_for_fast_cost_update+0x314>
    8e0e:	8b 00                	mov    (%rax),%eax
    8e10:	66 0f ef f6          	pxor   %xmm6,%xmm6
    8e14:	f3 0f 2a f0          	cvtsi2ss %eax,%xmm6
    8e18:	66 0f 7e f0          	movd   %xmm6,%eax
    8e1c:	89 02                	mov    %eax,(%rdx)
    8e1e:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%rbp)
    8e25:	e9 dd 00 00 00       	jmpq   8f07 <alloc_and_load_for_fast_cost_update+0x40d>
    8e2a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8e31 <alloc_and_load_for_fast_cost_update+0x337>
    8e31:	8b 55 e8             	mov    -0x18(%rbp),%edx
    8e34:	48 63 d2             	movslq %edx,%rdx
    8e37:	48 c1 e2 03          	shl    $0x3,%rdx
    8e3b:	48 01 d0             	add    %rdx,%rax
    8e3e:	48 8b 00             	mov    (%rax),%rax
    8e41:	8b 55 e8             	mov    -0x18(%rbp),%edx
    8e44:	48 63 d2             	movslq %edx,%rdx
    8e47:	48 c1 e2 02          	shl    $0x2,%rdx
    8e4b:	48 01 c2             	add    %rax,%rdx
    8e4e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8e55 <alloc_and_load_for_fast_cost_update+0x35b>
    8e55:	8b 4d e8             	mov    -0x18(%rbp),%ecx
    8e58:	48 63 c9             	movslq %ecx,%rcx
    8e5b:	48 c1 e1 02          	shl    $0x2,%rcx
    8e5f:	48 01 c8             	add    %rcx,%rax
    8e62:	8b 00                	mov    (%rax),%eax
    8e64:	66 0f ef ff          	pxor   %xmm7,%xmm7
    8e68:	f3 0f 2a f8          	cvtsi2ss %eax,%xmm7
    8e6c:	66 0f 7e f8          	movd   %xmm7,%eax
    8e70:	89 02                	mov    %eax,(%rdx)
    8e72:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    8e79:	eb 7c                	jmp    8ef7 <alloc_and_load_for_fast_cost_update+0x3fd>
    8e7b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8e82 <alloc_and_load_for_fast_cost_update+0x388>
    8e82:	8b 55 e8             	mov    -0x18(%rbp),%edx
    8e85:	48 63 d2             	movslq %edx,%rdx
    8e88:	48 c1 e2 03          	shl    $0x3,%rdx
    8e8c:	48 01 d0             	add    %rdx,%rax
    8e8f:	48 8b 00             	mov    (%rax),%rax
    8e92:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8e95:	48 63 d2             	movslq %edx,%rdx
    8e98:	48 c1 e2 02          	shl    $0x2,%rdx
    8e9c:	48 01 c2             	add    %rax,%rdx
    8e9f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8ea6 <alloc_and_load_for_fast_cost_update+0x3ac>
    8ea6:	8b 4d e8             	mov    -0x18(%rbp),%ecx
    8ea9:	48 63 c9             	movslq %ecx,%rcx
    8eac:	48 c1 e1 03          	shl    $0x3,%rcx
    8eb0:	48 83 e9 08          	sub    $0x8,%rcx
    8eb4:	48 01 c8             	add    %rcx,%rax
    8eb7:	48 8b 00             	mov    (%rax),%rax
    8eba:	8b 4d ec             	mov    -0x14(%rbp),%ecx
    8ebd:	48 63 c9             	movslq %ecx,%rcx
    8ec0:	48 c1 e1 02          	shl    $0x2,%rcx
    8ec4:	48 01 c8             	add    %rcx,%rax
    8ec7:	f3 0f 10 08          	movss  (%rax),%xmm1
    8ecb:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8ed2 <alloc_and_load_for_fast_cost_update+0x3d8>
    8ed2:	8b 4d e8             	mov    -0x18(%rbp),%ecx
    8ed5:	48 63 c9             	movslq %ecx,%rcx
    8ed8:	48 c1 e1 02          	shl    $0x2,%rcx
    8edc:	48 01 c8             	add    %rcx,%rax
    8edf:	8b 00                	mov    (%rax),%eax
    8ee1:	66 0f ef c0          	pxor   %xmm0,%xmm0
    8ee5:	f3 0f 2a c0          	cvtsi2ss %eax,%xmm0
    8ee9:	f3 0f 58 c8          	addss  %xmm0,%xmm1
    8eed:	66 0f 7e c8          	movd   %xmm1,%eax
    8ef1:	89 02                	mov    %eax,(%rdx)
    8ef3:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    8ef7:	8b 45 ec             	mov    -0x14(%rbp),%eax
    8efa:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    8efd:	0f 8c 78 ff ff ff    	jl     8e7b <alloc_and_load_for_fast_cost_update+0x381>
    8f03:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    8f07:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 8f0d <alloc_and_load_for_fast_cost_update+0x413>
    8f0d:	39 45 e8             	cmp    %eax,-0x18(%rbp)
    8f10:	0f 8e 14 ff ff ff    	jle    8e2a <alloc_and_load_for_fast_cost_update+0x330>
    8f16:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    8f1d:	e9 fd 00 00 00       	jmpq   901f <alloc_and_load_for_fast_cost_update+0x525>
    8f22:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    8f29:	e9 e1 00 00 00       	jmpq   900f <alloc_and_load_for_fast_cost_update+0x515>
    8f2e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8f35 <alloc_and_load_for_fast_cost_update+0x43b>
    8f35:	8b 55 e8             	mov    -0x18(%rbp),%edx
    8f38:	48 63 d2             	movslq %edx,%rdx
    8f3b:	48 c1 e2 03          	shl    $0x3,%rdx
    8f3f:	48 01 d0             	add    %rdx,%rax
    8f42:	48 8b 00             	mov    (%rax),%rax
    8f45:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8f48:	48 63 d2             	movslq %edx,%rdx
    8f4b:	48 c1 e2 02          	shl    $0x2,%rdx
    8f4f:	48 01 c2             	add    %rax,%rdx
    8f52:	8b 45 e8             	mov    -0x18(%rbp),%eax
    8f55:	2b 45 ec             	sub    -0x14(%rbp),%eax
    8f58:	66 0f ef c0          	pxor   %xmm0,%xmm0
    8f5c:	f2 0f 2a c0          	cvtsi2sd %eax,%xmm0
    8f60:	f2 0f 10 0d 00 00 00 	movsd  0x0(%rip),%xmm1        # 8f68 <alloc_and_load_for_fast_cost_update+0x46e>
    8f67:	00 
    8f68:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
    8f6c:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8f73 <alloc_and_load_for_fast_cost_update+0x479>
    8f73:	8b 4d e8             	mov    -0x18(%rbp),%ecx
    8f76:	48 63 c9             	movslq %ecx,%rcx
    8f79:	48 c1 e1 03          	shl    $0x3,%rcx
    8f7d:	48 01 c8             	add    %rcx,%rax
    8f80:	48 8b 00             	mov    (%rax),%rax
    8f83:	8b 4d ec             	mov    -0x14(%rbp),%ecx
    8f86:	48 63 c9             	movslq %ecx,%rcx
    8f89:	48 c1 e1 02          	shl    $0x2,%rcx
    8f8d:	48 01 c8             	add    %rcx,%rax
    8f90:	f3 0f 10 08          	movss  (%rax),%xmm1
    8f94:	f3 0f 5a c9          	cvtss2sd %xmm1,%xmm1
    8f98:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
    8f9c:	f2 0f 5a d0          	cvtsd2ss %xmm0,%xmm2
    8fa0:	66 0f 7e d0          	movd   %xmm2,%eax
    8fa4:	89 02                	mov    %eax,(%rdx)
    8fa6:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8fad <alloc_and_load_for_fast_cost_update+0x4b3>
    8fad:	8b 55 e8             	mov    -0x18(%rbp),%edx
    8fb0:	48 63 d2             	movslq %edx,%rdx
    8fb3:	48 c1 e2 03          	shl    $0x3,%rdx
    8fb7:	48 01 d0             	add    %rdx,%rax
    8fba:	48 8b 00             	mov    (%rax),%rax
    8fbd:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8fc0:	48 63 d2             	movslq %edx,%rdx
    8fc3:	48 c1 e2 02          	shl    $0x2,%rdx
    8fc7:	48 8d 1c 10          	lea    (%rax,%rdx,1),%rbx
    8fcb:	f3 0f 5a 4d dc       	cvtss2sd -0x24(%rbp),%xmm1
    8fd0:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 8fd7 <alloc_and_load_for_fast_cost_update+0x4dd>
    8fd7:	8b 55 e8             	mov    -0x18(%rbp),%edx
    8fda:	48 63 d2             	movslq %edx,%rdx
    8fdd:	48 c1 e2 03          	shl    $0x3,%rdx
    8fe1:	48 01 d0             	add    %rdx,%rax
    8fe4:	48 8b 00             	mov    (%rax),%rax
    8fe7:	8b 55 ec             	mov    -0x14(%rbp),%edx
    8fea:	48 63 d2             	movslq %edx,%rdx
    8fed:	48 c1 e2 02          	shl    $0x2,%rdx
    8ff1:	48 01 d0             	add    %rdx,%rax
    8ff4:	f3 0f 10 00          	movss  (%rax),%xmm0
    8ff8:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    8ffc:	e8 00 00 00 00       	callq  9001 <alloc_and_load_for_fast_cost_update+0x507>
    9001:	f2 0f 5a d8          	cvtsd2ss %xmm0,%xmm3
    9005:	66 0f 7e d8          	movd   %xmm3,%eax
    9009:	89 03                	mov    %eax,(%rbx)
    900b:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    900f:	8b 45 ec             	mov    -0x14(%rbp),%eax
    9012:	3b 45 e8             	cmp    -0x18(%rbp),%eax
    9015:	0f 8e 13 ff ff ff    	jle    8f2e <alloc_and_load_for_fast_cost_update+0x434>
    901b:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    901f:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 9025 <alloc_and_load_for_fast_cost_update+0x52b>
    9025:	39 45 e8             	cmp    %eax,-0x18(%rbp)
    9028:	0f 8e f4 fe ff ff    	jle    8f22 <alloc_and_load_for_fast_cost_update+0x428>
    902e:	48 83 c4 28          	add    $0x28,%rsp
    9032:	5b                   	pop    %rbx
    9033:	5d                   	pop    %rbp
    9034:	c3                   	retq   

0000000000009035 <check_place>:
    9035:	55                   	push   %rbp
    9036:	48 89 e5             	mov    %rsp,%rbp
    9039:	48 83 ec 50          	sub    $0x50,%rsp
    903d:	f3 0f 11 45 cc       	movss  %xmm0,-0x34(%rbp)
    9042:	f3 0f 11 4d c8       	movss  %xmm1,-0x38(%rbp)
    9047:	89 7d c4             	mov    %edi,-0x3c(%rbp)
    904a:	89 75 c0             	mov    %esi,-0x40(%rbp)
    904d:	89 55 bc             	mov    %edx,-0x44(%rbp)
    9050:	f3 0f 11 55 b8       	movss  %xmm2,-0x48(%rbp)
    9055:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%rbp)
    905c:	8b 55 c0             	mov    -0x40(%rbp),%edx
    905f:	8b 45 c4             	mov    -0x3c(%rbp),%eax
    9062:	89 c6                	mov    %eax,%esi
    9064:	bf 01 00 00 00       	mov    $0x1,%edi
    9069:	e8 22 c1 ff ff       	callq  5190 <comp_bb_cost>
    906e:	66 0f 7e c0          	movd   %xmm0,%eax
    9072:	89 45 e8             	mov    %eax,-0x18(%rbp)
    9075:	f3 0f 5a 45 e8       	cvtss2sd -0x18(%rbp),%xmm0
    907a:	bf 00 00 00 00       	mov    $0x0,%edi
    907f:	b8 01 00 00 00       	mov    $0x1,%eax
    9084:	e8 00 00 00 00       	callq  9089 <check_place+0x54>
    9089:	f3 0f 10 45 e8       	movss  -0x18(%rbp),%xmm0
    908e:	f3 0f 5c 45 cc       	subss  -0x34(%rbp),%xmm0
    9093:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 909b <check_place+0x66>
    909a:	00 
    909b:	0f 54 c1             	andps  %xmm1,%xmm0
    909e:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    90a2:	f3 0f 5a 4d cc       	cvtss2sd -0x34(%rbp),%xmm1
    90a7:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # 90af <check_place+0x7a>
    90ae:	00 
    90af:	f2 0f 59 ca          	mulsd  %xmm2,%xmm1
    90b3:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
    90b7:	76 1d                	jbe    90d6 <check_place+0xa1>
    90b9:	f3 0f 5a 4d cc       	cvtss2sd -0x34(%rbp),%xmm1
    90be:	f3 0f 5a 45 e8       	cvtss2sd -0x18(%rbp),%xmm0
    90c3:	bf 00 00 00 00       	mov    $0x0,%edi
    90c8:	b8 02 00 00 00       	mov    $0x2,%eax
    90cd:	e8 00 00 00 00       	callq  90d2 <check_place+0x9d>
    90d2:	83 45 f0 01          	addl   $0x1,-0x10(%rbp)
    90d6:	83 7d bc 01          	cmpl   $0x1,-0x44(%rbp)
    90da:	74 0a                	je     90e6 <check_place+0xb1>
    90dc:	83 7d bc 02          	cmpl   $0x2,-0x44(%rbp)
    90e0:	0f 85 e5 00 00 00    	jne    91cb <check_place+0x196>
    90e6:	48 8d 55 dc          	lea    -0x24(%rbp),%rdx
    90ea:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
    90ee:	48 89 d6             	mov    %rdx,%rsi
    90f1:	48 89 c7             	mov    %rax,%rdi
    90f4:	e8 c9 be ff ff       	callq  4fc2 <comp_td_costs>
    90f9:	f3 0f 10 45 e0       	movss  -0x20(%rbp),%xmm0
    90fe:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    9102:	bf 00 00 00 00       	mov    $0x0,%edi
    9107:	b8 01 00 00 00       	mov    $0x1,%eax
    910c:	e8 00 00 00 00       	callq  9111 <check_place+0xdc>
    9111:	f3 0f 10 45 e0       	movss  -0x20(%rbp),%xmm0
    9116:	f3 0f 5c 45 c8       	subss  -0x38(%rbp),%xmm0
    911b:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 9123 <check_place+0xee>
    9122:	00 
    9123:	0f 54 c1             	andps  %xmm1,%xmm0
    9126:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    912a:	f3 0f 5a 4d c8       	cvtss2sd -0x38(%rbp),%xmm1
    912f:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # 9137 <check_place+0x102>
    9136:	00 
    9137:	f2 0f 59 ca          	mulsd  %xmm2,%xmm1
    913b:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
    913f:	76 21                	jbe    9162 <check_place+0x12d>
    9141:	f3 0f 5a 4d c8       	cvtss2sd -0x38(%rbp),%xmm1
    9146:	f3 0f 10 45 e0       	movss  -0x20(%rbp),%xmm0
    914b:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    914f:	bf 00 00 00 00       	mov    $0x0,%edi
    9154:	b8 02 00 00 00       	mov    $0x2,%eax
    9159:	e8 00 00 00 00       	callq  915e <check_place+0x129>
    915e:	83 45 f0 01          	addl   $0x1,-0x10(%rbp)
    9162:	f3 0f 10 45 dc       	movss  -0x24(%rbp),%xmm0
    9167:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    916b:	bf 00 00 00 00       	mov    $0x0,%edi
    9170:	b8 01 00 00 00       	mov    $0x1,%eax
    9175:	e8 00 00 00 00       	callq  917a <check_place+0x145>
    917a:	f3 0f 10 45 dc       	movss  -0x24(%rbp),%xmm0
    917f:	f3 0f 5c 45 b8       	subss  -0x48(%rbp),%xmm0
    9184:	f3 0f 10 0d 00 00 00 	movss  0x0(%rip),%xmm1        # 918c <check_place+0x157>
    918b:	00 
    918c:	0f 54 c1             	andps  %xmm1,%xmm0
    918f:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    9193:	f3 0f 5a 4d b8       	cvtss2sd -0x48(%rbp),%xmm1
    9198:	f2 0f 10 15 00 00 00 	movsd  0x0(%rip),%xmm2        # 91a0 <check_place+0x16b>
    919f:	00 
    91a0:	f2 0f 59 ca          	mulsd  %xmm2,%xmm1
    91a4:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
    91a8:	76 21                	jbe    91cb <check_place+0x196>
    91aa:	f3 0f 5a 4d b8       	cvtss2sd -0x48(%rbp),%xmm1
    91af:	f3 0f 10 45 dc       	movss  -0x24(%rbp),%xmm0
    91b4:	f3 0f 5a c0          	cvtss2sd %xmm0,%xmm0
    91b8:	bf 00 00 00 00       	mov    $0x0,%edi
    91bd:	b8 02 00 00 00       	mov    $0x2,%eax
    91c2:	e8 00 00 00 00       	callq  91c7 <check_place+0x192>
    91c7:	83 45 f0 01          	addl   $0x1,-0x10(%rbp)
    91cb:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 91d1 <check_place+0x19c>
    91d1:	48 98                	cltq   
    91d3:	48 c1 e0 02          	shl    $0x2,%rax
    91d7:	48 89 c7             	mov    %rax,%rdi
    91da:	e8 00 00 00 00       	callq  91df <check_place+0x1aa>
    91df:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 91e6 <check_place+0x1b1>
    91e6:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    91ed:	eb 1e                	jmp    920d <check_place+0x1d8>
    91ef:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 91f6 <check_place+0x1c1>
    91f6:	8b 55 fc             	mov    -0x4(%rbp),%edx
    91f9:	48 63 d2             	movslq %edx,%rdx
    91fc:	48 c1 e2 02          	shl    $0x2,%rdx
    9200:	48 01 d0             	add    %rdx,%rax
    9203:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
    9209:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    920d:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 9213 <check_place+0x1de>
    9213:	39 45 fc             	cmp    %eax,-0x4(%rbp)
    9216:	7c d7                	jl     91ef <check_place+0x1ba>
    9218:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    921f:	e9 f9 02 00 00       	jmpq   951d <check_place+0x4e8>
    9224:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    922b:	e9 d7 02 00 00       	jmpq   9507 <check_place+0x4d2>
    9230:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 9237 <check_place+0x202>
    9237:	8b 55 fc             	mov    -0x4(%rbp),%edx
    923a:	48 63 d2             	movslq %edx,%rdx
    923d:	48 c1 e2 03          	shl    $0x3,%rdx
    9241:	48 01 d0             	add    %rdx,%rax
    9244:	48 8b 08             	mov    (%rax),%rcx
    9247:	8b 45 f8             	mov    -0x8(%rbp),%eax
    924a:	48 63 d0             	movslq %eax,%rdx
    924d:	48 89 d0             	mov    %rdx,%rax
    9250:	48 01 c0             	add    %rax,%rax
    9253:	48 01 d0             	add    %rdx,%rax
    9256:	48 c1 e0 03          	shl    $0x3,%rax
    925a:	48 01 c8             	add    %rcx,%rax
    925d:	8b 48 0c             	mov    0xc(%rax),%ecx
    9260:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 9267 <check_place+0x232>
    9267:	8b 55 fc             	mov    -0x4(%rbp),%edx
    926a:	48 63 d2             	movslq %edx,%rdx
    926d:	48 c1 e2 03          	shl    $0x3,%rdx
    9271:	48 01 d0             	add    %rdx,%rax
    9274:	48 8b 30             	mov    (%rax),%rsi
    9277:	8b 45 f8             	mov    -0x8(%rbp),%eax
    927a:	48 63 d0             	movslq %eax,%rdx
    927d:	48 89 d0             	mov    %rdx,%rax
    9280:	48 01 c0             	add    %rax,%rax
    9283:	48 01 d0             	add    %rdx,%rax
    9286:	48 c1 e0 03          	shl    $0x3,%rax
    928a:	48 01 f0             	add    %rsi,%rax
    928d:	48 8b 00             	mov    (%rax),%rax
    9290:	8b 40 0c             	mov    0xc(%rax),%eax
    9293:	39 c1                	cmp    %eax,%ecx
    9295:	7e 4b                	jle    92e2 <check_place+0x2ad>
    9297:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 929e <check_place+0x269>
    929e:	8b 55 fc             	mov    -0x4(%rbp),%edx
    92a1:	48 63 d2             	movslq %edx,%rdx
    92a4:	48 c1 e2 03          	shl    $0x3,%rdx
    92a8:	48 01 d0             	add    %rdx,%rax
    92ab:	48 8b 08             	mov    (%rax),%rcx
    92ae:	8b 45 f8             	mov    -0x8(%rbp),%eax
    92b1:	48 63 d0             	movslq %eax,%rdx
    92b4:	48 89 d0             	mov    %rdx,%rax
    92b7:	48 01 c0             	add    %rax,%rax
    92ba:	48 01 d0             	add    %rdx,%rax
    92bd:	48 c1 e0 03          	shl    $0x3,%rax
    92c1:	48 01 c8             	add    %rcx,%rax
    92c4:	8b 48 0c             	mov    0xc(%rax),%ecx
    92c7:	8b 55 f8             	mov    -0x8(%rbp),%edx
    92ca:	8b 45 fc             	mov    -0x4(%rbp),%eax
    92cd:	89 c6                	mov    %eax,%esi
    92cf:	bf 00 00 00 00       	mov    $0x0,%edi
    92d4:	b8 00 00 00 00       	mov    $0x0,%eax
    92d9:	e8 00 00 00 00       	callq  92de <check_place+0x2a9>
    92de:	83 45 f0 01          	addl   $0x1,-0x10(%rbp)
    92e2:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    92e9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
    92f0:	e9 50 01 00 00       	jmpq   9445 <check_place+0x410>
    92f5:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 92fc <check_place+0x2c7>
    92fc:	8b 55 fc             	mov    -0x4(%rbp),%edx
    92ff:	48 63 d2             	movslq %edx,%rdx
    9302:	48 c1 e2 03          	shl    $0x3,%rdx
    9306:	48 01 d0             	add    %rdx,%rax
    9309:	48 8b 08             	mov    (%rax),%rcx
    930c:	8b 45 f8             	mov    -0x8(%rbp),%eax
    930f:	48 63 d0             	movslq %eax,%rdx
    9312:	48 89 d0             	mov    %rdx,%rax
    9315:	48 01 c0             	add    %rax,%rax
    9318:	48 01 d0             	add    %rdx,%rax
    931b:	48 c1 e0 03          	shl    $0x3,%rax
    931f:	48 01 c8             	add    %rcx,%rax
    9322:	48 8b 40 10          	mov    0x10(%rax),%rax
    9326:	8b 55 f4             	mov    -0xc(%rbp),%edx
    9329:	48 63 d2             	movslq %edx,%rdx
    932c:	48 c1 e2 02          	shl    $0x2,%rdx
    9330:	48 01 d0             	add    %rdx,%rax
    9333:	8b 00                	mov    (%rax),%eax
    9335:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    9338:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%rbp)
    933c:	75 05                	jne    9343 <check_place+0x30e>
    933e:	e9 fe 00 00 00       	jmpq   9441 <check_place+0x40c>
    9343:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 934a <check_place+0x315>
    934a:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    934d:	48 63 d0             	movslq %eax,%rdx
    9350:	48 89 d0             	mov    %rdx,%rax
    9353:	48 c1 e0 02          	shl    $0x2,%rax
    9357:	48 01 d0             	add    %rdx,%rax
    935a:	48 c1 e0 03          	shl    $0x3,%rax
    935e:	48 01 c8             	add    %rcx,%rax
    9361:	48 8b 48 08          	mov    0x8(%rax),%rcx
    9365:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 936c <check_place+0x337>
    936c:	8b 55 fc             	mov    -0x4(%rbp),%edx
    936f:	48 63 d2             	movslq %edx,%rdx
    9372:	48 c1 e2 03          	shl    $0x3,%rdx
    9376:	48 01 d0             	add    %rdx,%rax
    9379:	48 8b 30             	mov    (%rax),%rsi
    937c:	8b 45 f8             	mov    -0x8(%rbp),%eax
    937f:	48 63 d0             	movslq %eax,%rdx
    9382:	48 89 d0             	mov    %rdx,%rax
    9385:	48 01 c0             	add    %rax,%rax
    9388:	48 01 d0             	add    %rdx,%rax
    938b:	48 c1 e0 03          	shl    $0x3,%rax
    938f:	48 01 f0             	add    %rsi,%rax
    9392:	48 8b 00             	mov    (%rax),%rax
    9395:	48 39 c1             	cmp    %rax,%rcx
    9398:	74 1e                	je     93b8 <check_place+0x383>
    939a:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    939d:	8b 55 fc             	mov    -0x4(%rbp),%edx
    93a0:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    93a3:	89 c6                	mov    %eax,%esi
    93a5:	bf 00 00 00 00       	mov    $0x0,%edi
    93aa:	b8 00 00 00 00       	mov    $0x0,%eax
    93af:	e8 00 00 00 00       	callq  93b4 <check_place+0x37f>
    93b4:	83 45 f0 01          	addl   $0x1,-0x10(%rbp)
    93b8:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 93bf <check_place+0x38a>
    93bf:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    93c2:	48 63 d0             	movslq %eax,%rdx
    93c5:	48 89 d0             	mov    %rdx,%rax
    93c8:	48 c1 e0 02          	shl    $0x2,%rax
    93cc:	48 01 d0             	add    %rdx,%rax
    93cf:	48 c1 e0 03          	shl    $0x3,%rax
    93d3:	48 01 c8             	add    %rcx,%rax
    93d6:	8b 40 18             	mov    0x18(%rax),%eax
    93d9:	3b 45 fc             	cmp    -0x4(%rbp),%eax
    93dc:	75 26                	jne    9404 <check_place+0x3cf>
    93de:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 93e5 <check_place+0x3b0>
    93e5:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    93e8:	48 63 d0             	movslq %eax,%rdx
    93eb:	48 89 d0             	mov    %rdx,%rax
    93ee:	48 c1 e0 02          	shl    $0x2,%rax
    93f2:	48 01 d0             	add    %rdx,%rax
    93f5:	48 c1 e0 03          	shl    $0x3,%rax
    93f9:	48 01 c8             	add    %rcx,%rax
    93fc:	8b 40 1c             	mov    0x1c(%rax),%eax
    93ff:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    9402:	74 1e                	je     9422 <check_place+0x3ed>
    9404:	8b 4d f8             	mov    -0x8(%rbp),%ecx
    9407:	8b 55 fc             	mov    -0x4(%rbp),%edx
    940a:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    940d:	89 c6                	mov    %eax,%esi
    940f:	bf 00 00 00 00       	mov    $0x0,%edi
    9414:	b8 00 00 00 00       	mov    $0x0,%eax
    9419:	e8 00 00 00 00       	callq  941e <check_place+0x3e9>
    941e:	83 45 f0 01          	addl   $0x1,-0x10(%rbp)
    9422:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    9426:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 942d <check_place+0x3f8>
    942d:	8b 55 e4             	mov    -0x1c(%rbp),%edx
    9430:	48 63 d2             	movslq %edx,%rdx
    9433:	48 c1 e2 02          	shl    $0x2,%rdx
    9437:	48 01 d0             	add    %rdx,%rax
    943a:	8b 10                	mov    (%rax),%edx
    943c:	83 c2 01             	add    $0x1,%edx
    943f:	89 10                	mov    %edx,(%rax)
    9441:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
    9445:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 944c <check_place+0x417>
    944c:	8b 55 fc             	mov    -0x4(%rbp),%edx
    944f:	48 63 d2             	movslq %edx,%rdx
    9452:	48 c1 e2 03          	shl    $0x3,%rdx
    9456:	48 01 d0             	add    %rdx,%rax
    9459:	48 8b 08             	mov    (%rax),%rcx
    945c:	8b 45 f8             	mov    -0x8(%rbp),%eax
    945f:	48 63 d0             	movslq %eax,%rdx
    9462:	48 89 d0             	mov    %rdx,%rax
    9465:	48 01 c0             	add    %rax,%rax
    9468:	48 01 d0             	add    %rdx,%rax
    946b:	48 c1 e0 03          	shl    $0x3,%rax
    946f:	48 01 c8             	add    %rcx,%rax
    9472:	48 8b 00             	mov    (%rax),%rax
    9475:	8b 40 0c             	mov    0xc(%rax),%eax
    9478:	3b 45 f4             	cmp    -0xc(%rbp),%eax
    947b:	0f 8f 74 fe ff ff    	jg     92f5 <check_place+0x2c0>
    9481:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 9488 <check_place+0x453>
    9488:	8b 55 fc             	mov    -0x4(%rbp),%edx
    948b:	48 63 d2             	movslq %edx,%rdx
    948e:	48 c1 e2 03          	shl    $0x3,%rdx
    9492:	48 01 d0             	add    %rdx,%rax
    9495:	48 8b 08             	mov    (%rax),%rcx
    9498:	8b 45 f8             	mov    -0x8(%rbp),%eax
    949b:	48 63 d0             	movslq %eax,%rdx
    949e:	48 89 d0             	mov    %rdx,%rax
    94a1:	48 01 c0             	add    %rax,%rax
    94a4:	48 01 d0             	add    %rdx,%rax
    94a7:	48 c1 e0 03          	shl    $0x3,%rax
    94ab:	48 01 c8             	add    %rcx,%rax
    94ae:	8b 40 0c             	mov    0xc(%rax),%eax
    94b1:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    94b4:	74 4d                	je     9503 <check_place+0x4ce>
    94b6:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 94bd <check_place+0x488>
    94bd:	8b 55 fc             	mov    -0x4(%rbp),%edx
    94c0:	48 63 d2             	movslq %edx,%rdx
    94c3:	48 c1 e2 03          	shl    $0x3,%rdx
    94c7:	48 01 d0             	add    %rdx,%rax
    94ca:	48 8b 08             	mov    (%rax),%rcx
    94cd:	8b 45 f8             	mov    -0x8(%rbp),%eax
    94d0:	48 63 d0             	movslq %eax,%rdx
    94d3:	48 89 d0             	mov    %rdx,%rax
    94d6:	48 01 c0             	add    %rax,%rax
    94d9:	48 01 d0             	add    %rdx,%rax
    94dc:	48 c1 e0 03          	shl    $0x3,%rax
    94e0:	48 01 c8             	add    %rcx,%rax
    94e3:	8b 48 0c             	mov    0xc(%rax),%ecx
    94e6:	8b 75 ec             	mov    -0x14(%rbp),%esi
    94e9:	8b 55 f8             	mov    -0x8(%rbp),%edx
    94ec:	8b 45 fc             	mov    -0x4(%rbp),%eax
    94ef:	41 89 f0             	mov    %esi,%r8d
    94f2:	89 c6                	mov    %eax,%esi
    94f4:	bf 00 00 00 00       	mov    $0x0,%edi
    94f9:	b8 00 00 00 00       	mov    $0x0,%eax
    94fe:	e8 00 00 00 00       	callq  9503 <check_place+0x4ce>
    9503:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    9507:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 950d <check_place+0x4d8>
    950d:	83 c0 01             	add    $0x1,%eax
    9510:	3b 45 f8             	cmp    -0x8(%rbp),%eax
    9513:	0f 8d 17 fd ff ff    	jge    9230 <check_place+0x1fb>
    9519:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    951d:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 9523 <check_place+0x4ee>
    9523:	83 c0 01             	add    $0x1,%eax
    9526:	3b 45 fc             	cmp    -0x4(%rbp),%eax
    9529:	0f 8d f5 fc ff ff    	jge    9224 <check_place+0x1ef>
    952f:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    9536:	eb 4d                	jmp    9585 <check_place+0x550>
    9538:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 953f <check_place+0x50a>
    953f:	8b 55 fc             	mov    -0x4(%rbp),%edx
    9542:	48 63 d2             	movslq %edx,%rdx
    9545:	48 c1 e2 02          	shl    $0x2,%rdx
    9549:	48 01 d0             	add    %rdx,%rax
    954c:	8b 00                	mov    (%rax),%eax
    954e:	83 f8 01             	cmp    $0x1,%eax
    9551:	74 2e                	je     9581 <check_place+0x54c>
    9553:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 955a <check_place+0x525>
    955a:	8b 55 fc             	mov    -0x4(%rbp),%edx
    955d:	48 63 d2             	movslq %edx,%rdx
    9560:	48 c1 e2 02          	shl    $0x2,%rdx
    9564:	48 01 d0             	add    %rdx,%rax
    9567:	8b 10                	mov    (%rax),%edx
    9569:	8b 45 fc             	mov    -0x4(%rbp),%eax
    956c:	89 c6                	mov    %eax,%esi
    956e:	bf 00 00 00 00       	mov    $0x0,%edi
    9573:	b8 00 00 00 00       	mov    $0x0,%eax
    9578:	e8 00 00 00 00       	callq  957d <check_place+0x548>
    957d:	83 45 f0 01          	addl   $0x1,-0x10(%rbp)
    9581:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    9585:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 958b <check_place+0x556>
    958b:	39 45 fc             	cmp    %eax,-0x4(%rbp)
    958e:	7c a8                	jl     9538 <check_place+0x503>
    9590:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 9597 <check_place+0x562>
    9597:	48 89 c7             	mov    %rax,%rdi
    959a:	e8 00 00 00 00       	callq  959f <check_place+0x56a>
    959f:	83 7d f0 00          	cmpl   $0x0,-0x10(%rbp)
    95a3:	75 0c                	jne    95b1 <check_place+0x57c>
    95a5:	bf 00 00 00 00       	mov    $0x0,%edi
    95aa:	e8 00 00 00 00       	callq  95af <check_place+0x57a>
    95af:	eb 28                	jmp    95d9 <check_place+0x5a4>
    95b1:	8b 45 f0             	mov    -0x10(%rbp),%eax
    95b4:	89 c6                	mov    %eax,%esi
    95b6:	bf 00 00 00 00       	mov    $0x0,%edi
    95bb:	b8 00 00 00 00       	mov    $0x0,%eax
    95c0:	e8 00 00 00 00       	callq  95c5 <check_place+0x590>
    95c5:	bf 00 00 00 00       	mov    $0x0,%edi
    95ca:	e8 00 00 00 00       	callq  95cf <check_place+0x59a>
    95cf:	bf 01 00 00 00       	mov    $0x1,%edi
    95d4:	e8 00 00 00 00       	callq  95d9 <check_place+0x5a4>
    95d9:	c9                   	leaveq 
    95da:	c3                   	retq   
