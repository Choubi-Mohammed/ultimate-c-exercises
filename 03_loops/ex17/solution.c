/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/12 12:01:20 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/12 12:02:50 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int row,col;

	row = 4;
	col = 4;

	int i = 0;
	while(i < row)
	{
		int j = 0;
		while(j < col)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
