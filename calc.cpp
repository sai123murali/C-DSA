#include<iostream>
using namespace std;

int main(){

char ch;
int a,b,result=0;

cin>>ch;
cout<<endl;
cin>>a>>b;


cout<<endl;

switch(ch) {
    case '+':
        result=a+b;
        cout<<"The Result is:"<< result<<endl;
        break;
    case '-':
        result=a-b;
        cout<<result<<endl;
        break;
    case '*':
        result=a*b;
        cout<<result<<endl;
        break;
    case '/':
        result=a/b;
        cout<<result<<endl;
        break;
    default :
        cout<<"Hurrah!";
}


}