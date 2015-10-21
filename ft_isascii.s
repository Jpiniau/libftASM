# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isascii.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/08 17:46:49 by jpiniau           #+#    #+#              #
#    Updated: 2015/06/08 17:47:32 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_isascii

_ft_isascii:
	cmp rdi, 0
	jl no
	cmp rdi, 127
	jle yes
	jmp no

yes:
	mov rax, 1
	jmp end

no:
	mov rax, 0
	jmp end

end:
	ret
