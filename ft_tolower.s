# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_tolower.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/08 18:22:17 by jpiniau           #+#    #+#              #
#    Updated: 2015/06/08 18:37:32 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_tolower

_ft_tolower:
	cmp rdi, 'A'
	jb no
	cmp rdi, 'Z'
	jbe up
	jmp no

up:
	mov rax, rdi
	add rax, 32
	jmp end

no:
	mov rax, rdi
	jmp end

end:
	ret
