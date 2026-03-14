/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/14 12:10:50 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/14 12:12:24 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int multiply(int a,int b)
{
	int prod = a * b;
	return prod;
}

int main()
{
	int a = 8,b = 6;
	int res = multiply(a,b);

	printf("%d * %d = %d\n",a,b,res);

	return 0;
}
