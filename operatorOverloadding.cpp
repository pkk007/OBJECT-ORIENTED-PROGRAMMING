#include<iostream>
using namespace std;

class Test{
    private:
        int n;
    public:
        void getvalue(){
            cout<<"enter value : ";
            cin>>n;
        }
        void operator +(Test obj){
            Test t;
            t.n = n + obj.n;
            cout<<"sum is : "<<t.n;
        }
};
int main(){
    Test obj1, obj2;
    cout<<"enter 1st value : ";
    obj1.getvalue();
    cout<<"enter 2nd value : ";
    obj2.getvalue();
    obj1 + obj2;
}