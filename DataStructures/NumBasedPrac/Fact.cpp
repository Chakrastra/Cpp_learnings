#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int fact=1;
    if(n==0){
        cout<<n<<"! = "<<fact;
    }

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<n<<"! = "<<fact;
    return 0;
}