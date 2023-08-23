#include<iostream>
using namespace std;

class A{
    private:
        int n;
    public:
        A():n(0){

        }
        void operator ++(){
            n++;
        }
        void operator --(){
            n--;
        }
        void operator ++(int){
            n++;
        }
        void show(){
            cout<<n<<endl;
        }
};
int main(){
    A a;
    a.show();
    ++a;
    a.show();
    --a;
    a.show();
    a++;
    a.show();
}