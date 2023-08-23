#include<iostream>
using namespace std;

template <class T>
T Max(T a, T b){
    if(a>b)
        return a;
    return b;
}
template <class T>
void print(T n){
    cout<<n<<endl;
}
int main(){
    int i;
    i = Max(10,20);
    cout<<i<<endl;
    float f;
    f = Max(56.36,66.37);
    cout<<f<<endl;
    print(50);
    print(56.36);
    print("prabhat kamti");
}