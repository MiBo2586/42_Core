/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:26:59 by mborovka          #+#    #+#             */
/*   Updated: 2024/05/20 14:27:05 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return(1);
    else
        return(0);
}

/*
int main (void)
{
    char a;

    a = '-';
    return(ft_isdigit(a));
}
*/
