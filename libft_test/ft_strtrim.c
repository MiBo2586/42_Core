/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-29 16:04:29 by mborovka          #+#    #+#             */
/*   Updated: 2024-05-29 16:04:29 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int    ft_strlen(const char *s)
{
    int    i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int sz1;
    int sz2;
    int    i;
    int l;
    char    *ptr;

    i = 0;
    l = 0;
    sz1 = ft_strlen(s1);
    sz2 = ft_strlen(set);
    if (!*s1)
      return(NULL);
    ptr = (char*) malloc(sizeof(char)* (sz1 - sz2 + 1));
    if (ptr == NULL)
      return(NULL);
    while (s1[i+l])
    {
        while (s1[i+l] == set[l] && set[l])
            l++;
        if (s1[i+l] != set[l])
        {
            *ptr++ = s1[i+l];
            i = i + l + 1;
            l = 0;
        }
    }
    *ptr = '\0';
    return (ptr);
}



int main(void)
{
	printf("%s\n", ft_strtrim("Hello World All", "World"));
	printf("%s\n", ft_strtrim("Hello World All", "He"));
	printf("%s\n", ft_strtrim("", "World"));
	return(0);
}

