/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/30 07:17:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/30 07:20:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int first_acc(char str[],char target)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == target)
			return i;
		i++;
	}
	return -99;
}
int main()
{
	char str[] = "programming";
	char target = 'g';

	int pos = first_acc(str,target);
	printf("First occurrence of '%c' found at index: %d\n",target,pos);

	return 0;
}
