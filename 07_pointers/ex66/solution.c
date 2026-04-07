/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 18:10:42 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 18:19:24 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int sum_of_matrix(int *matrix,int row,int col)
{
	int i = 0,j = 0;
	int sum = 0;
	while(i < row)
	{
		j = 0;
		while(j < col)
		{
			sum += *(matrix + (i * col + j));//or *(matrix + k) k from 0 to end od the matrix index its row *col
			j++;
		}
		i++;
	}
	return sum;
}
int main()
{
	int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2x3 matrix
	int row = 2,col = 3;

	int *matrix_ptr = &matrix[0][0];
	int sum_matrix = sum_of_matrix(matrix_ptr,row,col);
	printf("Sum of all elements in the matrix : %d\n",sum_matrix);
	return 0;
}
