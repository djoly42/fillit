/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:00:09 by djoly             #+#    #+#             */
/*   Updated: 2015/12/09 16:01:58 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_HEADER_H
# define FILL_HEADER_H
# define BUF 21
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "libft.h"
# include <stdio.h> //


typedef	struct s_tetri	t_tetri;
struct					s_tetri
{
	char	*idstr;
	char	alpha;
	int		len;
	int		height;
	t_tetri *next;
};

void	ft_affiche(char *title, int i); //
void	ft_test_list(t_tetri *begin); //

int						ft_main(int fd, t_tetri **lst_tetri);
int						ft_test(char *bufmap);
char					*ft_fnd_tetri(char *bufmap);
t_tetri					*ft_create_elem(char *ret_ft_fnd);
int						ft_cmp(char *tmp, char **lst_id);
char					**ft_init();
#endif
