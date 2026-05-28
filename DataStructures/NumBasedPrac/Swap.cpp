/*#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a and b simultaniously: ";
    cin>>a>>b;

    int temp=0;
    temp= a;
    a=b;
    b=temp;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;


    return 0;
} */
#include<iostream>
using namespace std;

int main()
{
    
    int a,b;
    cout<<"Enter a and b simultaniously: ";
    cin>>a>>b;

    a=a+b;
    b=a-b;
    a=a-b;

     cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;

    return 0;
}