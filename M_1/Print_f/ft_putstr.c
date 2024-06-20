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

#include "ft_printf.h"

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	ft_putstr(const char *c)
{
	if (!c)
	{
		return (write (1, "(null)", 6));
	}
	return (write(1, c, ft_strlen(c)));
}
/*
int 	main(void)
{
	ft_putstr("Ahoj");
	return(0);
}
*/