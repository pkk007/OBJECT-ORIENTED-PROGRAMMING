#include<iostream>
using namespace std;
class Publication{
    protected:
        float price;
    public:
        void setData(){
            cout<<"enter price : ";
            cin>>price;
        }
        void getData(){
            cout<<"price : "<<price<<endl;
        }
};
class Book : public Publication{
    private:
        int pageCount;
    public:
        void setData(){
            cout<<"enter number of pages : ";
            cin>>pageCount;
            Publication::setData();
        }
        void getData(){
            cout<<"page count : "<<pageCount<<endl;
            Publication::getData();
        }
};
class Tape : public Publication{
    private:
        float time;
    public:
        void setData(){
            cout<<"enter time in minutes : ";
            cin>>time;
            Publication::setData();
        }
        void getData(){
            cout<<"time in minutes : "<<time<<endl;
            Publication::getData();
        }
};

int main(){
    Book b;
    Tape t;

    int choice;
    do{
        cout<<"1. Book"<<endl;
        cout<<"2. Tape"<<endl;
        cout<<"3. exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                b.setData();
                b.getData();
                break;
            case 2:
                t.setData();
                t.getData();
                break;
            case 3:
                exit(1);
                break;
            default:
                cout<<"INVALID INPUT"<<endl;
        }
    }while(true);

    return 0;
}