/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:24:31 by mborovka          #+#    #+#             */
/*   Updated: 2024/05/20 14:24:33 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *p;

    i = 0;
    p = s;
    while (i < n)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return (p);
}
/*
int main (void)
{
    int b;
    int n;

    char s[20] = "00000000000000";
    b = 92;    
    n = 5;
    printf  ("%s\n", (char *) ft_memset(s, b, n));
    return(0);
}
*/