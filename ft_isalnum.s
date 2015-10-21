# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalnum.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/08 17:48:13 by jpiniau           #+#    #+#              #
#    Updated: 2015/06/08 18:12:10 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_isalnum

_ft_isalnum:
	cmp rdi, 48
	jb no
	cmp rdi, 57
	jbe yes
	cmp rdi, 'A'
	jb no
	cmp rdi, 'Z'
	jbe yes
	cmp rdi, 'a'
	jb no
	cmp rdi, 'z'
	jbe yes
	jmp no

yes:
	mov rax, 1
	jmp end

no:
	mov rax, 0
	jmp end

end:
	ret

