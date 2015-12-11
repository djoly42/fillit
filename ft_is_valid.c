/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 15:30:34 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/11 19:55:46 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

int		ft_is_valid(char **grid, int position, int size, t_tetri *list)
{
	int		i;
	int		j;
	int		k;


//	ft_put_grid(grid);
//	ft_putnbr(position);
//	ft_putstr("\n\n");

	if (!(list))
		return (1);

	if (position == ((size * size)-1) && (list->piece == 'A'))
		return (0); //ft_is_valid(grid, (list->prev->start + 1), size, list->prev));

//	if (position == size * size)
//		return (0);
	if ((position + 1) == (size * size) && list)
	{
		ft_delete(grid, list->prev->piece, size);
		return (ft_is_valid(grid, (list->prev->start + 1), size, list->prev));
	}


	i = position / size;
	j = position % size;
//	ft_putnbr(position);//
//	ft_putchar(list->piece);


	k = 0;
	while (k < 4)
	{
		if (!(grid[list->sqr[k][0] + i][list->sqr[k][1] + j] == '.'))
			return(ft_is_valid(grid, (position + 1), size, list));
		k++;
	}
	list->start = position;
	ft_print(grid, list, i, j);
	return(ft_is_valid(grid, 0, size, list->next));
}
