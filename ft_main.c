/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 14:40:51 by djoly             #+#    #+#             */
/*   Updated: 2015/12/20 14:59:11 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

int		ft_main(int fd, t_tetri **lst_tetri, int ntetri)
{
	char	buf[BUF + 1];
	int		ret;
	int		*lst_id;
	int		idtetri;
	int		tmp;

	tmp = 1;
	lst_id = ft_init();
	ret = 0;
	while ((ret = read(fd, buf, BUF)) != 0)
	{
		tmp = ret;
		buf[ret] = '\0';
		if ((buf[ret - 1] != '\n') || (!(ft_test(buf))))
			return (0);
		idtetri = ft_fnd_tetri(buf);
		if (ft_cmp(idtetri, lst_id) == 0)
			return (0);
		ft_add_tetri(lst_tetri, idtetri);
		ntetri++;
	}
	if ((buf[ret] == 0) || (ret == 0 && tmp == 21) || ntetri > 26 || ret == -1)
		return (0);
	ft_add_char(*lst_tetri);
	return (1);
}
