/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-10 09:10:33 by mborovka          #+#    #+#             */
/*   Updated: 2024-06-10 09:10:33 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void ft_putstr(char *c)
{
	while (*c)
	{
		ft_putchar(*c);
		c++;
	}
}
/*
int 	main(void)
{
	ft_putstr("Ahoj");
	return(0);
}
*/