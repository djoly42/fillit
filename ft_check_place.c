/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 14:14:51 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/18 12:05:23 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

int		ft_check_place(char **grid, int position, int size, t_tetri *list)
{
	int		i;
	int		j;
	int		k;

	i = position / size;
	j = position % size;
	k = 0;
	while (k < 4)
	{
		if (!(grid[i + list->sqr[k][0]][j + list->sqr[k][1]] == '.'))
			return (0);
		k++;
	}
	return (1);
}
