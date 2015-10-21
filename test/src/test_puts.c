/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_puts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 17:21:26 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/21 15:22:42 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"
#include "test.h"
#include <unistd.h>
#include <stdio.h>

void	test_puts()
{
    int     readd;
    int     return1;
    int     return2;
    int     return3;
    int     out;
    int     pip[2];
    char    buf[10000];

    out = dup(1);
    pipe(pip);
    dup2(pip[1], 1);
    return1 = ft_puts("Lol\n");
    ft_puts("");
    return2 = ft_puts("test");
    return3 = ft_puts(NULL);
    dup2(out, 1);
    readd = read(pip[0], buf, 10000);
    buf[readd] = 0;
    close(pip[0]);
    close(pip[1]);
    close(out);
    if (return1 > 0)
		print(1);
	else
		print(0);
    if (return2 > 0)
		print(1);
	else
		print(0);
    print(!strcmp(buf, "Lol\n\n\ntest\n(null)\n"));
}
