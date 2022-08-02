// a05 06
#include<stdio.h>
void printEven(int n)
{
    int x=1;
    for (int i=1;x<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
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
    printEven(n);
    return 0;
}
