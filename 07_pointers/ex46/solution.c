/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/06 09:52:02 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/06 10:00:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool is_pali(int *ptr,int size)
{
	int *start = ptr;
	int *end = (ptr+ (size - 1));
	while(start < end)
	{
		if(*start != *end)
			return false;
		start++;
		end--;
	}
	return true;
}

void print_res(int *ptr,int size)
{
	bool res = is_pali(ptr,size);
	if(res == true)
		printf("Array is a palindrom.\n");
	else
		printf("Array is NOT a palindrom.\n");
}
int main()
{
	int arr1[] = {1, 2, 3, 2, 1}; // Palindrome
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[] = {1, 2, 3, 4, 5}; // Not a palindrome
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	
	print_res(arr1,size1);
	print_res(arr2,size2);

	return 0;
}
