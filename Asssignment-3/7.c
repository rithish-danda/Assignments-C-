// a03 07
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("Input the coefficients a,b,c respectively: ");
    scanf("%d%d%d",&a,&b,&c);
    d = (b*b)-(4*a*c);
    if (d>0)
        printf("Real and distinct");
    else if(d<0)
        printf("Imaginary roots");
    else
        printf("Real and Equal");
    return 0;
}
