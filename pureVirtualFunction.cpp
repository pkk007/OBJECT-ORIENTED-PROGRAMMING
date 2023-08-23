#include<iostream>
using namespace std;

class Person{
    //this class contains atleast one pure virtual function so it is an abstract class
    public:
        virtual void show() = 0; //pure virtual function
};

class Employee : public Person{
    public:
        void show(){
            cout<<"employee class method"<<endl;
        }
};

class Teacher : public Employee{
    public:
        void show(){
            cout<<"teacher class method"<<endl;
        }
};

int main(){
    // Person obj; //we cannot do this
    Person *ptr[2];
    ptr[0] = new Employee;
    ptr[1] = new Teacher;
    ptr[0]->show();
    ptr[1]->show();
}