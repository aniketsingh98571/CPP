#include <bits/stdc++.h>
using namespace std;
/*


Pattern 5
1 2 3 
4 5 6 
7 8 9


*/
int main()
{
   int n;
   cin>>n;
   int cnt=1;
   int i=1;
   while(i<=n){
      int j=1;
       while(j<=n){
           cout<<cnt++<<"\t";
           j++;
       }
       cout<<endl;
       i++;
   }
    return 0;
}