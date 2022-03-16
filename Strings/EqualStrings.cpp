*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    
   char A[]="tekina";
   char B[]="Aniket";
   int i,j;
   int flag=0;
   for(i=0,j=0;A[i]!='\0'&&B[j]!='\0';i++,j++){
       if(A[i]!=B[j]){
           flag=1;
           break;
       }
   }
   if(flag==1){
       cout<<"Strings are not equal";
   }
   else{
       cout<<"Strings are equal";
   }
    return 0;
}