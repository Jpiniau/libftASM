# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_puts.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/21 10:37:58 by jpiniau           #+#    #+#              #
#    Updated: 2015/10/21 15:31:46 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .data
	nul		db "(null)", 10

section .text
	global _ft_puts

_ft_puts:
	mov r8, 0
	lea r9, [rdi]
	cmp r9, 0
	je write_null
	mov rcx, rdi
	jmp len

len:
	cmp byte[r9], 0
	jz write
	inc r8
	inc r9
	jmp len

write:
	mov rdi, 1
	mov rsi, rcx
	mov rdx, r8
	mov rax, 0x2000004
	syscall
	jmp newline

write_null:
	mov rdi, 1
	lea rsi, [rel nul]
	mov rdx, 6
	mov rax, 0x2000004
	syscall
	jmp newline

newline:
	mov rdi, 1
	lea rsi, [rel nul + 6]
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	ret
