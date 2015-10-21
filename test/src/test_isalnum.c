/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 16:52:44 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/13 17:08:34 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "asm.h"
#include <ctype.h>

void test_isalnum()
{
	int	t;
	int a;

	t = 0;
	a = -1;
	while (a <= 129)
	{
		if (isalnum(a) == ft_isalnum(a))
			a++;
		else
		{
			print(0);
			return;
		}
	}
	print(1);
}
