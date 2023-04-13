/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:21:02 by feden-pe          #+#    #+#             */
/*   Updated: 2023/04/11 19:39:53 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	*ft_memset(void *s, int c, unsigned int num)
{
	int		i;
	char	*str;

	str = (char *) s;
	i = 0;
	while (str[i] != '\0' && i < num)
	{
		str[i] = c;
		i++;
	}
}

void	ft_bzero(void *s, unsigned int num)
{
	ft_memset(s, 0, num);
}
