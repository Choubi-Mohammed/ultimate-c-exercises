/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/06 10:23:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/06 12:41:09 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void selection_sort_arr(int *tab,int size)
{
	int i = size-1;
	int j,min,min_index;
	while(i >= 0)
	{
		j = i;
		min = 2147483647;//max intgers
		min_index = -1;
		while(j >= 0)
		{
			if(min > tab[j])
			{
				min = tab[j];
				min_index = j;
			}
			j--;
		}
		swap(tab+i,tab+min_index);
		i--;
	}
}

int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int size = 5;

	selection_sort_arr(arr,size);
	
	printf("Array sorted in descending order : ");
	int i = 0;
	while(i < size)
	{
		printf("%d ",*(arr + i));
		i++;
	}

	return 0;
}
