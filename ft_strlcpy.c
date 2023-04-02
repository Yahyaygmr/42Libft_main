/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:56:20 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/14 11:41:40 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (srclen >= dstsize)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	else
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	return (srclen);
}
// #include <stdio.h>
// int main()
// {
// 	char src[] = "yahya yagmur";
// 	char dst[25];
// 	printf("fonksiyondan önce dst :%s\n", dst);
// 	size_t i = ft_strlcpy(dst, src, 25);
// 	printf("fonksiyondan sonra dst :%s\n", dst);
// 	printf("fonksiyondan dond deger :%zu\n", i);
// }
