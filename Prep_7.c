/*
	Q7. Write a program to accept a number from user using command line
	argument and display its table.
*/

#include<stdio.h>
int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Please go through command\n");
		return -1;
	}

	int num = atoi(argv[1]);
	int table=1;
	for(int i=1;i<=10;i++)
	{
		table=num*i;
		printf("%d\n",table);

	}

	return 0;
}
