/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/05 16:55:26 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/05 16:59:07 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char letter;
	printf("Enter a character : ");
	scanf("%c",&letter);

	printf("The character is : %c\n",letter);
	printf("The ASCII value of the '%c' is : %d\n",letter,(int)letter);

	return 0;
}
