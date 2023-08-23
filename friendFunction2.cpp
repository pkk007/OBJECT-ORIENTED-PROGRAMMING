#include<iostream>
using namespace std;

class B; //forward declaration
class A{
    private:
        int num1;
    public:
        void getvalueA();
        friend void Add(A,B);
};
void A::getvalueA(){
    cout<<"enter firts number : ";
    cin>>num1;
}
class B{
    private:
        int num2;
    public:
        void getvalueB();
        friend void Add(A,B);
};
void B::getvalueB(){
    cout<<"enter second number : ";
    cin>>num2;
}
void Add(A obj1, B obj2){
    cout<<"sum is : "<<obj1.num1 + obj2.num2;
}
int main(){
    A obj1;
    B obj2;
    obj1.getvalueA();
    obj2.getvalueB();
    Add(obj1,obj2);
    return 0;
}