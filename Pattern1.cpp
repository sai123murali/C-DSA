#include<iostream>

using namespace std;

int main(){

int i=1,j;

int n;
cin>>n;

while(i<=n){
    j=1;
    while(j<n)
    {
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

}