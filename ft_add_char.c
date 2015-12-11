/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 09:51:02 by djoly             #+#    #+#             */
/*   Updated: 2015/12/11 17:41:18 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

void	ft_add_char(t_tetri *begin)
{
	int		i;
	t_tetri *tmp;

	i = 0;
	tmp = NULL;//
	while (begin)
	{
		begin->start = -1;//
		begin->piece = 'A' + i;
		begin->prev = tmp;//
		tmp = begin;
		begin = begin->next;
		i++;
	}
}
