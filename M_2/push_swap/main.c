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
#include <stdbool.h>
#include "push_swap.h"

int	main(int	argc, char **argv)
{
	node_t	*stack_a;
	/*
	node_t	*stack_b;
	int i;
	int n;
	
	
	n = 0;
	i = 0;
	stack_b = NULL;
	*/
	stack_a = NULL;
	if (argc == 1 || (argc == 2 && argv[1][0] == 0))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	stack_init(&stack_a, argv + 1);
	if (!stack_sorted(stack_a))
		write(1, "Not sorted\n", 11);
	/*while ((argv + i) != NULL)
	{
		printf("This is it: %s\n", *(argv + i));
		i++;
	}
	*/
	printf ("Stack Bolean:%d\n", stack_sorted(stack_a));
	while (stack_a -> value)
	{
		printf("Node: %d\n", stack_a -> value);
		if ((stack_a -> next))
			stack_a = stack_a -> next;
		else
			return (0);
	}
	return (0);	
}