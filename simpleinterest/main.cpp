#include <iostream>
using namespace std;
float simpleinter(float p,float t,int r=5){
    return p*r*t;
}
int main()
{
    float p=2000,t=3;
    cout<<"Simple interest = "<<simpleinter(p,t)/100<<endl;
    return 0;
}
