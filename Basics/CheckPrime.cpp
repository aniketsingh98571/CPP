#include <bits/stdc++.h>
using namespace std;

int main()
{
    int prime;
    cout<<"Enter a Number"<<endl;
    cin>>prime;
    int i=2;
    int bl=0;//not prime
    while(i<prime){
        if(prime%i==0){
            bl=0;
            break;
        }
        else{
            bl=1;
          
        }
        cout<<i<<" ";
        i++;
    }
    if(bl==1)
        cout<<"Prime";
    else
        cout<<"Not prime";
    return 0;
}