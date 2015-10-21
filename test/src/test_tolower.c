/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 17:15:26 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/13 17:16:33 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "asm.h"
#include <ctype.h>

void test_tolower()
{
	int	t;
	int a;

	t = 0;
	a = -1;
	while (a <= 129)
	{
		if (tolower(a) == ft_tolower(a))
			a++;
		else
		{
			print(0);
			return;
		}
	}
	print(1);
}
