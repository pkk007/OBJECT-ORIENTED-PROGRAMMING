#include<iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"parent constructor"<<endl;
        }
        ~Parent(){
            cout<<"parent destructor"<<endl;
        }
};
class child1 : public Parent{
    public:
        child1(){
            cout<<"child constructor"<<endl;
        }
        ~child1(){
            cout<<"child1 destructor"<<endl;
        }
};
class child2 : public child1{
    public:
        child2(){
            cout<<"child2 constructor"<<endl;
        }
        ~child2(){
            cout<<"child2 destructor"<<endl;
        }
};
int main(){
    child2 c;
}