/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:07:57 by feden-pe          #+#    #+#             */
/*   Updated: 2023/04/13 15:28:49 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *ptr)
{
	int	sign;
	int	res;
	
	sign = 1;
	res = 0;
	while (*ptr && ((*ptr >= '\t' && ptr <= '\r') || *str == ' '))
		str++;
	if (*str && (*ptr == '+' || *ptr == '-'))
	{
		if (*ptr == '-')
			sign = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}

#include<stdio.h>

int	main(void)
{
	int i = ft_atoi("\t\v ---+-+---+12534ab567");
	printf("%d", i);
	return (0);
}
