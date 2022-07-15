// 04
#include<stdio.h>
int main()
{
    int a,b;
    printf("Input any two variables: ");
    scanf("%d%d",&a,&b);
    printf("Before Swapping: %d and %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping: %d and %d",a,b);
    return 0;
}
