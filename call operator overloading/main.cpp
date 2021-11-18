#include <iostream>

using namespace std;
class Area{
    int length,breadth,height;
public:
    Area(){
      length=0;breadth=0;height=0;
    }
    Area(int l){
    length=l;
    cout<<"Surface Area of Cube is = "<<6*length<<endl;
    }
    Area operator()(int l,int b,int h){
        Area cuboid2;
        cuboid2.length=l;
        cuboid2.breadth=b;
        cuboid2.height=h;
        cout<<"Surface Area of Cuboid is = "<<2*(l*b+l*h+b*h)<<endl;
        return cuboid2;
    }
};
int main()
{
    Area cube(10),cuboid;
    cuboid=cube(22,44,55);
    return 0;
}
