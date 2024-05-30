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
#include <string.h>
#include "libft.h"

int ft_strlen(const char *s)
{
    int	i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

static int	ft_trim(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_newstr(const char	*s1, size_t start, size_t len)
{
	char *str;
	size_t i;

	i = 0;
	if(len <= 0 || start >= (size_t)	ft_strlen(s1))
		return (ft_strdup(""));
	str = (char*)malloc(sizeof(char)*(len+1));
	if (!str)
		return(NULL);
	while (i < len)
	{
		str[i] = s1[start+i];
		i++;
	}
	return (str);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int	i;
    int	j;

    i = 0;
	j = ft_strlen(s1) - 1;
	if (!j || ft_strlen(set) > j)
		return(ft_strdup(""));
	while (ft_trim(s1[i], set))
		i++;
	while (ft_trim(s1[j], set))
		j--;
	return (ft_newstr(s1, i, (j - (i-1))));
}
/*
int main(void)
{
	printf("%s\n", ft_strtrim("Hello World All", "World"));
	printf("%s\n", ft_strtrim("Hello World All", "He"));
	printf("%s\n", ft_strtrim("   xxxtripouille", " x"));
	return(0);
}
*/