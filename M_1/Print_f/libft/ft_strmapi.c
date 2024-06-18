/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-31 07:18:50 by mborovka          #+#    #+#             */
/*   Updated: 2024-05-31 07:18:50 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*res;
	unsigned int	buffer;

	buffer = ft_strlen(s);
	res = (char *) malloc ((buffer + 1) * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while (i < buffer)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}

/*
int add(int a, int b)
{
	return a + b;
}

int mul(int a, int b)
{
	return a * b;
}

int main()
{
	int(*fp)(int, int);

	fp = add;
	printf("%d\n", fp(10, 20)); //30

	fp = mul;
	printf("%d\n", fp(10, 20)); //200
}
*/