/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:21:42 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/13 13:13:28 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *, ...);
int	printchar(int c);
int	printstr(char *str);
int	find_size(int n);

char	*to_str(char *str, int n, int size);
char	*ft_strdup(const char *s);
char	*ft_itoa(int n);

void	print_null(char *str);

int	print_c(int c);
int	print_s(char *str);
int	print_di(int nbr);

#endif
