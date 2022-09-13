// a24 02
#include<iostream>
using namespace std;
int GreatestDigit(int n){
    int rem,big=0;
    while(n!=0){
        rem = n%10;
        if(rem>big)
            big = rem;
        n = int(n/10);
    }
    return big;
    
}
int main(void){
    int num,i;
    cout << "Input the number: ";
    cin >> num;
    int x = GreatestDigit(num);
    cout << "The Greatest digit in " << num << " is " << x;
    return 0;
}
