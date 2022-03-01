#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Converting Decimal to Binary
    //Approach 1
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        //calculating the remainder of a decimal number which will be either 0 or 1
        int bit=n%2;
        
        //storing the digit in reverse form from above operation.
        ans=bit*pow(10,i)+ans;
        
        //incrementing power variable untill all digits has been stored
        i++;
        
        //performing division operation to reach 0
        n=n/2;
    }
    cout<<ans;


    //Converting Decimal to Binary
    //Approach 2
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;

    return 0;
}