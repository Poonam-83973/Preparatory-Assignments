#include<stdio.h>
int main(){
    int a,b,sum,n;
    a=1,b=1;
    printf("Enter the n number of series : ");
    scanf("%d",&n);
    sum=0;
    for(int i=1;i<=n;i++){
        a=b;
        b=sum;
        sum=a+b;   
        printf("the %dth fibonacci series is : %d\n",i,sum);
    }
    
    
    return 0;
}