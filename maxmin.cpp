#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[], int size){

int maxi=INT_MIN;

for(int i=0;i<size;i++){
    //1st way
    maxi=max(arr[i],maxi);
    //2nd way
    // if(arr[i]>max){
    //     max=arr[i];
    // }
}
return maxi;
}

int getMin(int arr[], int size){

int mini=INT_MAX;

for(int i=0;i<size;i++){
    //1st way
    mini=min(arr[i],mini);
    //2nd way
    // if(arr[i]<min){
    //     min=arr[i];
    // }
}
return mini;
}

int main(){

int size;
cin>>size;

int arr[100];

for(int i=0;i<size;i++){
    cin>>arr[i];
}

cout<<"Maximum number is:"<<getMax(arr,size)<<endl;
cout<<"Minimum number is:"<<getMin(arr,size)<<endl;


}