/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 16:21:36 by tlin          #+#    #+#                 */
/*   Updated: 2023/08/29 14:20:30 by tlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //necessary header for function, in this case mainly used for printf()

void	ft_ft(int *nbr) //int *nbr pointsthe integer to 'nbr', which is 42
{
	*nbr = 42;
}

/*int	main(void)
{
	int	a;
	int	*ptr;

	ptr = &a; //the pointer 'ptr' points to the memory locaton of 'a'
	ft_ft(ptr);
	printf("%d", a); //prints the value of 'a'
			 //the %d format specifier is specifically used for formatting and printing integer values in printf statements.
}
*/
