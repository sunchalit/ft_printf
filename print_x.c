/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_xX.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:52:59 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/20 15:07:57 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned int decimal)
{
	int	len;

	len = 0;
	while (decimal != 0)
	{
		len++;
		decimal = (decimal / 16);
	}
	return (len);
}

void	sort_hex(unsigned int decimal, const char format)
{
	if (decimal >= 16)
	{
		sort_hex(decimal / 16, format);
		sort_hex(decimal % 16, format);
	}
	else if (decimal <= 9)
		printchar(decimal + 48);
	else if (decimal >= 10 && decimal <= 15)
	{
		if (format == 'x')
			printchar(decimal + 87);
		else if (format == 'X')
			printchar(decimal + 55);
	}
}

int	print_x(unsigned int decimal, const char format)
{
	int	len;

	if (decimal == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		sort_hex(decimal, format);
	len = hex_len(decimal);
	return (len);
}
