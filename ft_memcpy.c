/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:14:23 by feden-pe          #+#    #+#             */
/*   Updated: 2023/04/11 19:42:38 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *d, void *s, unsigned int num)
{
	int		i;
	char	*dest;
	char	*src;

	if (d == NULL)
		return (NULL);
	i = 0;
	dest = (char *) d;
	src = (char *) s;
	while (src[i] != '\0' && i < num)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
