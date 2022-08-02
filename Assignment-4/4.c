// a04 04
#include<stdio.h>
void printOdd(int n)
{
    int x=1;
    for (int i=1;x<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            x++;
        }
    }
    return;
}
int main()
{
    printOdd(10);
    return 0;
}
