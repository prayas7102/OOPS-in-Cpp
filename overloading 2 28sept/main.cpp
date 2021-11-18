#include <iostream>

using namespace std;
class FLOAT{
    float n;
public:
    FLOAT(float k){
        n=k;
    }
    void display(){
        cout<<"the numbers are "<<n<<endl;
    }
    float operator/(FLOAT &n3){
        return (n/n3.n);
    }
    float operator-(FLOAT &n3){
        return (n-n3.n);
    }
    float operator+(FLOAT &n3){
        return (n+n3.n);
    }
    float operator*(FLOAT &n3){
        return (n*n3.n);
    }
};
int main()
{
    FLOAT n1(5.556),n2(7.9978);
    n1.display();
    n2.display();
    cout<<endl;
    cout<<"The arithmetic operations of two numbers is as follows ::"<<endl;
    cout<<"The division operation is ==  "<<n1/n2<<endl;
    cout<<"The multiplication operation is ==  "<<n1*n2<<endl;
    cout<<"The addition operation is ==  "<<n1+n2<<endl;
    cout<<"The subtraction operation is ==  "<<n1-n2<<endl;
    return 0;
}
