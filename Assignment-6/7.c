// a06 07
#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,n1,n,temp;
    printf("Input any number: ");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
        {
            temp=n1%10;
            n1=floor(n1/10);
            i++;
        }
    printf("There are %d digits in %d",i,n);
    return 0;
}
