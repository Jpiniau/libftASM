# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isprint.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/08 17:53:08 by jpiniau           #+#    #+#              #
#    Updated: 2015/08/23 12:27:39 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_isprint

_ft_isprint:
	cmp rdi, ' '
	jl no
	cmp rdi, '~'
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

