#include <iostream>

using namespace std;
int area(int l){
    return l*l;
}
int area(int l1,int b1){
    return l1*b1;
}
int main()
{
    int l=20,l1=9,b1=7;
    cout<<"area of square "<<area(l)<<endl;
    cout<<"area of rectangle "<<area(l1,b1)<<endl;
    return 0;
}
