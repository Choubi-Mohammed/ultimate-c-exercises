/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/06 18:51:06 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/06 19:16:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
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
		swap(&ptr[i],&ptr[min_i]);
		i++;
	}
}
int remove_element(int *ptr,int size,int pos)
{
	int i = pos - 1;
	while(i < size)
	{
		ptr[i] = ptr[i+1];
		i++;
	}
	size--;
	return size;
}

int remove_dup_ele(int *ptr,int size)
{
	selection_sort(ptr,size);
	int i = 0;
	while(i < size - 1)
	{
		if(ptr[i] == ptr[i+1])
		{
			size = remove_element(ptr,size,i+1);
		}
		i++;
	}
	return size;
}

void print_arr(int *ptr,int size)
{
	int i = 0;
	while(i < size)
	{
		printf("%d ",ptr[i]);
		i++;
	}
	printf("\n");
}
int main()
{
	int arr[] = {10, 20, 20, 30, 10, 40, 50, 50, 40};
	int size = 9;
	
	print_arr(arr,size);
	size = remove_dup_ele(arr,size);
	print_arr(arr,size);

	return 0;
}
