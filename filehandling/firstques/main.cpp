#include <iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    ifstream fin("abc.txt");;
    ofstream fout("abc1.txt");
    string ch;
    while(getline(fin,ch)){
        fout<<ch<<endl;
        fin>>ch;
    }
    fin.close();
    fout.close();
    getch();
}
