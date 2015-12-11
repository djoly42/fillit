#include "fill_header.h"

int	*sort_tab(int *tab, int tabsize) //donne l index de chaque # du tetri
{
  int	i;
  int	j;
  int	tmp;
					//dans sa position la plus haut gauche
  i = 0;
  while (i <= tabsize)
    {
      j = i + 1;
      while (j < tabsize)
	{
	  if (tab[j] < tab[i])
	    {
	      tmp = tab[i];
	      tab[i] = tab[j];
	      tab[j] = tmp;
	    }
	  j++;
	}
      i++;
    }
  return (tab);
}

int	seek_nfnd(char *s1, unsigned char a, unsigned char b)
{
  if (!(s1))
    return (0);
  if (!(ft_isprint(a) && ft_isprint(b)))
    return (0);
  if (*s1 == '\0')
    return (0);
  if (*s1 == a || *s1 == b)
    return (1);
  return (seek_nfnd(s1 + 1, a, b));
}

int	*ft_draw_id(int nb)
{
	int		j;
  int	i;
  int	*tab;

  tab = (int *)malloc(sizeof(int) * 4);
  i = 0;
  j = 0;
  if (nb == 30405)
	  i = 2;
  else if (seek_nfnd(ft_itoa(nb), '4', '9'))
    i = 1;
//  ft_putstr("i =  ");//
//  ft_putnbr(i);//
//  ft_putchar('\n');//
  tab[0] = nb % 100 + i;
  nb =  nb / 100;
  tab[1] = nb % 100 + i;
  tab[2] = nb / 100 + i;
  nb /= 100;
  tab[3] = nb / 100 + i;
//  sort_tab(tab, 4);  
/*  while(j < 4)
  {
	  printf("%d\n",tab[j++]);
  }
*/
  return (sort_tab(tab, 4));
}
