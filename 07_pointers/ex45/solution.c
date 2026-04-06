/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/06 09:35:20 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/06 09:50:33 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arrA[] = {10, 20, 30};
	int sizeA = sizeof(arrA) / sizeof(arrA[0]);
	int arrB[] = {40, 50, 60, 70};
	int sizeB = sizeof(arrB) / sizeof(arrB[0]);
	int size = sizeA + sizeB;
	int arrM[size];
	int *ptr = arrM;
	int i = 0;
	while(i < sizeA)
	{
		*ptr = arrA[i];
		ptr++;
		i++;
	}

	i = 0;
	while(i < sizeB)
	{
		*ptr = arrB[i];
		ptr++;
		i++;
	}

	printf("Merged array : ");
	i = 0;
	while(i < size)
	{
		printf("%d ",arrM[i]);
		i++;
	}

	return 0;
}
