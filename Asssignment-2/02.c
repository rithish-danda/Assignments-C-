// 02
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Input any number: ");
    scanf("%d",&n);
    n = floor(n/10);
    printf("The required number is %d",n);
    return 0;
}
