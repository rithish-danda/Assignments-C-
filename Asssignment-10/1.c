// a10 01
#include<stdio.h>
float areaCircle(float x)
{
    return (3.14*x*x);
}
int main()
{
    float r,area;
    printf("Input the radius: ");
    scanf("%f",&r);
    area = areaCircle(r);
    printf("The area of the circle with radius %g is %g",r,area);
    return 0;
}
