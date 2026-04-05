/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 12:13:14 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 12:21:11 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int remove_ele(int *ptr,int size,int pos)
{
	pos = pos - 1;
	int i = pos;
	while(i < size-1)
	{
		*(ptr + i) = *(ptr + (i + 1));
		i++;
	}
	size--;

	return size;
}
void print_arr(int *ptr,int size)
{
	int i = 0 ;
	while(i < size)
	{
		printf("%d ",*ptr);
		ptr++;
		i++;
	}
	printf("\n");
}
int main()
{
	int size = 6;
	int arr[6] = {10, 20, 30, 40, 50, 60}; 
	int pos = 3; // Remove Position 3 (i.e., index 2)
	printf("Initial array (size = %d ) : ",size);
	print_arr(arr,size);
	size = remove_ele(arr,size,pos);
	printf("Array after deleting element at postition %d (index = %d ) : ",pos,pos-1);
	print_arr(arr,size);
}
