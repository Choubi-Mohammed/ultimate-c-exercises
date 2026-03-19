/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/19 10:56:51 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/19 11:00:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[6] = {55, 12, 89, 4, 30, 77};
	int size = sizeof(arr) / sizeof(arr[0]);

	int max = arr[0],min = arr[0];
	int i = 0;
	while(i < size)
	{
		if(max < arr[i])
			max = arr[i];
		if(min > arr[i])
			min = arr[i];
		i++;
	}

	printf("Maximum element in the array: %d\n",max);
	printf("Minimum element in the array: %d\n",min);

	return 0;
}
