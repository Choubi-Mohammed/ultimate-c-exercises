/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/11 09:37:37 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/11 10:39:52 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
void allocate_memory(int **ptr)
{
	*ptr = (int *)malloc(sizeof(int));

	if(*ptr == NULL)
	{
		printf("error : memory failed!\n");
		return;
	}

	**ptr = 1337;

}
int main()
{
	int *data_ptr = NULL;
	printf("data_ptr address before call : %p \n",data_ptr);
	allocate_memory(&data_ptr);
	printf("data_ptr address after call : %p \n",data_ptr);
	printf("Value accessed via data_ptr : %d\n",*data_ptr);
	free(data_ptr);
	data_ptr = NULL;
}

