#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class Name{
    int length;
    char *name;
public:
    Name(char *s){
        length= strlen(s);
        name = new char[length+1];
        strcpy(name,s);
    }
    string givename(){
        return name;
    }
};
int main()
{
    int n;
    while(n){
        cout<<"enter student name (type 0 if no name)"<<endl;
        char *s;
        cin>>s;
        if(*s=='0'){
            Name n1("unkown");
            cout<<"the name of student is "<<n1.givename()<<endl;
            cout<<"do want to quit"<<endl;
            cin>>n;
        }
        else{
            Name n1(s);
            cout<<"the name of student is "<<n1.givename()<<endl;
            cout<<"do want to quit"<<endl;
            cin>>n;}
    }
    return 0;
}
