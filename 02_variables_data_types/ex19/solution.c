/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 21:55:17 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 21:58:47 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char ch1,ch2;
	printf("Enter two character : ");
	scanf("%c %c",&ch1,&ch2);

	int sum = ch1 + ch2;
	printf("the sum of two character  %c = %d, %c = %d : %d\n",ch1,ch1,ch2,ch2,sum);

	return 0;
}
