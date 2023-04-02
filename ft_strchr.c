/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:38:31 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/28 13:57:21 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	while (*s != '\0' && a != *s)
		s++;
	if (a == *s)
		return ((char *) s);
	return (0);
}
// #include <stdio.h>

// int main()
// {
// 	char *ret;
// 	char a[] = "dal sarkar kartal kalkar";
// 	ret = ft_strchr(a, 's');
// 	printf("%s\n", ret);
// 	printf("donus adres :%p\n", ret);
// 	printf("orj adres   :%p\n", &a[4]);

// }
