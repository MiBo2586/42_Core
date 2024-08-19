/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
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

node_t *find_last_node(node_t *stack)
{
    if (stack == NULL)
        return (NULL);
    while (stack -> next != NULL)
        stack = stack -> next;
    return (stack);
}

void    append_node (node_t **stack, int nbr)
{
    node_t  *node;
    node_t  *last_node;
    
    if (stack == NULL)
        return ;
    node = malloc(sizeof(node_t));
    if (!node)
        return ;
    node -> value = nbr;
    node -> next = NULL;
    if (*(stack) == NULL)
    {
        node -> previous = NULL;
        *(stack) = node;
    }
    else
    {
        last_node = find_last_node(*stack);
        last_node -> next = node;
        node -> previous = last_node;
    }  
}

long	ft_atol(const char *nptr)
{
	int	n;
	int	m;

	n = 1;
	m = 0;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n' || *nptr == '\r'
		|| *nptr == '\t' || *nptr == '\v')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			n = n * -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		m = (m * 10) + (*nptr - 48);
		nptr++;
	}
	m = m * n;
	return (m);
}    

void    stack_init(node_t **a, char **argv)
{
    int i;
    long nbr;

    i = 0;
    while (argv[i])
    {  
        //write(1, "Iam in stack\n",13);
        nbr = ft_atol(argv[i]);
        //printf("This is nbr: %ld\n", nbr);
        append_node(a, (int) nbr);
        i++;
    }
}

/*
In case of error, it must display "Error" followed by a ’\n’ on the standard error.
Errors include for example: some arguments aren’t integers, some arguments are
bigger than an integer and/or there are duplicates.
*/