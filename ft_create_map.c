/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 17:15:07 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/18 12:07:24 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

char	**ft_create_map(int size)
{
	char	**grid;
	int		i;

	grid = (char**)malloc(size * sizeof(char*) + 1);
	i = 0;
	if (grid == NULL)
		return (NULL);
	while (i <= size + 1)
	{
		grid[i] = (char*)malloc(size * sizeof(char) + 1);
		if (grid[i] == NULL)
			return (NULL);
		i = i + 1;
	}
	ft_init_map(grid, size);
	return (grid);
}
