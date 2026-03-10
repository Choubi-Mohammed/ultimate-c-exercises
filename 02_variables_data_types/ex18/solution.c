/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 21:51:35 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 21:54:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int count = 7;
    float price = 3.50f;

    // Result of count * price is automatically a float (24.50)
    float total_float = count * price;

    // Explicitly cast the floating-point result to an integer
    int total_int = (int)(count * price);

    printf("Floating-point result: %.2f\n", total_float);
    printf("Casted integer result (truncation): %d\n", total_int);

}
