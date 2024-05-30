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
	char *ptr_str;

	sz1 = ft_strlen(s1);
	sz2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	ptr = (char*)malloc(sizeof(char)*(sz1 + sz2 + 1));
	if (!ptr)
		return(NULL);
	ptr_str = ptr;
	while (*s1 != '\0')
		*ptr++ = *s1++;
	while (*s2 != '\0')
		*ptr++ = *s2++;
	*ptr = '\0';
	return (ptr_str);
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