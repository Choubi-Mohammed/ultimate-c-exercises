/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/15 12:33:45 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/15 17:03:45 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int tial_fact(int n,int acc)
{
	if(n == 0)
		return acc;
	return tial_fact(n-1,n * acc);
}

int fact(int n)
{
	return tial_fact(n, 1);
}
int main()
{
	int nbr = 5;
	int res =fact(nbr);

	printf("Factorial of %d (Tail Recursion) is: %d\n",nbr,res);

	return 0;
}
