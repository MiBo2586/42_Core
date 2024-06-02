/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-30 08:41:02 by mborovka          #+#    #+#             */
/*   Updated: 2024-05-30 08:41:02 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void    ft_putendl_fd(char *s, int fd)
{
    if (*s)
    {
        while(*s)
        {
            write(fd, s, 1);
            s++;
        }
        write(fd, "\n", 1);
    }
    else
        write(2, "test3.txt not found.\n", 20);
}
/*
int main(void)
{
    int fd;
    char *s = "Ahoj Jak se mas";

    fd = open( "test3.txt", O_CREAT | O_RDWR, 0700);
    ft_putendl_fd (s, fd);
    return(0);
}
*/