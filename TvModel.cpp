#include<iostream>
#include<string.h>
using namespace std;
class Tv{
    private:
        char brandName[20], modelName[20];
        float price;
    public:
        Tv(char b[], char m[], float p){
            strcpy(brandName,b);
            strcpy(modelName,m);
            price = p;
        }
        void displayData(){
            cout<<"brand name : "<<brandName<<endl;
            cout<<"model name : "<<modelName<<endl;
            cout<<"price : "<<price<<endl;
        }
        void updateData(char b[], char m[], float p){
            strcpy(brandName,b);
            strcpy(modelName,m);
            price = p;
        }
};

int main(){
    Tv obj("LG", "LCD", 30000);
    cout<<"-----------TV SPECIFICATIONS-----------"<<endl;
    obj.displayData();
    obj.updateData("SAMSUNG","SMART TV",50000);
    cout<<"---------------UPDATED TV SPECIFICATIONS----------------"<<endl;
    obj.displayData();
}