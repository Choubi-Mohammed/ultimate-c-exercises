/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/07 17:32:47 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/07 17:36:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void check_even_odd(int nbr)
{
	if(nbr % 2 == 0)
		printf("%d is EVEN.\n",nbr);
	else
		printf("%d is ODD.\n",nbr);
}

int main()
{
	int a = 1337;
	int b = 42;

	check_even_odd(a);
	check_even_odd(b);

	return 0;
}
