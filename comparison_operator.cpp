#include <iostream>
using namespace std;
class comparing{
 private: int x;
 public:
 comparing(int a=0){
 this->x=a;}
 bool operator==(const comparing &c){
 if((this->x - c.x )==0){cout << "Yep" << std::endl;return true;}
 else{cout << "Nope" << std::endl;return false;}}
 void display(){cout << "Value is -> "<< this->x << endl; }
};
int main()
{
 comparing a=5;
 comparing b(60);
 a.display();
 b.display();
 a==b;
 return 0;
}
