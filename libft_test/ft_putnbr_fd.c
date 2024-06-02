/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-30 08:41:02 by mborovka          #+#    #+#             */
/*   Updated: 2024-05-30 08:41:02 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

void    ft_putnbr_fd(int n, int fd)
{
    int digits;
    long k;
    char s;
    
    digits = 1;
    k = n;
    if(k<0)
    {
        ft_putchar_fd('-', fd);
        k = k * -1;
    }
    while (k/digits > 10)
        digits = digits * 10;
    while (digits)
    {
        s = k/digits + 48,
        ft_putchar_fd(s, fd);
        k = k%digits;
        digits = digits/10;
    } 
}
/*
int main(void)
{
    int fd;

    fd = open ("znumb.txt", O_CREAT | O_RDWR, 0700);
    ft_putnbr_fd(2545462, fd);
    ft_putnbr_fd(-2545462, fd);
}
*/