#include <bits/stdc++.h>
using namespace std;
/*


Pattern 4
4       3       2       1
4       3       2       1
4       3       2       1
4       3       2       1


*/
int main()
{
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
      int j=1;
       while(j<=n){
           cout<<n-j+1<<"\t";
           j++;
       }
       cout<<endl;
       i++;
   }
    return 0;
}