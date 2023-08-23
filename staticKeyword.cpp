#include<iostream>
using namespace std;

class Counter{
    private:
        static int count;
    public:
        Counter(){
            count++;
        }
        void showCount(){
            cout<<count;
        }
        ~Counter(){
            cout<<"DESTRUCTOR CALLED"<<endl;
        }
};
int Counter :: count = 0;

//normal function
void demo(){
    static int demoCount = 0;
    cout<<demoCount<<" ";
    demoCount++;
}

int main(){
    Counter c1,c2,c3,c4,c5;
    c1.showCount(); //it outputs 5;
    cout<<endl;
    for(int i=0; i<5; i++){
        demo(); //for multiple function call the demoCount variable not intilialized every time
    }
    cout<<endl;
    cout<<"END OF MAIN FUNCTION"<<endl;
    return 0;
}