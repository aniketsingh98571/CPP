#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Converting Binary to Decimal
    //Approach 2
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1)
            ans=ans+pow(2,i);
        
        i++;
        n=n/10;
    }
    cout<<ans;

    return 0;
}