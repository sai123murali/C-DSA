#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int row=1,col,count=0;

while(row<=n){
    col=1;
    while(col<=n){
        char ch='A'+count;
        cout<<ch<<" ";
        col++;
        count++;
    }
    cout<<endl;
    row++;
}
// A B C D 
// E F G H
// I J K L
// M N O P

}