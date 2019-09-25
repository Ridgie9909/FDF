/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 19:44:06 by rdube             #+#    #+#             */
/*   Updated: 2018/08/03 09:44:18 by rdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32
# include "libft.h"
# include <fcntl.h>

int		get_next_line(int const fd, char **line);

typedef struct		s_data
{
	char			*last;
	int				fd;
	struct s_data	*next;
	int				end;
}					t_data;

int					get_next_line(int const fd, char **line);
#endif
