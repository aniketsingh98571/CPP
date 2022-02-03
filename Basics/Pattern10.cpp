#include <bits/stdc++.h>
using namespace std;
/*


Pattern 10
1
2 3
3 4 5
4 5 6 7


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
           cout<<cnt++<<"\t";
           column++;
       }
       cout<<endl;
       row++;
   }
    return 0;
}