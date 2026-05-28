#include<iostream>
using namespace std;

int main()
{
    int n, fib1=0,fib2=1, fib3;
    cout<<"Enter the number till the series you want: ";
    cin>>n;
    if(n<=0){
        cout<<"invalid number";
        return 0;
    }
    cout<<fib1<<","<<fib2;
    for (int i = 2; i <n; i++)
    {
        fib3=fib1+fib2;
        cout<<","<<fib3;
        fib1=fib2;
        fib2=fib3;
    }    
    return 0;
}