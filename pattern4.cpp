#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int count=1;
    int i=1,j;
    while(i<=n)
    {
        j=1;
        while(j<=n){
            cout<<count<<"\t";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }

// 1       2       3       4       5       6
// 7       8       9       10      11      12
// 13      14      15      16      17      18
// 19      20      21      22      23      24
// 25      26      27      28      29      30
// 31      32      33      34      35      36
}