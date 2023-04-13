/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:49:05 by feden-pe          #+#    #+#             */
/*   Updated: 2023/04/11 21:04:48 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int num)
{
	unsigned int	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if ((unsigned int) dest - (unsigned int)src < num)
	{
		i = num - 1;
		while (i < num)
		{
			((unsigned char *)dst[i] = ((unsigned char *)src[i];
			i--;
		}
	}
	else
	{
		while (i < num)
		{
			((unsigned char *)dst[i] = ((unsigned char *)src[i];
			i++;
		}
	}
	return (dest);
}
