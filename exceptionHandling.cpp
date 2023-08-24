#include<iostream>
using namespace std;

int main(){
    int a,b,q;
    try{
        cout<<"enter value of a :";
        cin>>a;
        cout<<"enter value of b :";
        cin>>b;
        if(b==0)
            throw 0;
        q = a/b;
        cout<<"division : "<<q;
    }
    catch(int){
        cout<<"cant disible by zero";
    }
}