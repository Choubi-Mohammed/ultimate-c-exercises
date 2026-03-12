/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/12 12:14:15 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/12 12:18:03 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int i = 1;
	while(i <= 10)
	{
		printf("Table of %d\n",i);
		int j = 1;
		while(j <= 10)
		{
			printf("%d * %d = %d\n",i,j,i * j);
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
