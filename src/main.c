#include <stdio.h>
#include <espl_lib.h>
#include <stdbool.h>

int main (void)
{
	char decision;
	do
	{
		printf("Enter a whole number:\n");
		unsigned int num;
		scanf("%u", &num);
		char* dnum = num_to_words(num);
		printf("The number is %s\n", dnum);
		printf("Do you want to enter another number? (Y/N)\n");
		scanf("%*c%c", &decision);
	}
	while (decision == 'Y');
	if (decision != 'N')
	{
		printf("Invalid input\n");
	}				
}
