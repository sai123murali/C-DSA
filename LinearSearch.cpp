#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int key){
   
    for(int i=0;i<size;i++){

        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){

int size;
cin>>size;

int arr[1000];

for(int i=0;i<size;i++){
    cin>> arr[i];
}
cout<<endl;

int key;
cout<<"Enter the Key:"<<endl;
cin>>key;


bool found=LinearSearch(arr,size,key);
if(found){
    cout<<"The Key is found in the array";
}else
    cout<<"The Key is absent";

}