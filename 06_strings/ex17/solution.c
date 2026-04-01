/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/31 16:49:52 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/01 13:00:47 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char str[] = "C  programming   is   fun";

	int read_i = 0,write_i = 0;
	bool inword = false;
	while(str[read_i] != '\0')
	{
		if(str[read_i] != ' ')
		{
			inword = true;
			str[write_i++] = str[read_i];
		}
		if(str[read_i] == ' ' && inword)
		{
			inword = false;
			str[write_i++] = str[read_i]; 
		}
		read_i++;
	}
	if(str[write_i - 1] == ' ')
		str[write_i-1] = '\0';
	str[write_i] = '\0';

	printf("Normalized string: \"%s\"\n", str);
}
