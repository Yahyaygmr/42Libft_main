/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:53:59 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/15 17:04:28 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	nb;
	int	norp;

	nb = 0;
	norp = 1;
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			norp = -norp;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	return (nb * norp);
}
// #include "libft.h"
// #include <stdio.h>
// int main()
// {
// 	char a[] = "   ---++--+1234";
// 	printf("%d", ft_atoi(a));
// }