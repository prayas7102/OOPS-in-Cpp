#include <iostream>

using namespace std;
//make while loop and make entry
class Student{
    int mark;
    string name;
public:
    Student(string n, int x){
        mark=x;
        name=n;
    }
    int givedata(){
        return this->mark;
    }
    string givename(){
        return this->name;
    }
};
int main()
{
    Student s1("rahul",96),s2("rajesh",41),s3("sahil",89);
    int maximum=max(s3.givedata(),max(s1.givedata(),s2.givedata()));
    (maximum==s1.givedata())?cout<<s1.givename():(maximum==s2.givedata())?cout<<s2.givename():cout<<s2.givename();
    cout<<" scored highest marks of "<<maximum<<endl;
    return 0;
}
