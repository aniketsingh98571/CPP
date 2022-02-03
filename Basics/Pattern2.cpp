#include <bits/stdc++.h>
using namespace std;
/*
Pattern 2 
 1 1 1 1
 2 2 2 2
 3 3 3 3
 4 4 4 4
*/
int main()
{
   int n;
   cin>>n;
   int row=1;
   while(row<=n){
      int column=1;
       while(column<=n){
           cout<<row<<"\t";
           column++;
       }
       cout<<endl;
       row++;
   }