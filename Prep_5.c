#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c); 
  
  	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		if(c >= 65 && c <= 90)
			printf("The entered character %c is Uppercase character\n",c);
		else
			printf("The entered character %c is Lowercase character\n",c);
	
	else if(c >= 48 && c <= 57)
		printf("The entered character %c is digit\n",c);
		
	else if(c== 32)
		printf("The space is entered\n");
	
	else if(c == 9)
		printf("tab is pressed\n");

	else if(c == 13)
		printf("carraige return\n");

	else if(c == 10)
		printf("New line\n");

	else
		printf("character not in list\n");

	return 0;
}
