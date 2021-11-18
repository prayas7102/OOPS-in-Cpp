#include <iostream>

using namespace std;
class Bank{
    static int accno;
    int balance,accnumber;
    string name,type;
public:
    void assignAmount(string n,int a){
        accno++;
        accnumber=accno;
        name=n;
        balance=a;
    }
    void depositAmount(int a){
        balance+=a;
    }
    void withdrawAmount(int a){
            balance-=a;
    }
    string name1(){
        return name;
    }
    int balanceAmt(){
        return balance;
    }
    int accNO(){
        return accnumber;
    }
};
int Bank :: accno=0;
int main()
{
    int q=1,a,b;
    string s,d;
    cout<<"Create account"<<endl;
    while(q){
    Bank p1,p2;
    cout<<"enter assign name"<<endl;
    cin>>s;
    cout<<"enter assign amt"<<endl;
    cin>>a;
    p1.assignAmount(s,a);
    cout<<"enter account type"<<endl;
    cin>>s;
    cout<<"enter withdraw amt"<<endl;
    cin>>b;
    p1.withdrawAmount(b);
    cout<<"Name"<<p1.name1()<<endl;
    cout<<"BalanceAmt =";
    if(p1.balanceAmt()<0){
        cout<<"not enough balance"<<endl;
    }
    else{
        cout<<p1.balanceAmt()<<endl;
    }
    cout<<"Account no. ="<<p1.accNO()<<endl;;
    cout<< "do you want to quit?(0/1)"<<endl;
    cin>>q;
    }
    return 0;
}
