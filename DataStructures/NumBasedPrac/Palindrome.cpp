#include<iostream>
using namespace std;

int main(){
    int og_num, temp_og, temp, reversed_num =0 ;
    cout<<"Enter the number to check: ";
    cin>>og_num;
    temp_og=og_num;
    while (temp_og!=0){
        temp=temp_og%10;
        reversed_num=reversed_num*10+temp;
        temp_og/=10;
    }
    if (reversed_num==og_num)
    {
        cout<<"The number is a Palindrome.";
    }
    else{
        cout<<"The number is not a Palindrome";
    }
    return 0;
}