#include<iostream>
using namespace std;

int setBits(int a,int b){
    int acount=0,bcount=0;
    while(a!=0){
        if(a&1==1){
            acount++;
        }
        a=a>>1;
    }
    while(b!=0){
        if(b&1==1){
            bcount++;
        }
        b=b>>1;
    }

    return (acount+bcount);
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans=setBits(a,b);
    cout<<ans;
}