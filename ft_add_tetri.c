/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 15:56:05 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/11 15:52:11 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

void	ft_add_tetri(t_tetri **new, int id)
{
	t_tetri *element;
	t_tetri	*forward;
	
//	ft_affiche("add_tetri", 0);//
	element = (t_tetri*)malloc(sizeof(t_tetri));
	element->idstr = id;
	element->position = ft_draw_id(id);
	element->sqr = ft_pos_sqr(element->position);
	element->next = NULL;
	if (*new == NULL)
		*new = element;
	else
	{
		forward = *new;
		while (forward->next != NULL)
			forward = forward->next;
		forward->next = element;
	}
}
