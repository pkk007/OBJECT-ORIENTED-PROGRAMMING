#include<iostream>
using namespace std;

class Counter{
    private:
        static int count;
    public:
        Counter(){
            count++;
            displayObjectCount();
        }
        void displayObjectCount(){
            system("cls"); //clears the terminal
            cout<<"Total Number of Object is : "<<count<<endl;
        }
};
int Counter :: count = 0; //here we are using scope resolution operator
int main(){
    Counter c1,c2,c3,c4;
}