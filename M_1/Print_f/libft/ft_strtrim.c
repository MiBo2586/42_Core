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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*p;

	p = 0;
	i = 0;
	j = ft_strlen(s1);
	if (s1 != 0 && set != 0)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (ft_strchr(set, s1[j - 1]) && j > i && s1[j - 1])
			j--;
		p = (char *) malloc (sizeof(char) * (j - i + 1));
		if (p)
			ft_strlcpy (p, &s1[i], j - i +1);
	}
	return (p);
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