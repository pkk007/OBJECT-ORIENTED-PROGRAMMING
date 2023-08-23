#include<iostream>
using namespace std;

class Test{
    private:
        int num;
    public:
        Test():num(0){
            cout<<"constructor is called....."<<endl;
        }
        ~Test(){
            cout<<"destructor is called....."<<endl;
        }
        friend void show(Test obj);
};

void show(Test obj){
    obj.num = 10;
    cout<<obj.num<<endl;
}

int main(){
    Test t1;
    show(t1);
    cout<<"end of main function"<<endl;
}