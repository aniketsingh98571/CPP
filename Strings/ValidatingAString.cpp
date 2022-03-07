#include <bits/stdc++.h>

using namespace std;

int main()
{
  /*
  Validating a string i.e a string should contain only letters and numbers not special characters
  
  */
char name[]="aniket352";
int flag=0;
for(int i=0;name[i]!='\0';i++){
   if(!(name[i]>=65&&name[i]<=90)&&!(name[i]>=97&&name[i]<=122)&&!(name[i]>=48&&name[i]<=57)){
       flag=1;
       break;
   }
    
    
}
if(flag==1){
    cout<<"Not a valid string";
}
else{
    cout<<"Valid String";
}

}