/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 10:31:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 10:38:42 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void rotate_left_one(int *ptr,int size)
{
	int i = 0;
	int left_one = ptr[i];
	while(i < size - 1)
	{
		ptr[i] = ptr[i+1];
		i++;
	}
	ptr[i] = left_one;
}
void print_arr(int *ptr,int size)
{
	int i = 0;
	while(i < size)
		printf("%d ",ptr[i++]);
	printf("\n");
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5;

	printf("Original array : ");
	print_arr(arr,size);
	
	rotate_left_one(arr,size);

	printf("Array after left rotation by 1 : ");
	print_arr(arr,size);

	return 0;
}
