// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//    int num,org,arm=0,rem;
//    printf("Enter number :");
//    scanf("%d",&num);
//    org=num;
//    while(num!=0)
//    {
//        rem=num%10;
//        arm=arm+rem*rem*rem;
//        num=num/10;
//    }
//    if(rev==org)
//    {
//        printf("num is arm");
//    }
//    else
//    {
//        printf("num is not arm");
//    }
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int noOfDigits=0,x=num;
    
    while(x!=0){
        x=x/10;
        noOfDigits=noOfDigits+1;
    }
    printf(" digits is %d\n",noOfDigits);
    
    int y=num;
    int rem=0,arm=0;
    while(y!=0){
        rem=y%10;
        arm=arm+pow(rem,noOfDigits);
        y=y/10;
    }
    if(arm==num){
        printf("Number is Armstrong.");
    }
    else{
        printf("Number is NOT Armstrong.");
    }
    
}


#include<stdio.h>
#include<math.h>

int main()
{
    int rem=0,arm=0,i=0,armStrongNumbers[9999999999];
    for(int num=0;num<9999999999;num++)
    {
        int x=num,y=num,noOfDigits=0;
        while(x!=0){
        x=x/10;
        noOfDigits=noOfDigits+1;
    }
    while(y!=0){
        rem=y%10;
        arm=arm+pow(rem,noOfDigits);
        y=y/10;
    }
        if(num==arm){
            armStrongNumbers[i]=num;
            i=i+1;
        }



    }
    for(int y=0;y<45;y++)
    {
        printf("Armstrong Numbers Are:\n%d",armStrongNumbers[y]);
    }
}




#include<stdio.h>
#include<math.h>

int main()
{
    int rem=0,arm=0,i,armStrongNumbers[10];
    for(int num=0;num<11;num++)
    {
        int x=num,y=num,noOfDigits=0;
        while(x!=0){
        x=x/10;
        noOfDigits=noOfDigits+1;
    }
    while(y!=0){
        rem=y%10;
        arm=arm+pow(rem,noOfDigits);
        y=y/10;
    }
        if(num==arm){
            armStrongNumbers[i]=num;
            i=i+1;
        }



    }
    for(int y=0;y<5;y++)
    {
        printf("Armstrong Numbers Are:\n%d",armStrongNumbers[y]);
        printf("\n");
    }
}