/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_islower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 11:48:38 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/18 11:52:43 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "asm.h"
#include <ctype.h>

void test_islower()
{
	int	t;
	int a;

	t = 0;
	a = -1;
	while (a <= 129)
	{
		if (islower(a) == ft_islower(a))
			a++;
		else
		{
			print(0);
			return;
		}
	}
	print(1);
}
