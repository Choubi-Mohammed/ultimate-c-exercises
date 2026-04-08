/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/08 10:28:39 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/08 11:19:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *tt_strcpy(char *src,char *dest)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
int main()
{
		char *src = "Hello world!";
		char dest[20];
		printf("Source : \"%s\"\n",src);
		printf("Destination : \"%s\"\n",tt_strcpy(src,dest));


	return 0;
}
