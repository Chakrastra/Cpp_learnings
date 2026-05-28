#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter the number: ";
    cin>>n;
    /*if(n<=0){
        cout<<"false";
        return 0;

    }
    while(n!=1){
        if(n%2!=0){
            cout<<"False";
            return 0;
        }
        n=n/2;
    }
    cout<<"True";*/
    if(n>0 && (n&(n-1))==0){
        cout<<"True";
    } else{
        cout<<"False";
    }
    return 0;
}