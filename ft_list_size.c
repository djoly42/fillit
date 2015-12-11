/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 15:59:24 by djoly             #+#    #+#             */
/*   Updated: 2015/12/10 18:23:11 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

int		ft_list_size(t_tetri *begin)
{
	t_tetri *list;
	int i;

	i = 0;
	list = begin;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}
