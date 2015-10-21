/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 16:42:20 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/13 16:42:57 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "asm.h"
#include <ctype.h>

void test_isdigit()
{
	int	t;
	int a;

	t = 0;
	a = 32;
	while (a <= 'z')
	{
		if (isdigit(a) == ft_isdigit(a))
			a++;
		else
		{
			print(0);
			return;
		}
	}
	print(1);
}
