/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:15:52 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/24 17:46:36 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length = length + putchar(va_arg(args, int));
	else if (format == 's')
		length = length + print_s(va_arg(args, char *));
	else if (format == 'p')
		length = length + print_p(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		length = length + print_di(va_arg(args, int));
	else if (format == 'u')
		length = length + print_u(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		length += print_x(va_arg(args, unsigned int), format);
	else if (format == '%')
		length = length + putchar(va_arg(args, int));
	return (length);
}
