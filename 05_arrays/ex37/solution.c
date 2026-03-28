/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/28 12:43:51 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/28 12:51:01 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main()
{
    int arr[3][2] = {{10, 20}, {30, 40}, {50, 60}}; // 3x2 matrix
    int row = 3, col = 2;

    printf("Original Matrix: \n");
    int i = 0,j = 0;
    while(i < row)
    {
        j = 0;
        while(j < col)
        {
            printf("%d\t",arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    printf("\nElements in reverse : \n");
    i = row-1;
    while(i >= 0)
    {
        j = col-1;
        while(j >= 0)
        {
            printf("%d\t",arr[i][j]);
            j--;
        }
        printf("\n");
        i--;
    }

    return 0;
}
