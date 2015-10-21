/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 16:33:04 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/13 17:08:54 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "asm.h"
#include <ctype.h>

void test_isalpha()
{
	int	t;
	int a;

	t = 0;
	a = -1;
	while (a <= 129)
	{
		if (isalpha(a) == ft_isalpha(a))
			a++;
		else
		{
			print(0);
			return;
		}
	}
	print(1);
}
