// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter no of values:");
    scanf("%d",&n);
    int a[n],i,j,r;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The value in ascending order is :\n");
    for(i=0;i<n+1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                r=a[i];
                a[i]=a[j];
                a[j]=r;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}