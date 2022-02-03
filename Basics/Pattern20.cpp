#include <bits/stdc++.h>
using namespace std;
/*
Pattern 20
 * * * *
 * * *
 * *
 *

*/

int main()
{
    int n;
    int row,column;
    cin>>n;
    row=0;
     while(row<n){
      column=n-row;
       while(column>0){
              cout<<"*";
              column--;
          }
        cout<<endl;
        row++;
       }

    return 0;
}