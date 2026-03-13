/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/13 11:00:58 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/13 11:17:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int num1 = 12, num2 = 18;

	int limit = (num1 > num2) ? num1 : num2;
	int i = 1;
	int nbr_div;
	while(i <= limit)
	{
		if(num1 % i == 0 && num2 % i == 0)
			nbr_div = i;
		i++;
	}

	printf("GCD of %d and %d is: %d\n",num1,num2,nbr_div);

	return 0;
}


