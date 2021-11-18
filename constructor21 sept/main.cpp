#include <iostream>
using namespace std;
class Person{
int age2;
string name;
public:
    Person(){
        cout<<"Object with no parameters passed"<<endl;
    }
    Person(int age){
        age2=age;
        cout<< "age of this person is "<<age2<<endl;
    }
    Person(int age , string name1){
        name=name1;
        age2=age;
        cout<< "age of this person is "<<age2<<" and name of this person is "<<name<<endl;
    }
};
int main()
{
    Person people1,people2(26),people3(30,"adarsh");
    return 0;}
