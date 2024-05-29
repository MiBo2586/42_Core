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
	while (*n != '\0' && *n != (char)c)
		n++;
	if (*n == (char)c)
		return (n);
	return (NULL);
}
/*
int main (void)
{
    int a;
    char *b;

    a = 'b'+ 256;
    b = "neirheithzacbqdasdfasdfbfafda";
    printf("%s\n", ft_strchr(b, a));
    return(0);
}
*/
