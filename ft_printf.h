/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:21:42 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/20 15:34:48 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		printchar(int c);
int		printstr(char *str);
int		find_size(int n);
int		hex_len(unsigned int decimal);
int		unsigned_len(unsigned int num);
int		pointer_len(uintptr_t ptr);

char	*to_str(char *str, int n, int size);
char	*ft_strdup(const char *s);
char	*ft_itoa(int n);

void	print_null(char *str);
void	sort_hex(unsigned int decimal, const char format);
void	sort_u(unsigned int	num);
void	sort_p(uintptr_t pointer);

int		print_c(int c);
int		print_s(char *str);
int		print_di(int nbr);
int		print_x(unsigned int decimal, const char format);
int		print_u(unsigned int num);
int		print_p(void *ptr);
#endif
