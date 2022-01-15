#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int row=1,col;
char ch;

while(row<=n){
    col=1;
    ch= 'A'+n-row;
    while(col<=row){
        cout<<ch<<" ";
        col++;
        ch++;
    }
    cout<<endl;
    row++;
}
// D 
// C D
// B C D
// A B C D


}