#include<iostream>
using namespace std;

class parent{
    public:
        void show(){
            cout<<"parent class"<<endl;
        }
};
class child : public parent{
    public:
        void show(){
            parent::show();
            cout<<"child class"<<endl;
        }
};
main(){
    child c;
    c.show();
    c.parent::show();
}