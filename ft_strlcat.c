/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:12:03 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/15 11:37:41 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	dst_firstlen;
	size_t	i;
	
	if (dst == 0)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst_firstlen = dst_len;
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] != '\0' && dst_len + 1 < dstsize)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (dst_firstlen + src_len);
}
/*
#include <stdio.h>
int main()
{
	char src[] = "yahyasd";
	char dst[20] = "42 istanbul ";
	printf("fonksiyondan önce dst :%s\n", dst);
	size_t i = ft_strlcat(dst, src, 20);
	printf("fonksiyondan sonra dst :%s\n", dst);
	printf("fonksiyondan dond deger :%zu\n", i);

}*/