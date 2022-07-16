// 06
#include<stdio.h>
int main()
{
    int a,b;
    printf("Input any two numbers: ");
    scanf("%d%d",&a,&b);
    if(a==b || a>b)
        printf("%d",a);
    else
        printf("%d",b);
    return 0;
}
