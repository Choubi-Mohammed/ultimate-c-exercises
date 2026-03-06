/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 10:04:01 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 10:14:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int year;
	printf("Enter  year : ");
	scanf("%d",&year);

	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		printf("%d is a LEAP YEAR.\n",year);
	else
		printf("%d is NOT a LEAP YEAR.\n",year);

	return 0;
}
