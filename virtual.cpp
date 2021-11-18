#include <iostream>
using namespace std;
class Shape{
 public:
 double x,y;
 void get_data(){
 cin >> x;
 cin >> y;
 }
 void virtual display_area(){
 }
};
class rectangle: public Shape{
 public:
 void display_area(){
 double t=this->x*this->y;
 cout << "Area Of Rectangle is :: "<< t << endl;
 }
};
class traingle: public Shape{
 public:
 void display_area(){
 double t=this->x*this->y*0.5;
 cout << "Area Of Traingle is :: "<< t << endl;
 }
};
int main()
{
 Shape *s[2];
 rectangle r;
 s[0]=&r;
 cout << "ENter Sides OF Rectangle" << endl;
 s[0]->get_data();
 traingle t;
 s[1]=&t;
 cout << "Enter Sides of Traingle " << endl;
 s[1]->get_data();
 s[0]->display_area();
 s[1]->display_area();
 return 0;
}
