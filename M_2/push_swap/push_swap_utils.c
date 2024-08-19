/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
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

bool    stack_sorted(node_t *node)
{

    if (!node)
        return (true); 
    while (node->next)
    {
        if ((node -> value) > (node -> next -> value))
            return (false);
        node = node -> next;
    }
    return(true);
}