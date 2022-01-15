#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int row=1,col=1;
char ch;
while(row<=n)
{
    col=1;
    while(col<=n){
        ch='A'+(col-1);
        cout<<ch<<" ";
        col++;

    }
    cout<<endl;
    row++;
}
// A B C 
// A B C
// A B C

}