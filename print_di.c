/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_%di.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:02:26 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/13 12:54:53 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_di(int nbr)
{
	int		length;
	char	*number;

	length = 0;
	number = ft_itoa(nbr);
	length = printstr(number);
	free(number);
	return (length);
}
