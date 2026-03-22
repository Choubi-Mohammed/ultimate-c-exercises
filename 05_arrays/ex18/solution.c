/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/22 08:53:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/22 08:59:26 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool isSorted(int arr[],int size)
{
    int i = 0;
    while(i < size - 1)
    {
        if(arr[i] > arr[i+1])
            return false;
        i++;
    }
    return true;
}

int main()
{
    int sorted_arr[] = {10, 20, 30, 40, 50};
    int unsorted_arr[] = {10, 30, 20, 40, 50};
    int size = 5;

    if(isSorted(sorted_arr,size))
        printf("Array 1 is sorted: True\n");
    else
        printf("Array 1 is sorted: False\n");

    if(isSorted(unsorted_arr,size))
        printf("Array 1 is sorted: True\n");
    else
        printf("Array 1 is sorted: False\n");

    return 0;
}
