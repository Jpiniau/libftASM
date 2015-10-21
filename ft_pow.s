# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_pow.s                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/27 10:45:59 by jpiniau           #+#    #+#              #
#    Updated: 2015/10/21 15:01:06 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_pow

_ft_pow:
	cmp rsi, 0
	je one
	cmp rdi, 0
	jb nega
	cmp rdi, 0
	je zero
	cmp rsi, 1
	je pone
	mov rax, rdi
	mov rbx, rdi
	mov r9, rsi
	jmp pow

nega:
	neg rsi
	mov r8, 1
	jmp _ft_pow

negarax:
	neg rax
	ret

one:
	mov rax , 1
	jmp end

zero:
	mov rax, 0
	jmp end

pone:
	mov rax, rdi
	jmp end

pow:
	mul rbx
	dec r9
	cmp r9, 1
	je end
	jmp pow

end:
	cmp r8, 1
	je negarax
	ret
