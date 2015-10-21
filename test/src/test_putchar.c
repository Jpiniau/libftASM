/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 11:26:06 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/18 11:39:50 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"
#include "test.h"
#include <unistd.h>
#include <stdio.h>

void	test_putchar()
{
    int     readd;
    int     out;
    int     pip[2];
    char    buf[10000];

    out = dup(1);
    pipe(pip);
    dup2(pip[1], 1);
    ft_putchar('L');
    ft_putchar('o');
    ft_putchar('l');
    dup2(out, 1);
    readd = read(pip[0], buf, 10000);
    buf[readd] = 0;
    close(pip[0]);
    close(pip[1]);
    close(out);
    print(!strcmp(buf, "Lol"));
}
