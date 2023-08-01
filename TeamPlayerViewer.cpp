#include<iostream>
#include<string.h>
using namespace std;

class Player{
    private:
        int age;
        string name, team;
    public:
        Player(){
            //constructor function
            cout<<"Enter player name : ";
            cin>>name;
            cout<<"Enter player team : ";
            cin>>team;
            cout<<"Enter player age : ";
            cin>>age;
        }
        void input(){
            //setter function
            cout<<"Enter player name : ";
            cin>>name;
            cout<<"Enter team name : ";
            cin>>team;
            cout<<"Enter player age : ";
            cin>>age;
        }
        void display(){
            //getter function
            cout<<"Player name : "<<name<<endl;
            cout<<"Team name : "<<team<<endl;
            cout<<"Player age : "<<age<<endl;
        }
        void change(string n, string t, int a){
            name = n;
            team = t;
            age = a;
        }
};
main(){
    int choice;
    Player p;
    do{
        system("cls");
        cout<<"-------------MAIN MENU--------------"<<endl;
        cout<<"1: Input player data : "<<endl;
        cout<<"2: Display player data : "<<endl;
        cout<<"3: Change player data : "<<endl;
        cout<<"4: exit "<<endl;
        cout<<"Enter any choice : ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            p.input();
            break;
        case 2:
            p.display();
            break;
        case 3:
            p.change("vicky","india",21);
            break;
        case 4:
            exit(1);
            break;
        default:
            cout<<"PLEASE ENTER VALID NUMBER!!!";
            break;
        }
    }while(true);
}