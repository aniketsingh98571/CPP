#include <bits/stdc++.h>
using namespace std;
/*


Pattern 9
1
2 3
4 5 6
7 8 9 10


*/
int main()
{
   int n;
   cin>>n;
   int cnt=1;
   int row=1;
   while(row<=n){
      int column=1;
       while(column<=row){
           cout<<cnt++<<"\t";
           column++;
       }
       cout<<endl;
       row++;
   }
    return 0;
}