#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum +=i;
        }
    }
    if(sum==n){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not a Perfect Number";
    }
    return 0;
}