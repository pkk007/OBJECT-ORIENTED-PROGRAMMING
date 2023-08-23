#include<iostream>
using namespace std;

class A{
    public:
        int a = 10;
        void show(){
            cout<<"this is show method"<<endl;
        }
};
int main(){
    A *ptr;
    ptr = new A;
    // A obj;
    // ptr = &obj;
    ptr->show();
    cout<<ptr->a;
    // cout<<p->a;
}