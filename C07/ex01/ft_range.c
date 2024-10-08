/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:28:54 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/23 15:07:50 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*buffer;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	buffer = (int *)malloc(sizeof(int) * size);
	if (buffer == NULL)
		return (NULL);
	while (i < size)
		buffer[i++] = min++;
	return (buffer);
}
