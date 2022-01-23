#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;


int main(){

    int n,answer=0;
    cin>>n;
    int i=0;
    while(n!=0){

        int bit= n & 1;
        cout<<bit<<endl;

        answer= (bit * pow(10,i)) + answer;

        n=n>>1;
        i++;
    

    }
    cout<<answer;

}