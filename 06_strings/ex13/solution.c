/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/30 07:21:45 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/30 07:25:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int last_acc(char str[],char target)
{
	int i = 0;
	int index = 0;
	while(str[i] != '\0')
	{
		if(str[i] == target)
			index = i;
		i++;
	}
	return index;
}

int main()
{
	char str[] = "programming";
	char target = 'g';

	int pos = last_acc(str,target);

	printf("Last occurrence of '%c' found at index: %d\n",target,pos);

	return (0);
}
