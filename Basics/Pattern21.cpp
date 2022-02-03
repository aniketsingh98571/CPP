#include <bits/stdc++.h>
using namespace std;
/*
Pattern 21
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
    int space=0;
    row=0;
     while(row<n){
         space=0;
         while(space<row){
             cout<<" ";
             space++;
         }
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