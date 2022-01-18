#include<iostream>
using namespace std;

int main(){
    
    int x;
    cin>>x;
    int rev=0,answer=0;
        while(x!=0){
            int rem=x%10;
            answer=answer*10+rem;
             x=x/10;      
           

        }
        cout<<answer;

}
