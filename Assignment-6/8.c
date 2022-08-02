// a06 08
#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Input any number: ");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if(n%i==0)
            count+=1;
    }
    if(count>0)
        printf("%d is not a prime number",n);
    else
        printf("%d is a prime number",n);
    return 0;
}
