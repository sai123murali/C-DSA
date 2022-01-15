#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int row=1,col;

while(row<=n){
    col=1;
    char ch='A'+ row + col -2;
    while(col<=n)
    {
        cout<<ch<<" ";
        col++;
        ch++;
    }
    cout<<endl;
    row++;
}
// A B C D 
// B C D E
// C D E F
// D E F G

}