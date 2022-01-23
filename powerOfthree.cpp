#include<iostream>
#include<limits.h>
using namespace std;

int main(){

int n;
cin>>n;
int ans=1;
bool flag=0;

for (int i=0;i<=30;i++){

if(ans==n){
    flag=1;
    break;
}
if(ans<INT_MAX/3)
    ans=ans*3;
}

if(flag==1)
    cout<<"true";
else
    cout<<"false";
}