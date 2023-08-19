#include<stdio.h>
int main()
{int n;
printf("enter any number");
scanf("%d",&n);
n=n/10;
printf("the number without its last digit is %d",n);
return 0;
}