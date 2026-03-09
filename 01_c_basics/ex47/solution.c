/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/09 13:25:05 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/09 13:27:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int factorial(int n)
{
	if(n == 1 || n == 0)
		return 1;
	return (n * factorial(n-1));
}

int main()
{
	int num = 5;

	int res = factorial(5);
	printf("The factorial of %d is : %d\n",num,res);

	return 0;
}
