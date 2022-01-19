#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int x;
    cin>>x;
      int answer=0;
        while(x!=0){
            int rem=x%10;
            if((answer>INT_MAX/10) ||(answer<INT_MIN/10) )
            {
                return 0;          
            }
            answer=answer*10+rem;  
            x=x/10;
            
        }
        cout<< answer;

}
