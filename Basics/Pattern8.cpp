#include <bits/stdc++.h>
using namespace std;
/*


Pattern 8
1
2 2
3 3 3
4 4 4 4


*/
int main()
{
   int n;
   cin>>n;
   int cnt=1;
   int i=1;
   while(i<=n){
      int j=1;
       while(j<=i){
           cout<<i<<"\t";
           j++;
       }
       cout<<endl;
       i++;
   }
    return 0;
}