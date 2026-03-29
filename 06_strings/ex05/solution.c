/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/29 10:11:01 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/29 10:30:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int tt_strlen(char str[])
{
	int i =0 ;
	while(str[i] != '\0')
		i++;

	return i;
}
bool tt_strcomp(char str1[],char str2[])
{
	int len1 = tt_strlen(str1);
	int len2 = tt_strlen(str2);

	if(len1 != len2)
		return false;
	
	int i = 0;
	while(str1[i] != '\0' && str2[i] != '\0')
	{
		if(str1[i] != str2[i])
			return false;
		i++;
	}
	return true;
}

int main()
{
	char str1[] = "apple";
	char str2[] = "apile";

	bool comp = tt_strcomp(str1,str2);
	printf("The strings are %s.\n",(comp ? "identical" : "NOT identical"));

	return 0;
}
