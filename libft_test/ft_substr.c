/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-29 10:11:54 by mborovka          #+#    #+#             */
/*   Updated: 2024-05-29 10:11:54 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	char *ptr_str;
	unsigned int dest;

	dest = ft_strlen(s);
	if (!s)
		return (NULL);
	if (dest < start)
		len = 0;
	else if (len > (dest - start))
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
/*
int	main(void)
{
	char *s;

	s = ft_substr("Hello World",3, 5);
	printf("%s\n",s);
	return(0);
}
*/
