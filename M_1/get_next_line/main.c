/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-15 15:05:21 by mborovka          #+#    #+#             */
/*   Updated: 2024-07-15 15:05:21 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*the_line;

	fd = open ("test", O_RDWR | O_CREAT);
	the_line = get_next_line (fd);
	printf("This is the line:|%s|\n", the_line);
	free (the_line);
	the_line = get_next_line (fd);
	printf("This is the line:|%s|\n", the_line);
	free (the_line);
	close (fd);
	fd = open ("test", O_RDWR | O_CREAT);
	the_line = get_next_line (fd);
	printf("This is the line:|%s|\n", the_line);
	free (the_line);
	the_line = get_next_line (fd);
	printf("This is the line:|%s|\n", the_line);
	free (the_line);
	return (0);
}
