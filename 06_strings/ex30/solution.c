/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/02 11:55:31 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/02 12:10:21 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
struct sturl_parser
{
	char protocol[6];
	char domain[30];
	char path[50];
};
struct sturl_parser url_parser(char url[])
{
	struct sturl_parser p;
	int i = 0,j = 0;;
	while(url[i] != ':')
	{
		p.protocol[j++] = url[i++];
	}
	p.protocol[j] = '\0';
	i = 8;
	j = 0;
	
	while(url[i] != '/')
	{
		p.domain[j++] = url[i++];
	}
	p.domain[j] = '\0';
	j = 0;
	while(url[i] != '\0')
	{
		p.path[j++] = url[i++];
	}
	p.path[j] = '\0';

	return p;
}

void print_struct(struct sturl_parser p)
{
	printf("Protocol : %s.\n",p.protocol);
	printf("Domain : %s.\n",p.domain);
	printf("Path : %s.\n",p.path);
}

int main()
{
	struct sturl_parser p;
	char url[] = "https://pynative.com/c-programming-string-exercises/exercise";
	printf("URL : %s\n",url);
	p = url_parser(url);
	print_struct(p);

	return 0;
}
