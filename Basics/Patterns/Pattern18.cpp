#include <bits/stdc++.h>
using namespace std;
/*
Pattern 18
D 
C D 
B C D
A B C D

*/

int main()
{
    int n;
    int row,column;
    cin>>n;
    row=0;
     char ch='D';
    while(row<n){
        ch='D'-row;
        column=0;
        while(column<=row){
            cout<<ch<<" ";
            column++;
              ch++;
        
        }
        cout<<endl;
      
        row++;
    }

    return 0;
}