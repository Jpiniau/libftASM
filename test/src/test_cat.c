/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/15 13:34:58 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/15 15:52:14 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "asm.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	test_cat()
{
	int pip[2];
	char buf[10];
	int saved_stdout;
	int fd;

	saved_stdout = dup(1);
	pipe(pip);
	dup2(pip[1], 1);
	system("echo 'YOLOSWAG420BLAZEIT' > 2015");
	fd = open("2015", O_RDONLY);
	if (fd == -1)
		return ;
	ft_cat(fd);
	read(pip[0], buf, 18);
	dup2(saved_stdout, 1);
	close(fd);
	close(pip[0]);
	close(pip[1]);
	close(saved_stdout);
	system("rm 2015");
	print(memcmp(buf, "YOLOSWAG420BLAZEIT", 18) == 0);
}
