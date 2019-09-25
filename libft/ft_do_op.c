/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:55:40 by rdube             #+#    #+#             */
/*   Updated: 2018/06/08 12:09:28 by rdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_do_op(char *nb1, char *nb2, char *op)
{
	int	n1;
	int	n2;
	int	r;

	n1 = ft_atoi(nb1);
	n2 = ft_atoi(nb2);
	r = 0;
	if (op[0] == '+')
		r = n1 + n2;
	else if (op[0] == '-')
		r = n1 - n2;
	else if (op[0] == '*')
		r = n1 * n2;
	else if (op[0] == '/')
		r = n1 / n2;
	else if (op[0] == '%')
		r = n1 % n2;
	return (r);
}
