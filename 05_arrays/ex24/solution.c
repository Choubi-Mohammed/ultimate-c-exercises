/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/26 09:48:24 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/26 11:02:48 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void bubble_sort(int arr[],int size)
{
    int i = 0;
    bool swapped;
    while(i < size - 1)
    {
        swapped = 0;
        int j = 0;
        while(j < size - i - 1)
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

int main()
{
    int arr[] = {2, 5, 2, 8, 5, 1, 5, 9, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr,size);

    int i = 0;
    int counter = 0,most_freq = 0,freq;
    while(i < size)
    {
        int j = 0;
        counter = 0;
        while(j < size )
        {
            if(arr[i] == arr[j])
                counter++;
            j++;
        }
        if(arr[i] != arr[i+1])
        {
            if(freq < counter)
            {
                most_freq = arr[i];
                freq = counter;
            }

        }
        i++;
    }
    printf("The most frequent is %d of element : %d\n",freq,most_freq);


    i = 0;
    while(i < size)
        printf("%d ",arr[i++]);

    return 0;
}
