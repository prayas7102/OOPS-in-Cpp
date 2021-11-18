#include <iostream>

using namespace std;
class time{
    float a,b,c;
public:
    void setter(float hour,float mint){
        a=hour;
        b=mint;
    }
    void getter(){
      //cout<<b<<endl;
      c=b/60;
      a+=c;
      b=b-c*60;
      cout<<a<<" hours"<<"  "<<b<<" minutes"<<endl;
    }
    time add(time);
};
time time :: add(time y){
        time z;
        z.a=a+y.a;
        z.b=b+y.b;
        return z;
}

int main()
{
    time x,y,z;
    float h1,m1,h2,m2;
    cout<<"enter time in hours and minutes"<<endl;
    cin>>h1>>m1;
    x.setter(h1,m1);
    cout<<"enter time in hours and minutes"<<endl;
    cin>>h2>>m2;
    y.setter(h2,m2);
    z=x.add(y);
    cout<<"addition of both time ";
    z.getter();
    return 0;
}
