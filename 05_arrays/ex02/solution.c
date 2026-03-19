/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/19 10:47:31 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/19 10:56:05 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	int size = sizeof(arr) / sizeof(arr[0]);

	int sum = 0;
	float avg = 0;

	int i = 0;
	while(i < size)
	{
		sum += arr[i];
		i++;
	}

	avg = sum / size;

	printf("Sum of array elements: %d\n",sum);
	printf("Average of array elements: %.2f\n",avg);

	return 0;
}
