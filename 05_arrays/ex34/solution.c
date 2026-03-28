/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/28 10:02:56 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/28 10:09:07 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int find_miss_n(int arr[],int size)
{
    int i = 0;
    while(i < size)
    {
        if(arr[i] != i+1)
            return (i+1);
        i++;
    }
    return 0;
}
int main()
{
    // Array contains numbers from 1 to 9, so N=10. Missing is 6.
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missing = find_miss_n(arr,size);
    printf("The missing number in the sequence %d to %d is: %d",arr[0],arr[size-1],missing);

    return 0;
}
