/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/21 06:13:45 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/21 06:19:20 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int arr[] = {1, 5, 2, 8, 5, 1, 5, 9};
    int search_element = 1;

    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int count = 0;

    while(i < size)
    {
        if(arr[i] == search_element)
            count++;
        i++;
    }

    printf("Element %d appears %d times in the array.\n",search_element,count);

    return 0;
}
