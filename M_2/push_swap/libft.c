
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "push_swap.h"


int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (!dest && !src)
		return (0);
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	dest;

	dest = ft_strlen(s);
	if (!s)
		return (NULL);
	if (dest < start)
		len = 0;
	else if (len > (dest - start))
		len = dest - start;
	ptr = (char *) malloc (sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy (ptr, s + start, len);
	ptr[len] = '\0';
	return (ptr);
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

int	ft_wordcount(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**thewhole;
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	thewhole = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!thewhole)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				n = ft_strlen(s);
			else
				n = ft_strchr(s, c) - s;
			thewhole[i++] = ft_substr(s, 0, n);
			s += n;
		}
	}
	thewhole[i] = NULL;
	return (thewhole);
}

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!p)
		return (NULL);
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*
int main(void)
{
	printf("%s\n", *ft_split("Hello World All", 'W'));
	return (0);
}
*/
