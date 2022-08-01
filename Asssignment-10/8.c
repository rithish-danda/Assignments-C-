// a10 08
#include<stdio.h>
#include<math.h>
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
int arrangements(int n,int k)
{
    int fact_n,kcn;
    double x=(pow(10,9)+7),res;
    res=((fact(n)*ncr(k,n))%x);
    return res;
}
int main()
{
    int n,k,res;
    printf("Input the values of k and n respectively: ");
    scanf("%d%d",&k,&n);
    res = arrangements(n,k);
    printf("No. of arrangements = %d",res);
    return 0;
}
