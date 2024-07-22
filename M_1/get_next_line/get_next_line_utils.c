/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-15 14:34:09 by mborovka          #+#    #+#             */
/*   Updated: 2024-07-15 14:34:09 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strcpy(char *new_line, char *s1, char *s2)
{
	int		i;
	int		l;

	i = 0;
	l = 0;
	if (s1)
	{
		while (s1[l])
		{
			new_line[l] = s1[l];
			l++;
		}
	}
	if (s2)
	{
		while (s2[i])
		{
			new_line [l + i] = s2[i];
			i++;
		}
	}
	new_line [l + i] = '\0';
	return (new_line);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

int	ft_strlen(char *sentence)
{
	int	i;

	i = 0;
	if (!sentence)
		return (0);
	while (sentence[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	char	*n;

	n = (char *)s;
	while (*n != '\0' && *n != (char)c)
		n++;
	if (*n == (char)c)
		return (n);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_line;
	int		buffer;

	buffer = ft_strlen(s1) + ft_strlen(s2);
	if (buffer == 0)
		return (NULL);
	new_line = (char *)malloc(sizeof(char) * (buffer + 1));
	if (!new_line)
		return (NULL);
	new_line = ft_strcpy(new_line, s1, s2);
	return (new_line);
}

