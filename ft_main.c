/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 14:40:51 by djoly             #+#    #+#             */
/*   Updated: 2015/12/08 19:31:50 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

int		ft_main(int fd, t_tetri *lst_tetri)
{
	char	buf[BUF + 1];
	int		ret;
	char	**lst_id;
	char	*tmp;
	t_tetri *list;

	list = lst_tetri;
	lst_id = ft_init();
	ret = 0;
	while ((ret = read(fd, buf, BUF)) != 0)
	{
		buf[ret] = '\0';
		if (buf[ret - 1] != '\n')
			return (0);
		if (!(ft_test(buf)))
			return (0);
		tmp = ft_fnd_tetri(buf);
		if (ft_cmp(tmp, lst_id))
			return (0);
		list = ft_create_elem(tmp);
		list = list->next;
	}
	return (1);
}
