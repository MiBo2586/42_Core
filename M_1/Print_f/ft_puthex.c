/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-10 09:24:32 by mborovka          #+#    #+#             */
/*   Updated: 2024-06-10 09:24:32 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(c);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

*/


int	ft_puthex(unsigned long n, char format)
{
	char	*base;
	unsigned int	num;
	unsigned int	len;
	int		i;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	i = 0;
	num = (unsigned int)n;
	len = ft_strlen (base);
	if (num > (len - 1))
		i += (ft_puthex(num/len, format));
	i += ft_putchar(*(base + (num % len)));
	return (i);
}

/*
int main(void)
{
	unsigned long number;
	unsigned long numb;

	number = 255;
	ft_puthex (number, 'x');
	numb = 1234;
	ft_puthex (numb, 'X');
	return (0);
}
*/