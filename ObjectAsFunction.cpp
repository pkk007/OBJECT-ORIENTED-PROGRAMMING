//PASS OBJECT AS FUNCTION

#include<iostream>
using namespace std;

class Distance{
    private:
        int km,hr;
    public:
        Distance() : km(0),hr(0){

        }
        void set(){
            cout<<"Enter distance in kilometer : ";
            cin>>km;
            cout<<"Enter time in hour : ";
            cin>>hr;
        }
        void display(){
            cout<<"Travelled distance "<<km<<" in "<<hr<<" hours"<<endl;
        }
        void TotalDistance(Distance x){
            Distance y;
            cout<<km<<" "<<hr<<endl;
            cout<<x.km<<" "<<x.hr<<endl;
            cout<<y.km<<" "<<y.hr<<endl;
            y.km = km + x.km;
            y.hr = hr + x.hr;
            cout<<"Total distance travelled is "<<y.km<<" in time "<<y.hr<<" hours"<<endl;
        }
};
int main(){
    Distance x , y;
    cout<<"1ST INPUT : "<<endl;
    x.set();
    x.display();
    cout<<"2ND INPUT : "<<endl;
    y.set();
    y.display();
    cout<<"TOTAL DISTANCE : "<<endl;
    y.TotalDistance(x);
}