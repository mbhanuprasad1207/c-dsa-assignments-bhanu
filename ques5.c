#include<stdio.h>
int main()
{int n,l,f,m,t1,sum;
    printf(" Enter any 3 digit number");
    scanf("%d",&n);
    f=n/100;
    t1=n%100;
    l=t1%10;
    m=t1/10;
    printf(" The first digit is %d \n Middle digit is %d \n nd Last digit is %d \n",f,m,l);
    sum=f+m+l;
    printf(" The sum of three digits is %d",sum);
    return 0;
}