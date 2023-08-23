#include<iostream>
using namespace std;

class parent{
    private:
        int a, b;
    public:
        parent(int p1, int p2){
            a = p1;
            b = p2;
        }
        void show(){
            cout<<"parent : "<<a<<endl;
            cout<<"parent : "<<b<<endl;
        }
};
class child : public parent{
    private:
        int x, y;
    public:
        child(int p1, int p2, int c1, int c2):parent(p1, p2){
            x = c1;
            y = c2;
        }
        void display(){
            cout<<"child : "<<x<<endl;
            cout<<"child : "<<y<<endl;
        }
};
int main(){
    child obj(1,2,3,4);
    obj.show();
    obj.display();
}