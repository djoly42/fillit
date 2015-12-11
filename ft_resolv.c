/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 17:35:11 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/11 18:51:33 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

void	ft_resolv(t_tetri *list_tetri)
{
	char **map;
	int		size;
	int		i;

	size = ft_fill_sqrt(ft_list_size(list_tetri) * 4);
/*	ft_putnbr(ft_list_size(list_tetri));//
	ft_putnbr(size);//
	ft_putchar('\n');//*/
	map = ft_create_map(size);
ft_putstr("debut while resolv\n");
	while (!(ft_is_valid(map, 0,size, list_tetri)))
		{
			ft_putstr("free ");
			free(map);
			size++;
			map = ft_create_map(size);
		}
	ft_putstr("\ngrid OK\n");
	ft_put_grid(map);
}
