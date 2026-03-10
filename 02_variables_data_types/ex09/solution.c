/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 11:55:22 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 11:59:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	float r = 5;
	const float PI = 3.14159;

	float area = PI * r * r;

	printf("The area of a circle with radius %.2f is %.2f\n",r,area);

	return 0;
}
