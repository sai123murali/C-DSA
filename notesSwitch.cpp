#include<iostream>
using namespace std;

int main(){

    int amount;
    cout<<"Enter the amount:"<<endl;
    cin>>amount;

    int Rs500,Rs100,Rs50,Rs20,Rs10,Rs1;


    switch(1){
        case 1:
            Rs500=amount/500;
            amount=amount%500;
            cout<<"Rs500 notes: "<<Rs500<<endl;
        case 2:
            Rs100=amount/100;
            amount=amount%100;
            cout<<"Rs100 notes: "<<Rs100<<endl;
        case 3:
            Rs50=amount/50;
            amount=amount%50;
            cout<<"Rs50 notes: "<<Rs50<<endl;
        case 4:
            Rs20=amount/20;
            amount=amount%20;
            cout<<"Rs20 notes: "<<Rs20<<endl;
        case 5:
            Rs10=amount/10;
            amount=amount%10;
            cout<<"Rs10 notes: "<<Rs10<<endl;
        case 6:
            Rs1=amount/1;
            amount=amount%1;
            cout<<"Rs1 coins: "<<Rs1<<endl;


    }


}