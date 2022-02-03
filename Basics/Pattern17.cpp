#include <bits/stdc++.h>
using namespace std;
/*
Pattern 17
A 
B C 
D E F

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