/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/08 17:35:15 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/08 17:43:32 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char to_upper(char ch)
{
	if(ch >= 'a' && ch <= 'z')
		return ch - 32;
	else
		return ch;
}

char *str_uppercase(char *str)
{
	char *s= str;
	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
			*str = to_upper(*str);
		str++;
	}

	return s;
}

int main()
{
	char str[] = "Just Shobee";
	char *s = str_uppercase(str);

	printf("Uppercase string : %s\n",s);

	return 0;
}
