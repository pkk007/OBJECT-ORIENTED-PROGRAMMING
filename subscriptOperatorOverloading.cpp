#include<iostream>
using namespace std;

const int size = 10;
class Array{
    private:
        int arr[size];
    public:
        Array(){
            for(int i=0; i<size; i++){
                arr[i] = i;
            }
        }
        int operator [](int i){
            if(i>size){
                cout<<"index out of bound"<<endl;
                return arr[0];
            }
            return arr[i];
        }
};
int main(){
    Array a;
    cout<<a[5]<<endl;
    cout<<a[12]<<endl;
    cout<<a[9];
}