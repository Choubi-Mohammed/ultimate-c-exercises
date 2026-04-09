/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/09 18:17:49 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/09 19:29:24 by shobeedev            tfaaty fi l3oolaa   */
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
bool is_space(char ch)
{
	return (ch ==  ' ' || ch == '\t');
}
char *remove_extra_space(char *s)
{
	int read = 0,write = 0;
	int inword = 0;
	while(s[read] != '\0')
	{
		if(is_space(s[read]) && inword == 1)
		{
			inword = 0;
			s[write++] = s[read];
		}
		if(!is_space(s[read]) && inword == 0 || !is_space(s[read]) && inword == 1)
		{
			inword = 1;
			s[write++] = s[read];
		}
		read++;
	}
	s[write] = '\0';
	return s;
}

void rev_str(char *s,char *e)
{
	char *start = s;
	char *end = e;

	while(start < end)
	{
		swap(start,end);
		start++;
		end--;
	}
}

char *rev_words(char *s)
{
	s = remove_extra_space(s);
	int i = 0;
	int len =tt_strlen(s);
	rev_str(s,(s + len - 1));
	char *start = NULL;
	char *end = NULL;
	int inword = 0;
	while(i < len)
	{

		if(s[i] != ' ' && inword == 0)
		{
			inword = 1;
			start = (s + i);
		}
		if(s[i] == ' ' && inword == 1 || s[len] == s[i+1])
		{
			inword = 0;
			if(s[len] == s[i+1])
				end= (s + (i));
			else
				end= (s + (i - 1));
			rev_str(start,end);
			
		}
		i++;
	}
	return s;
}

int main(int count,char *str[])
{
	if(count == 2)
	{
		printf("Original : \"%s\".\n",str[1]);
		char *s = rev_words(str[1]);
		printf("Reversed words : \"%s\".\n",s);
	}
	return 0;
}



