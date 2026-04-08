/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/08 10:20:42 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/08 10:27:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int tt_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

int main(int count,char *arg[])
{
	if(count == 2)
	{
		printf("The string is : \"%s\"\n",*(arg + 1));
		int len = tt_strlen(arg[1]);
		printf("The length of the strings is : %d\n",len);
	}

	return 0;
}
