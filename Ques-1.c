#include<stdio.h>
int main()
{int a;
printf("enter any number");
scanf("%d",&a);
a=a%10;
printf("the unit digit of the number is %d",a);
return 0;

}