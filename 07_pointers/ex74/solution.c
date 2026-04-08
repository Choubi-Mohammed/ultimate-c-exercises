/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/08 10:54:40 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/08 11:26:18 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int tt_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}
char  *tt_strcat(char *s1,char *s2)
{
	int end = tt_strlen(s1);
	int i = 0;
	while(s2[i] !='\0')
		s1[end++] = s2[i++];
	s1[end] = '\0';

	return s1;
}

int main()
{
	char str1[50] = "Hello ";
	char str2[] = "World!";

	char *res = tt_strcat(str1,str2);

	printf("Concatenated strin : \"%s\"\n",res);


}
