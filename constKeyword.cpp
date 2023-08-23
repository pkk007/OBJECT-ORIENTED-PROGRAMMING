#include<iostream>
using namespace std;

// class Test{
//     private:
//         const int x;
//     public:
//         // Test(){  //produces an error
//         //     x = 20;
//         // }
//         Test(): x(20){ //this works fine

//         }
//         void show(){
//             // x = 30; //this also produce an error
//             cout<<x;
//         }
// };

class Test{
    int x = 20;
    public:
        // Test():x(30){

        // }
        // void setvalue(int a){
        //     x = a;
        // }
        void show(){
            cout<<x;
        }
};

int main(){
    const Test t;
    // t.setvalue(20);
    // t.show();
}