/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/14 12:27:53 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/14 12:31:43 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 42,b = 1337;

	int *ptrA = &a, *ptrB = &b;

	printf("Before swap function : a = %d, b = %d.\n",a,b);
	swap(ptrA,ptrB);
	printf("After swap function : a = %d, b = %d.\n",a,b);

	return 0;
}
