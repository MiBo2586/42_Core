/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:23:46 by mborovka          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:48 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t c;

    i = 0;
    while (*s1 && *s2 && i <= n)
    {
        if (*s1 != *s2)
        {   
            c = *s1 - *s2;  
            return(c);
        }
        s1++;
        s2++;
        i++;
    }
    return(0);
}
/*
int main (void)
{
    int n;

    char *x = "ABCC";
    char *z = "ABCc";
    n = 6;
    printf("%d\n", ft_strncmp(x, z, n));
    return(0);
}
*/