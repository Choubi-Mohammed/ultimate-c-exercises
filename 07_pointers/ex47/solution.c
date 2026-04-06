/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/06 10:05:06 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/06 10:12:56 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_arr(int *ptr,int size)
{
	int i = 0;
	bool swapped = 0;
	while(i < size-1)
	{
		int j = 0;
		swapped = 0;
		while(j < size - 1 - i)
		{
			if(ptr[j] > ptr[j+1])
			{
				int tmp = *(ptr+j);
				ptr[j] = ptr[j+1];
				*(ptr + j + 1) = tmp;
				swapped = 1;
			}
			j++;
		}
		if(swapped == 0)
			break;
		i++;
	}
}
void print_arr(int *arr,int size)
{
	int i = 0;
	while(i < size)
	{
		printf("%d ",*(arr + i));
		i++;
	}
	printf("\n");
}
int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int size = sizeof(arr) / sizeof(arr[0]);

	sort_arr(arr,size);
	printf("Array sorted in ascending order : ");
	print_arr(arr,size);

	return 0;
}
