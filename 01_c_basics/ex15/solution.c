/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 10:35:22 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 10:39:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr = 10;
	int sum = 0;

	int i = 1;
	while(i <= nbr)
	{
		sum += i;
		i++;
	}

	printf("the sum of the first %d natural number is : %d",nbr,sum);

	return 0;
}
