/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-05 12:26:00 by mborovka          #+#    #+#             */
/*   Updated: 2024-08-05 12:26:00 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <unistd.h>


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef	struct node
	{
		int	value;
		int	current_position;
		struct node	*previous;
		struct	node	*next;
	} node_t;

/*Initial function */
int	ft_strlen(const char *s);
char *ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
int	ft_wordcount(char const *s, char c);
char	**ft_split(char const *s, char c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void    stack_init(node_t **a, char **argv);
long	ft_atol(const char *nptr);
void    append_node (node_t **stack, int nbr);
node_t *find_last_node(node_t *stack);
bool    stack_sorted(node_t *node);


#endif

