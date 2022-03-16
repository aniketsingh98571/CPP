#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    //Approach 2
    int flag=0;
   char A[]="tattarra";
   int i,j;
   for(i=0;A[i]!='\0';i++){
       continue;
   }
   i--;
   
   for(j=0;i>0;j++,i--){
       if(A[i]!=A[j]){
           flag=1;
           break;
       }
   }
   if(flag==1)
    cout<<"Not a Palindrome";
   else
     cout<<"It is a Palindrome";
   
    return 0;
}