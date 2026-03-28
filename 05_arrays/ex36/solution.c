/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/28 12:39:54 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/28 12:43:16 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2x3 matrix
    int sum = 0, row = 2,col = 3;
    int i = 0;
    while(i < row)
    {
        int j = 0;
        while(j < col)
        {
            sum += arr[i][j];
            j++;
        }
        i++;
    }

    printf("Sum of all elements in the matrix: %d\n",sum);

    return 0;
}

