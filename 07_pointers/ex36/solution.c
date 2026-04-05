/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 11:51:42 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 11:59:24 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void tt_arrcpy(int *src,int *dest,int size)
{
	int i = 0;
	while(i < size)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
}

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
	int src[5] = {1, 2, 3, 4, 5};
	int dest[5]; // Destination array
	int size = sizeof(src) / sizeof(src[0]);
	
	printf("Source array elements : ");
	print_arr(src,size);
	tt_arrcpy(src,dest,size);
	printf("Destination array elements : ");
	print_arr(dest,size);

	return 0;
}
