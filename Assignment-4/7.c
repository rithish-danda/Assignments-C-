// a04 07
#include<stdio.h>
void printEven(int n)
{
    int x=1;
    for (int i=1;x<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",2*n-i);
            x++;
        }
    }
    return;
}
int main()
{
    printEven(10);
    return 0;
}
