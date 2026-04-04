/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/04 19:51:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/04 19:58:39 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int count = 10;
	
	float *ptr  = NULL;

	ptr = (float *)calloc(count, sizeof(float));

	if(ptr == NULL)
	{
		printf("Memomry allocation failde\n");
		exit(0);
	}

	printf("Verifying calloc initialization (should be 0.00):\n");
	printf("First element : %.2f\n",*ptr);
	printf("Last element : %.2f\n",*(ptr + count - 1));

	*(ptr + 5) = 13.37;
	printf("Element at index 5 after assignment %.2f\n",ptr[5]);

	free(ptr);
	ptr = NULL;
	return 0;
}
