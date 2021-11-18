#include <iostream>
using namespace std;
class DB;
class DM{
    float a,types;
public:
    void setter(float l){
        a=l;
    }
    float sum(DM,DB);
};
class DB{
    float b,types1;
    friend float DM :: sum(DM,DB);
public:
    void setter(float l){
        b=l;
    }
};
float DM:: sum(DM x,DB y){
    return x.a+y.b;
}
int main()
{
    DM x,cal;
    DB y;
    float tot,cm,meter,inch,feet,n,m;
    cout<< "to enter values in meter press 1"<<endl;
    cout<< "to enter values in centimeter press 2"<<endl;
    cout<< "to enter values in feet press 3"<<endl;
    cout<< "to enter values in inches press 4"<<endl;
    cin>>n>>m;
    if(n==1 && m==3){
        cout<<"enter meter and feet"<<endl;
        cin>>meter>>feet;
        feet*=0.3;
        x.setter(meter);
        y.setter(feet);
        tot=cal.sum(x,y);
        cout<<"addition in meters is ="<<tot<<endl;
    }
    if(n==2 && m==3){
        cout<<"enter centimeter and feet"<<endl;
        cin>>cm>>feet;
        feet*=30;
        x.setter(cm);
        y.setter(feet);
        tot=cal.sum(x,y);
        cout<<"addition in centimeters is ="<<tot<<endl;
    }
    if(n==1 && m==4){
        cout<<"enter meter and inch"<<endl;
        cin>>meter>>inch;
        inch*=(0.0254);
        x.setter(meter);
        y.setter(inch);
        tot=cal.sum(x,y);
        cout<<"addition in meters is ="<<tot<<endl;
    }
    if(n==2 && m==4){
        cout<<"enter centimeter and inch"<<endl;
        cin>>cm>>inch;
        inch*=2.54;
        x.setter(cm);
        y.setter(inch);
        tot=cal.sum(x,y);
        cout<<"addition in centimeters is ="<<tot<<endl;
    }
    return 0;
}
