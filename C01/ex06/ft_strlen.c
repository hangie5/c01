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

#include <string.h> //include the string.h header for the standard strlen function
#include <stdio.h> //incolude the stdio.h header for input and output functions

int	ft_strlen(char *str) //define ft_strlen to calculate the length of a string
//function definition for 'ft_strlen'. it takes 'str' as an argument, which is a pointer to the beginning of a string
{
	int	len; //declare integer variable named 'len' to store the length of the string

	len = 0; //initialize 'len' variable to 0, so the length of the string is currently 0
	while (str[len]) //
		len++;
	return (len);
}

int main(void)
{
	printf("%lu\n", strlen(""));
	printf("%d\n", ft_strlen(""));
}
