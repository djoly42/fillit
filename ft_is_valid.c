/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 15:30:34 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/18 14:30:40 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

int		ft_is_valid(char **grid, int *param, t_tetri *list, int *b)
{
	if (*b == 100000)
		return (0);
	if (!(list))
		return (1);
	if (param[0] == ((param[1] * param[1]) - 1) && (list->prev == NULL))
		return (0);
	if (param[0] == ((param[1] * param[1]) - 1) && (list))
	{
		ft_delete(grid, list->prev->piece, param[1]);
		param[0] = list->prev->start + 1;
		*b = *b + 1;
		return (ft_is_valid(grid, param, list->prev, b));
	}
	if (!(ft_check_place(grid, param[0], param[1], list)))
	{
		param[0] = param[0] + 1;
		*b = *b + 1;
		return (ft_is_valid(grid, param, list, b));
	}
	list->start = param[0];
	ft_print(grid, list, param[0], param[1]);
	param[0] = 0;
	*b = *b + 1;
	return (ft_is_valid(grid, param, list->next, b));
}
