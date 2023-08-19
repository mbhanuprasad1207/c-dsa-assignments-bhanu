#include<stdio.h>
int main()
{int n,l,f,m,t1,rotate;
    printf(" Enter any 3 digit number");
    scanf("%d",&n);
    f=n/100;
    t1=n%100;
    l=t1%10;
    m=t1/10;
    printf(" The first digit is %d \n Middle digit is %d \n nd Last digit is %d \n",f,m,l);
    rotate=l*100+f*10+m;
    printf(" The right rotation of three digits by onr place is %d",rotate);
    return 0;
}