/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/05 17:04:55 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/05 17:09:20 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int a,b,c;
	a = 14;
	b = 90;
	c = 111;

	if(a > b)
		printf("A(%d) is the largest number.\n",a);
	else if(b > c)
		printf("B(%d) is the largest number.\n",b);
	else
		printf("C(%d) is the largest number.\n",c);

	return 0;
}
