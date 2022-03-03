#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
 
    while(n!=0){
     int digit=n%10;
     
     //if ans, exceed INT_MAX range and is less than INT_MIN range then
     if(ans<INT_MIN/10||ans>INT_MAX/10){
       cout<<"Out of range";
       break;
     }
     
     ans=ans*10+digit;

     n=n/10;
    }
    cout<<ans;

    return 0;
}