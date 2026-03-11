/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/11 11:53:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/11 11:56:09 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr;
	printf("Enter a number : ");
	scanf("%d",&nbr);

	printf("\n--- Multiplication Table for %d ---\n",nbr);
	int i = 1;
	while(i <= 10)
	{
		printf("%d * %d = %d\n",nbr,i,nbr * i);
		i++;
	}

	return 0;
}
