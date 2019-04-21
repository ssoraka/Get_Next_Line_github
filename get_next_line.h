/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoraka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 10:30:52 by ssoraka           #+#    #+#             */
/*   Updated: 2019/04/20 10:39:03 by ssoraka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
# define BUFF_SIZE 1

int		get_next_line(const int fd, char **line);

#endif
