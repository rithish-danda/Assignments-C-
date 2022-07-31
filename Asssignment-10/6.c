// a10 06
#include<stdio.h>
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
    return fact;
}
int main()
{
    int f,factorial;
    printf("Input a number: ");
    scanf("%d",&f);
    factorial=fact(f);
    printf("The factorial of %d id %d",f,factorial);
    return 0;
}
