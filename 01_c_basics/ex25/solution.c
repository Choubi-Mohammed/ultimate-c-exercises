/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 17:29:51 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 17:31:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int row,col;
	row = 3;
	col = 3;

	int i = 1;
	while(i <= row)
	{
		int j = 1;
		while(j <= col)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
