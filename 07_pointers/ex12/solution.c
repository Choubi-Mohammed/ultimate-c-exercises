/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 18:08:10 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 18:12:21 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void tt_strcpy(char *src,char *dest)
{
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char src[] = "Pointer Mastery";
	char dest[50]; // Ensure destination buffer is large enough

	tt_strcpy(src,dest);

	printf("Source : %s\n",src);
	printf("Destination : %s\n",dest);

	return 0;
}
