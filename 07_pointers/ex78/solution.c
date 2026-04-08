/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/08 17:55:17 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/08 18:01:39 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *toggle_case(char *s)
{
	int i = 0;
	while(s[i] != '\0')
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		else if(s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return s;
}

int main(int count,char *str[])
{
	if(count == 2)
	{
		char *s = toggle_case(str[1]);
		printf("Toggled string : %s\n",s);
	}
}
