# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_putchar.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/18 11:06:31 by jpiniau           #+#    #+#              #
#    Updated: 2015/10/18 11:09:47 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global	_ft_putchar

_ft_putchar:
	push rdi
	mov rsi, rsp
	mov rdx, 1
	mov rdi, 1
	mov rax, 0x2000004
	syscall
	jc error

exit:
	pop	rdi
	ret

error:
	mov	rax, -1
	jmp	exit
