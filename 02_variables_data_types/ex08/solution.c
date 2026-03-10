/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 11:52:17 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 11:54:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char name[20];
	int age;

	printf("Enter your name : ");
	scanf("%s",&name);

	printf("Enter your age : ");
	scanf("%d",&age);

	printf("You are %d years old and your name is '%s'.\n",age,name);

	return 0;
}
