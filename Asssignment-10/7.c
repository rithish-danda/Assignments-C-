//a10 07
#include<stdio.h>
int ncr(int n,int r)
{
    int i,j,k,fact_n=1,fact_r=1,fact_nr=1,ncr_;
    for(i=1;i<=n;i++)
      {
         fact_n*=i;
      }
    for(j=1;j<=r;j++)
      {
          fact_r*=j;
      }
    for(k=1;k<=(n-r);k++)
      {
          fact_nr*=k;
      }
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
