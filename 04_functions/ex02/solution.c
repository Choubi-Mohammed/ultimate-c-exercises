/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/14 12:08:05 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/14 12:10:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void add_numbers(int a,int b)
{
	int sum = a + b;
	printf("The sum of %d and %d is: %d\n",a,b,sum);
}

int main()
{
	add_numbers(15,7);
	add_numbers(100,25);

	return 0;
}
