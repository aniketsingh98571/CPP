#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Toggling Upper and lower case
char name[]="AnIKeT";
for(int i=0;name[i]!='\0';i++){
    if(name[i]>90)
        name[i]=name[i]-32;
    else
        name[i]=name[i]+32;
   
}
cout<<name;
}