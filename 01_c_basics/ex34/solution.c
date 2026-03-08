/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/08 10:38:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/08 11:12:42 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char str[] = "Programming In C is fun.";;

	int vowels = 0;
	int constetent = 0;

	int i = 0;
	while(str[i] != '\0')
	{
		char ch = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i] + 32) : (str[i]);


		if(ch >= 'a' && ch <= 'z')
		{
			if(ch == 'a' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'e')
				vowels++;
			else
				constetent++;
		}
		i++;
	}

	printf("string : %s\n",str);
	printf("Total vowels : %d\n",vowels);
	printf("Total constetent : %d\n",constetent);

	return 0;
}
