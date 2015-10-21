# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isdigit.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/08 17:06:50 by jpiniau           #+#    #+#              #
#    Updated: 2015/06/08 18:11:04 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_isdigit

_ft_isdigit:
	cmp rdi, 48
	jl no
	cmp rdi, 57
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

