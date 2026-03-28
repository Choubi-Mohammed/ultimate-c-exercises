/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/28 09:06:09 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/28 09:57:28 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void reverse_rang(int arr[],int start,int end)
{
    int tmp;
    while(start < end)
    {
        tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++;
        end--;
    }
}

void print_arr(int arr[],int size)
{
    int i = 0;
    while(i < size)
    {
        printf("%d ",arr[i++]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 2,end = 5;

    printf("Original array: ");
    print_arr(arr,size);

    reverse_rang(arr,start,end);
    printf("Array after reversing indices %d to %d: ",start,end);
    print_arr(arr,size);
}
