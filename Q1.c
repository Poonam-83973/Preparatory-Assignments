#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Run application like : ./demo07 <op1> <opr> <op2>\n");
		return -1;
	}

	int op1 = atoi(argv[1]);
	int op2 = atoi(argv[2]);
	int result;
	
	if(op1 > op2)
		printf("The %d is greater than %d\n",op1,op2);
	else
		printf("The %d is greater than %d\n",op2,op1);

	return 0;
}


