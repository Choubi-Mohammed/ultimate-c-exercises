/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/21 06:08:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/21 06:12:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int arr[] = {10, 50, 30, 70, 80, 20, 90, 40};
    int search_element = 70;

    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int pos = 0;
    while(i < size)
    {
        if(arr[i] == search_element)
        {
            pos = i;
            break;
        }
        i++;
    }

    printf("Element %d found at index %d.\n",search_element,pos);

    return 0;
}
