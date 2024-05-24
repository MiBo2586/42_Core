/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-24 14:27:37 by mborovka          #+#    #+#             */
/*   Updated: 2024-05-24 14:27:37 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*n;

	n = (char *)s;
	while (*n != '\0')
	{
		if (*n == c)
			return (n);
		n++;
	}
	if (*n == '\0')
		return (0);
	return (0);
}
/*
int main (void)
{
    char a;
    char *b;

    a = 'b';
    b = "neirheithzacbqdasdfasdfbfafda";
    printf("%s\n", ft_strchr(b, a));
    return(0);
}
*/
