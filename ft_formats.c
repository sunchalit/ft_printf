/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:15:52 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/13 12:52:26 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_formats(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length = length + printchar(va_arg(args, int));
	else if (format == 's')
		length = length + print_s(va_arg(args, char *));
	else if (format == 'p')
		length = length + print_p(va_arg(args, void*));
	else if (format == 'd' || format == 'i')
		length = length + print_di(va_arg(args, int));
	else if (format == 'u')
		length = length + print_u(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		length = length + print_xX(va_arg(args, unsigned int), char format);
	else if (format == '%')
		length = length + printchar(va_arg(args, int);
	return (length);
}
