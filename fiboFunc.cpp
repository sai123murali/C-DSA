#include<iostream>
using namespace std;

int fibonacci(int n){
    int a=0,b=1,c;
    
    //cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        //cout<<c<<" ";
    }
    return c;
}

int main(){

    int n;
    cin>>n; 

    int ans=fibonacci(n);
    cout<<ans;
}