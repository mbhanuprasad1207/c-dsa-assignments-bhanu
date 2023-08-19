#include<stdio.h>
int main()
{int n,d;
printf("enter any 3 digit number");
scanf("%d",&n);
printf("enter any digit");
scanf("%d",&d);
n=n*10+d;
printf("the 4 digit number is %d",n);
return 0;
}