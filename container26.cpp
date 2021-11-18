#include <iostream>
using namespace std;
class Person{
 public:
 int code;
 string name;
 void show_id(){
cout << "Name Of Person :: "<< this->name <<endl;
cout << "Code Of Person :: "<< this->code <<endl;
 }
};
class admin: public virtual Person{
 public:
 int experience;
 void show_adm(){
cout << "Experience :: "<< this->experience<<endl;
 }
};
class Account: public virtual Person{
 public:
 int pay;
 void show_acc(){
cout << "Pay Of Person is :: "<< this->pay <<endl;
 }
};
class master : public virtual Account,public virtual admin{
 public:
 Person p;
 master(){
cout << "Enter Name of Person:: " <<endl;
cin >> p.name;
cout << "Enter Code Of Person :: " <<endl;
cin >> p.code;
cout << "Enter Pay OF Person :: " <<endl;
cin >> this->pay;
cout << "Enter Experience :: " <<endl;
cin >> this->experience;
 }
 
 void display(){
 p.show_id();
 this->show_adm();
 this->show_acc();
 }
 
};
int main(){
 master m;
 m.display();
 return 0;
}