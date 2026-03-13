/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/13 11:26:38 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/13 11:39:05 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int row = 5;

	int i = 1;
	while(i <= row)
	{
		int j = 1;
		while(j <= row - i)
		{
			printf(" ");
			j++;
		}
		int k = 1;
		while(k <= (2 * i - 1))
		{
			printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}
