// a10 10
#include<stdio.h>
void printPrime(int n)
{
    for (int i=2;i<=n/2;i++)
    {
        while(n%i==0)
        {
            printf("%d\t",i);
            n=n/i;
        }
    }
    return;
}
int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d",&n);
    printPrime(n);
    return 0;
}
