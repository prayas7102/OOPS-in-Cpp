#include <iostream>
using namespace std;
class Student{
 public:
 int rollno;
 string name;
 void show_stu(){
cout << "Name :: "<< this->name << "\nRoll No:: " <<
this->rollno <<endl;
 }
};
class result : public virtual Student{
 public:
 int marks;
 char grade;
 result(int m, char g){
 this->marks=m;
 this->grade=g;
 }
 void show_res(){
cout << "Total Marks Obtained :: "<< this->marks <<
"\nGrade Obtained is :: "<< this->grade <<endl;
cout << " :-) \n Good Luck For Future " <<endl;
 }
};
class fees : public virtual Student{
 public:
 int fee;
 result *r;
 fees(int ro, string n,int m, char g ):Student(){
 this->rollno=ro;
 this->name=n;
 this->fee=0;
 r=new result(m,g);
 }
 void submit_fee(int f){fee=f;cout << fee <<" Rs Submitted" <<endl;}
 void gen_rec(){
 if(fee>500){
 show_stu();
 r->show_res();
 cout << "Total Submitted Fees is "<< fee <<endl;
 }else{cout << "Pay Fees First >>> :-( " <<endl;}
 }
};
int main()
{
 fees shivam(69,"Shivam",420,'L');
 shivam.submit_fee(600);
 shivam.gen_rec();
 return 0;
}
