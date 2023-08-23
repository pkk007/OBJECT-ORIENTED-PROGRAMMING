#include<iostream>
using namespace std;

class Parent{
    public:
        virtual void show(){
            cout<<"parent"<<endl;
        }
};
class Child : public Parent{
    public:
        void show(){
            cout<<"child"<<endl;
        }
};
class GrandChild : public Child{
    public:
        void show(){
            cout<<"gracnd child"<<endl;
        }
};

int main(){
    Parent p;
    Child c;
    GrandChild gc;
    Parent * ptr;
    ptr = &p;
    ptr->show();
    ptr = &c;
    ptr->show();
    ptr = &gc;
    ptr->show();
}