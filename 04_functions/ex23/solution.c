/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/17 14:06:47 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/17 14:09:38 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

#define SQUARE(x) (x * x)

int main()
{
    int a = 5;
    int b = 3;
    int result_a, result_b;

    // Preprocessor replaces SQUARE(a) with ((a) * (a))
    result_a = SQUARE(a);
    printf("SQUARE(%d) = %d\n", a, result_a); // 25

    // Preprocessor replaces SQUARE(b + 1) with ((b + 1) * (b + 1))
    result_b = SQUARE(b + 1);
    printf("SQUARE(%d + 1) = %d\n", b, result_b); // 16

    return 0;
}

