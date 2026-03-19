/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/19 11:04:37 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/19 11:41:26 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[7] = {10, 20, 30, 40, 50, 60, 70};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Original array: ");

	int j = 0;
	while(j < size)
	{
		printf("%d ",arr[j]);
		j++;
	}
	printf("\n");

	int i = 0;
	while(i < size/2)
	{
		int tmp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = tmp;
		i++;
	}

	int k = 0;
	printf("Reversed array: ");
	while(k < size)
	{
		printf("%d ",arr[k]);
		k++;
	}

	return 0;
}
