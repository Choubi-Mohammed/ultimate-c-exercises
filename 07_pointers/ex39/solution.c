/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 13:01:10 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 18:07:13 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int size = 7;
	int arr[7] = {10, 50, 20, 80, 40, 90, 30};

	int *ptr = arr;

	int max = -2147483648,maax = -2147483648;
	int min = 2147483647,miin = 2147483647;

	int i = 0;
	while(i < size-1)
	{
		if(max < ptr[i])
		{
			maax = max;
			max = ptr[i];
		}
		if(min > ptr[i])
		{
			miin = min;
			min = ptr[i];
		}else if(ptr[i] < miin && min != ptr[i])
			miin = ptr[i];
		i++;
	}

	printf("%d\n",maax);
	printf("%d\n",miin);
}
