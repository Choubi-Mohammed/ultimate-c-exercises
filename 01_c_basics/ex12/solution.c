/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 10:15:48 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 10:25:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
float simpleCalc(char opr,float num1,float num2)
{
	switch(opr)
	{
		case '+':
			return num1 + num1;
		case '-':
			return num1 - num2;
		case '*':
			return (num1 * num2);
		case '/' :
			return (num1 / num2);
		default :
			return 0;
	}
}
int main()
{
	char opr;
	float num1,num2;

	printf("Enter operator : ");
	scanf("%c",&opr);

	printf("Enter two numbers : ");
	scanf("%f %f",&num1,&num2);

	float res = simpleCalc(opr,num1,num2);
	printf("%.2f %c %.2f = %.2f",num1,num2,opr,res);

	return 0;
}
