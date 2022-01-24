#include<iostream>
using namespace std;


int power(int a, int b){

cout<<endl;

    int ans=1;

    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
int a,b;
cin>>a>>b;
int answer=power(a,b);
cout<<" The power of "<<a <<" "<<b<<" "<<"is:"<<answer;

return 0;

}