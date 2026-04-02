/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/02 09:52:49 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/02 10:03:33 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char to_lower(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
		return ch +32;
	else
		return ch;
}
int main()
{
	char str[] = "successfully";
	int freq[26] = {0};

	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
			freq[to_lower(str[i] - 'a')]++;
		i++;
	}
	int high_fr = 0,char_i = 0;
	i = 0;
	while(i < 26)
	{
		if(freq[i] > high_fr)
		{
			high_fr = freq[i];
			char_i = i;
		}
		i++;
	}
	printf("String: %s\n",str);
	printf("Highest frequency character: '%c' (Count : %d)\n",(char_i + 'a'),high_fr);
}
