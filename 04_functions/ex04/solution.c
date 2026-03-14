/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/14 12:12:56 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/14 12:18:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_even(int num);

int main()
{
	int nbr = 7;
	if(is_even(nbr) == 1)
		printf("The %d is EVEN number.\n",nbr);
	else
		printf("The %d is a ODD number.\n",nbr);

	return 0;
}

int is_even(int num)
{
	if(num % 2 == 0)
		return 1;
	else
		return 0;
}
