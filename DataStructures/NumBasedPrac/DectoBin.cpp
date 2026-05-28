#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;
    int bin=0, rem, multiplier=1;
    while(n!=0){
        rem=n%2;
        bin += multiplier*rem;
        multiplier *=10;
        n=n/2;
    }
    cout<<"Binary: "<<bin;
    return 0;
}