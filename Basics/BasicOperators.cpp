#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"AND'ing a and b: ";
    cout<<(a&b)<<endl;
    
    cout<<"OR'ing a and b: ";
    cout<<(a|b)<<endl;
    
    cout<<"XOR'ing a and b: ";
    cout<<(a^b)<<endl;
    
    cout<<"Negation of a: ";
    cout<<(~a)<<endl;
    return 0;
}