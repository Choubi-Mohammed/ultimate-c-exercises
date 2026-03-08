/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/08 11:15:17 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/08 11:28:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int main()
{
	char str[] = "   This   is   a t est   string   ";

	int counter = 0;
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] != ' ')
		{
			if(i == 0 || str[i - 1] == ' ')
				counter++;
		}
		i++;
	}

	printf("string : %s\n",str);
	printf("Total nnumber of words : %d\n",counter);

	return 0;
}
