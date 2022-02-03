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
   int row=1;
   while(row<=n){
      int column=1;
       while(column<=row){
           cout<<row<<"\t";
           column++;
       }
       cout<<endl;
       row++;
   }
    return 0;
}