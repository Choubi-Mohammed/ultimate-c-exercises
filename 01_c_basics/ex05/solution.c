/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/05 11:25:34 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/05 11:35:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	float princibal,rate,time;
	princibal = 1000;//for example you wnat to put many in a bank this is 1000 dollars.
	rate = 8;//this rate of the princibal of your many.
	time = 3;//and this for time example 3 years.

	float simpleInterset = (princibal * rate * time) / 100;

	printf("Simeple Interest is : %.2f",simpleInterset);

	return 0;
}

