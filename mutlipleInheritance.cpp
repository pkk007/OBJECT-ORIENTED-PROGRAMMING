#include<iostream>
using namespace std;

class student{
    private:
        char name[40], city[40];
    public:
        void inputdata();
        void showdata();
};
class marks{
    private:
        float math, phy, chem, total, avg;
    public:
        void inputmarks();
        void showmarks();
};
class result : public student, public marks{
    public:
        void showresult(){
            cout<<"--------------RESULT--------------"<<endl;
            showdata();
            showmarks();
        }
};

void student :: inputdata(){
    cout<<"enter name : ";
    cin>>name;
    cout<<"enter city : ";
    cin>>city;
}
void student :: showdata(){
    cout<<"name is : "<<name<<endl;
    cout<<"city is : "<<city<<endl;
}
void marks :: inputmarks(){
    cout<<"enter marks math : ";
    cin>>math;
    cout<<"enter marks phy : ";
    cin>>phy;
    cout<<"enter marks chem : ";
    cin>>chem;
    total = math + phy + chem;
    avg = total/3.0;
}
void marks :: showmarks(){
    cout<<"math marks is : "<<math<<endl;
    cout<<"phy marks is : "<<phy<<endl;
    cout<<"che marks is : "<<chem<<endl;
    cout<<"total marks is : "<<total<<endl;
    cout<<"avg marks is : "<<avg<<endl;
}
int main(){
    result res;
    res.inputdata();
    res.inputmarks();
    res.showresult();
}