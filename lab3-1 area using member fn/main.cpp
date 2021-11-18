#include <iostream>
using namespace std;
class Area{
    int l,b;
public:
    void readData(int length,int breadth){
        l=length;
        b=breadth;
    }
    int calculateData(){
        return l*b;
    }
};
int main()
{
    Area rect;
    int length,breadth;
    cin>>length>>breadth;
    rect.readData(length,breadth);
    cout<<"area of rectangle "<<rect.calculateData();
    return 0;
}
