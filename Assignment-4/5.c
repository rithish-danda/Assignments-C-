// a04 05
#include<stdio.h>
int main()
{
    int n=10,i=1;
    while(i<=10)
        {
            if(n%2!=0)
                printf("%d\n",n);
            i++;
            n=n-1;
        }
    return 0;
}
