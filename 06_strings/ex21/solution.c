/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/01 11:01:44 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/01 11:14:38 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int tt_strlen(char str[])
{
	int i = 0;
	while(str[i] != '\0')
		i++;

	return i;
}
int main()
{
	char str1[] = "Hello ,Friend";
	char str[] = "programming";
	int len = tt_strlen(str);

	printf("Original string: %s\n", str);
	char tmp;
	int start = 0;
	int end = len - 1;
	while(start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}


	
	printf("Reversed string: %s\n", str);
}
