/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 17:35:11 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/18 14:36:33 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

void	ft_resolv(t_tetri *list_tetri)
{
	char	**map;
	int		param[2];
	int		boucle;

	boucle = 0;
	param[0] = 0;
	param[1] = ft_fill_sqrt(ft_list_size(list_tetri) * 4);
	map = ft_create_map(param[1]);
	while (!(ft_is_valid(map, param, list_tetri, &boucle)))
	{
		if (boucle == 100000)
			boucle = 0;
		else
		{
			boucle = 0;
			param[0] = 0;
			ft_free(map, param[1]);
			param[1]++;
			map = ft_create_map(param[1]);
		}
	}
	ft_put_grid(map);
}
