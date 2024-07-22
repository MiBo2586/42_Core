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

char	*ft_strcat_line(char *s1, char c)
{
	int		count;
	char	*the_line;
	int		i;

	count = 0;
	i = 0;
	while (s1[count] != c && s1[count] != '\0')
		count++;
	the_line = (char *)malloc(sizeof(char) * (count + 1));
	if (!the_line)
		return (NULL);
	while (i != count)
	{
		the_line[i] = s1[i];
		i++;
	}
	the_line[i] = '\n';
	return (the_line);
}

static char	*ft_strcat_nextline(char *s1, char c)
{
	int		count;
	char	*next_line;
	int		i;
	int		j;

	count = 0;
	i = 0;
	j = 0;
	while (s1[i] != c)
		i++;
	while (s1[i + count])
		count++;
	next_line = (char *)malloc(sizeof(char) * (count + 1));
	if (!next_line)
		return (NULL);
	while (s1[i])
	{
		next_line[j] = s1[i];
		j++;
		i++;
	}
	next_line[j] = '\n';
	return (next_line);
}

char	*get_next_line(int fd)
{
	static char		*list;
	char			*the_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0 || !fd)
		return (NULL);
	if (!list)
		list = (char *)malloc(1);
	list[0] = '\0';
	list = read_list(list, fd);
	if (!list)
		return (NULL);
	the_line = ft_strcat_line(list, '\n');
	list = ft_strcat_nextline(list, '\n');
	return (the_line);
}
