#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter first Number "<<endl;
    cin>>a;
    cout<<" Enter second number "<<endl;
    cin>>b;
    char operator1;
    cout<<" What you wish to perform + - / *";
    cin>>operator1;
    switch(operator1){
        case '+':
            cout<<"Addition is "<<a+b;
            break;
        case '-':
            cout<<" Subtraction is "<<a-b;
            break;
        case '*':
            cout<<"Multiplication is "<<a*b;
            break;
        case '/':
            cout<<" Division is "<<a/b;
            break;
    }

    return 0;
}