#include <iostream>
using namespace std;
class item{
    static int count_;
    int l,b;
public:
    item(){
        count_++;
    }
    int calculateCount(){
        return count_;
    }
};
int item :: count_=0;
int main()
{
    item a,b,c;
    cout<<"total no. of objects in class items= "<<a.calculateCount()<<endl;
    return 0;
}
