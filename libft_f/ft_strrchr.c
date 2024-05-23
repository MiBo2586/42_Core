/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                         :+:      :+:    :+:   */
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
char *ft_strrchr (const char *s, int c)
{
    char *n;
    char *o;

    n = (char *)s;
    o = n;
    while (*n != '\0')
    {
        if (*n == c)
        {
            o = n;
            while (*++o != c)
            {
                if (*o == '\0')
                    return(n);
            }
        }
        n++;
    }
    if (*n == '\0')
        return(0);
    return(0);
}
/*
int main (void)
{
    char a;
    char *b;

    a = 'b';
    b = "bneirheithacqdasdfasdffabfda";
    printf("%s\n", ft_strrchr(b, a));
    return(0);
}
*/
