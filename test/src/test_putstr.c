/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 11:28:00 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/18 11:40:48 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "asm.h"
#include "test.h"
#include <unistd.h>
#include <stdio.h>

void	test_putstr()
{
    int     readd;
    int     out;
    int     pip[2];
    char    buf[10000];

    out = dup(1);
    pipe(pip);
    dup2(pip[1], 1);
    ft_putstr("Lol");
    ft_putstr("Feu");
    dup2(out, 1);
    readd = read(pip[0], buf, 10000);
    buf[readd] = 0;
    close(pip[0]);
    close(pip[1]);
    close(out);
    print(!strcmp(buf, "LolFeu"));
}
