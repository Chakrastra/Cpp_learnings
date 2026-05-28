#include<iostream>
using namespace std;

int main()
{
    int bin;
    cout<<"Enter the Binary number: ";
    cin>>bin;
    int rem,multiplier=1;
    int dec=0;
    while(bin!=0){
        rem=bin%10;
        dec+= rem*multiplier;
        multiplier*=2;
        bin/=10;
    }
    cout<<"Decimal: "<<dec;
    return 0;
}