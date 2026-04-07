/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 10:40:11 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 10:49:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void rotate_right_one(int *tab,int size)
{
	int i = size - 1;
	int right_one = tab[i];
	while(i > 0)
	{
		tab[i] = tab[i-1];
		i--;
	}
	tab[0] = right_one;
}

void print_arr(int *tab,int size)
{
	int i = 0;
	while(i < size)
		printf("%d ",tab[i++]);
	printf("\n");
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int size  = 5;

	printf("Original array : ");
	print_arr(arr,size);

	rotate_right_one(arr,size);

	printf("Array after right rotation by one : ");
	print_arr(arr,size);

	return 0;
}
