/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:59:02 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/15 15:16:44 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
// #include <stdio.h>
//  int main()
// {
// 		const int a[] = {1, 2, 3, 5, 8, 9};
// 		printf("%p\n", ft_memchr(a, 3, 9));
// 		printf("%p\n", &a[2]);
// // 	char a[] = "yahyasyagmur";
// // 	printf("%p\n", ft_memchr(a, 's', 11));
// // 	printf("%s\n", ft_memchr(a, 's', 11));
// // 	printf("%p\n", &a[5]);

// }