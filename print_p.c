/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:40:09 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/20 15:10:17 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pointer_len(uintptr_t ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len + 2);
}

void	sort_p(uintptr_t pointer)
{
	if (pointer >= 16)
	{
		sort_p(pointer / 16);
		sort_p(pointer % 16);
	}
	else if (pointer <= 9)
		printchar(pointer + 48);
	else if (pointer >= 10 && pointer <= 15)
	{
		printchar(pointer + 87);
	}
}

int	print_p(void *ptr)
{
	uintptr_t	pointer;
	int			len;

	pointer = (uintptr_t)ptr;
	write(1, "0x", 2);
	if (pointer == 0)
		printchar('0');
	else
	{
		sort_p(pointer);
	}
	len = pointer_len(pointer);
	return (len);
}
