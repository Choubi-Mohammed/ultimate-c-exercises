/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/11 12:12:10 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/11 12:14:57 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr;
	printf("Enter a number : ");
	scanf("%d",&nbr);

	int i = 1;
	int fact = 1;
	while(i <= nbr)
	{
		fact *= i;
		i++;
	}

	printf("Factorial of %d is %d.\n",nbr,fact);

	return 0;
}
