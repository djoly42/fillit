/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:31:12 by djoly             #+#    #+#             */
/*   Updated: 2015/12/08 19:33:55 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

int		ft_test(char *bufmap)
{
	int	i;
	int	countpoint;
	int	countslash;

	if (bufmap[4] != '\n' || bufmap[9] != '\n' || bufmap[14] != '\n' ||
		bufmap[19] != '\n')
		return (0);
	i = 0;
	countpoint = 0;
	countslash = 0;
	while (i < 20)
	{
		if (bufmap[i] == '.')
			countpoint++;
		if (bufmap[i] == '#')
			countslash++;
		i++;
	}
	if (countpoint != 12)
		return (0);
	if (countslash != 4)
		return (0);
	return (1);
}

/*
  int		ft_fnd_one(char *bufmap)
  {
  int		i;

  i = 0;
  while (i < 25)
  {
  if(bufmap[i] = '#')
  return (ft_fnd_tetriminos(i, bufmap))
  i++
  }
  return (0);
  }*/
