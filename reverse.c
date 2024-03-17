/*
	QQ12. Write a Program to reverse the letters present in the given String. Do
	not use strrev() function.
*/

#include<stdio.h>
#include<string.h>
char str[50];
char temp[50];
int i = 0;
int j = 0;
void main()
{
    printf("Enter the string you want to reverse\n");
    while(1)
    {       
        scanf("%c",&str[i]);
        if(str[i] == '\n')
        {
            str[i] == '\0';
            break;
        }
        i++;
    }
    printf("Reversing the string\n");
    while(i>=0)
    { 
        temp[j] = str[i];
        i--;
        j++;
    }
    strcpy(str,temp);
    printf("%s\n",str);
}
