# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalpha.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/08 16:43:27 by jpiniau           #+#    #+#              #
#    Updated: 2015/06/08 17:10:36 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_isalpha

_ft_isalpha:
	cmp rdi, 'A'
	jb noalpha
	cmp rdi, 'Z'
	jbe alpha
	cmp rdi, 'a'
	jb noalpha
	cmp rdi, 'z'
	jbe alpha
	jmp noalpha

noalpha:
	mov rax, 0
	jmp end

alpha:
	mov rax, 1
	jmp end

end:
	ret

