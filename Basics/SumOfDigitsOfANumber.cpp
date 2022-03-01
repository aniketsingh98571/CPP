#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Converting Decimal to Binary
    //Approach 2
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10;
        ans=ans+digit;
        n=n/10;
        
    }
    cout<<ans;

    return 0;
}