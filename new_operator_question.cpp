#include <iostream>
#include<cstring>
using namespace std;
class Student{
 public:
 int len;
 char *name;
 Student(const char *n="Unknown"){
 len=strlen(n);
 name = new char[len+1];
 strcpy(name, n);
 }
 void display(){cout << "Student Name is :" << name <<endl;}
};
int main()
{
 Student *shivam=new Student("shivam");
 shivam->display();
 Student *Ansh=new Student();
 Ansh->display();
 return 0;
}
