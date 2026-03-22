/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/22 08:09:22 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/22 08:22:26 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool isPalindrome(int arr[],int size)
{
    int i = 0;
    while(i <= size/2)
    {
        if(arr[i] != arr[size - 1 - i])
            return false;
        i++;
    }
    return true;
}

int main()
{
    int arr1[] = {1, 2, 3, 2, 1}; // Palindrome
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1, 2, 3, 4, 5}; // Not a palindrome
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    if(isPalindrome(arr1,size1) == true)
        printf("Array 1 is a palindrome.\n");
    else
        printf("Array 1 is NOT a palindrome.\n");

    if(isPalindrome(arr2,size2) == true)
        printf("Array 2 is a palindrome.\n");
    else
        printf("Array 2 is NOT a palindrome.\n");

    return 0;
}
