#include <stdio.h>
int main()
{int n,lsb;
printf("enter any number ");
scanf("%d",n);
lsb=n/100%10;
printf("the first lsb is %d",lsb);
return 0;
}
