/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 11:45:27 by rdube             #+#    #+#             */
/*   Updated: 2018/08/07 18:46:51 by rdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"

void	info_cam(t_env *e)
{
	mlx_string_put(e->mlx, e->win, 10, 10, 0xFFFFFFFF, "---- CAM ----");
	mlx_string_put(e->mlx, e->win, 10, 22, 0xFFFFFFFF, "FOV :");
	mlx_string_put(e->mlx, e->win, 70, 22, 0xFFFFFFFF, ft_itoa(e->cam->fov));
	mlx_string_put(e->mlx, e->win, 10, 34, 0xFFFFFFFF, "  X :");
	mlx_string_put(e->mlx, e->win, 70, 34, 0xFFFFFFFF, ft_itoa(e->cam->x));
	mlx_string_put(e->mlx, e->win, 10, 46, 0xFFFFFFFF, "  Z :");
	mlx_string_put(e->mlx, e->win, 70, 46, 0xFFFFFFFF, ft_itoa(e->cam->y));
	mlx_string_put(e->mlx, e->win, 10, 58, 0xFFFFFFFF, "  Y :");
	mlx_string_put(e->mlx, e->win, 70, 58, 0xFFFFFFFF, ft_itoa(e->cam->z));
	mlx_string_put(e->mlx, e->win, 10, 70, 0xFFFFFFFF, " rX :");
	mlx_string_put(e->mlx, e->win, 70, 70, 0xFFFFFFFF, ft_itoa(e->cam->rx *
				57.2958));
	mlx_string_put(e->mlx, e->win, 10, 82, 0xFFFFFFFF, " rY :");
	mlx_string_put(e->mlx, e->win, 70, 82, 0xFFFFFFFF, ft_itoa(e->cam->ry *
				57.2958));
	mlx_string_put(e->mlx, e->win, 10, 94, 0xFFFFFFFF, " rZ :");
	mlx_string_put(e->mlx, e->win, 70, 94, 0xFFFFFFFF, ft_itoa(e->cam->rz *
				57.2958));
}

void	info_max_min(t_env *e)
{
	mlx_string_put(e->mlx, e->win, 10, 118, 0xFFFFFFFF, "- MIN / MAX -");
	mlx_string_put(e->mlx, e->win, 10, 130, 0xFFFFFFFF, "MIN :");
	mlx_string_put(e->mlx, e->win, 70, 130, 0xFFFFFFFF, ft_itoa(e->min_z));
	mlx_string_put(e->mlx, e->win, 10, 142, 0xFFFFFFFF, "MAX :");
	mlx_string_put(e->mlx, e->win, 70, 142, 0xFFFFFFFF, ft_itoa(e->max_z));
	mlx_string_put(e->mlx, e->win, 10, 154, 0xFFFFFFFF, "X   :");
	mlx_string_put(e->mlx, e->win, 70, 154, 0xFFFFFFFF, ft_itoa(e->max_x));
	mlx_string_put(e->mlx, e->win, 10, 166, 0xFFFFFFFF, "Y   :");
	mlx_string_put(e->mlx, e->win, 70, 166, 0xFFFFFFFF, ft_itoa(e->max_y));
}

void	info_point(t_env *e)
{
	mlx_string_put(e->mlx, e->win, 10, 190, 0xFFFFFFFF, "--- POINT ---");
	mlx_string_put(e->mlx, e->win, 10, 202, 0xFFFFFFFF, "SPA :");
	mlx_string_put(e->mlx, e->win, 70, 202, 0xFFFFFFFF, ft_itoa(e->space));
}

void	info(t_env *e)
{
	info_cam(e);
	info_max_min(e);
	info_point(e);
}
