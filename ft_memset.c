/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:27:18 by feden-pe          #+#    #+#             */
/*   Updated: 2023/04/11 18:24:16 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	*ft_memset(void *s, int c, unsigned int num)
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
/*
int main()
{
    char str[30] = "ABCD EFGH";

    printf("Before memset => %s",str);

    ft_memset(str, 'x', 3);

    printf("\nAfter memset => %s\n",str);

    return 0;
}*/
