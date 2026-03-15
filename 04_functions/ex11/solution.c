/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/15 11:42:32 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/15 11:47:03 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int sum_two(register int a, register int b)
{
	return (a + b);
}
int main()
{
	printf("Sum = %d",sum_two(50,75));

	return 0;
}

/*
Explanation (as part of the output):
The 'register' keyword suggests to the compiler that 'a' and 'b' should be
stored in a CPU register for fast access. In modern compilers, this keyword
is often ignored or automatically optimized where appropriate, as compilers
are usually better at register allocation than manual hints.
*/
