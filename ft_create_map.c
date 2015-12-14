/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 17:15:07 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/10 18:13:37 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

char	**ft_create_map(int size)
{
	char **grid;
	int i;

	grid = (char**)malloc(sizeof(char*)* (size + 1));
	i = 0;
	if (grid == NULL)
	  {
	    printf("DANS FTCREATEMAP GRID == NULL\n");
		return (NULL);
	  }
	while (i <= size + 1)
	{
	  grid[i] = (char*)malloc(sizeof(char) * (size + 1));
		if (grid[i] == NULL)
		  {
	    printf("DANS FTCREATEMAP GRID == NULL\n");
			return (NULL);
		  }
		i = i + 1;
	}
	ft_init_map(grid, size);
	return (grid);
}
