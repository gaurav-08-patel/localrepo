// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,n1=0,n2=1,a,i;
    printf("Enter terms :");
    scanf("%d",&n);
    printf("the series is %d %d ",n1,n2);
    for(i=2;i<n;i++)
    {
        a=n1+n2;
        printf("%d\t",a);
        n1=n2;
        n2=a;
    }

    return 0;
}