#include<iostream>
using namespace std;

class A{
    private:
        int a;
    protected:
        int b;
    public:
        friend class B;
};
class B{
    public:
        void input(A obj1){
            cout<<"enter first number : ";
            cin>>obj1.a;
            cout<<"enter second number : ";
            cin>>obj1.b;
            sum(obj1);
        }
        void sum(A obj1){
            cout<<"sum is : "<<obj1.a + obj1.b;
        }
};
int main(){
    A obj1;
    B obj2;
    obj2.input(obj1);
    return 0;
}