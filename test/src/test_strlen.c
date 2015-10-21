/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/15 12:11:40 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/15 12:54:01 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "asm.h"
#include <ctype.h>

void	strlen1()
{
	char test[] = "";

	print(strlen(test) == ft_strlen(test));
}

void	strlen2()
{
	char test[] = "lol";

	print(strlen(test) == ft_strlen(test));
}

void	strlen3()
{
	int		grd = 1000000;
	char	test[grd];

	memset(test, 'i', grd);
	test[grd - 1] = '\0';
	print(strlen(test) == ft_strlen(test));
}

void	test_strlen()
{
	strlen1();
	strlen2();
	strlen3();
}
