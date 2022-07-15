// 03
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input any two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before Swapping: %d and %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping: %d and %d",a,b);
    return 0;
}
