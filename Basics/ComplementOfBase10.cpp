#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int mask=0;
    cin>>n;
    int m=n;
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(~n)&mask;
    cout<<ans;
    return 0;
}