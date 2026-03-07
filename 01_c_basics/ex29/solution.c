/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/07 17:17:05 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/07 17:30:09 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int searchElem(int arr[],int key)
{
	int i = 0;
	while(i < 5)
	{
		if(arr[i] == key)
			return i;
		i++;
	}
	return -99;
}

int main()
{
	int arr[5] = {10, 25, 30, 45, 50};;
	int key;

	printf("Enter the element to search : ");
	scanf("%d",&key);
	int search =searchElem(arr,key);
	if(search == -99)
		printf("NOT found\n");
	printf("Element %d found at index %d\n",key,search);

	return 0;
}
