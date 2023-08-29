/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/29 14:30:48 by tlin          #+#    #+#                 */
/*   Updated: 2023/08/29 15:24:32 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
int main(void)
{
	printf("%lu\n", strlen(""));
	printf("%d\n", ft_strlen(""));
}
*/