/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 18:20:06 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 18:32:45 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void print_matrix_in_reverse(int *mat,int row,int col)
{
	int i = row - 1,j = col - 1,k = (row * col)-1;
	while(i >= 0)
	{
		j = col - 1;
		while(j >= 0)
		{
			//printf("%d ",*(mat + (i * col + j)));
			printf("%d ",*(mat + k--));
			j--;
		}
		printf("\n");
		i--;
	}
}
int main()
{
	int matrix[3][2] = {{10, 20}, {30, 40}, {50, 60}}; // 3x2 matrix
	int row = 3,col = 2;
	
	int *tab_matrix = &matrix[0][0];
	printf("Elements in reverse order: \n");
	print_matrix_in_reverse(tab_matrix,row,col);
}
