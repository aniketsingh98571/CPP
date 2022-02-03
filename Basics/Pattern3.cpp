#include <bits/stdc++.h>
using namespace std;
/*


Pattern 3
1       2       3       4
1       2       3       4
1       2       3       4
1       2       3       4

*/

int main()
{
   int n;
   cin>>n;
   int row=1;
   while(row<=n){
      int column=1;
       while(column<=n){
           cout<<column<<"\t";
           column++;
       }
       cout<<endl;
       row++;
   }
    return 0;
}