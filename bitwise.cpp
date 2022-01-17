#include<iostream>
using namespace std;

int main(){

int a=20;
int b=30;

cout<< "a&b" <<" " << (a&b) << endl;
cout<< "a|b" << " " << (a|b) << endl;
cout<< "~a" <<" " << (~a) << endl;
cout<< "a^b" <<" " << (a^b) << endl;


cout<< (19<<1) <<endl;
cout<< (19<<2) <<endl;
cout<< (19>>1) <<endl;
cout<< (19>>2) <<endl;

int i=10;

cout<< i++ <<endl;
//10 , i=11
cout<< ++i <<endl;
//12 , i=12
cout<< i-- <<endl;
//12 , i=11
cout<< --i <<endl;
//10 , i=10

}