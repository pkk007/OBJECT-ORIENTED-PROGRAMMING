#include<iostream>
#include<math.h>
using namespace std;
//calculate area using polymorphism and virtual function
class Shape{
    // we create different shape using this but we cant directly create object of shape class
    // so made is an abstract class using PURE VIRTUAL function we only declare its pointer
    protected:
        double x,y;
    public:
        virtual void getData() = 0;
        virtual void displayArea() = 0;
};
class Circle : public Shape{
    public:
        void getData(){
            cout<<"enter radius of circle : ";
            cin>>x;
        }
        void displayArea(){
            double area;
            area = 3.14*x*x;
            cout<<"area of cicle is : "<<area<<endl;
        }
};
class Reactangle : public Shape{
    public:
        void getData(){
            cout<<"enter length of reactangle : ";
            cin>>x;
            cout<<"enter breadth of reactangle : ";
            cin>>y;
        }
        void displayArea(){
            double area;
            area = x*y;
            cout<<"area of reactangle is : "<<area<<endl;
        }
};
class Triangle : public Shape{
    public:
        void getData(){
            cout<<"enter base of triangle : ";
            cin>>x;
            cout<<"enter height of triangle : ";
            cin>>y;
        }
        void displayArea(){
            double area;
            area = 0.5*x*y;
            cout<<"area of triangle is : "<<area<<endl;
        }
};
class Square : public Shape{
    public:
        void getData(){
            cout<<"enter side of square : ";
            cin>>x;
        }
        void displayArea(){
            double area;
            area = x*x;
            cout<<"area of square is : "<<area<<endl;
        }
};
class Cone : public Shape{
    public:
        void getData(){
            cout<<"enter base radius of cone : ";
            cin>>x;
            cout<<"enter height of cone : ";
            cin>>y;
        }
        void displayArea(){
            double area;
            area = 3.14*x*(x + sqrt(y*y + x*x));
            cout<<"area of cone is : "<<area<<endl;
        }
};
main(){
    Circle c;
    // c.getData();
    // c.displayArea(); we can do this way also
    Reactangle r;
    Triangle t;
    Square sq;
    Cone cn;
    Shape *sh[5];
    sh[0] = &c;
    sh[1] = &r;
    sh[2] = &t;
    sh[3] = &sq;
    sh[4] = &cn;
    do{
        cout<<"---------------CALCULATE AREA OF DIFFERENT SHAPE--------------"<<endl;
        cout<<"enter your choice "<<endl;
        cout<<"1. Area of circle"<<endl;
        cout<<"2. Area of reactangle"<<endl;
        cout<<"3. Area of triangle"<<endl;
        cout<<"4. Area of square"<<endl;
        cout<<"5. Area of cone"<<endl;
        cout<<"6. exit"<<endl;
        int choice;
        cout<<"enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
                sh[0]->getData();
                sh[0]->displayArea();
                break;
            case 2:
                sh[1]->getData();
                sh[1]->displayArea();
                break;
            case 3:
                sh[2]->getData();
                sh[2]->displayArea();
                break;
            case 4:
                sh[3]->getData();
                sh[3]->displayArea();
                break;
            case 5:
                sh[4]->getData();
                sh[4]->displayArea();
                break;
            case 6:
                exit(1);
                break;
            default:
                cout<<"INVALID INPUT!!!"<<endl;
        }
    }while(true);
}