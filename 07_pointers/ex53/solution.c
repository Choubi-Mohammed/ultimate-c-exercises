/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/06 19:20:45 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 09:40:11 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void swap(int *a1,int *a2)
{
	int tmp = *a1;
	*a1 = *a2;
	*a2 = tmp;
}

void selection_sort(int *ptr,int size)
{
	int i = 0,j = 0;
	int min,min_i;
	while(i < size)
	{
		j = i;
		min = 2147483647;
		min_i = 0;
		while(j < size)
		{
			if(min > ptr[j])
			{
				min = ptr[j];
				min_i = j;
			}
			j++;
		}
		swap(ptr+i,ptr+min_i);
		i++;
	}
}

int main()
{
	int arr[] = {2,2,2,2, 5, 2, 8, 5, 1};
	int size = 9;

	int *ptr = arr;
	selection_sort(ptr,size);

	int i = 0,count = 0,j = 0;
	//1 2 2 5 5 8
	int brev = 0;
	while(i < size)
	{
		j = i + 1;
		count = 1;
		while(j < size)
		{
			if(ptr[i] == ptr[j])
				count++;
			j++;	
		}
		if(brev != ptr[i])
			printf("Element %d : %d times\n",ptr[i],count);
		brev = ptr[i];
		i++;
	}


}
