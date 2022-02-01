#include<iostream>
using namespace std;

int unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
}

int main(){
    int array[6]={8,5,6,5,6};

    unique(array,6);
}