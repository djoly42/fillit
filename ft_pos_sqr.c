/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_sqr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 09:24:17 by djoly             #+#    #+#             */
/*   Updated: 2015/12/11 15:53:51 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

int		**ft_pos_sqr(int *position)
{
	int		**pos_square;
	int		i;
	int *test;
//	ft_affiche("ft_pos_sqr",0);
	if (!(pos_square = (int **)malloc(sizeof(int*) * 4)))
		return (NULL);
/*
			pos_square[0] = ft_indice(position[0]);

		ft_putstr(" position 0 1fois (i,j)= (");
		ft_putnbr(pos_square[0][0]);
		ft_putchar('.');
		ft_putnbr(pos_square[0][1]);
		ft_putstr(") \n");


			pos_square[1] = ft_indice(position[1]);
			pos_square[2] = ft_indice(position[2]);
			pos_square[3] = ft_indice(position[3]);*/
	i = 0;
	while (i < 4)
	{
			pos_square[i] = ft_indice(position[i]);

		//	test  = ft_indice(position[i]);
//		pos_square[i] = test;

/*		ft_putstr("(i,j)= (");
		ft_putnbr(test[0]);
		ft_putchar('.');
		ft_putnbr(test[1]);
		ft_putstr(") \n");

		ft_putstr("(i,j)= (");
		ft_putnbr(pos_square[0][0]);
		ft_putchar('.');
		ft_putnbr(pos_square[0][1]);
		ft_putstr(") \n");
*/

		i++;

	}
/*
		ft_putstr("(i,j)= (");
		ft_putnbr(pos_square[0][0]);
		ft_putchar('.');
		ft_putnbr(pos_square[0][1]);
		ft_putstr(") \n");

		ft_putstr("(i,j)= (");
		ft_putnbr(pos_square[1][0]);
		ft_putchar('.');
		ft_putnbr(pos_square[1][1]);
		ft_putstr(") \n");

		ft_putstr("(i,j)= (");
		ft_putnbr(pos_square[2][0]);
		ft_putchar('.');
		ft_putnbr(pos_square[2][1]);
		ft_putstr(") \n");

		ft_putstr("(i,j)= (");
		ft_putnbr(pos_square[3][0]);
		ft_putchar('.');
		ft_putnbr(pos_square[3][1]);
		ft_putstr(") \n");


		ft_affiche("ft_pos_sqr",1); */
	return (pos_square);
}
