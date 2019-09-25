/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 13:14:17 by rdube             #+#    #+#             */
/*   Updated: 2018/06/08 12:29:34 by rdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*dup;
	int			i;
	int			length;

	length = 0;
	while (src[length])
		length++;
	if (!(dup = (char *)malloc(sizeof(*dup) * (length + 1))))
		return (NULL);
	i = 0;
	while (i < length)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
