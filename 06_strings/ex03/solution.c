/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/29 07:29:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/29 07:29:04 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ttstrlen(int str[])
{
    int i = 1;
    while(str[i] != '\0')
        i++;

    return i;
}
void tt_strcpy(char src[],char dest[])
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
int main()
{
    char src[20] = "Copy Me!";
    char dest[20];

    tt_strcpy(src,dest);

    printf("Source : %s\n",src);
    printf("Destination : %s\n",dest);

    return 0;
}
