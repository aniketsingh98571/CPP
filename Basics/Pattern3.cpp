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
   int i=1;
   while(i<=n){
      int j=1;
       while(j<=n){
           cout<<j<<"\t";
           j++;
       }
       cout<<endl;
       i++;
   }
    return 0;
}