# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_toupper.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/08 17:55:24 by jpiniau           #+#    #+#              #
#    Updated: 2015/06/08 18:19:55 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_toupper

_ft_toupper:
	cmp rdi, 'a'
	jb no
	cmp rdi, 'z'
	jbe up
	jmp no

up:
	mov rax, rdi
	sub rax, 32
	jmp end

no:
	mov rax, rdi
	jmp end

end:
	ret
