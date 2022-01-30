#include<iostream>
using namespace std;


int AlternateArray(int AlternateArrayvar[],int size){

    int start=0;
    int end=1;

    while(end<=size){
        swap(AlternateArrayvar[start],AlternateArrayvar[end]);
        start=start+2;
        end=end+2;
    }

}

int printArray(int AlternateArrayvar[],int size){
    for(int i=0;i<=size;i++){
        cout<<AlternateArrayvar[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int AlternateArrayvareve[6]={1,2,5,6,7,8};
    int AlternateArrayvar[5]={1,2,5,6,7};

    AlternateArray(AlternateArrayvareve,5);
    AlternateArray(AlternateArrayvar,4);

    printArray(AlternateArrayvareve,5);
    printArray(AlternateArrayvar,4);
    
}