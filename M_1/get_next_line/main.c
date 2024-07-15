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

int main(void)
{
	int fd;

	fd = open ("test.txt", O_RDWR | O_CREAT);
	get_next_line (fd);
	return (0);
}