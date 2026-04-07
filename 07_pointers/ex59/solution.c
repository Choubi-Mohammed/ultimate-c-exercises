/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 10:52:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 11:02:16 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void left_rotation_one(int *tab,int size)
{
	int i = 0;
	int left_one = tab[i];
	while(i < size - 1)
	{
		tab[i] = tab[i + 1];
		i++;
	}
	tab[i] = left_one;
}
void left_rotation_n(int *tab,int size,int n)
{
	int i = 0;
	while(i < n)
	{
		left_rotation_one(tab,size);
		i++;
	}
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
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int size = 7;
	int n = 3;
	printf("Original array : ");
	print_arr(arr,size);

	left_rotation_n(arr,size,n);

	printf("Array after left rotation by %d: ",n);
	print_arr(arr,size);

	return 0;
}

