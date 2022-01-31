#include<iostream>
using namespace std;

Swap(int AlterArray[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(AlterArray[i],AlterArray[i+1]);
        }
    }
}
printArray(int AlterArray[],int n){
    for(int i=0;i<n;i++){
        cout<<AlterArray[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int AlterEven[6]={1,2,3,4,5,6};
    int AlterOdd[5]={1,2,3,4,5};

    Swap(AlterEven,6);
    Swap(AlterOdd,5);

    printArray(AlterEven,6);
    printArray(AlterOdd,5);
}