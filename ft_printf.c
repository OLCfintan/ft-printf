/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mouk <oel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 02:42:27 by oel-mouk          #+#    #+#             */
/*   Updated: 2024/01/09 02:21:41 by oel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check(va_list args, char c, int *temp)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), temp);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), *temp);
	else if (c == 'p')
	{
		ft_putstr("0x", *temp);
		ft_puthexa(va_arg(args, unsigned long), temp, 87);
	}
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), temp);
	else if (c == 'u')
		ft_putnbr(va_arg(args, unsigned int), temp);
	else if (c == 'x' || c == 'X')
		ft_puthexa(va_arg(args, unsigned int), temp, 55 + 32 * (c != 'X'));
	else if (c == '%')
		ft_putchar(c, temp);
}

int	ft_printf(const char *tab, ...)
{
	va_list	args;
	int		temp;
	int		i;

	va_start(args, tab);
	temp = 0;
	i = 0;
	while (tab[i])
	{
		if (tab[i] == '%' && tab[i + 1])
		{
			i++;
			ft_check(args, tab[i], &temp);
		}
		else if (tab[i] != '%')
			ft_putchar(tab[i], &temp);
		i++;
	}
	va_end(args);
	return (temp);
}
