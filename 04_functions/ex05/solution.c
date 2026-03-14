/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/14 12:22:06 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/14 12:25:34 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void increment(int n) {
    printf("Inside function: Value before increment: %d\n", n);
    n = n + 1; // Only the copy is modified
    printf("Inside function: Value after increment: %d\n", n);
}

int main() {
    int number = 10;

    printf("In main: Before function call, number = %d\n", number);

    increment(number); // The value 10 is copied to the 'n' parameter

    printf("In main: After function call, number = %d\n", number);

    return 0;
}
