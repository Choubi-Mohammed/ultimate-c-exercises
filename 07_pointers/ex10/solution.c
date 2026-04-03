/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 12:41:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 13:06:05 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void reverse_arr(int *ptr,int size)
{
	int tmp ,start = 0;
	int end = size - 1;
	while(start < end)
	{
		tmp = ptr[start];
		ptr[start]= ptr[end];
		ptr[end] = tmp;
		start++;
		end--;
	}
}

void print_arr(int *ptr,int size)
{
	int i = 0;
	while(i < size)
	{
		printf("%d ",*(ptr + i));
		i++;
	}
	printf("\n");
}

int main()
{
	int numbers[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	int *ptr = numbers;
	printf("Original array : ");
	print_arr(ptr,size);
	reverse_arr(ptr,size);
	printf("Reversed array : ");
	print_arr(ptr,size);

	return 0;
}
