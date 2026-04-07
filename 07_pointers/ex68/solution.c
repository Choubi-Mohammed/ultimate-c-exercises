/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 18:33:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 18:44:21 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void sum_row(int *mat,int row,int col)
{
	int sum = 0;
	int i = 0,j = 0;
	while(i < row)
	{
		j = 0;
		sum = 0;
		while(j < col)
		{
			sum += *(mat + (i * col + j));
			j++;
		}
		printf("Sum of Row %d : %d\n",i+1,sum);
		i++;
	}
}
void sum_col(int *mat,int row,int col)
{
	int sum = 0;
	int i = 0, j = 0;
	while(j < col)
	{
		sum = 0;
		i = 0;
		while(i < row)
		{
			sum += *(mat + (i * col + j));
			i++;
		}
		printf("Sum of Col %d : %d\n",j + 1,sum);
		j++;
	}
	
}

int main()
{
	int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int row = 3,col = 3;

	int *mat = &matrix[0][0];

	sum_row(mat,row,col);
	printf("\n");
	sum_col(mat,row,col);

}
