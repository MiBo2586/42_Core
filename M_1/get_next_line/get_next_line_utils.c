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
	int		buffer;
	char	*new_line;
	int		i;
	int		l;

	i = 0;
	l = 0;
	buffer = ft_strlen(s1) + ft_strlen(s2);
	new_line = (char *)malloc(sizeof(char) * (buffer + 1));
	if (!new_line || !s1 || !s2)
	{	
		free (new_line);
		return (NULL);
	}
	while (s1[l])
	{
		new_line[l] = s1[l];
		l++;
	}
	while (s2[i])
	{
		new_line [l + i] = s2[i];
		i++;
	}
	new_line [l + i] = '\0';
	return (new_line);
}

char	*read_list(char *list, int fd)
{
	char	*buffer;
	int		bytes_read;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		buffer = (char *)malloc(BUFFER_SIZE + 1);
		if (!buffer)
			return (NULL);
		ft_bzero(buffer, BUFFER_SIZE + 1);
		bytes_read = read (fd, buffer, BUFFER_SIZE);
		if (!buffer)
		{
			free (buffer);
			return (NULL);
		}
		if (bytes_read == 0)
		{
			free (list);
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		list = ft_strjoin (list, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
		free (buffer);
	}
	free (buffer);
	return (list);
}
