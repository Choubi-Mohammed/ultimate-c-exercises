/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/22 09:00:39 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/22 09:04:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    while(i < size - 1)
    {
        int j = 0;
        while(j < size - i - 1)
        {
            if(arr[j] < arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
            j++;
        }
        i++;
    }

    printf("Array sorted in descending order: ");
    i = 0;
    while(i < size)
    {
        printf("%d ",arr[i]);
        i++;
    }

    return 0;
}
