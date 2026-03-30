/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/30 06:34:10 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/30 06:45:12 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	main(void)
{
	char	str[20] ="HeLlO wOrLd 123";;

	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}

	printf("Toggled string: %s\n",str);

	return (0);
}
