//Q14)Write a Program to illustrate Pointer to member and Pointer to object Comcept OOP.
//{Use time class Created in last LAB and perform sum of time in two objects of time class}
#include <iostream>
using namespace std;
class TIME{
 public:int H,M;
 void read_time(){
cout << "ENTER Hour Value \n" <<endl;cin >> this->H;
cout << "ENTER Minute Value \n" << endl;cin >>this-> M;
 }
 TIME add_time(TIME a,TIME b){
 this->H=a.H+b.H;
 this->M=a.M+b.M;
 while(this->M>59){this->M=M-60;this->H=H+1;}
 cout << "ADded Time is "<< this->H<<" Hours and "<<this->M<<" Minute\n";
 }};
int main(){
 TIME t1,t2,t3;
 t1.read_time();
 t2.read_time();
 TIME *T3;
 T3=&t3;
 T3->add_time(t1,t2);
cout << "Using Pointer to Object Added Time is " << T3->H <<"Hours "<<T3->M<<" Minutes\n";
return 0;
}
