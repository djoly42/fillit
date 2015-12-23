/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 17:03:47 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/20 18:17:13 by cdebord          ###   ########.fr       */
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

typedef	struct s_tetri	t_tetri;
struct					s_tetri
{
	int		idstr;
	int		*position;
	int		**sqr;
	char	piece;
	t_tetri *prev;
	t_tetri *next;
	int		start;
};

void	ft_free(char **map, int size);
int		ft_check_place(char **grid, int position, int size, t_tetri *list);
void	ft_put_grid(char **grid);
int		ft_list_size(t_tetri *begin);
int		*ft_indice(int position);
int		ft_main(int fd, t_tetri **lst_tetri, int count_tetri);
int		ft_test(char *bufmap);
int		ft_fnd_tetri(char *bufmap);
int		ft_cmp(int idtetri, int *lst_id);
int		*ft_init();
int		*ft_draw_id(int	nb);
void	ft_add_tetri(t_tetri **new, int id);
char	**ft_create_map(int size);
void	ft_resolv(t_tetri *list_tetri);
int		ft_fill_sqrt(int size);
char	**ft_init_map(char **grid, int size);
void	ft_add_char(t_tetri *begin);
int		**ft_pos_sqr(int *position);
int		ft_is_valid(char **grid, int *param, t_tetri *list, int *boucle);
void	ft_print(char **grid, t_tetri *list, int pos, int size); 
void	ft_delete(char **grid, char c, int size);
#endif
