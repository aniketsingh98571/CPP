#include <bits/stdc++.h>
using namespace std;
/*
Pattern 12
A A A 
B B B 
C C C

*/

int main()
{
    int n;
    int row,column;
    cin>>n;
    row=0;
    char ch='A';
    while(row<n){
        column=0;
        while(column<n){
            cout<<ch<<" ";
            column++;
        }
        cout<<endl;
        ch++;
        row++;
    }

    return 0;
}