/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_sqr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 09:24:17 by djoly             #+#    #+#             */
/*   Updated: 2015/12/18 14:58:15 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

int		**ft_pos_sqr(int *position)
{
	int		**pos_square;
	int		i;

	if (!(pos_square = (int **)malloc(sizeof(int*) * 4)))
		return (NULL);
	i = 0;
	while (i < 4)
	{
		pos_square[i] = ft_indice(position[i]);
		i++;
	}
	return (pos_square);
}
