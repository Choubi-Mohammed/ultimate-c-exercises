/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/10 09:24:44 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/10 09:44:30 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void remove_char(char *s,int pos)
{
	while(s[pos] != '\0')
	{
		s[pos] = s[pos+1];
		pos++;
	}
}
char *remove_dup(char *s)
{
	int i = 0,j = 0;
	while(s[i] != '\0')
	{
		j = i + 1;
		while(s[j] != '\0')
		{
			if(s[i] == s[j])
				remove_char(s,j);
			j++;
		}
		i++;
	}
	return s;
	
}
int main(int count,char *str[])
{
	if(count == 2)
	{
		printf("Original : %s\n",str[1]);
		char *s = remove_dup(str[1]);
		printf("No duplicates : %s\n",s);
	}
	return 0;
}
