#include <bits/stdc++.h>

using namespace std;

int main()
{
   //Finding length of the string
   char name[10];
   cin>>name;
   int cnt=0,i;
   for(i=0;name[i]!='\0';i++){
       cnt++;
   }
   cout<<cnt;
   
    return 0;
}