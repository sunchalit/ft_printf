/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_%c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 10:38:32 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/05/13 12:53:24 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	printchar(int c)
{
	write(1, &c, 1);
	return (1);
}