#include <iostream>
using namespace std;
class Matrix{
    int size1=10;int arr[10];
public:
    Matrix(){
    for(int i=0;i<size1;i++){arr[i]=i+1;}}
    int & operator[](int i){
        if(i>size1-1){
            cout<<"index out of bound"<<endl;
            return arr[0];
        }
        return arr[i];
    }
};
int main()
{
    Matrix m;
    cout<<m[1]<<endl;
    cout<<m[2]<<endl;
    cout<<m[9]<<endl;
    return 0;
}
