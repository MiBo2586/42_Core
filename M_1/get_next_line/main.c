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

	fd = open ("test.txt", O_RDWR | O_CREAT);
	write (1, "a", 1);
	the_line = get_next_line (fd);
	printf("This is the line:\n%s\n", the_line);
	return (0);
}
