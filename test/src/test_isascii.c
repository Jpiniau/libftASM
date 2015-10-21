/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 16:57:59 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/13 17:09:05 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "test.h"
#include "asm.h"
#include <ctype.h>

void test_isascii()
{
	int	t;
	int a;

	t = 0;
	a = -1;
	while (a <= 129)
	{
		if (isascii(a) == ft_isascii(a))
			a++;
		else
		{
			print(0);
			return;
		}
	}
	print(1);
}
