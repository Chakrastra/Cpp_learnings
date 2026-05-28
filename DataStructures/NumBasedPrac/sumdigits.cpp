#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum =0;
    for(int i=0;n!=0;){
        sum +=n%10;
        n=n/10;
    }
    cout<<sum; 
    return 0;
}