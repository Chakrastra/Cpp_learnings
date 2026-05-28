/*#include<iostream>
using namespace std;

int main()
{
    int n, i,j, cnt, primecnt=0;

    cout<<"Enter the number: ";
    cin>>n;
    for(i=2;i<n;i++){
        cnt=0;
        for(j=1; j<=i/2;j++){
            if(i%j==0){
            cnt++;
        }
    }
        if(cnt==1){
            primecnt++;
        }
        
    }
    cout<<primecnt;
    return 0;
}
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{   int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count=0;
    vector<bool> arr(n,1);
    arr[0] = arr[1] = 0 ;

    for(int i = 2;i<n;i++){
        if(arr[i]){
            count++;
            for(int j=i*2;j<n;j=j+i){
                arr[j]=0;
            }
        }
    }
    
    cout<<count;
    return 0;
}
