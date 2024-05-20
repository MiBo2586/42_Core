/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:23:30 by mborovka          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:33 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
/*
int main (void)
{
    char *b = "Ahoj To hel test  je";

    return (ft_strlen(b));
}
*/
