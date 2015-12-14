#include "fill_header.h"

void	ft_free(char **map, int size)
{
  int	i;

      if(map == NULL)
	printf("DANS FT_FREE MAP == NULL\n"); //

  i = 0;
  while (i < (size + 1)) // map + ligne de \0
    {
      if(map[i] == NULL)
	printf("DANS FT_FREE MAP I == NULL\n"); //
      free (map[i]);  //suprimme chaque ligne une par une
      i++;
    }
  free(map);  // suprimme les pointeur qui stocke toutes les lignes
  map = NULL;
}
