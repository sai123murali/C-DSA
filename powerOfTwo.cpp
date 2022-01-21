#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n,flag=0;
    cin>>n;
     for(int i=0;i<=30;i++){
            
            int ans=pow(2,i);
            
            if(ans==n){
                flag=1;
            }
        }
        if(flag==1)
            cout<<"true";
        else
            cout<<"false";
        
        
}