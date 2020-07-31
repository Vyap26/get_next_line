/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmlkshk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 12:27:16 by tmlkshk           #+#    #+#             */
/*   Updated: 2019/11/05 21:37:41 by tmlkshk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "libft/libft.h"
# define BUFF_SIZE 5

typedef struct		s_gnl
{
	int				fd;
	char			*rest;
	struct s_gnl	*next;
}					t_gnl;

int					get_next_line(int fd, char **line);

#endif
