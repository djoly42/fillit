/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 10:26:53 by djoly             #+#    #+#             */
/*   Updated: 2015/12/11 17:48:54 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fill_header.h"


void 	ft_test_list(t_tetri *begin)
{
	int i;
	i = 0;
//	ft_affiche("test_list", 0);//
//	ft_putchar('\n');
	while (begin)
	{
//	  ft_putnbr(begin->idstr);
//	  ft_putchar('\n');
//	  ft_putstr("position=");
/*	  while(i < 4)
	    {
	      ft_putnbr(begin->position[i++]);
	      ft_putchar(' ');
		  }*/
//	  ft_test_indice(begin);
	  i = 0;
	  ft_putchar('\n');		
	  while(i < 4)
	  {
		  ft_putstr("(i,j)=("); 
		  ft_putnbr(begin->sqr[i][0]);
		  ft_putstr(","); 
		  ft_putnbr(begin->sqr[i][1]);
		  ft_putstr(") "); 
		  i++;
	  } 
	  i = 0;
	  ft_putchar('\n');
	  ft_putstr("piece = "); 
	  ft_putchar(begin->piece);
	  ft_putchar('\n');
	  ft_putstr("start=");
	  ft_putnbr(begin->start);
	  ft_putchar('\n');

	  if(begin->prev)
	  {
		  ft_putstr("piece prev = ");
		  ft_putchar(begin->prev->piece);
		  ft_putchar('\n');
	  }
	  else
		  ft_putstr("prev = NULL\n");
	  begin = begin->next;
	}
	ft_putchar('\n');
	ft_affiche("test_list", 1);//
}
