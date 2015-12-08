/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 14:57:21 by djoly             #+#    #+#             */
/*   Updated: 2015/12/08 19:27:04 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"
#include "libft.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_tetri	begin_lst;
	t_tetri	*lst_tetri;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (!ft_main(fd, lst_tetri))
		{
			ft_putstr("error");
			return (1);
		}
	}
	return (0);
}
