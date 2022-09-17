// a07 02
#include<stdio.h>
int main(){
	int f1,f2,f3,i,n;
	printf("Value of N: ");
	scanf("%d",&n);
	f1=0;f2=1;
	printf("%d  %d  ",f1,f2);
	for(i=3;i<=n;i++){
		f3=f1+f2;
		printf("%d  ",f3);
		f1=f2;
		f2=f3;
	}
	return 0;
}
