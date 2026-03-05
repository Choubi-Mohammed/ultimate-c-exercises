/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/05 16:46:54 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/05 16:51:27 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int a = 42;
	int b = 13;

	printf("---before swap---\n");
	printf("a = %d, b = %d\n",a,b);

	//swap without using third varaible.
	a = a + b;
	b = a - b;
	a = a - b;

	printf("---after swap---\n");
	printf("a = %d, b = %d\n",a,b);

	return 0;
}
