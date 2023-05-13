/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:21:12 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/13 12:51:54 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_size(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * (-1);
		size++;
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*to_str(char *str, int n, int size)
{
	str[size] = '\0';
	while (n > 0)
	{
		str[size - 1] = (n % 10) + 48;
		n = n / 10;
		size--;
	}
	return (str);
}

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = find_size(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	to_str(str, n, size);
	return (str);
}
