#include <iostream>
using namespace std;
class Person{
 public:
 int code;
 string name;
 Person(){
 cout << "Enter Name of Person:: " << endl;
 cin >> this->name;
 cout << "Enter Code Of Person :: " << endl;
 cin >> this->code;
 }
 void show_id(){
 cout << "Name Of Person :: "<< this->name << endl;
 cout << "Code Of Person :: "<< this->code << endl;
 }
};
class admin: public virtual Person{
 public:
 int experience;
 admin(){
 cout << "Enter Experience :: " << endl;
 cin >> this->experience;
 }
 void show_adm(){
 cout << "Experience :: "<< this->experience<< endl;
 }
};
class Account: public virtual Person{
 public:
 int pay;
 Account(){
 cout << "Enter Pay OF Person :: " << endl;
 cin >> this->pay;
 }
 void show_acc(){
 cout << "Pay Of Person is :: "<< this->pay << endl;
 }
};
class master : public virtual Account,public virtual admin{
 public:
 master():Person(),Account(),admin(){
 }
 void display(){
 show_id();
 show_adm();
 show_acc();
 }
};
int main(){
 master m;
 m.display();
 return 0;
}