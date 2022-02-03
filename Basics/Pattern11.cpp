#include <bits/stdc++.h>
using namespace std;
/*


Pattern 11
1
2 1 
3 2 1 
4 3 2 1


*/
int main()
{
   int n;
   cin>>n;
   int cnt=1;
   int row=1;
   while(row<=n){
      int column=1;
      cnt=row;
       while(column<=row){
           cout<<cnt--<<"\t";
           column++;
       }
       cout<<endl;
       row++;
   }
    return 0;
}