/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:18:54 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/19 12:42:42 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_;
	const char	*src_;

	dst_ = dst;
	src_ = src;
	if (dst == 0 && src == 0)
		return (0);
	if (src < dst)
	{
		while (len > 0)
		{
			len--;
			*(dst_ + len) = *(src_ + len);
		}
		return (dst);
	}
	while (len > 0)
	{
		*dst_ = *src_;
		dst_++;
		src_++;
		len--;
	}
	return (dst);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char src[] = "1234567890";
// 	char src2[] = "1234567890";
// 	//printf("%p\n", ft_memmove(src+2, src, 6));
// 	//printf("%s\n", ft_memmove(src+2, src, 6));
// 	memmove(src+1, src, 6);
// 	printf("memmove :%s\n", src);
// 	ft_memcpy(src2+1, src2, 6);
// 	printf("memcpy  :%s\n", src2);
// 	printf("%p", src+2);
// }
