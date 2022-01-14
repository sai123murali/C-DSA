#include<iostream>
using namespace std;

int main(){

double celsius,farehnhiet;
cout<< "Enter the farehnhiet degress:"<< endl;
cin>> farehnhiet;

//9c=5F-32   -> c=5/9(F-32)

celsius=((5)*(farehnhiet-32)/9);

cout<< "The temp in celsius is:"<< celsius <<endl;


}