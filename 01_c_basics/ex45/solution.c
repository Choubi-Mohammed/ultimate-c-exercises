/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/09 11:39:53 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/09 11:51:59 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[3] = {42,22,13};
	int *ptr = arr;
	printf("Value of the first element (arr[0]): %d\n",*ptr);
	printf("Value of the second element (arr[1] via pointer arithmetic): %d\n",*(ptr+1));
	ptr++;
	printf("Value of the second element (*p after increment): %d\n",*ptr);


}

