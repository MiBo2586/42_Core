/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-06 10:03:29 by mborovka          #+#    #+#             */
/*   Updated: 2024-08-06 10:03:29 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "push_swap.h"

int	main(int	argc, char **argv)
{
	node_t	*stack_a;
	node_t	*stack_b;
	int i;

	i = 0;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && argv[1][0] == 0))
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		printf("This is it: %s\n", *argv);
		//stack_init(&a, argv);
		//while (argv[1])
		//	stack_a->value = argv[1];
		//	stack_a->current_position = i;
		//	if (i > 1);
		//		stack_a->previous =
		//	i++;

	}
	else
	{
		printf("This is it: %s\n", *(argv + 1) );
		//stack_init(&a, argv + 1);
	}
	return (0);	
}