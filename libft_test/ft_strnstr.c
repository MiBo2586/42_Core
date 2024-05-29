/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:23:46 by mborovka          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:48 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (little[l] == '\0')
		return ((char *)big);
	while (big[i] && len >= i)
	{
		while (big[i + l] == little[l] && len >= i)
		{
			l++;
			if ((!big[i + l] || !little[l]) && len >= (i + l))
				return ((char *) big + i);
		}
		l = 0;
		i++;
	}
	return (0);
}
/*
int main (void)
{
    printf("%s\n",ft_strnstr("aaabcabcd", "abcd",15));
    printf("%s\n",ft_strnstr("Hello World", "Hel",3));
    printf("%s\n",ft_strnstr("Hello World", "el",3));
    return(0);
}
*/