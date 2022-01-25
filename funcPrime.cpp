#include<iostream>
using namespace std;


bool isPrime(int n){
    
    for(int i=2;i<n;i++){
        if(n==1){
            return 1;
        }
        else if((n%i==0){
            return 0;
        }else
        return 1;
    }
    return 1;
}
int main(){

    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Is Prime";
    }else{
        cout<<"Not Prime";
    }

}