// a10 02
#include<stdio.h>
float simpleInterest(float p,float t,float r)
    {return (p*t*r)/100;}
int main()
{
    float p,t,r;
    printf("Input principle amt, time period, rate of interest respectively: ");
    scanf("%f%f%f",&p,&t,&r);
    float interest = simpleInterest(p,t,r);
    printf("The simple interest formed for %g of amount for %g interest over %g years is %g",p,r,t,interest);
    return 0;
}
