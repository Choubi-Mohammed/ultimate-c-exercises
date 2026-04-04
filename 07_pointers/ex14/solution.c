/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/04 09:35:56 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/04 09:38:11 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char *str = "Hello, friend!";
	printf("Printing characters : \n");
	while(*str != '\0')
	{
		printf("%c\n",*str);
		str++;
	}

	return 0;
}
