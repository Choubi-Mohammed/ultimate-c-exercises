/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/07 17:08:02 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/07 17:20:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[6] = {55, 12, 89, 7, 42, 60};

	int j = 0;
	printf("Array elements: ");
	while(j  < 6)
	{
		printf("%d ",arr[j]);
		j++;
	}

	int max = arr[0];
	int min = arr[0];

	int i = 1;
	while(i < 6)
	{
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
		i++;
	}
	printf("\nMaximum elements : %d\n",max);
	printf("Minimum elements : %d\n",min);

	return 0;
}
