/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/12 12:18:54 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/12 13:15:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr;
	printf("How many numbers will you enter (N)? : ");
	scanf("%d",&nbr);

	int n,largest,smallest;
	printf("Enter the numbers: \n");
	int i = 1;
	while(i <= nbr)
	{
		scanf("%d",&n);
	    if (i == 1)
		{
            smallest = n;
            largest = n;
        }
		if(n > largest)
			largest = n;
		if(n < smallest)
			smallest = n;
		i++;
	}

	printf("Largest number entered: %d\n",largest);
	printf("Smallest number entered: %d\n",smallest);

	return 0;
}
