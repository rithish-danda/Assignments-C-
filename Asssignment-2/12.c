// 12
#include<stdio.h>
int main()
{
    float inr = 76.23, x, usd;
    printf("Enter the amount in INR: ");
    scanf("%f",&x);
    usd = x/76.23;
    printf("%g INR = %g USD",x,usd);
    return 0;
}
