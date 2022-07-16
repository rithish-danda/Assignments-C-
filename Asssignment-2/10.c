// 10
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    printf("Input: ");
    scanf("%d",&n);
    m = floor(n/10)*10;
    printf("The required number is %d",m);
    return 0;
}
