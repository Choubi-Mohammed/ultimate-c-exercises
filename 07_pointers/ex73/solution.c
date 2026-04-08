/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/08 10:28:39 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/08 10:49:46 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void tt_strcpy(char *src,char *dest)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
int main(int count,char *ar[])
{
	if(count == 2)
	{
		char *src = ar[1];
		char dest[20];
		tt_strcpy(src,dest);
		printf("Source : \"%s\"\n",src);
		printf("Destination : \"%s\"\n",dest);
	}

	return 0;
}
