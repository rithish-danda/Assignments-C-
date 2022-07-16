// 04
#include<stdio.h>
int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d",&n);
    if(n&1==1)
        printf("%d is odd",n);
    else
        printf("%d is even",n);
    return 0;
}
