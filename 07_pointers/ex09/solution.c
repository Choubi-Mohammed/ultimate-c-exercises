/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 12:34:34 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 12:40:24 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int sum_arr(int *ptr,int size)
{
	int i = 0;
	int sum = 0;
	while(i < size)
	{
		sum += *(ptr + i);//ptr[i] same same.
		i++;
	}
	return sum;
}
int main()
{
	int numbers[] = {10, 5, 8, 2, 15};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	int sum = sum_arr(numbers,size);//or &numbers or &numbers[0].
	printf("The sum of array elements is: %d\n",sum);


	return 0;
}
