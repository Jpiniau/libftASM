# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isupper.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/18 11:31:57 by jpiniau           #+#    #+#              #
#    Updated: 2015/10/18 11:31:59 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global _ft_isupper

_ft_isupper:
	push rdi
	mov	rax, 0
	cmp	rdi, 65
	jl end
	cmp	rdi, 90
	jg end
	mov	rax, 1

end:
	pop	rdi
	ret
