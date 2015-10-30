
kernels.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <naive_rotate>:
   0:	85 ff                	test   %edi,%edi
   2:	7e 79                	jle    7d <naive_rotate+0x7d>
   4:	8d 4f ff             	lea    -0x1(%rdi),%ecx
   7:	48 63 c7             	movslq %edi,%rax
   a:	53                   	push   %rbx
   b:	4c 8d 14 40          	lea    (%rax,%rax,2),%r10
   f:	89 f8                	mov    %edi,%eax
  11:	f7 df                	neg    %edi
  13:	0f af c1             	imul   %ecx,%eax
  16:	4d 01 d2             	add    %r10,%r10
  19:	48 98                	cltq   
  1b:	4c 8d 04 40          	lea    (%rax,%rax,2),%r8
  1f:	48 8d 44 08 01       	lea    0x1(%rax,%rcx,1),%rax
  24:	48 8d 04 40          	lea    (%rax,%rax,2),%rax
  28:	4e 8d 0c 42          	lea    (%rdx,%r8,2),%r9
  2c:	48 8d 1c 42          	lea    (%rdx,%rax,2),%rbx
  30:	48 63 c7             	movslq %edi,%rax
  33:	4c 8d 04 40          	lea    (%rax,%rax,2),%r8
  37:	48 8d 04 49          	lea    (%rcx,%rcx,2),%rax
  3b:	4c 8d 5c 00 06       	lea    0x6(%rax,%rax,1),%r11
  40:	4d 01 c0             	add    %r8,%r8
  43:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
  48:	49 8d 3c 33          	lea    (%r11,%rsi,1),%rdi
  4c:	4c 89 ca             	mov    %r9,%rdx
  4f:	48 89 f0             	mov    %rsi,%rax
  52:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
  58:	8b 08                	mov    (%rax),%ecx
  5a:	48 83 c0 06          	add    $0x6,%rax
  5e:	89 0a                	mov    %ecx,(%rdx)
  60:	0f b7 48 fe          	movzwl -0x2(%rax),%ecx
  64:	66 89 4a 04          	mov    %cx,0x4(%rdx)
  68:	4c 01 c2             	add    %r8,%rdx
  6b:	48 39 f8             	cmp    %rdi,%rax
  6e:	75 e8                	jne    58 <naive_rotate+0x58>
  70:	49 83 c1 06          	add    $0x6,%r9
  74:	4c 01 d6             	add    %r10,%rsi
  77:	49 39 d9             	cmp    %rbx,%r9
  7a:	75 cc                	jne    48 <naive_rotate+0x48>
  7c:	5b                   	pop    %rbx
  7d:	f3 c3                	repz retq 
  7f:	90                   	nop

0000000000000080 <rotate>:
  80:	85 ff                	test   %edi,%edi
  82:	0f 8e 1a 01 00 00    	jle    1a2 <rotate+0x122>
  88:	89 f8                	mov    %edi,%eax
  8a:	41 57                	push   %r15
  8c:	41 56                	push   %r14
  8e:	c1 e0 05             	shl    $0x5,%eax
  91:	41 55                	push   %r13
  93:	41 54                	push   %r12
  95:	48 98                	cltq   
  97:	55                   	push   %rbp
  98:	53                   	push   %rbx
  99:	48 8d 04 40          	lea    (%rax,%rax,2),%rax
  9d:	89 f9                	mov    %edi,%ecx
  9f:	49 89 f4             	mov    %rsi,%r12
  a2:	48 01 c0             	add    %rax,%rax
  a5:	48 89 44 24 f8       	mov    %rax,-0x8(%rsp)
  aa:	8d 47 ff             	lea    -0x1(%rdi),%eax
  ad:	0f af c8             	imul   %eax,%ecx
  b0:	c1 e8 05             	shr    $0x5,%eax
  b3:	48 63 c9             	movslq %ecx,%rcx
  b6:	48 8d 34 49          	lea    (%rcx,%rcx,2),%rsi
  ba:	48 8d 0c 40          	lea    (%rax,%rax,2),%rcx
  be:	48 01 f6             	add    %rsi,%rsi
  c1:	48 c1 e1 06          	shl    $0x6,%rcx
  c5:	48 8d 84 0e c0 00 00 	lea    0xc0(%rsi,%rcx,1),%rax
  cc:	00 
  cd:	48 8d 1c 32          	lea    (%rdx,%rsi,1),%rbx
  d1:	4c 8d a9 80 01 00 00 	lea    0x180(%rcx),%r13
  d8:	31 f6                	xor    %esi,%esi
  da:	4c 8d 3c 02          	lea    (%rdx,%rax,1),%r15
  de:	89 f8                	mov    %edi,%eax
  e0:	48 63 ff             	movslq %edi,%rdi
  e3:	f7 d8                	neg    %eax
  e5:	48 8d 3c 7f          	lea    (%rdi,%rdi,2),%rdi
  e9:	89 c2                	mov    %eax,%edx
  eb:	48 98                	cltq   
  ed:	c1 e2 05             	shl    $0x5,%edx
  f0:	4c 8d 1c 40          	lea    (%rax,%rax,2),%r11
  f4:	48 01 ff             	add    %rdi,%rdi
  f7:	48 63 d2             	movslq %edx,%rdx
  fa:	48 8d 14 52          	lea    (%rdx,%rdx,2),%rdx
  fe:	4d 01 db             	add    %r11,%r11
 101:	4c 8d 34 12          	lea    (%rdx,%rdx,1),%r14
 105:	4a 8d 04 2e          	lea    (%rsi,%r13,1),%rax
 109:	4d 8d 94 34 c0 00 00 	lea    0xc0(%r12,%rsi,1),%r10
 110:	00 
 111:	48 89 dd             	mov    %rbx,%rbp
 114:	4c 01 e0             	add    %r12,%rax
 117:	48 89 44 24 f0       	mov    %rax,-0x10(%rsp)
 11c:	4d 8d 82 40 ff ff ff 	lea    -0xc0(%r10),%r8
 123:	49 89 e9             	mov    %rbp,%r9
 126:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 12d:	00 00 00 
 130:	49 8d 89 c0 00 00 00 	lea    0xc0(%r9),%rcx
 137:	4c 89 c8             	mov    %r9,%rax
 13a:	4c 89 c2             	mov    %r8,%rdx
 13d:	48 89 74 24 e8       	mov    %rsi,-0x18(%rsp)
 142:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
 148:	8b 32                	mov    (%rdx),%esi
 14a:	48 83 c0 06          	add    $0x6,%rax
 14e:	89 70 fa             	mov    %esi,-0x6(%rax)
 151:	0f b7 72 04          	movzwl 0x4(%rdx),%esi
 155:	48 01 fa             	add    %rdi,%rdx
 158:	66 89 70 fe          	mov    %si,-0x2(%rax)
 15c:	48 39 c1             	cmp    %rax,%rcx
 15f:	75 e7                	jne    148 <rotate+0xc8>
 161:	49 83 c0 06          	add    $0x6,%r8
 165:	4d 01 d9             	add    %r11,%r9
 168:	48 8b 74 24 e8       	mov    -0x18(%rsp),%rsi
 16d:	4d 39 d0             	cmp    %r10,%r8
 170:	75 be                	jne    130 <rotate+0xb0>
 172:	4d 8d 90 c0 00 00 00 	lea    0xc0(%r8),%r10
 179:	4c 01 f5             	add    %r14,%rbp
 17c:	4c 3b 54 24 f0       	cmp    -0x10(%rsp),%r10
 181:	75 99                	jne    11c <rotate+0x9c>
 183:	48 81 c3 c0 00 00 00 	add    $0xc0,%rbx
 18a:	48 03 74 24 f8       	add    -0x8(%rsp),%rsi
 18f:	4c 39 fb             	cmp    %r15,%rbx
 192:	0f 85 6d ff ff ff    	jne    105 <rotate+0x85>
 198:	5b                   	pop    %rbx
 199:	5d                   	pop    %rbp
 19a:	41 5c                	pop    %r12
 19c:	41 5d                	pop    %r13
 19e:	41 5e                	pop    %r14
 1a0:	41 5f                	pop    %r15
 1a2:	c3                   	retq   
 1a3:	66 66 66 66 2e 0f 1f 	data16 data16 data16 nopw %cs:0x0(%rax,%rax,1)
 1aa:	84 00 00 00 00 00 

00000000000001b0 <register_rotate_functions>:
 1b0:	48 83 ec 08          	sub    $0x8,%rsp
 1b4:	be 00 00 00 00       	mov    $0x0,%esi
 1b9:	bf 00 00 00 00       	mov    $0x0,%edi
 1be:	e8 00 00 00 00       	callq  1c3 <register_rotate_functions+0x13>
 1c3:	be 00 00 00 00       	mov    $0x0,%esi
 1c8:	bf 00 00 00 00       	mov    $0x0,%edi
 1cd:	48 83 c4 08          	add    $0x8,%rsp
 1d1:	e9 00 00 00 00       	jmpq   1d6 <register_rotate_functions+0x26>
