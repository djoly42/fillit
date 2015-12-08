/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:52:36 by djoly             #+#    #+#             */
/*   Updated: 2015/12/08 16:50:55 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

t_tetri		*ft_create_elem(char *ret_ft_fnd)
{
	t_tetri		*ret;

	ret = (t_tetri*)malloc(sizeof(t_tetri));
	ret->next = NULL;
	ret->idstr = ret_ft_fnd;
	return (ret);
}
