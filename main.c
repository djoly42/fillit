/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 14:57:21 by djoly             #+#    #+#             */
/*   Updated: 2015/12/11 15:57:10 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"



int		main(int argc, char **argv)
{
	int		fd;
//	t_tetri	begin_lst;
	t_tetri	*lst_tetri;
	t_tetri	**temp;

	//	ft_affiche("MAIN", 0);//

	lst_tetri = NULL;
	temp = &lst_tetri;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (!ft_main(fd, temp))
		{
			ft_putstr("error");
			return (1);
		}
	}
	ft_resolv(lst_tetri);
//	ft_test_list(lst_tetri);//

	return (0);
}
