/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 11:16:58 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 11:22:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int tt_factN(int nbr)
{
	int fact = 1;
	int i = 1;
	while(i <= nbr)
	{
		fact = fact * i;
		i++;
	}
	return fact;
}

int main()
{
	int nbr;
	printf("Enter a number : ");
	scanf("%d",&nbr);

	printf("The factorial of %d is : %d\n",nbr,tt_factN(nbr));

	return 0;
}
