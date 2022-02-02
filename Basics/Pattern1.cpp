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
   int i=1;
   while(i<=n){
      int j=1;
       while(j<=n){
           cout<<"*\t";
           j++;
       }
       cout<<endl;
       i++;
   }
    return 0;
}