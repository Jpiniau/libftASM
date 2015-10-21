/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/15 13:46:40 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/21 14:44:27 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "asm.h"
#include <unistd.h>

void	test_strndup()
{
	print(strcmp(ft_strndup("test", 4), "test") == 0);
	print(strcmp(ft_strndup("asdfgwq", 5), "asdfg") == 0);
	print(strcmp(ft_strndup("", 0), "") == 0);
}
