#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int i=1,j=1;

while(i<=n)                             
{
    j=1;
    while(j<n)
    {
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

}