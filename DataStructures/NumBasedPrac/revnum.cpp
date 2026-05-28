#include<iostream>
using namespace std;

int main()
{
    int num;
    int reversed_num=0;
    cout<<"enter the number to reverse: ";
    cin>>num;
    int temp=0;
    while(num!=0){
        temp=num%10;
        reversed_num=reversed_num*10+temp;
        num/=10;
    }
    cout<<reversed_num;
    return 0;
}