#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int row=1,col=1;
char ch;
while(row<=n){
    int col=1;
    while(col<=n){
        ch='A'+(row-1);
        cout<<ch<<" ";
        col++;
    }
    cout<<endl;
    row++;
}
// A A A A A 
// B B B B B
// C C C C C
// D D D D D
// E E E E E
}