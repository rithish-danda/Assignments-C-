// a07 01
#include<stdio.h>
int main(){
	int f1,f2,f3,i,n;
	printf("Value of N: ");
	scanf("%d",&n);
	f1=0;f2=1;
	if(n==1){
		printf("\nThe %dth term in the fibonacci series is %d",n,f1);
    }
	else if(n==2){
		printf("\nThe %dth term in the fibonacci series is %d",n,f2);
	}
	else{
	for(i=3;i<=n;i++){
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf("\nThe %dth term in the fibonacci series is %d",n,f3);
	}
	return 0;
}
