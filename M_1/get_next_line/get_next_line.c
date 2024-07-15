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

char *ft_strcat_line(char *s1, char c)
{
	int count;
	char *the_line;
	int i;

	count = 0;
	i = -1;
	while (s1[count] != c)
		count++;
	the_line = (char*)malloc(sizeof(char) * (count+1));
	if (!the_line)
		return(NULL);
	while (i != count)
	{
		the_line[i] = s1[i];
		i++;
	}
	the_line[i] = '\0';
	return (the_line);
}

static char *ft_strcat_nextline(char *s1, char c)
{
	int count;
	char *next_line;
	int i;
	int j;

	count = 0;
	i = 0;
	j = 0;
	while (s1[i] != c)
		i++;
	while (s1[i])
	{
		count++;
		i++;
	}
	next_line = (char*)malloc(sizeof(char) * (count+1));
	if (!next_line)
		return(NULL);
	while (s1[i-count])
	{
		next_line[j] = s1[i-count];
		j++;
		count--;
	}
	next_line[j] = '\0';
	return (next_line);
}

char	*get_next_line(int fd)
{
	char	*part;
	char	*list;
	char	*the_line;
	static char	*the_next_line;
	
	part = "";
	list = "";
	the_line = "";
	the_next_line = "";

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL)
	while ((part = read_list(BUFFER_SIZE, fd)))
	{
		/*list = read_list(buffer_size, fd);*/
		/*printf("list read:%s\n", list);*/
		list = ft_strjoin(list, part);
		if (ft_strchr(part,'\n'))
		{
			printf("initial lines: %s\n", list);
			the_line = ft_strcat_line(list, '\n');
			the_next_line = ft_strcat_nextline(list, '\n');
			free (part);
			free (list);
			printf("theline: \n%s\n", the_line);
			printf("thenextline:\n %s\n", the_next_line);
			return (the_line);
		}
	}
	printf("This is the line:\n %s\n", list);
	return(list);
}
