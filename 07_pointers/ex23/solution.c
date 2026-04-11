/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/11 11:49:20 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/11 11:51:21 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int x = 13,y = 42;
	printf("Before swap : x = %d,y = %d\n",x,y);
	swap(&x,&y);
	printf("After swap : x = %d,y = %d\n",x,y);

	return 0;
}
