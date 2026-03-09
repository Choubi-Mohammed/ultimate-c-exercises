/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/09 11:09:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/09 11:17:07 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int num;
	num = 1337;

	int *ptr;
	ptr = &num;

	printf("Value of num = %d\n",num);
	printf("Address of num = %p\n",&num);
	printf("Value stored in ptr = %p\n",ptr);
	printf("Value retrieved by *ptr = %d\n",*ptr);

	return 0;
}
