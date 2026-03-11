/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/11 11:50:22 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/11 11:52:28 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr = 20;

	int sum = 0;
	int i = 1;
	while(i <= nbr)
	{
		if(i % 2 == 0)
			sum += i;
		i++;
	}

	printf("Sum of even numbers = %d\n",sum);
	return 0;
}
