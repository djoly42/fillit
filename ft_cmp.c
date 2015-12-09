/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:13:30 by djoly             #+#    #+#             */
/*   Updated: 2015/12/09 10:12:43 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"
#include "libft.h"

int		ft_cmp(char *tmp, char **lst_id)
{
	int	i;

	i = 0;
	while (i < 19)
	{
/*		ft_putnbr(i);
		ft_putchar('\n');
		ft_putstr(tmp);
		ft_putchar('\n');
		ft_putstr(lst_id[i]);
		ft_putchar('\n');
		ft_putnbr(strcmp(tmp, lst_id[i]));
		ft_putchar('\n');*/
		if (strcmp(tmp, lst_id[i]) == 0)
		{
			//	ft_putstr("trouver et sortie '\n");
			return (1);
		}
		i++;
	}
	return (0);
}
