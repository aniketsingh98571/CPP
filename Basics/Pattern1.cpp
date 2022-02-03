#include <bits/stdc++.h>
using namespace std;
/*
Pattern 1 
 * * * *
 * * * *
 * * * *
 * * * *
*/
int main()
{
   int n;
   cin>>n;
   int row=1;
   while(row<=n){
      int column=1;
       while(column<=n){
           cout<<"*\t";
           column++;
       }
       cout<<endl;
       row++;
   }
    return 0;
}