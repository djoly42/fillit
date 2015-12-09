/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affiche.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 10:31:38 by djoly             #+#    #+#             */
/*   Updated: 2015/12/09 11:29:53 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"


void	 ft_affiche(char *title, int i)
{
	if(i == 0)
		ft_putstr("\n\n");
	ft_putstr(".....");
	if(i == 0)
		ft_putstr("DEBUT ");
	else
	ft_putstr("FIN ");
	ft_putstr(title);
	ft_putstr(".....\n");
	if(i == 1)
		ft_putchar('\n');
}
