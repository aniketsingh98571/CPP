#include <bits/stdc++.h>

using namespace std;

int main()
{
   //Taking input of a string/char array
   char name[10];
   cin>>name;
   
   //printing the char array/string--Way 1
   cout<<name<<endl;
   
   //printing the char array/string--Way 2
   int i;
   for(i=0;name[i]!='\0';i++){
       cout<<name[i];
   }
    return 0;
}