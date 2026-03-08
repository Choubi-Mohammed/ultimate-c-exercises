/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/08 16:53:06 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/08 21:16:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct  stStudent
{
	char name[20];
	int roll_nbr;
	float marks;
};

int main()
{
	struct stStudent student[3];

	int i = 0;
	while(i < 3)
	{
		printf("--- Enter Data for Student %d ---\n",i+1);
		printf("Name : ");
		scanf("%s",&student[i].name);
		printf("Roll number : ");
		scanf("%d",&student[i].roll_nbr);
		printf("Marks : ");
		scanf("%f",&student[i].marks);
		i++;
	}

	printf("\n--- All Student Records ---\n");
	int j = 0;
	while(j < 3)
	{
		printf("Student %d : \n",j+1);
		printf("Name : %s\n",student[j].name);
		printf("Roll number : %d\n",student[j].roll_nbr);
		printf("Marks : %.2f%\n\n",student[j].marks);
		j++;
	}

	return 0;
}
