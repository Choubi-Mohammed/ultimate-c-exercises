/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/10 10:45:13 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/10 10:58:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void print_highest_freq(char *s)
{
	int i = 0;
	int freq[256] = {0};
	while(s[i] != '\0')
	{
		freq[(int)s[i]]++;
		i++;
	}

	i = 0;
	int highest_fr = 0;
	char highest_ch;
	while(i < 256)
	{
		if(highest_fr < freq[i])
		{
			highest_fr = freq[i];
			highest_ch = i;
		}
		i++;
	}
	printf("Highest freqency character : '%c' (count : %d)\n",highest_ch,highest_fr);
}
int main(int count,char *strs[])
{
	if(count == 2)
	{
		print_highest_freq(strs[1]);
	}
	return 0;
}

