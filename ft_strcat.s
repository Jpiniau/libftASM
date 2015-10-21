# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcat.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/21 12:10:46 by jpiniau           #+#    #+#              #
#    Updated: 2015/08/25 15:11:44 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_strcat

_ft_strcat:
	mov rax, rdi
	cmp [rsi], byte 0
	je end
	cmp [rdi], byte 0
	je addrsi
	jmp endrdi

endrdi:
	cmp byte[rdi], 0
	je addrsi
	inc rdi
	jmp endrdi

addrsi:
	cmp byte[rsi], 0
	je end
	movsb
	jmp addrsi

end:
	ret
