#include<iostream>
using namespace std;

int main(){

int n;

cout<< "Enter the Number:";
cin>> n;

int sum=0;

for(int i=2;i<=n;i++){
     
    if(i%2==0){
        sum=sum+i;
    }
    
}
cout<< "Sum of even Nos is:" << sum <<endl;

}