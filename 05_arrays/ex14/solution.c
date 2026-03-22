/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/22 07:41:26 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/22 07:53:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int arr[] = {5, 2, 8, 5, 1, 2, 9, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nUnique elements are: ");

    int count,is_unic;
    i = 0;

   /* while(i < size)
    {
        int j = 0;
        count = 0;
        while(j < size)
        {
            if(arr[i] == arr[j])
                count++;
            j++;
        }
        if(count == 1)
            printf("%d ",arr[i]);
        i++;
    }*/

    while(i < size)
    {
        is_unic = 1;
        int j = 0;
        while(j < size)
        {
            if(i != j && arr[i] == arr[j])
            {
                is_unic = 0;
                break;
            }
            j++;
        }
        if(is_unic == 1)
            printf("%d ",arr[i]);
        i++;
    }

    return 0;
}
