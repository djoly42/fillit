/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:41:16 by djoly             #+#    #+#             */
/*   Updated: 2015/12/18 14:33:06 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

int		*ft_indice(int position)
{
	int	*indice;
	int	i;

	i = 0;
	if (!(indice = (int*)malloc(sizeof(int) * 2)))
		return (NULL);
	if (position > 4)
	{
		indice[1] = position % 5;
		while (position > 4)
		{
			i++;
			position = position - 5;
		}
		indice[0] = i;
	}
	else
	{
		indice[0] = 0;
		indice[1] = position;
	}
	return (indice);
}
