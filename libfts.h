/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 16:02:32 by jpiniau           #+#    #+#             */
/*   Updated: 2015/10/21 16:09:32 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H

# include <string.h>

void	ft_bzero(void *s, size_t n);
char	*ft_strcat(char *s1, const char *s2);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_puts(const char *s);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *restrict src, size_t n);
char	*ft_strdup(const char *s1);
void	ft_cat(int fd);
int		ft_mod(int x, int y);
int		ft_pow(int x, int y);
int		ft_putnbr(int c);
void	ft_putchar(char c);
void	ft_putstr(char *c);
int		ft_isupper(int c);
int		ft_islower(int c);
char	*ft_strchr(char *str, int c);
char	*ft_strndup(char *str, int c);

#endif
