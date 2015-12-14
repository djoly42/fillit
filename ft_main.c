/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 14:40:51 by djoly             #+#    #+#             */
/*   Updated: 2015/12/11 17:49:40 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

int		ft_main(int fd, t_tetri **lst_tetri)
{
	char	buf[BUF + 1];
	int		ret;
	int	*lst_id;
	t_tetri **list;
	int    idtetri;


	list = lst_tetri;
//	ft_affiche("FT_MAIN", 0);//
	lst_id = ft_init();
	ret = 0;
	while ((ret = read(fd, buf, BUF)) != 0) // != -1
	{
		buf[ret] = '\0';
		if (buf[ret - 1] != '\n')
			return (0);
		if (!(ft_test(buf)))
			return (0);
		idtetri = ft_fnd_tetri(buf);
		if (ft_cmp(idtetri, lst_id) == 0)
			return (0);
		ft_add_tetri(list, idtetri);
	}
	ft_add_char(*list);
	//	ft_test_list(*list);
//	ft_affiche("FT_MAIN OK", 1);//
	return (1);
}
