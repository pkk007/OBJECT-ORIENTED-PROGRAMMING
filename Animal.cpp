#include<iostream>
#include<string.h>
using namespace std;
class Animal{
    protected:
        int age;
        char name[20];
    public:
        void setData(int a, char n[]){
            age = a;
            strcpy(name,n);
        }
};
class Zebra : public Animal{
    private:
        char place[20] = "kenya";
    public:
        void showZebraData(){
            cout<<"name is "<<name<<" and its age is "<<age<<" and it come from "<<place<<endl;
        }
};
class Dolphin : public Animal{
    private:
        char place[20] = "Pacific ocene";
    public:
        void showDolphinData(){
            cout<<"name is "<<name<<" and its age is "<<age<<" and it come from "<<place<<endl;
        }
};
int main(){
    Zebra z;
    Dolphin d;
    z.setData(10,"crossing");
    d.setData(15,"sheru");
    z.showZebraData();
    d.showDolphinData();
}