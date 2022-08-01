//a10 07
#include<stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
      {
         f*=i;
      }
    return f;
}
int ncr(int n,int r)
{
    int fact_n,fact_r,fact_nr,ncr_;
    fact_n=fact(n);
    fact_r=fact(r);
    fact_nr=fact(n-r);
    ncr_=fact_n/(fact_r*fact_nr);
    return ncr_;
}
int main()
{
    int n,r,nr;
    printf("Give inputs for n and r: ");
    scanf("%d%d",&n,&r);
    nr=ncr(n,r);
    printf("The NCR for n=%d and r=%d is %d",n,r,nr);
    return 0;
}
