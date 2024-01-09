/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mouk <oel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:13:41 by oel-mouk          #+#    #+#             */
/*   Updated: 2024/01/09 02:22:07 by oel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_puthexa(unsigned long x, int *temp, int asc);
void	ft_putnbr(long x, int *temp);
void	ft_putstr(char *tab, int temp);
int		ft_printf(const char *tab, ...);
void	ft_putchar(char c, int *temp);

#endif
