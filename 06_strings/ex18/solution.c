/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/01 08:24:28 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/01 08:34:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

bool check_digit(char str[])
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
			return false;
		i++;
	}
	return true;
}

int main()
{
	char str1[] = "12345";
	char str2[] = "123a45";

	bool res = check_digit(str1);

	printf("String : %s\n",str1);
	if(res)
		printf("Result: Contains only digits.\n");
	else
		printf("Result: Contains non-digit characters.\n");

	return 0;
}
