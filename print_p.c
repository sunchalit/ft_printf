/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:40:09 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/27 13:01:30 by cnarkcha         ###   ########.fr       */
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
		putchar(pointer + 48);
	else if (pointer >= 10 && pointer <= 15)
	{
		putchar(pointer + 87);
	}
}

int	print_p(void *ptr)
{
	uintptr_t	pointer;
	int			len;

	pointer = (uintptr_t)ptr;
	if (pointer == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	else
	{
		write(1, "0x", 2);
		sort_p(pointer);
	}
	len = pointer_len(pointer);
	return (len);
}
