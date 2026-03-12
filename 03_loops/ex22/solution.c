/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/12 13:16:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/12 13:23:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr;
	printf("Enter a number : ");
	scanf("%d",&nbr);
	int i = 2;
	bool isprim = true;
	 while(i <= (nbr/2))
	 {
		if(nbr % i == 0)
		{
			isprim = false;
			break;
		}
		i++;
	 }

	 if(isprim)
		 printf("%d is a PRIME number.\n",nbr);
	 else
		 printf("%d is NOT a PRIME number.\n",nbr);

	 return 0;
}
