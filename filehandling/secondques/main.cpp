#include <iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    ifstream fin("firstfile.txt"),in("secondfile.txt");
    ofstream fout("thirdfile.txt");
    string ch,c;
    while(getline(fin,ch) && getline(in,c)){
        fout<<ch<<"\t\t\t\t"<<c<<endl;
        fin>>ch;
        in>>c;
    }
    fin.close();in.close();
    fout.close();
    getch();
}
