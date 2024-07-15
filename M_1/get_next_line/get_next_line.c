#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>



int	ft_strlen(char *sentence)
{
	int	i;

	i = 0;
	/*printf("iteration%d",i);*/
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
	int	buffer;
	char	*new_line;
	int	i;
	int l;

	/*printf("strjoin s2: %s\n", s2);*/
	i = 0;
	l = 0;
	buffer = ft_strlen(s1) + ft_strlen(s2);
	/*printf("This is the buffer for strjoin: %d/n", buffer);*/
	new_line = (char*)malloc(sizeof(char) * (buffer + 1));
	if (!new_line || !s1 || !s2)
		return (NULL);
	while (s1[l])
	{
		new_line[l] = s1[l];
		l++;
	}
	while (s2[i])
	{
		new_line [l+i] = s2[i];
		i++;
	}
	new_line [l+i] = '\0';
	return(new_line);
}

char	*read_list(int buffer_size, int fd)
{
	char *buffer;
	static int	bytes_read;

	/*
	buffer_size is how many bytes I want to read
	bytes_read is how many bytes were  red as it may differ from what I wanted to read
	buffer is what I have read those are the characters
	*/
	buffer = (char*)malloc(buffer_size + 1);
	if (buffer == NULL)
		return(0);

	bytes_read = read (fd, buffer, buffer_size);
	if (!bytes_read)
	{
		free(buffer);
		return(0);
	}
	buffer[bytes_read] = '\0';

	/*printf("bytes read:%s\n", buffer);*/
	return (buffer);
}

char	*get_next_line(int fd)
{
	int 	buffer_size;
	char	*list;
	char	*line;
	char	*part;
	
	buffer_size = 10;
	list = "";
	line = "";

	while ((list = read_list(buffer_size, fd)))
	{
		/*list = read_list(buffer_size, fd);*/
		/*printf("list read:%s\n", list);*/
		part = ft_strjoin(line, list);
		line = part;
		if (ft_strchr(part,'\n'))
		{
			printf("initial lines: %s\n", line);
			return(line);
		}
	}
	printf("This is the line:\n %s\n", line);
	return(line);
}


int main(void)
{
	int fd;

	fd = open ("test.txt", O_RDWR | O_CREAT);
	get_next_line (fd);
	return (0);
}