/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:41:16 by djoly             #+#    #+#             */
/*   Updated: 2015/12/10 15:19:26 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

int		*ft_indice(int position)
{
	int	*indice;
	int	i;
//	ft_affiche("indice", 0);//
	i = 0;
	if (!(indice = (int*)malloc(sizeof(int) * 2)))
		return (NULL) ; 

	if (position > 4)
	{
		indice[1] = position % 5;
/*		ft_putstr("dans J =");
		ft_putnbr(indice[1]);
		ft_putchar('\n');*/
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
//	ft_affiche("indice", 1);//

	return(indice);
}
