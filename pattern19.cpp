#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int row=1,col;

while(row<=n){

    int space = n-row;
    while(space){
        cout<<" ";
        space--;
    }
    col=1;
    while(col<=row){
        cout<<'*';
        col++;
    }
    cout<<endl;
    row++;

}
//    *
//   **
//  ***
// ****


}