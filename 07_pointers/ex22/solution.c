/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/11 11:11:26 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/11 11:48:43 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *matrix = NULL;
	int rows = 2,cols = 3;
	matrix = (int *)malloc(rows * cols * sizeof(int));
	
	if(matrix == NULL) return 1;

	for(int i = 0;i < rows * cols;i++)
		matrix[i] = (i+1) * 10;

    printf("Simulated 2x3 Array:\n");
	
	for(int i = 0;i < rows * cols;i++)
		printf("%d\t",matrix[i]);
	
    int row = 1;
    int col = 2;
    int index = row * cols + col; // 1 * 3 + 2 = 5

    int value = *(matrix + index);

    printf("\n\nValue at index [%d][%d] (offset %d): %d\n", row, col, index, value);
    // Should print the 6th element (value 15, which is index 5)
	free(matrix);
	matrix == NULL;
	return 0;
}

