#include <bits/stdc++.h>
using namespace std;
/*
Pattern 22
   1
  121
 12321
1234321

*/

int main()
{
    int n;
    int row,column;
    cin>>n;
     row=1;
    while(row<=n){
    int space=n-row;
    while(space){
        cout<<" ";
        space--;
    }
    int j=1;
    while(j<=row){
        cout<<j;
        j=j+1;
    }
    int start=row-1;
    while(start){
        cout<<start;
        start--;
    }
    cout<<endl;
    row++;
   
}
    return 0;
}