#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, count=0, newnum=0;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=n;i!=0;++count){
        i /=10;
    }
    int digit=0;
    int ogn=n;

    if (n==0){
        return 0;
    }
    for(int i=0;i < count ; i++){
        digit= ogn%10;
        cout<<digit<<endl;
        newnum += round((pow(digit,count)));
        cout << pow(digit,count) << endl;
        cout << "newnum = " << newnum << endl;
        ogn /=10;
    }
    cout<< count<<endl;
    cout<< newnum<<endl;
    if(newnum == n){
        cout<<"The number is armstrong.";
    }
    else {
        cout<<"Not armstrong.";
    }


    return 0;
}