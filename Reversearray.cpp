#include<iostream>
using namespace std;

int ArrayReverse(int arr[],int n){
    int start=0;
    int end=n-1;

        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    
    int arrEven[6]={2,4,5,6,7,8};
    int arrOdd[5]={1,2,3,4,5};

    ArrayReverse(arrEven,6);
    ArrayReverse(arrOdd,5);

    printArray(arrEven,6);
    printArray(arrOdd,5);

    return 0;
}