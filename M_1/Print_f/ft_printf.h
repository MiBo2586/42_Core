/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-24 14:32:36 by mborovka          #+#    #+#             */
/*   Updated: 2024-05-24 14:32:36 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_hexaddress (void *format);
int		ft_putchar(char c);
int		ft_puthex(unsigned long n, char format);
int		ft_putnbr(unsigned long n);
int		ft_putstr(char *c);
int		ft_u_putnbr(unsigned int n);

#endif
