/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/07 19:18:17 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/07 19:25:28 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int tt_strlen(char str[])
{
	int len = 1;
	while(str[len] != '\0')
		len++;
	return len;
}

int main()
{
	char str[100];
	printf("Enter a string : ");
	scanf("%s",str);

	int len = tt_strlen(str);
	printf("The length of string is : %d\n",len);

	return 0;
}

