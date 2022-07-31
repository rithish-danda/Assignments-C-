// a10 03
#include<stdio.h>
int oddEven(int x)
{
    if (x%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Input any integer: ");
    scanf("%d",&n);
    if (oddEven(n)==1)
        printf("Even");
    else
        printf("Odd");
}
