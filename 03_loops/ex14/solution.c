/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/12 11:04:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/12 11:09:11 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int number = 9009;

	int nbr = number;
	int rem = 0;
	int rev_n = 0;
	while(nbr != 0)
	{
		rem = nbr % 10;
		rev_n = (rev_n * 10) + rem;
		nbr = nbr / 10;
	}

	if(number == rev_n)
		printf("%d is a PALINDROME number\n",number);
	else
		printf("%d is NOT a PALINDROME number\n",number);

	return 0;
}
