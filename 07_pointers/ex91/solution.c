/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/09 17:58:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/09 18:06:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int tt_strlen(char *s)
{
	int len = 0;
	while(s[len] != '\0')
		len++;
	return len;
}
void swap(char *a,char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
char *reverse_str(char *s)
{
	char *start = s;
	char *end = (s + (tt_strlen(s)-1));

	while(start < end)
	{
		swap(start,end);
		start++;
		end--;
	}

	return s;
}

int main(int count,char *str[])
{
	if(count == 2)
	{
		printf("original string : %s\n",str[1]);
		char *rev_s = reverse_str(str[1]);
		printf("reversed string : %s\n",rev_s);
		
	}
}
