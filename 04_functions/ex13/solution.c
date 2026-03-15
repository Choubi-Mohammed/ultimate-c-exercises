/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/15 12:10:56 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/15 12:14:09 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int fact(int n)
{
	if(n == 0)
		return 1;
	return n * fact(n-1);
}

int main()
{
	int nbr = 3;

	printf("%d! = %d\n",nbr,fact(nbr));

	return 0;
}
