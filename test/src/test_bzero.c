/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 15:43:24 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/13 16:11:27 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "asm.h"

void	bzero1()
{
	char    cont[25];
	char    test[] = "qwertyuiopasdfghjklzxcvb";

	bzero(cont, 25);
	ft_bzero(test, 25);
	print(comp(cont, test, 25));
}

void	bzero2()
{
	char	test[] = "qwertyuiopasdfghjklzxcvb";
	char	cont[] = "qwertyuiopasdfghjklzxcvb";

	bzero(cont, 17);
	ft_bzero(test, 17);
	print(comp(cont, test, 25));
}

void	bzero3()
{
	char	test[] = "qwertyuiopasdfghjklzxcvb";
	char	cont[] = "qwertyuiopasdfghjklzxcvb";

	bzero(cont, 0);
	ft_bzero(test, 0);
	print(comp(cont, test, 25));
}

void	test_bzero()
{
	bzero1();
	bzero2();
	bzero3();
}
