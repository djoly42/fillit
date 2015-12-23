/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 14:57:21 by djoly             #+#    #+#             */
/*   Updated: 2015/12/20 15:00:01 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_tetri	*lst_tetri;
	t_tetri	**temp;
	int		count_tetri;

	count_tetri = 0;
	if (argc != 2)
	{
		ft_putstr("error");
		return (1);
	}
	lst_tetri = NULL;
	temp = &lst_tetri;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (!ft_main(fd, temp, count_tetri))
		{
			ft_putstr("error");
			return (1);
		}
		close(fd);
	}
	ft_resolv(lst_tetri);
	return (0);
}
