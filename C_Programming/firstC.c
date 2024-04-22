// Online C compiler to run C program online
#include<stdio.h>
int main() 
{
int A[10][10],B[10][10],sum[10][10],i,j;
printf("Enter values in matrix A:");
for(i=1;i<=3;i++)
{
    for(j=1;j<=3;j++)
    {
        printf("Enter value in A[%d][%d]",i,j);
        scanf("%d",&A[i][j]);
    }
}
printf("Enter values in matrix B:");
for(i=1;i<=3;i++)
{
    for(j=1;j<=3;j++)
    {
        printf("Enter value in B[%d][%d]",i,j);
        scanf("%d",&B[i][j]);
    }
}
for(i=1;i<=3;i++)
{
    for(j=3;j<=3;j++)
    {
        sum[i][j]=A[i][j]+B[i][j];
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
    
}





return 0;
}

