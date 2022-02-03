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
   int row=1;
   while(row<=n){
      int column=1;
       while(column<=n){
           cout<<n-column+1<<"\t";
           column++;
       }
       cout<<endl;
       row++;
   }
    return 0;
}