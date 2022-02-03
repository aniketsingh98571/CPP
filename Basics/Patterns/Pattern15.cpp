#include <bits/stdc++.h>
using namespace std;
/*
Pattern 15
A B C 
B C D 
C D E

*/

int main()
{
    int n;
    int row,column;
    cin>>n;
    row=0;
     char ch='A';
    while(row<n){
        ch='A'+row;
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