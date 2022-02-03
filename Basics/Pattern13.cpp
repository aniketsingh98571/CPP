#include <bits/stdc++.h>
using namespace std;
/*
Pattern 13
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
   
    while(row<n){
        char ch='A';
        column=0;
        while(column<n){
            cout<<ch<<" ";
            column++;
            ch++;
        }
        cout<<endl;
        
        row++;
    }

    return 0;
}