/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoraka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:29:56 by ssoraka           #+#    #+#             */
/*   Updated: 2019/04/21 19:32:57 by ssoraka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	char	*line;
	int		fd;

	fd = open("text.txt", O_RDWR | O_APPEND);
	if (fd < 0)
		return (0);
	get_next_line(fd, &line);
	close(fd);
	return (0);
}
