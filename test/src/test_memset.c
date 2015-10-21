/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/15 12:54:24 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/15 13:02:48 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "asm.h"

void	test_memset()
{
	print(memcmp(memset(strdup("lol"), '!', 4), ft_memset(strdup("lol"), '!', 4), 4) == 0);
	print(memcmp(memset(strdup("swag"), 0, 0), ft_memset(strdup("swag"), 0, 0), 5) == 0);
}
