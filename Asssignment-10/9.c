//a10 09
#include<stdio.h>
#include<math.h>
int digit(int n,int x)
{
    int i,count=0,n1;
    for(i=0;i<=n;i++)
        {
            n1=n%10;
            if (x==n1)
                count+=1;
            n=floor(n/10);
        }
    if(count>=1)
        return 1;
    else
        return 0;
}
int main()
{
    int a,b;
    printf("Input the number: ");
    scanf("%d",&a);
    printf("Input the target digit: ");
    scanf("%d",&b);
    if (digit(a,b)==1)
        printf("%d is present in %d",b,a);
    else
        printf("%d is not present in %d",b,a);
    return 0;
}
