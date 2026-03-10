/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 11:43:54 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 11:51:05 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int a,b;

	a = 42;
	b = 1337;

	printf("Before swap : a = %d, b = %d\n",a,b);

	a = (a + b);
	b = a - b;
	a = a - b;

	printf("After swap : a = %d, b = %d\n",a,b);

	return 0;
}
