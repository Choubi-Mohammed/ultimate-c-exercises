/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/08 16:35:35 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/08 16:50:46 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct Student
{
	char name[20];
	int roll_nbr;
	float percentage;
} Student;

int main()
{
	Student stRec;

	printf("Enter Student name : ");
	scanf("%s",&stRec.name);
	printf("Enter Roll number : ");
	scanf("%d",&stRec.roll_nbr);
	printf("Enter Percentage : ");
	scanf("%f",&stRec.percentage);

	printf("\n--- Student	Details ---\n");
	printf("Name : %s\n",stRec.name);
	printf("Roll number : %d\n",stRec.roll_nbr);
	printf("Percentage : %.2f%\n",stRec.percentage);

	return 0;
}
