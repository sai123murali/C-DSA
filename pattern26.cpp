#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int row=1,col;

while(row<=n){
    int space=n-row;
    while(space){      //1st triangle
        cout<<" ";
        space--;
    }
    col=1;
   
    while(col<=row){    //2nd triangle
        cout<<col;
        col++;
    }
    int start=row-1;
    
    while(start){       //3rd triangle
        cout<<start;
        start--;
    }

    cout<<endl;
    row++;
}
//    1
//   121
//  12321
// 1234321

}