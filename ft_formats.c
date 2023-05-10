/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:15:52 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/10 17:55:36 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_formats(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length = length + ft_printchar(va_arg(args, int));
	else if (format == 's')
		length = length + ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		length = length + ft_printptr(va_arg(args, void*));
	else if (format == 'd' || format == 'i')
		length = length + ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		length = length + ft_printunsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		length = length + ft_printhex(va_arg(args, unsigned int), char format);
	else if (format == '%')
		length = length + ft_printchar(va_arg(args, int);
	return (length);
}
