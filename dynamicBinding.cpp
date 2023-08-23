#include<iostream>
using namespace std;

class Person{
    public:
        virtual void show(){
            cout<<"Person object method"<<endl;
        }
};
class Employee : public Person{
    public:
        void show(){
            cout<<"Employee object method"<<endl;
        }
};
class Teacher : public Employee{
    public:
        void show(){
            cout<<"Teacher object method"<<endl;
        }
};
int main(){
    int len;
    cout<<"Enter how many object you want to create : ";
    cin>>len;
    int op;
    Person *ptr[len];
    cout<<"1 : Person object \n2 : Employee object \n3 : Teacher object"<<endl;
    for(int i=0; i<len; i++){
        cin>>op;
        if(op==1)
            ptr[i] = new Person;
        else if(op==2)
            ptr[i] = new Employee;
        else
            ptr[i] = new Teacher;
    }
    for(int i=0; i<len; i++){
        ptr[i]->show();
    }
    return 0;
}