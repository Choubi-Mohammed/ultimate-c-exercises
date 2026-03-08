/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/08 11:53:02 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/08 12:45:48 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char str[] = "Jessa";
	printf("String : %s\n",str);
	int freq[26] = {0};


	int index, i = 0;
	while(str[i] != '\0')
	{
		char ch = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i]+32) : str[i];

		if(ch >= 'a' && ch <= 'z')
		{
			index = ch - 'a';
			freq[index]++;
		}
		i++;
	}

	printf("Character Frequencies: \n");
	int j = 0;
	while(j < 26)
	{
		if(freq[j] > 0)
			printf("%c : %d\n",'a' + j,freq[j]);
		j++;
	}
	return 0;
}
