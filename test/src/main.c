/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <jpiniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 15:02:19 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/18 11:50:02 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "test.h"
#include "asm.h"

int		main()
{
	printf("ft_bzero:");
	test_bzero();
	printf("\nft_strcat:");
	test_strcat();
	printf("\nft_isalpha:");
	test_isalpha();
	printf("\nft_isdigit:");
	test_isdigit();
	printf("\nft_isalnum:");
	test_isalnum();
	printf("\nft_isaciit:");
	test_isascii();
	printf("\nft_isprint:");
	test_isprint();
	printf("\nft_toupper:");
	test_toupper();
	printf("\nft_tolower:");
	test_tolower();
	printf("\nft_puts:");
	test_puts();
	printf("\nft_strlen:");
	test_strlen();
	printf("\nft_memset:");
	test_memset();
	printf("\nft_memcpy:");
	test_memcpy();
	printf("\nft_strdup:");
	test_strdup();
	printf("\nft_cat:");
	test_cat();
	printf("\nft_pow:");
	test_pow();
	printf("\nft_mod:");
 	test_mod();
	printf("\nft_putchar:");
	test_putchar();
	printf("\nft_putstr:");
	test_putstr();
	printf("\nft_isupper:");
	test_isupper();
	printf("\nft_islower:");
	test_islower();
/*	printf("\nft_strchr:");
	test_strchr();*/
	printf("\nft_strndup:");
	test_strndup();
	printf("\n");
	return(1);
}
