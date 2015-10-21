# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_mod.s                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/27 13:34:17 by jpiniau           #+#    #+#              #
#    Updated: 2015/10/15 18:13:22 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_mod

_ft_mod:
	cmp rsi, 0
	je error
	mov rdx, 0
	mov rax, rdi
	mov rcx, rsi
	div rcx
	mov rax, rdx
	ret

error:
	mov rax, -1
	ret
