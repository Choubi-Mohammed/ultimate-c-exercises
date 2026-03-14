/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/14 13:15:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/14 13:20:33 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void test_static_scope()
{
	static int count = 1;
	printf("Static count retained value: %d\n",count);
	count++;
	printf("Static count after increment:: %d\n",count);
}

int main()
{
	printf("--- First Call ---\n");
	test_static_scope();
	printf("\n--- Second Call ---\n");
	test_static_scope();

	return 0;
}
