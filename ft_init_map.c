/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 17:39:51 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/11 16:07:28 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

char	**ft_init_map(char **grid , int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			grid[i][j] = '.';
//			ft_putchar (grid[i][j]);
			j++;
		}
		grid[i][j] = '\0';
//		ft_putchar ('\n');
		i++;
	}
	j = 0;
	while(j <= size)
	{
		grid[i][j] = '\0';
		j++;
		}
	return (grid);
}
