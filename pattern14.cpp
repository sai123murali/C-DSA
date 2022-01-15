#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int row=1,col;
char ch;
while(row<=n)
{
    col=1;
    while(col<=row){
        ch='A'+row-1;
        cout<<ch<<" ";
        col++;
    }
    cout<<endl;
    row++;
}
// A 
// B B
// C C C
// D D D D

}