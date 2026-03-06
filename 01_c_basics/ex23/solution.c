/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 17:25:37 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 17:28:12 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	for(int i = 1;i <= 20;i++)
	{
		if(i % 2 == 0)
			continue;
		printf("%d ",i);
	}

	return 0;
}
