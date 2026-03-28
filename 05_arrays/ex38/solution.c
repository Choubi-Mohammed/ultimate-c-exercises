/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/28 12:52:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/28 13:01:40 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3, col = 3;

    int i = 0;
    while(i < row)
    {
        int j = 0;
        int sum = 0;
        while(j < col)
        {
            sum += arr[i][j];
            j++;
        }
        printf("Sum of row %d : %d\n",i+1,sum);
        i++;
    }

    printf("\n");
    i = 0;
    while(i < col)
    {
        int j = 0;
        int sum = 0;
        while(j < row)
        {
            sum += arr[j][i];
            j++;
        }
        printf("Sum of col %d : %d\n",i+1,sum);
        i++;
    }


}
