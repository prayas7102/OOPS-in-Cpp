#include <iostream>

using namespace std;
class Number{
    int n;
public:
    Number(int k){
        n=k;
    }
    void display(){
        cout<<"the numbers are "<<n<<endl;
    }
    bool operator==(Number n3){
        return (n==n3.n);
    }
};
int main()
{
    Number n1(5),n2(10);
    n1.display();
    n2.display();
    cout<<"The comparison of two numbers is as follows ====  ";
    (n1==n2)?cout<<"The two numbers are equal":cout<<"The two numbers are not equal"<<endl;
    return 0;
}
