#include <iostream>

using namespace std;
class Time{
    float minute=0;
public:
    Time(float t){
        minute=t*60;
    }
    void show(){
        cout<<"Time in minutes "<<minute<<" minutes"<<endl;
    }
    operator float (){
        return minute/60;
    }
};
int main()
{
    float h;
    cout<<"enter hour in integer data type"<<endl;
    cin>>h;
    Time t1=h;
    t1.show();
    cout<<endl;
    cout<<"Minutes in Time data type <-- converted to --> hour in integer data type"<<endl;
    h=t1;
    cout<<h<<" hours"<<endl;
    return 0;
}
