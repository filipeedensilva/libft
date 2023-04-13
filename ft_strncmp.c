/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:21:32 by feden-pe          #+#    #+#             */
/*   Updated: 2023/04/12 16:27:04 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int num)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < num))
	{
		if (s1[i] != s2[i]
			return (s1[i] - s2[i])
		i++;
	}
	return (0);
}
