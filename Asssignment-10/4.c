// a10 04
#include<stdio.h>
void printNatural(int n)
    {
        for (int i=1;i<=n;i++)
            {
                printf("%d",i);
            }
        return;
    }
int main()
    {
        int n;
        printf("Input the value of \'n\': ");
        scanf("%d",&n);
        printNatural(n);
        return 0;
    }
