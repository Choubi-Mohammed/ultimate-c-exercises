/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 18:54:26 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 18:59:43 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int freq_count(int *ptr,int size,int nbr)
{
	int i = 0;
	int count = 0;
	while(i < size)
	{
		if(ptr[i] == nbr)
			count++;
		i++;
	}
	return count;
}

int main()
{
	int arr[] = {1, 5, 2, 8, 5, 1, 5, 9};
	int size = sizeof(arr) / sizeof(arr[0]);
	int element = 5;

	int count = freq_count(&arr[0],size,element);
	
	printf("Element %d appers %d times in the array\n",element,count);
	return 0;
}
