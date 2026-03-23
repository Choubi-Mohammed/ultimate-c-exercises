/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/23 07:44:57 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/23 10:09:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 1;
    int key;

    while(i < size)
    {
        key = arr[i];
        int j = i;
        while(j > 0 && key < arr[j-1])
        {
            arr[j] = arr[j-1];//shift
            j--;
        }
        arr[j] = key;//insert
        i++;
    }

    i = 0;
    while(i < size)
    {
        printf("%d ",arr[i]);
        i++;
    }
    return 0;
}
