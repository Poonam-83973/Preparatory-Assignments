#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int fact=1;
    for(i=1;i<=n;i++){
        fact=i*fact;
    }
    printf("The factorial of %d is : %d",n,fact);
    return 0;
}