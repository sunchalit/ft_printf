/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:55:48 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/10 17:02:56 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		index;
	int		length;
	va_list	args;

	index = 0;
	length = 0;
	va_start(args, format);
	while (format[index])
	{
		if (format(index) == '%')
		{
			length = length + ft_formats(args, format[index + 1]);
		}
		else
		{
			length = length + ft_printchar(format[index]);
		}
		index++;
	}
	va_end(args);
	return (length);
}
