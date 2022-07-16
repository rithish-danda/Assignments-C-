// 05
#include<stdio.h>
int main()
{
    int n,m,count=0;
    printf("Input a number: ");
    scanf("%d",&n);
    m=n;
    while(m!=0)
        {
            m=m/10;
            count+=1;
        }
    if(count==3)
        printf("%d is a 3 digit number",n);
    else
        printf("%d is not a 3 digit number",n);
}
