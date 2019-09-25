/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 11:41:11 by rdube             #+#    #+#             */
/*   Updated: 2018/08/03 09:51:29 by rdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strchrpos(char *s, int c)
{
	int		i;
	char	c2;
	char	*s2;

	c2 = (char)c;
	i = 0;
	while (s[i] != '\0' && c2 != s[i])
		i++;
	if (s[i] != c2)
		return (NULL);
	else
	{
		s2 = ft_strnew(ft_strlen(*s));
		ft_strcpy(s2, *s + i + 1);
		s = ft_strsub(s, 0, i);
		return (s2);
	}
}
