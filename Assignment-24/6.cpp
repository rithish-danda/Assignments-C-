// a24 06
#include<iostream>
using namespace std;
void *swap(int *x, int *y){
    *x = *x+*y;
    *y = *x-*y;
    *x = *x-*y;
}
int main(void){
    int a,b;
    cout << "Input two numbers: ";
    cin >> a >> b;
    cout << "Before Swapping: " << endl << a << "\t" << b << endl;
    swap(&a,&b);
    cout << "After Swapping: " << endl << a << "\t" << b;
    return 0;
}
