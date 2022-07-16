// 11
#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,sum=0,rem;
    printf("Input: ");
    scanf("%d",&n);
    n1=n;
    while(n1>0)
    {
        rem = n1%10;
        sum += rem;
        n1 = floor(n1/10);
    }
    printf("Output: %d%d",n,sum);
    return 0;
}
