#include<iostream>
using namespace std;
// class A{
//     public:
//         A(){
//             cout<<"A constructor is called"<<endl;
//         }
//         ~A(){
//             cout<<"A distructor is called"<<endl;
//         }
// };
// class B{
//     public:
//         B(){
//             cout<<"B constructor is called"<<endl;
//         }
//         ~B(){
//             cout<<"B distructor is called"<<endl;
//         }
// };
// class C : public B, public A{
//     public:
//         C(){
//             cout<<"C constructor is called"<<endl;
//         }
//         ~C(){
//             cout<<"C distructor is called"<<endl;
//         }
// };

//-----------------------DIAMOND PROBLEM-------------------------
// class Person{
//     public:
//         Person(int x){
//             cout<<"PERSON constructor is called : "<<x<<endl;
//         }
//         ~Person(){
//             cout<<"PERSON distructor is called : "<<endl;
//         }
// };
// class student : public Person{
//     public:
//         student(int x): Person(x){
//             cout<<"STUDENT constructor is called : "<<x<<endl;
//         }
//         ~student(){
//             cout<<"STUDENT distructor is called : "<<endl;
//         }
// };
// class faculty : public Person{
//     public:
//         faculty(int x) : Person(x){
//             cout<<"FACULTY constructor is called : "<<x<<endl;
//         }
//         ~faculty(){
//             cout<<"FACULTY distructor is called : "<<endl;
//         }
// };
// class TA : public student, public faculty{
//     public:
//         TA(int x): student(x), faculty(x){
//             cout<<"TA constructor is called : "<<x<<endl;
//         }
//         ~TA(){
//             cout<<"TA distructor is called"<<endl;
//         }
// };

//------------------------DIAMOND PROBLEM SOLUTION----------------------
class Person{
    public:
        Person(){
            cout<<"PERSON default consturctor"<<endl;
        }
        Person(int x){
            cout<<"PERSON constructor is called : "<<x<<endl;
        }
        ~Person(){
            cout<<"PERSON distructor is called : "<<endl;
        }
};
class student : virtual public Person{
    public:
        student(int x): Person(x){
            cout<<"STUDENT constructor is called : "<<x<<endl;
        }
        ~student(){
            cout<<"STUDENT distructor is called : "<<endl;
        }
};
class faculty : virtual public Person{
    public:
        faculty(int x) : Person(x){
            cout<<"FACULTY constructor is called : "<<x<<endl;
        }
        ~faculty(){
            cout<<"FACULTY distructor is called : "<<endl;
        }
};
class TA : public student, public faculty{
    public:
        // TA(int x): student(x), faculty(x){
        //     //to call default constructor of Person class
        //     cout<<"TA constructor is called : "<<x<<endl;
        // }
        TA(int x): student(x),faculty(x),Person(x){
            //to call parametrized constructor of Person class
            cout<<"TA constructor is called : "<<x<<endl;
        }
        ~TA(){
            cout<<"TA distructor is called"<<endl;
        }
};
int main(){
    // C obj;
    TA obj(7);
}