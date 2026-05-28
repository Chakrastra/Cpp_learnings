#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count=0;
    for(int i = 1;i<=n/2;i++){
        if(n%i==0){
            count++;
        }
    }
    if (count==1)
    {
       cout<<"The Number is Prime.";
    }
    else{
        cout<<"The Number is Not Prime.";
    }

    return 0;
}