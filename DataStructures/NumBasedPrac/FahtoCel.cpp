#include<iostream>
using namespace std;

int main()
{
    float n;
    cout<<"Enter temprature in fahrenheit: ";
    cin>>n;

    float cel=(n-32)*5/9;

    cout<<cel;

    return 0;
}