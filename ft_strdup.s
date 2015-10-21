# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/21 14:05:06 by jpiniau           #+#    #+#              #
#    Updated: 2015/10/21 15:59:41 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

extern	_ft_strlen
extern 	_ft_memcpy
extern	_malloc

section .text
	global _ft_strdup

_ft_strdup:
	push rdi
	call _ft_strlen
	inc	rax
	push rax
	mov	rdi, rax
	push rdi
	call _malloc
	pop	rdi
	cmp	rax, 0
	je return
	lea	rdi, [rax]
	pop	rdx
	pop	rsi
	inc	rdx
	call _ft_memcpy
	jmp return

return:
	ret
