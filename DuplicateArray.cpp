#include<iostream>
using namespace std;

int duplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;
        //cout<<ans<<endl;
    }
    cout<<ans;
}

int main(){
    int duplicateArray[7]={6,3,1,5,4,3,2};

    duplicate(duplicateArray,7);
}