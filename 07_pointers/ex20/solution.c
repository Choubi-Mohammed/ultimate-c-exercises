/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/10 17:49:29 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/10 18:06:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int num = 77;
    int *ptr1;      // Pointer to an integer
    int **ptr2;     // Pointer to a pointer to an integer

    ptr1 = &num;    // ptr1 stores the address of num
    ptr2 = &ptr1;   // ptr2 stores the address of ptr1

    printf("Original value (num): %d\n", num);

    // Accessing value through single pointer
    printf("Value via *ptr1: %d\n", *ptr1);

    // Accessing value through double pointer
    printf("Value via **ptr2: %d\n", **ptr2);

    // Demonstrating addresses
    printf("\nAddress of num: %p\n", &num);
    printf("Value stored in ptr1: %p\n", ptr1); // Same as address of num
    printf("Address of ptr1: %p\n", &ptr1);
    printf("Value stored in ptr2: %p\n", ptr2); // Same as address of ptr1

    return 0;
}
