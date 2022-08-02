// a05 05
#include<stdio.h>
void printOdd(int n)
{
    int x=1;
    for (int i=1;x<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",2*n-i);
            x++;
        }
    }
    return;
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printOdd(n);
    return 0;
}
