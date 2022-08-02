// a05 07
#include<stdio.h>
void printEven(int n)
{
    int x=1;
    for (int i=2;x<n;i++)
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
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printEven(n+2);
    return 0;
}
