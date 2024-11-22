/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:08:56 by msabr             #+#    #+#             */
/*   Updated: 2024/08/12 14:55:57 by msabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		size;
	int		i;
	int		nbr;
	int		*pnt;

	if (min >= max)
		return (NULL);
	nbr = min;
	i = 0;
	size = max - min;
	pnt = (int *)malloc(size * sizeof(int));
	if (pnt == NULL)
		return (0);
	while (i < size)
	{
		*(pnt + i) = nbr;//pnt[i] = nbr;
		i++;
		nbr++;
	}
	return (pnt);
}
