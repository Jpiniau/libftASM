/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 16:18:21 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/18 11:47:38 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"
#include "test.h"
#include <stdio.h> 

void	test_strcat()
{
	char	test[13];

	bzero(test, 13);
	ft_strcat(test, "l");
	ft_strcat(test, "");
	ft_strcat(test, "ol-");
	ft_strcat(test, "lol");
	ft_strcat(test, ".l");
	ft_strcat(test, "ol");
	print(comp(test, "lol-lol.lol", 12));
}
