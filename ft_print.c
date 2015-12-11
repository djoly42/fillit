/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 15:25:18 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/11 15:30:05 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fill_header.h"

void	ft_print(char **grid, t_tetri *list, int   i, int j)
{
	int		k;

	k = 0;
	while (k < 4)
	{
		grid[list->sqr[k][0] + i][list->sqr[k][1] + j] = list->piece;
		k++;
	}
}
