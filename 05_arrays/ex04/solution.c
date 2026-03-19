/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/19 11:01:07 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/19 11:03:48 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[8] = {1, 4, 7, 12, 15, 20, 3, 10};
	int size = sizeof(arr) / sizeof(arr[0]);

	int count_ev = 0,count_od = 0;
	int i = 0;
	while(i < size)
	{
		if(arr[i] % 2 == 0)
			count_ev++;
		else
			count_od++;
		i++;
	}

	printf("Total even elements: %d\n",count_ev);
	printf("Total odd elements: %d\n",count_od);

	return 0;
}
