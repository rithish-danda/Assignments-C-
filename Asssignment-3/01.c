// 01
#include<stdio.h>
int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d",&n);
    if(n>=0)
      printf("%d is Non-Negative",n);
    else
      printf("%d is Negative",n);
    return 0;
}
