// a07 03
#include<stdio.h>
int main(){
	int f1,f2,f3,i,n;
	printf("Value of N: ");
	scanf("%d",&n);
	f1=0;f2=1;
	while(n>f3){
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
    if(f3==n || n==1 || n==0)
        printf("%d is in the fibonacci series",n);
    else
        printf("%d is not in the fibonacci series",n);
	return 0;
}
