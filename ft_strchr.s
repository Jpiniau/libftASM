# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strchr.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <jpiniau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/09 13:49:12 by jpiniau           #+#    #+#              #
#    Updated: 2015/10/15 15:27:21 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_strchr

_ft_strchr:
	cmp rdi, rsi
	je same
	jmp while

while:
	cmp rdi, rsi
	je end
	cmp rdi, 0
	je end_null
	inc rdi
	jp while

same:
	mov rax, rdi
	ret

end_null:
	mov rax, 0
	ret

end:
	mov rax, rdi
