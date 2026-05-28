#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    int count=0;
    for(int i=n;i!=0;++count){
        i /=10;
    }
    cout<<count;

    return 0;
}