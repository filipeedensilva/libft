/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:02:00 by feden-pe          #+#    #+#             */
/*   Updated: 2023/04/13 12:15:00 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t num)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	int	cmp;
	size_t	i;

	i = 0;
	cmp = 0;
	p1 = s1;
	p2 = s2;
	while (i < num && cmp == 0)
	{
		cmp = (int)p1[i] - (int)p2[i];
		i++;
	}
	return (cmp);
}
