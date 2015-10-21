# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 18:14:37 by jpiniau           #+#    #+#              #
#    Updated: 2015/08/23 12:16:19 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
global _ft_bzero

_ft_bzero:
	cmp [rdi], byte 0
	je e_loop
	cmp rsi, 0
	je e_loop
	jmp b_loop

b_loop:
	mov [rdi], byte 0
	inc rdi
	dec rsi
	cmp rsi, 0
	jne	b_loop
	jmp e_loop

e_loop:
	ret
