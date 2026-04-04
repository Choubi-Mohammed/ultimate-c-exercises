/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/04 20:01:16 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/04 20:07:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr = NULL;

	ptr = (int *)malloc(2 * sizeof(int));

	if(ptr == NULL)
	{
		printf("Errors\n");
		exit(0);
	}

	ptr[0] = 10;
	*(ptr + 1) = 20;
	int i = 0;
	printf("Initial size 2 : ");
	while(i < 2)
	{
		printf("%d ",*(ptr + i));
		i++;
	}

	ptr = (int *)realloc(ptr,4 * sizeof(int));

	ptr[2] = 30;
	*(ptr + 3) = 40;

	i = 0;
	printf("\nNew size 4 : ");
	while(i < 4)
	{
		printf("%d ",*(ptr + i));
		i++;
	}

	free(ptr);
	ptr = NULL;

	return 0;
}

