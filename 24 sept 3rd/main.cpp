#include <iostream>

using namespace std;
int count=0;
class Demo{
public:
    Demo(){
        count++;
        cout<<"inside constructor of "<<count<<" object."<<endl;
    }
    ~Demo(){

        cout<<"inside destructor of "<<count<<" object."<<endl;
        count--;
    }
};
int main()
{
    cout<<"inside main function"<<endl;
    Demo d1;
    {
        cout<<"inside main function"<<endl;
        Demo d2,d3;
    }
    return 0;
}
