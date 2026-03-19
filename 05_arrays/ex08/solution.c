/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/19 14:48:01 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/19 15:20:59 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int size = 6;
	int arr[6] = {10, 20, 30, 40, 50, 60};
	int position = 3; // Remove Position 3 (i.e., index 2)

	printf("Initial array (size 6): ");
	int i = 0;
	while(i < size)
	{
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");

	i = position - 1;
	while(i < size) // this make last ele in arr 0, i < size-1 make last is  60
	{
		arr[i] = arr[i+1];
		i++;
	}
	size--;

	printf("Array after deleting element at position 3 (index 2): \n");
	i = 0;
	while(i < size)
	{
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");

	return 0;
}

/*
Array deletion is essentially the reverse of insertion:

    Shifting (The Critical Step): The loop for (i = index; i < size - 1; i++) starts at
	the index where the deletion is to occur (index). Inside the loop, arr[i] = arr[i + 1];
	copies the element at the next index (i+1) into the current index (i). This action
	immediately overwrites the element being deleted and shifts all subsequent elements to the left.

    Size Update: The logical size of the array (size) is decremented. Although the array
	element at the last physical position remains (it’s a duplicate of the previous element),
	it is now outside the logical bounds of the array and will not be printed in the output loop.

*/
