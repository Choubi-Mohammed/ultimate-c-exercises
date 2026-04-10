/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/10 10:30:24 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/10 10:41:59 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int tt_strlen(char *s)
{
	int i = 0;
	while(s[i] != '\0')
		i++;
	return i;
}
void swap(char *a,char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
char *sort_str(char *s)
{
	int i = 0,j = 0,len = tt_strlen(s);
	int min_i,min;
	while(i < len)
	{
		j = i;
		min = 256;
		min_i = 0;
		while(j < len)
		{
			if(min > (int)s[j])
			{
				min = (int)s[j];
				min_i = j;
			}
			j++;
		}
		swap((s+i),(s+min_i));
		i++;
	}
	return s;
}
int main(int count,char *strs[])
{
	if(count == 2)
	{
		printf("Original : %s\n",strs[1]);
		char *s = sort_str(strs[1]);
		printf("Sorted : %s\n",s);
	}
	return 0;
}
