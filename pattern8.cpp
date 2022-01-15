#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    // while(row<=n)
    // {
    //     int col=1,value=row;
    //     while(col<=row){

    //         cout<<value<<" ";
    //         col++;
    //         value++;

    //     }
    //     cout<<endl;
    //     row++;
    // }
// 1 
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
 while(row<=n)
    {
        int col=1;
        while(col<=row){

            cout<<col+(row-1)<<" ";
            col++;

        }
        cout<<endl;
        row++;
    }
}