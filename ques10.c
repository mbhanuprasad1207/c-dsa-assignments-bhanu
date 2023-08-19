#include<stdio.h>
int main()
{int n,f,m,M,l,t1,t2,changed;
printf("Enter any 4 digit number");
scanf("%d",&n);
f=n/1000;
t1=n%1000;
m=t1/100;
t2=t1%100;
M=t2/10;
l=t2%10;
printf("the digits are in order is %d ,%d ,%d ,%d",f,m,M,l);
changed=f*1000+m*100+M*10+l*0;
printf("The last digit with zero variable id %d",changed);
return 0;
} 