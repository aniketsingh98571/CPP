#include <bits/stdc++.h>

using namespace std;

int main()
{
//UPPERCASE to lowercase
  char name[]="ANIKET";
  for(int i=0;name[i]!='\0';i++){
    name[i]=name[i]+32;
  }
  cout<<name<<endl;
  
  //lowercase to UPPERCASE
  char name2[]="aniket";
  for(int i=0;name2[i]!='\0';i++){
      name2[i]=name2[i]-32;
  }
  cout<<name2;
    return 0;
}