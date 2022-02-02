#include <bits/stdc++.h>
using namespace std;
/*


Pattern 7
*
**
***
****


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
           cout<<"*"<<"\t";
           j++;
       }
       cout<<endl;
       i++;
   }
    return 0;
}