/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/28 08:51:08 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/28 09:01:46 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void sort_arr(int arr[],int size)
{
    int i = 0;
    bool swapped = 0;
    while(i < size - 1)
    {
        swapped = 0;
        int j =  0;
        while(j < size - 1 - i)
        {
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swapped = 1;
            }
            j++;
        }
        if(swapped == 0)
            break;
        i++;
    }
}
int remove_ele(int arr[],int size,int pos)
{
    pos = pos - 1;
    int i = size -1;
    while(pos < i)
    {
        arr[pos] = arr[pos+1];
        pos++;
    }
    size--;
    return size;
}
int remove_dup(int arr[],int size)
{
    sort_arr(arr,size);

    int i = 0;
    while(i < size - 1)
    {
        if(arr[i] == arr[i+1])
        {
            size = remove_ele(arr,size,i+1);
            i = 0;
        }else
            i++;
    }
    return size;
}
void print_arr(int arr[],int size)
{
    int i = 0;
    while(i < size)
        printf("%d ",arr[i++]);
    printf("\n");

}
int main()
{
    int arr[] = {4, 2, 4, 1, 5, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_arr(arr,size);

    size = remove_dup(arr,size);
    printf("Array after removing duplicates (new size %d): ",size);
    print_arr(arr,size);

    return 0;
}
