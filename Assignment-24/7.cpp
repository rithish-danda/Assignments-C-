//a24 07
#include<iostream>
using namespace std;
int add(int a, int b, int c=0){
    return a+b+c;
}
int main(void){
    int a,b,c,inputs;
    cout << "No. of inputs: ";
    cin >> inputs;
    if(inputs==2){
    cout << "Input two numbers: ";
    cin >> a >> b;
    cout << "Sum of " << a << " and " << b << " is " << add(a,b);
    }
    else if(inputs==3){
        cout << "Input three numbers: ";
        cin >> a >> b >> c;
        cout << "Sum of " << a << " , " << b << " and " << c << " is " << add(a,b,c);
    }
    return 0;
}
