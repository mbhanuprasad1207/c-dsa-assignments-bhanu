#include <stdio.h>

int main()
{int a,b;
printf("Enter ant two numbers");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
    printf("the swapped values are %d and %d",a,b);

    return 0;
}
