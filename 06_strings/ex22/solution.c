/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/01 11:15:22 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/01 11:24:48 by shobeedev            tfaaty fi l3oolaa   */
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

bool is_palindrome(char str[])
{
	int start = 0;
	int end = tt_strlen(str) - 1;

	while(start < end)
	{
		if(str[start++] != str[end--])
			return false;
	}
	return true;
}

int main()
{
	char str[] = "maadoaam";

	bool res = is_palindrome(str);

    printf("String: %s\n", str);
    if (res) {
        printf("Result: It is a palindrome.\n");
    } else {
        printf("Result: It is NOT a palindrome.\n");
    }


	return 0;
}
