#include <iostream>

using namespace std;
float volume(int a){
    return a*a*a;
}
float volume(int rcone, int hcone){
    return (0.33)*3.14*rcone*rcone*hcone;
}
int main()
{
    float a=20,r=10,rcone=25,hcone=30;
    cout<<"volume of cube "<<volume(a)<<endl;
    cout<<"volume of sphere "<<(4/3)*3.14*volume(r)<<endl;
    cout<<"volume of cone "<<volume(rcone,hcone)<<endl;
    return 0;
}
