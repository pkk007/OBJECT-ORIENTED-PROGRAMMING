#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        int rollNumber;
        char name[40];
    public:
        Student(int roll, char n[]){ //normal constructor
            rollNumber = roll;
            strcpy(name,n);
        }
        Student(Student & t){ //copy constructor
            rollNumber = t.rollNumber;
            strcpy(name,t.name);
        }
        void display(){
            cout<<rollNumber<<" "<<name<<endl;
        }
};

int main(){
    Student s1(7,"prabhat");
    s1.display();
    Student s2(s1); //copy constructor called
    s2.display();
    Student s3 = s1; //one more way to copy one object data to other
    s3.display();
    return 0;
}