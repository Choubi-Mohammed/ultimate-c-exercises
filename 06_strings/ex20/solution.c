/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/01 09:00:29 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/01 10:51:33 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int first_acc(char str[],char target,int start_i)
{
	int i = start_i;
	while(str[i] !='\0')
	{
		if(str[i] == target)
			return i;
		i++;
	}
	return -99;
}

bool is_match(char haystack[],char needle[],int start_i)
{
	int i = start_i;
	int j = 0;
	while(needle[j] != '\0')
	{
		if(needle[j] != haystack[i])
			return false;
		j++;
		i++;
	}
	return true;
}

int search_subs(char haystack[],char needle[])
{
	int i = 0;
	int f_acc = 0;
	while(haystack[i] !='\0')
	{
		f_acc = first_acc(haystack,needle[0],i);
		if(is_match(haystack,needle,f_acc) == true)
			return f_acc;
		i = f_acc;
		i++;
	}
	return 99;
}
int search_substr(char haystack[],char needle[])
{
	int i = 0,j = 0;
	int index = -1;

	while(haystack[i] != '\0')
	{
		j = 0;
		while(needle[j] != '\0')
		{
			if(haystack[i+j] == '\0' || haystack[i + j] != needle[j])
				break;
			j++;
		}
		if(needle[j] == '\0')
		{
			index = i;
			break;
		}
		i++;
	}
	return index;
}
int main()
{
	char haystack[] = "This is a search test";
	char needle[] = "search";

	int index = search_substr(haystack,needle);
	printf("Haystack: \"%s\"\n",haystack);
	printf("Needle: \"%s\"\n",needle);
	printf("Substring found at index: %d",index);
}
