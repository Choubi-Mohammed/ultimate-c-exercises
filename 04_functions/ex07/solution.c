/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/14 12:32:38 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/14 12:37:50 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int find_max(int arr[], int size)
{
	int i = 0;
	int large_V = 0;
	while(i < size)
	{
		if(arr[i] > large_V)
			large_V = arr[i];
		i++;
	}

	return large_V;
}

int main()
{
	int numbers[] = {45, 12, 88, 5, 92, 33};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	printf("The largest element in the array is: %d\n",find_max(numbers,size));

	return 0;
}
