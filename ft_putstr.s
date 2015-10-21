# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_puts.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/21 10:37:58 by jpiniau           #+#    #+#              #
#    Updated: 2015/10/18 09:53:13 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_putstr

_ft_putstr:
	mov r8, 0
	mov r9, rdi
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
	ret

write_null:
	ret
