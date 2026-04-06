/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 19:00:32 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/06 09:14:12 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int bin_search(int *ptr,int size,int element)
{
	int low = 0;
	int mid = 0;
	int high = size - 1;

	while(low <= high)
	{
		mid = low + ((high-low) / 2);
		if(*(ptr + mid) == element)
			return mid;
		else if(element < *(ptr + mid))
			high = mid - 1;
		else 
			low = mid + 1;
	}
	return -1;
}
int main()
{
	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
	int size = sizeof(arr) / sizeof(arr[0]);
	int search_element = 50;

	int index = bin_search(arr,size,search_element);

	printf("Element %d found at index %d.\n",search_element,index);

	return 0;
}
