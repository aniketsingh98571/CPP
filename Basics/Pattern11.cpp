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
   int i=1;
   while(i<=n){
      int j=1;
      cnt=i;
       while(j<=i){
           cout<<cnt--<<"\t";
           j++;
       }
       cout<<endl;
       i++;
   }
    return 0;
}