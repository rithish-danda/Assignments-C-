// a24 08
#include<iostream>
#include<math.h>
using namespace std;
float area(float r){
    return 3.14*r*r;
}
float area(float a, float b){
    return a*b;
}
float area(float a, float b, float c){
    float s=(a+b+c)/3;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
int main(void){
    int x,r,a,b,c;
    cout << "1. Circle" << endl << "2. Rectangle" << endl << "3. Triangle" << endl << "Input your choice for area computation: ";
    cin >> x;
    switch(x){
        case 1:
            cout << "Radius: "; cin >> r;
            cout << "The area of the circle is " << area(r);
            break;
        case 2:
            cout << "Dimensions: "; cin >> a >> b;
            cout << "The area of the rectangle is " << area(a,b);
            break;
        case 3:
            cout << "Side lengths: "; cin >> a >> b >> c;
            cout << "The area of the triangle is " << area(a,b,c);
            break;
    }
    return 0;
}
