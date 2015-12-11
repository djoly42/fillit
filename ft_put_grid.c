/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 18:04:25 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/11 16:10:21 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

void	ft_put_grid(char **grid)
{
	int		i;

	i = 0;
	while (grid[i][0] != '\0')
	{
		ft_putstr(grid[i++]);
		ft_putchar('\n');
	}
}
