/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/15 12:27:46 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/15 12:32:01 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int sum_digits(int n)
{
	if(n == 0)
		return 0;

	return ((n % 10) + sum_digits(n / 10));
}

int main()
{
	int nbr = 1337;

	int res = sum_digits(nbr);

	printf("The sum of digits of %d is: %d\n",nbr,res);

	return 0;
}
