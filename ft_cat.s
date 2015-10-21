# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_cat.s                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/21 14:45:29 by jpiniau           #+#    #+#              #
#    Updated: 2015/10/21 15:53:42 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
section .bss

buff : resb 512

section .text
	global _ft_cat

_ft_cat:
	lea rsi, [rel buff]
	mov rdx, 0x200
	mov rax, 0x2000003
	cmp rax, -1
	je error
	syscall
	cmp rax, 0
	jle end
	push rdi
	mov rdi, 1
	mov rdx, rax
	mov rax, 0x2000004
	syscall
	pop rdi
	jmp _ft_cat	

error:
	ret

end:
	mov rax, 0
	ret
