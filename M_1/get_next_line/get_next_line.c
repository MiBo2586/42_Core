#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>


int	ft_len(char *sentence)
{
	int	i;

	i = 0;
	printf("iteration%d",i);
	while (sentence)
		i++;
	return (i);
}

char	*append_list(char *list)
{
	int i;
	int list_lenght;
	int new_part;
	char *final_list;

	i = 0;
	printf("List: %s\n", list);
	list_lenght = ft_len (list);
	printf("List lengt: %d", list_lenght);
	new_part = ft_len (buffer);
	printf("New part lengt: %d", new_part);
	final_list = (char*)malloc(new_part + list_lenght + 1);

	while (buffer)
	{
		final_list[list_lenght] = buffer[i];
		i++;
	}
	return (final_list);
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
	
	
	/*while (!found_newline())
	{*/
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
	printf("bytes read:%s\n", buffer);
	/*write(1, &bytes_read, 10);*/
	return (buffer);
}

char	*get_next_line(int fd)
{
	int 	buffer_size;
	char	*list;
	
	buffer_size = 10;
	list = "";

	while ((read_list(buffer_size, fd)))
	{
		list = read_list(buffer_size, fd);
		printf("This is the list: %s\n",list);
	}
	return(0);
}


int main(void)
{
	int fd;

	fd = open ("test.txt", O_RDWR | O_CREAT);
	get_next_line (fd);
	return (0);
}