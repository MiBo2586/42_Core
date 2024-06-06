/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-06 08:40:17 by mborovka          #+#    #+#             */
/*   Updated: 2024-06-06 08:40:17 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
/*#include "libft.h"*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>



/*
Here starts ft_strlen
*/
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
Here ends ft_strlen
*/

/*
Here starts ft_memcpy
*/

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
/*
Here ends ft_memcpy
*/

/*
Here starts ft_substr
*/
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
/*
Here ends ft_substr
*/


/*
Here starts ft_strchr
*/
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
/*
Here ends ft_strchr
*/

/*
Here starts ft_split
*/
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

/*
Here ends ft_split
*/

/*
Here starts the task the FT_PRINT
*/
int ft_format(va_list args, const char format)
{
	int	data_type;

	data_type = 0;
	if (format == 'c')
		data_type = va_arg(args, char);
	else if (format == 's')
		data_type = va_arg(args, char *);
	else if (format == 'p')
		data_type = va_arg(args, char *);
	else if (format == 'd')
		data_type = va_arg(args, int);
	else if (format == 'i')
		data_type = va_arg(args, int);
	else if (format == 'u')
		data_type = va_arg(args, unsigned int);
	else if (format == 'x')
		data_type = va_arg(args, unsigned int);
	else if (format == 'X')
		data_type = va_arg(args, unsigned int);
	else if (format == '%')
		data_type = va_arg(args, unsigned int);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list args;
	int len_str;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len_str = len_str + ft_format(args, format[i]);
		}
		else
			len_str = len_str + ft_putchar(format[i]);
		i++;
	}
	va_end (args);
	return (len_str);
}