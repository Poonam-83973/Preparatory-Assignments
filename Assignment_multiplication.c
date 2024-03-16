#include<stdio.h>

void accept(int arr[3][3]);
void disp(int arr[3][3]);

int main(){
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("\n Please enter first array elements :\n");
    accept(a);
    printf("\n Please enter second array elements :\n");
    accept(b);
    printf("\n First Array Elements \n");
    disp(a);
    printf("\n Second Array Elements \n");
    disp(b);
    for(i=0;i<3;i++) // rows 
    {
        for(j=0;j<3;j++) // columns
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("\n Result Array Elements \n");
    disp(c);
    return 0;
}
void accept(int arr[3][3])
{
    int i,j;
    for(i=0;i<3;i++) // rows 
    {
        for(j=0;j<3;j++) // columns
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void disp(int arr[3][3])
{
    int i,j;
    for(i=0;i<3;i++) // rows 
    {
        for(j=0;j<3;j++) // columns
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
}