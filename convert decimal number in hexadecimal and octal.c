// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int number = 0;
//     char choice = '\0';
//     int remainder = 0;
//     int binary_number = 0;
//     int i = 1;
//     printf("Enter the number whose conversion you want to do in the hexamdecimal , octal system and binary\n");
//     scanf("%d",&number);
//     fflush(stdin);
//     printf("Enter the conversion you want to perform H for hexadecimal, O for the octal and B for the binary\n");
//     scanf("%c",&choice);
//     switch(choice)
//     {
//         case 'H':
//             printf("The number in the hexamdecimal form is 0x%x",number);
//             break;
//         case 'O':
//             printf("The number in the octal form is the O%o",number);
//             break;
//         case 'B':
//             while( number != 0)
//             {
//             remainder = number%2;
//             number = number/2;
//             binary_number += remainder*i;
//             i*=10;
//             }
//            printf("The number in the binary form is the 0b%d",binary_number);
//            break;

//     }
// }




#include<stdio.h>
#include<conio.h>
char hex_[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int number_in_hex[16] = {0};
int number_in_octal[16] = {0};
int number_in_binary[16] = {0};
int i = 0,remainder = 0;
void hexconversion(int number);
void octalconversion(int number);
void binaryconversion(int number);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void hexconversion(int number)
{
  // printf("%d\n",number);
   if(number < 16)
   {
      
      number_in_hex[i] =  number;
      // printf("%d\n",number) ;
      
   }
   if(number >= 16)
   {
      remainder = number % 16;
      number_in_hex[i] =  remainder;
      number /= 16;
      i++;
      //printf("%d\n",i);
      // printf("%d\n",remainder) ;
      hexconversion(number); 
     
   }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void octalconversion(int number)
{
     // printf("%d\n",number);
   if(number < 8)
   {
      
      number_in_octal[i] =  number;
      // printf("%d\n",number) ;
      
   }
   if(number >= 8)
   {
      remainder = number % 8;
      number_in_octal[i] =  remainder;
      number /= 8;
      i++;
      //printf("%d\n",i);
      // printf("%d\n",remainder) ;
      octalconversion(number); 
     
   }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void binaryconversion(int number)
{
   i = 15;
   while(i>=0)
   {
      number_in_binary[i]= number & 1;
      number >>= 1;
      i--;
   }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void main()
{
  int n = 0;
  printf("Enter the decimal number whose hexamdecimal ,octal and binary conversion you required\n");
  scanf("%d",&n);
  hexconversion(n);
  printf(" Hexadecimal conversion of the  number is 0x");
  for(i = 15;i>=0;i--)
  printf("%c",hex_[number_in_hex[i]]);
  i = 0;
  printf("\n");
  printf(" Octal conversion of the  number is 0o");
  octalconversion(n);
  for(i = 15;i>=0;i--)
  printf("%d",number_in_octal[i]);
  printf("\n");
  printf(" Binary conversion of the number is 0b");
  binaryconversion(n);
  for(i = 0;i<16;i++)
  printf("%d",number_in_binary[i]);
}