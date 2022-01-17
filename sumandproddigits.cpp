#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
     int sum=0;
        double prod=1;
        while(n!=0){
            
            int rem=n%10;
            prod=rem*prod;
            sum=sum+rem;
                n=n/10;
           
            
        }
    
        int result=prod-sum;
        cout<< result;

}