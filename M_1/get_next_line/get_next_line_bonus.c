/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-15 14:32:34 by mborovka          #+#    #+#             */
/*   Updated: 2024-07-15 14:32:34 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_initial(char *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i] != c)
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	i++;
	return (i);
}

char	*ft_strcat_line(char *s1, char c)
{
	int		count;
	char	*the_line;
	int		i;

	count = 0;
	i = 0;
	while (s1[count] != c && s1[count] != '\0')
		count++;
	the_line = (char *)malloc(sizeof(char) * (count + 2));
	if (!the_line)
		return (NULL);
	while (i != count)
	{
		the_line[i] = s1[i];
		i++;
	}
	the_line[i] = s1[i];
	the_line[i + 1] = '\0';
	return (the_line);
}

char	*ft_strcat_nextline(char *s1, char c)
{
	int		count;
	char	*next_line;
	int		i;
	int		j;

	count = 0;
	j = 0;
	i = ft_initial(s1, c);
	while (s1[i + count])
		count++;
	if (count == 0 || i == 0)
	{
		free (s1);
		return (NULL);
	}
	next_line = (char *)malloc(sizeof(char) * (count + 1));
	if (!next_line)
		return (NULL);
	while (s1[i])
		next_line[j++] = s1[i++];
	next_line[j] = '\0';
	free (s1);
	return (next_line);
}

char	*read_list(char *list, int fd)
{
	char	*buffer;
	int		bytes_read;
	char	*old_list;

	bytes_read = 1;
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (list);
	while (bytes_read > 0)
	{
		ft_bzero(buffer, BUFFER_SIZE + 1);
		bytes_read = read (fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0)
			break ;
		old_list = list;
		list = ft_strjoin (list, buffer);
		free (old_list);
		if ((ft_strchr(buffer, '\n')))
			break ;
	}
	free (buffer);
	return (list);
}

char	*get_next_line(int fd)
{
	static char		*list[1024];
	char			*the_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	list[fd] = read_list(list[fd], fd);
	if (!list[fd])
		return (NULL);
	the_line = ft_strcat_line(list[fd], '\n');
	list[fd] = ft_strcat_nextline(list[fd], '\n');
	return (the_line);
}
