/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 10:15:47 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/27 10:41:55 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void fonksiyon(unsigned int i, char *c)
// {
// 	if (*c % 2 == 0)
// 	*c -= 32;
// }
// #include <stdio.h>
// int main()
// {
// 	char a[] = "abcdefghijklmnoprstuvywqxz";
// 	ft_striteri(a, fonksiyon);
// 	printf("%s", a);
// }
