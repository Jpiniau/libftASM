/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 17:07:37 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/13 17:08:13 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "asm.h"
#include <ctype.h>

void test_isprint()
{
	int	t;
	int a;

	t = 0;
	a = -1;
	while (a <= 129)
	{
		if (isprint(a) == ft_isprint(a))
			a++;
		else
		{
			print(0);
			return;
		}
	}
	print(1);
}
