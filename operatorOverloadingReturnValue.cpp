#include<iostream>
using namespace std;

class Test{
    private:
        int n;
    public:
        Test():n(0){

        }
        void getValue(){
            // cout<<"enter value : ";
            cin>>n;
        }
        Test operator +(Test obj){
            Test t;
            t.n = n + obj.n;
            return t;
        }
        Test operator -(Test obj){
            Test t;
            t.n = n - obj.n;
            return t;
        }
        Test operator *(Test obj){
            Test t;
            t.n = n * obj.n;
            return t;
        }
        Test operator /(Test obj){
            Test t;
            t.n = n / obj.n;
            return t;
        }
        Test operator %(Test obj){
            Test t;
            t.n = n % obj.n;
            return t;
        }
        int displayValue(){
            return n;
        }
};
int main(){
    Test obj1,obj2,addition,substraction,multiplication,division,modulus;
    cout<<"enter value obj1 : ";
    obj1.getValue();
    cout<<"enter value obj2 : ";
    obj2.getValue();
    addition = obj1 + obj2;
    substraction = obj1 - obj2;
    multiplication = obj1 * obj2;
    division = obj1 / obj2;
    modulus = obj1 % obj2;
    cout<<"addition : "<<addition.displayValue()<<endl;
    cout<<"substraction : "<<substraction.displayValue()<<endl;
    cout<<"multiplication : "<<multiplication.displayValue()<<endl;
    cout<<"division : "<<division.displayValue()<<endl;
    cout<<"modulus : "<<modulus.displayValue();
}