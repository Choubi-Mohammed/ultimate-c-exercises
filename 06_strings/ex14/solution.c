/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/31 11:10:52 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/31 11:39:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char to_lower(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
		return ch + 32;
	else
		return ch;
}
int main()
{
	char str[] = "Jessa";

	int freq[26] = {0};

	int i = 0;
	char ch;
	while(str[i] != '\0')
	{
		ch  = to_lower(str[i]);
		freq[ch - 'a']++;
		i++;
	}

	i = 0;
	while(i < 26)
	{
		if(freq[i] != 0)
			printf("'%c' : %d\n",(i + 'a'),freq[i]);
		i++;
	}
}
