/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:35:26 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/15 16:45:58 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == 0)
		return ((char *)haystack);
	if (haystack == 0)
		return (0);
	while (haystack[j] != '\0')
	{
		while (haystack[j + i] == needle[i] && (j + i < len + 1))
		{
			if (haystack[i + j] == '\0' && needle[i] == '\0')
				return ((char *)haystack + j);
			i++;
		}
		if (needle[i] == '\0')
			return ((char *)haystack + j);
		j++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	char a[]= "yahyabeyazyagmur";
	char b[]= "beyaz";
	printf("%s", ft_strnstr(a, b, 16));
}
