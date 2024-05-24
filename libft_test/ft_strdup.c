/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-24 14:25:51 by mborovka          #+#    #+#             */
/*   Updated: 2024-05-24 14:25:51 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*p;

	if (!((char *) malloc (ft_strlen(s)+1)))
		return (0);
	p = ((char *)malloc (ft_strlen(s)+1));
	return (p);
}
