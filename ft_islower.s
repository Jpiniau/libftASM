# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_islower.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <jpiniau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/18 11:50:48 by jpiniau           #+#    #+#              #
#    Updated: 2015/10/18 11:51:36 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global _ft_islower

_ft_islower:
	push rdi
	mov	rax, 0
	cmp	rdi, 97
	jl end
	cmp	rdi, 122
	jg end
	mov	rax, 1

end:
	pop	rdi
	ret
