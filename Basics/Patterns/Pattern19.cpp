#include <bits/stdc++.h>
using namespace std;
/*
Pattern 19
      *
    * *
  * * *
* * * *

*/

int main()
{
    int n;
    int row,column;
    cin>>n;
    row=0;
     
     int cnt=n;
     int cnti;
    while(row<n){
       
        column=0;
        cnti=0;
        while(cnti<cnt){
            cout<<" ";
            cnti++;
        }
          while(column<=row){
              cout<<"*";
              column++;
          }
        cout<<endl;
        row++;
        cnt--;
        
        
    }

    return 0;
}