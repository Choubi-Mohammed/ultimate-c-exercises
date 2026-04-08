/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/08 18:46:17 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/08 18:50:40 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int count_spec_char(char *str,char ch)
{
	int i = 0,counter = 0;
	while(str[i] != '\0')
	{
		if(str[i] == ch)
			counter++;
		i++;
	}
	return counter;
}
int main(int count,char *str[])
{
	if(count == 3)
	{
		char *s = str[1];
		char ch = *str[2];

		int res = count_spec_char(s,ch);

		printf("The string : %s\n",s);
		printf("The character '%c' appears %d times in the string.\n",ch,res);
	}

	return 0;
}
