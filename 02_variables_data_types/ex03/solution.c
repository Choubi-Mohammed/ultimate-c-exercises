/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 11:26:15 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 11:29:28 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);

	int ASCII_V = ch;
	printf("character : %c, ASCII Value : %d\n",ch,ASCII_V);

	return 0;
}
