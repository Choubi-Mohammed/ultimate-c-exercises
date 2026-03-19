/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/19 11:42:41 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/19 11:47:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int source_arr[5] = {1, 2, 3, 4, 5};
	int dest_arr[5]; // Destination array

	int size = sizeof(source_arr) / sizeof(source_arr[0]);

	int i = 0;
	while(i < size)
	{
		dest_arr[i] = source_arr[i];
		i++;
	}

	printf("Source array elements: ");
	i = 0;
	while(i < size)
	{
		printf("%d ",source_arr[i]);
		i++;
	}

	printf("\nDestination array elements (after copy): ");
	i = 0;
	while(i < size)
	{
		printf("%d ",dest_arr[i]);
		i++;
	}

	return 0;
}
