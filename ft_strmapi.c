/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 08:54:29 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/27 10:11:08 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;

	if (!s)
		return (0);
	p = malloc(sizeof(char) * (ft_strlen(s) +1));
	if (!p)
		return (0);
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
// char up(unsigned int i, char c)
// {
// 	return (c -32);
// }
// #include <stdio.h>
// int main()
// {
// 	char c[] = "yahyayagmur";
// 	printf("%s", ft_strmapi(c, &up));
// }