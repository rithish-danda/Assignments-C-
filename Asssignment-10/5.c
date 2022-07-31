// a10 05
#include<stdio.h>
void printOddNatural(int n)
    {
        for (int i=1;i<=n;i++)
            {
                if(i%2!=0)
                    printf("%d\t",i);
            }
        return;
    }
int main()
    {
        int n;
        printf("Input the value of \'n\': ");
        scanf("%d",&n);
        printOddNatural(n);
        return 0;
    }
