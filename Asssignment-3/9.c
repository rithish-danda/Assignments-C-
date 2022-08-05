// a03 09
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input any 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b)&&(a>=c))
        if ((a==b)||(a==c))
            printf("\n%d",a);
    else if((b>=c)&&(b>=a))
        if ((b==a)||(b==c))
            printf("\n%d",b);
    else if((c>=a)&&(c>=b))
        if((c==a)||(c==b))
            printf("\n%d",c);
    return 0;
}
