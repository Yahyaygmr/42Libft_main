/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 06:33:25 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/27 14:38:15 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
// #include <stdio.h>
// int main()
// {
// 	char *a;
// 	a[0]= 'a';
// 	a[8]= 'c';
// 	int i = 0;
// 	while (i <10)
// 	{
// 		printf("%c\n", a[i]);
// 		i++;
// 	}
// }