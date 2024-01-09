/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mouk <oel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 02:42:03 by oel-mouk          #+#    #+#             */
/*   Updated: 2024/01/09 02:21:41 by oel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *tab, int *temp)
{
	int	i;

	i = 0;
	if (!tab)
		ft_putstr("(null)", temp);
	while (tab && tab[i])
		ft_putchar(tab[i++], temp);
}
