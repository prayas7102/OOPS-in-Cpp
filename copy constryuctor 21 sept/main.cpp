#include <iostream>

using namespace std;
class Person{
    int age1;
    string name1;
public:
    Person(int age, string name){
        age1=age;
        name1=name;
    }
    Person(Person &s){
        age1=s.age1;
        name1=s.name1;
    }
    void display(){
        cout<<"name is "<<name1<<" age is "<<age1<<endl;
    }
};
int main()
{
    Person rahul(58,"Rahul");
    Person priya(60, "priya");
    rahul=(priya);
    rahul.display();
    priya.display();
        return 0;
}
