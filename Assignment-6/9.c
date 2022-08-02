// a06 09
#include <stdio.h>
int main()
{
    int n1,n2,x;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
        x=n1;
    else
        x=n2;
    while(1)
    {
        if(x%n1==0 && x%n2==0)
        {
            printf("LCM of %d and %d is %d",n1,n2,x);
            break;
        }
        x++;
    }
    return 0;
}
