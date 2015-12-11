/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_indice.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:56:12 by djoly             #+#    #+#             */
/*   Updated: 2015/12/10 15:43:43 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

void	ft_test_indice(t_tetri *list)
{
//	ft_affiche("test_indice", 0);//
	int	i;
	int *indice;

	i = 0;
	while (i < 4)
	{
		indice = ft_indice(list->position[i]);
		ft_putchar('\n');
		ft_putstr("i=");
		ft_putnbr(indice[0]);
		ft_putstr(" j=");
		ft_putnbr(indice[1]);
//		ft_putchar('\n');
		i++;
	}
//ft_affiche("test_indice", 1);//
}
