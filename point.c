/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 09:10:06 by rdube             #+#    #+#             */
/*   Updated: 2018/08/03 05:30:09 by rdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"

void	new_point(int x, int y, double z, t_env *e)
{
	t_m3	*p;
	t_m3	*next;

	p = new_m3(x, y, z, 0);
	next = e->p;
	if (next == NULL)
	{
		e->p = p;
		return ;
	}
	while (next->next != NULL)
		next = next->next;
	next->next = p;
}

void	end_point(t_env *e)
{
	t_m3	*p;

	p = e->p;
	while (p->next != NULL)
		p = p->next;
	p->end = 1;
}

t_m3	*new_m3(int x, int y, int z, char end)
{
	t_m3	*p;

	p = (t_m3 *)malloc(sizeof(t_m3));
	p->x = x;
	p->y = y;
	p->z = z;
	p->end = end;
	p->next = NULL;
	return (p);
}
