/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/13 11:40:06 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/13 11:54:59 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr = 9;

	int s1 = 0;
	int s2 = 1;
	int next = s1 + s2;
	printf("%d %d ",s1,s2);
	int i = 3;
	while(i <= nbr)
	{
		printf("%d ",next);
		s1 = s2;
		s2 = next;
		next = s1 + s2;
		i++;
	}

	return 0;
}
