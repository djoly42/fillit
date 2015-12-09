/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 10:26:53 by djoly             #+#    #+#             */
/*   Updated: 2015/12/09 15:49:26 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fill_header.h"


void 	ft_test_list(t_tetri *begin)
{
	int i;
	ft_affiche("test_list", 0);//
		ft_putchar('\n');
	while (begin)
	{
		ft_putstr(begin->idstr);
		ft_putchar('\n');
		begin = begin->next;
	}
	ft_affiche("test_list", 1);//
}
