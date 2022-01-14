#include<iostream>
using namespace std;

int main()
{

int n,i=2;
cout<< "Enter the number:" <<endl;
cin>> n;

// for(int i=2;i<=n;i++)
// {
//     if(n%i==0)
//     {
//         cout<<"Not a Prime";
//     }
// }

while(i<n){

    if(n%i==0){

        cout<<"Prime";
        break;
    }
    i=i+1;
}


}