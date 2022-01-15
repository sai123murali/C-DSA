#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int row=1,col;
while(row<=n){
    col=1;
    while(col<=n)
    {
        char ch='A'-1+(row+col-1);
        cout<<ch<<" ";
        col++;
    }
    cout<<endl;
    row++;
}
// A B C D 
// B C D E
// C D E F
// D E F G

}