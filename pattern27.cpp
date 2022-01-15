#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int row=1,col,k;
while(row<=n){
    col=1;
    k=col;
    while(col<=n-row+1){
        cout<<col;
        col++;
    }

        int start=2*row-2;
        while(start)
        {
            cout<<'*';
            start--;
        }

        col=--col;
        while(col>=1){
            cout<<col;
            col--;
        }
               
    cout<<endl;
    row++;
}
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
}