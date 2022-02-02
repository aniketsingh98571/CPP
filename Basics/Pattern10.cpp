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
   int i=1;
   while(i<=n){
      int j=1;
      cnt=i;
       while(j<=i){
           cout<<cnt++<<"\t";
           j++;
       }
       cout<<endl;
       i++;
   }
    return 0;
}