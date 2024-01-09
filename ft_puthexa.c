/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mouk <oel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 02:42:18 by oel-mouk          #+#    #+#             */
/*   Updated: 2024/01/09 02:23:04 by oel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexa(unsigned long x, int *temp, int asc)
{
	if (x < 16)
	{
		if (x < 10)
			ft_putchar((x + 48), temp);
		else
			ft_putchar((x + asc), temp);
	}
	else
	{
		ft_puthexa(x / 16, temp, asc);
		ft_puthexa(x % 16, temp, asc);
	}
}
