/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 22:02:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 22:04:04 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main() {
    double large_num = 1234567890.12345;
    double small_num = 0.00000000123;

    printf("Large number in standard format: %f\n", large_num);
    printf("Large number in exponential format: %e\n", large_num);

    printf("Small number in exponential format: %e\n", small_num);

    return 0;
}
