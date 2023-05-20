/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:50:59 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/20 16:29:12 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsigned_len(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = (num / 10);
	}
	return (len);
}

void	sort_u(unsigned int num)
{
	if (num >= 10)
		sort_u(num / 10);
	printchar((numi % 10) + 48);
}

int	print_u(unsigned int num)
{
	int	len;

	sort_u(num);
	len = unsigned_len(num);
	return (len);
}
