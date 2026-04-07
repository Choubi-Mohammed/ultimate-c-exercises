/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 10:20:27 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 10:30:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void print_arr(int *ptr,int size)
{
	int i = 0;
	while(i < size)
	{
		printf("%d ",ptr[i]);
		i++;
	}
	printf("\n");
}
int main()
{
	int arr[] = {10, 15, 22, 27, 34, 41, 50};
	int size = 7;

	int *tab = arr;
	int even[size],odd[size];
	int *tab_even = even,*tab_odd = odd;

	int i = 0,e = 0,o = 0;
	while(i < size)
	{
		if(tab[i] % 2 == 0)
			tab_even[e++] = tab[i];
		else
			tab_odd[o++] = tab[i];
		i++;
	}

	printf("Even Array : ");
	print_arr(tab_even,e);
	printf("Odd Array : ");
	print_arr(tab_odd,o);

	return 0;
}
