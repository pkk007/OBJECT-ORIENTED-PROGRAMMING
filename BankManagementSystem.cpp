#include<iostream>
using namespace std;

class Bank{
    private:
        char name[40], accountType[40];
        int balance,accountNumber;
    public:
        Bank(){
            cout<<"-------------ENTER YOUR DETAIL TO OPEN A NEW ACCOUNT-------------"<<endl;
            cout<<"Enter account name : ";
            cin.getline(name,40);
            cout<<"Enter account type : ";
            cin.getline(accountType,40);
            // cout<<"Enter account number : ";
            // cin>>accountNumber;
            accountNumber = rand();
            cout<<"Enter openning balance : ";
            cin>>balance;
        }
        void deposit(int amount){
            balance+=amount;
            cout<<"Your balance after deposit is : "<<balance<<endl;
            system("pause");
        }
        void withdraw(int amount){
            if(amount>balance)
                cout<<"Sorry your balance is less than withdrawal amount!!!"<<endl;
            else{
                balance-=amount;
                bool showBalance;
                cout<<"Wants to show available balance(type 1 for YES and 0 for NO) : ";
                cin>>showBalance;
                if(showBalance)
                    cout<<"Available balance after withdrawal is : "<<balance<<endl;
            }
            system("pause");
        }
        void display(){
            cout<<"-------------ACCOUNT DETAILS-------------"<<endl;
            cout<<"Account name : "<<name<<endl;
            cout<<"Account type : "<<accountType<<endl;
            cout<<"Account number : "<<accountNumber<<endl;
            cout<<"Current balance : "<<balance<<endl;
            system("pause");
        }
};
int main(){
    Bank objBank;
    int amount, choice;
    do{
        system("cls");
        cout<<"-------------MAIN MENU----------------"<<endl;
        cout<<"1: Deposit amount"<<endl;
        cout<<"2: Withdraw amount"<<endl;
        cout<<"3: Display account details"<<endl;
        cout<<"4: exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1 :
                cout<<"Enter deposit amount : ";
                cin>>amount;
                objBank.deposit(amount);
                break;
            case 2:
                cout<<"Enter withdrawal amount : ";
                cin>>amount;
                objBank.withdraw(amount);
                break;
            case 3:
                objBank.display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Please enter correct choice"<<endl;
                break;
        }
    }while(true);
}