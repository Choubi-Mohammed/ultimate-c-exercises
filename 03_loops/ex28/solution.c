/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/13 14:20:50 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/13 14:23:20 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr = 10;

	int i = 1;
	while(i <= nbr)
	{
		if(nbr % i == 0)
			printf("%d ",i);
		i++;
	}

	return 0;
}
