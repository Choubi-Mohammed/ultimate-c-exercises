/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/14 13:21:36 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/14 13:29:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int global_counter = 0;
void update_global_counter()
{
	global_counter++;
	printf("Inside function: Global counter updated to %d\n",global_counter);
}

int main()
{
	printf("In main: Initial global counter = %d\n",global_counter);
	update_global_counter();
	update_global_counter();
	printf("In main: Final global counter = %d\n",global_counter);

}
