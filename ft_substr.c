/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:47:00 by feden-pe          #+#    #+#             */
/*   Updated: 2023/04/14 19:31:44 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t 	i;
	size_t	mlen;
	char	*sub;

	i = 0;
	if (ft_strlen(s) <= start)
		mlen = 1;
	else if (len > ft_strlen(s) - start)
		mlen = ft_strlen(s) - start + 1;
	else
		mlen = len + 1;
	sub = (char *)malloc(sizeof(char) * mlen);
	if (!sub)
		return (NULL);
	while (start < ft_strlen(s) && len--)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
