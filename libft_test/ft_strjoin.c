/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-29 12:14:21 by mborovka          #+#    #+#             */
/*   Updated: 2024-05-29 12:14:21 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
/*
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t sz1;
	size_t sz2;
	char *ptr;

	sz1 = ft_strlen(s1);
	sz2 = ft_strlen(s2);
	ptr = (char*)malloc(sizeof(char)*(sz1 + sz2 + 1));
	if (ptr == NULL)
		return(NULL);
	while (*s1 != '\0')
		*ptr++ = *s1++;
	while (*s2 != '\0')
		*ptr++ = *s2++;
	*(ptr + sz1 + sz2) = '\0';
	return (ptr - sz1 - sz2);
}
/*
int main(void)
{
	printf("%s\n", ft_strjoin("Hello", "World"));
	printf("%s\n", ft_strjoin("", ""));
	printf("%s\n", ft_strjoin("", "World"));
	return(0);
}
*/