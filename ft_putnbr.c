/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mouk <oel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 02:42:13 by oel-mouk          #+#    #+#             */
/*   Updated: 2024/01/09 02:23:04 by oel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(long x, int *temp)
{
	if (x >= 0 && x <= 9)
		ft_putchar((x + 48), temp);
	else if (x >= 10)
	{
		ft_putnbr(x / 10, temp);
		ft_putnbr(x % 10, temp);
	}
	else if (x < 0)
	{
		ft_putchar('-', temp);
		ft_putnbr(x * (-1), temp);
	}
}
