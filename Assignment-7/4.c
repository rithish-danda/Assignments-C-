// a07 04
#include<stdio.h>
int main(){
    int hcf=1,a,b,i,min;
    printf("Input two numbers: ");
    scanf("%d%d",&a,&b);
    (a>b)?(min=b):(min=a);
    for(i=0 ; i<=min ; i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    printf("HCF of %d and %d id %d",a,b,hcf);
    return 0;
}
