/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 15:56:29 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/13 16:03:53 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	print(int v)
{
	if (v)
		printf(".");
	else
		printf("X");
}

int comp(const void *s1, const void *s2, unsigned long n)
{
	if (!memcmp(s1, s2, n))
		return(1);
	else
		return(0);
}
