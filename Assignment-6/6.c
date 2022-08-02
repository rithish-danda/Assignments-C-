// a06 06
#include<stdio.h>
int main()
{
    int fact=1,i=1,n;
    printf("Input any number: ");
    scanf("%d",&n);
    while(i<=n)
        {
            fact=fact*i;
            i++;
        }
    printf("Factorial of %d id %d",n,fact);
    return 0;
}
