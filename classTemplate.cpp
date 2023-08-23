#include<iostream>
using namespace std;

template <class T>
class Test{
    private:
        T n;
    public:
        void getValue(){
            cin>>n;
        }
        void show(){
            cout<<"value is : "<<n<<endl;
        }
};
int main(){
    Test<int> obj1;
    obj1.getValue();
    obj1.show();
    Test<float> obj2;
    obj2.getValue();
    obj2.show();
    Test<char> obj3;
    obj3.getValue();
    obj3.show();
}