/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_%s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 10:46:00 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/13 12:54:38 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(char *str)
{
	int	length;

	length = 0;
	if (str == NULL)
	{
		print_null("(null)");
		return (6);
	}
	length = ptintstr(str);
	return (length);
}
