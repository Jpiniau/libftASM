# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/21 14:05:06 by jpiniau           #+#    #+#              #
#    Updated: 2015/10/21 14:48:00 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

extern _ft_strlen
extern _ft_memcpy
extern _malloc
extern _ft_strdup

section .text
	global _ft_strndup

_ft_strndup:
	push rdi
	call _ft_strlen
	cmp rax, rsi
	jb strdup
	push rsi
	mov	rdi, rsi
	push rdi
	call _malloc
	pop	rdi
	cmp	rax, 0
	je ret
	lea	rdi, [rax]
	pop	rdx
	pop	rsi
	call _ft_memcpy
	jmp	ret

strdup:
	pop rdi
	call _ft_strdup
	jmp ret

ret:
	mov [rax + rdx], byte 0
	ret
