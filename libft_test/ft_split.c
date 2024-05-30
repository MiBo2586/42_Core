/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-30 08:41:02 by mborovka          #+#    #+#             */
/*   Updated: 2024-05-30 08:41:02 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	char *ptr;
	char *ptr_str;
	unsigned int dest;

	dest = ft_strlen(s);
	if (!s)
		return (NULL);
	if (dest < start)
		len = 0;
	else if (len > dest - start)
		len = dest - start;
	ptr = (char*)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	s = s + start;
	ptr_str = ptr;
	*(ptr+len) = '\0';
	while (*s != '\0' && len--)
		*ptr++ = *s++;
	return (ptr_str);
}

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

int ft_wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**thewhole;
	char	*ptr;
	size_t	n;
	size_t	i;
	/*size_t	j;*/

	i = 0;
	n = 0;
	/*j = 0;*/
	if (!s)
		return(NULL);
	thewhole = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 2));
	if (!thewhole)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			ptr = ft_strchr(s, c);
			if(!*ptr)
				n = ft_strlen(s);
			else
				n = ptr - s;
			thewhole[i] = ft_substr(s, 0, n);
			/*if (!thewhole[i])
			{
				while (i > j)
				{	
					free(thewhole[j]);
					j++;
				}
				free(thewhole);
				return (NULL);
			}*/
			i++;
			s += n;
		}
	}
	thewhole[i] = NULL;
	return(thewhole);
}

int main(void)
{
	printf("%s\n", *ft_split("Hello World All", 'W'));
	return (0);
}
