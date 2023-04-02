/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:09:30 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/27 14:32:54 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;

	c = s;
	while (n > 0)
	{
		*c = 0;
		c++;
		n--;
	}
}

// #include <stdio.h>
// int main()
// {
// 	char a[] = "yahyayagmur";
// 	printf("%s\n", a);
// 	ft_bzero(a,3);
// 	int i =0;
// 	while (i < 11)
// 	{
// 		printf("%c\n", a[i]);
// 		i++;
// 	}

// }